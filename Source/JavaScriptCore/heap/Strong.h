/*
 * Copyright (C) 2011 Apple Inc. All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 *
 * THIS SOFTWARE IS PROVIDED BY APPLE INC. AND ITS CONTRIBUTORS ``AS IS''
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO,
 * THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
 * PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL APPLE INC. OR ITS CONTRIBUTORS
 * BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 * SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 * CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF
 * THE POSSIBILITY OF SUCH DAMAGE.
 */

#pragma once

#include <wtf/Assertions.h>
#include "JSCHandle.h"
#include "HandleSet.h"

namespace JSC {

class VM;

// A strongly referenced handle that prevents the object it points to from being garbage collected.
template <typename T> class Strong : public JSCHandle<T> {
    using JSCHandle<T>::slot;
    using JSCHandle<T>::setSlot;
    template <typename U> friend class Strong;

public:
    typedef typename JSCHandle<T>::ExternalType ExternalType;
    
    Strong()
        : JSCHandle<T>()
    {
    }
    
    Strong(VM&, ExternalType = ExternalType());

    Strong(VM&, JSCHandle<T>);
    
    Strong(const Strong& other)
        : JSCHandle<T>()
    {
        if (!other.slot())
            return;
        setSlot(HandleSet::heapFor(other.slot())->allocate());
        set(other.get());
    }

    template <typename U> Strong(const Strong<U>& other)
        : JSCHandle<T>()
    {
        if (!other.slot())
            return;
        setSlot(HandleSet::heapFor(other.slot())->allocate());
        set(other.get());
    }
    
    enum HashTableDeletedValueTag { HashTableDeletedValue };
    bool isHashTableDeletedValue() const { return slot() == hashTableDeletedValue(); }
    Strong(HashTableDeletedValueTag)
        : JSCHandle<T>(hashTableDeletedValue())
    {
    }

    ~Strong()
    {
        clear();
    }

    bool operator!() const { return !slot() || !*slot(); }

    explicit operator bool() const { return !!*this; }

    void swap(Strong& other)
    {
        JSCHandle<T>::swap(other);
    }

    ExternalType get() const { return HandleTypes<T>::getFromSlot(this->slot()); }

    void set(VM&, ExternalType);

    template <typename U> Strong& operator=(const Strong<U>& other)
    {
        if (!other.slot()) {
            clear();
            return *this;
        }

        set(*HandleSet::heapFor(other.slot())->vm(), other.get());
        return *this;
    }
    
    Strong& operator=(const Strong& other)
    {
        if (!other.slot()) {
            clear();
            return *this;
        }

        set(*HandleSet::heapFor(other.slot())->vm(), other.get());
        return *this;
    }

    void clear()
    {
        if (!slot())
            return;
        HandleSet::heapFor(slot())->deallocate(slot());
        setSlot(0);
    }

private:
    static HandleSlot hashTableDeletedValue() { return reinterpret_cast<HandleSlot>(-1); }

    void set(ExternalType externalType)
    {
        ASSERT(slot());
        JSValue value = HandleTypes<T>::toJSValue(externalType);
        HandleSet::heapFor(slot())->writeBarrier(slot(), value);
        *slot() = value;
    }
};

template<class T> inline void swap(Strong<T>& a, Strong<T>& b)
{
    a.swap(b);
}

} // namespace JSC

namespace WTF {

template<typename T> struct VectorTraits<JSC::Strong<T>> : SimpleClassVectorTraits {
    static const bool canCompareWithMemcmp = false;
};

template<typename P> struct HashTraits<JSC::Strong<P>> : SimpleClassHashTraits<JSC::Strong<P>> { };

} // namespace WTF

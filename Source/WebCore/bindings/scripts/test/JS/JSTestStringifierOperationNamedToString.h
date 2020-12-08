/*
    This file is part of the WebKit open source project.
    This file has been generated by generate-bindings.pl. DO NOT MODIFY!

    This library is free software; you can redistribute it and/or
    modify it under the terms of the GNU Library General Public
    License as published by the Free Software Foundation; either
    version 2 of the License, or (at your option) any later version.

    This library is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
    Library General Public License for more details.

    You should have received a copy of the GNU Library General Public License
    along with this library; see the file COPYING.LIB.  If not, write to
    the Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
    Boston, MA 02110-1301, USA.
*/

#pragma once

#include "JSDOMWrapper.h"
#include "TestStringifierOperationNamedToString.h"
#include <wtf/NeverDestroyed.h>

namespace WebCore {

class JSTestStringifierOperationNamedToString : public JSDOMWrapper<TestStringifierOperationNamedToString> {
public:
    using Base = JSDOMWrapper<TestStringifierOperationNamedToString>;
    static JSTestStringifierOperationNamedToString* create(JSC::Structure* structure, JSDOMGlobalObject* globalObject, Ref<TestStringifierOperationNamedToString>&& impl)
    {
        JSTestStringifierOperationNamedToString* ptr = new (NotNull, JSC::allocateCell<JSTestStringifierOperationNamedToString>(globalObject->vm().heap)) JSTestStringifierOperationNamedToString(structure, *globalObject, WTFMove(impl));
        ptr->finishCreation(globalObject->vm());
        return ptr;
    }

    static JSC::JSObject* createPrototype(JSC::VM&, JSDOMGlobalObject&);
    static JSC::JSObject* prototype(JSC::VM&, JSDOMGlobalObject&);
    static TestStringifierOperationNamedToString* toWrapped(JSC::VM&, JSC::JSValue);
    static void destroy(JSC::JSCell*);

    DECLARE_INFO;

    static JSC::Structure* createStructure(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(vm, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), info());
    }

    static JSC::JSValue getConstructor(JSC::VM&, const JSC::JSGlobalObject*);
    static void heapSnapshot(JSCell*, JSC::HeapSnapshotBuilder&);
protected:
    JSTestStringifierOperationNamedToString(JSC::Structure*, JSDOMGlobalObject&, Ref<TestStringifierOperationNamedToString>&&);

    void finishCreation(JSC::VM&);
};

class JSTestStringifierOperationNamedToStringOwner : public JSC::WeakHandleOwner {
public:
    virtual bool isReachableFromOpaqueRoots(JSC::JSCHandle<JSC::Unknown>, void* context, JSC::SlotVisitor&, const char**);
    virtual void finalize(JSC::JSCHandle<JSC::Unknown>, void* context);
};

inline JSC::WeakHandleOwner* wrapperOwner(DOMWrapperWorld&, TestStringifierOperationNamedToString*)
{
    static NeverDestroyed<JSTestStringifierOperationNamedToStringOwner> owner;
    return &owner.get();
}

inline void* wrapperKey(TestStringifierOperationNamedToString* wrappableObject)
{
    return wrappableObject;
}

JSC::JSValue toJS(JSC::ExecState*, JSDOMGlobalObject*, TestStringifierOperationNamedToString&);
inline JSC::JSValue toJS(JSC::ExecState* state, JSDOMGlobalObject* globalObject, TestStringifierOperationNamedToString* impl) { return impl ? toJS(state, globalObject, *impl) : JSC::jsNull(); }
JSC::JSValue toJSNewlyCreated(JSC::ExecState*, JSDOMGlobalObject*, Ref<TestStringifierOperationNamedToString>&&);
inline JSC::JSValue toJSNewlyCreated(JSC::ExecState* state, JSDOMGlobalObject* globalObject, RefPtr<TestStringifierOperationNamedToString>&& impl) { return impl ? toJSNewlyCreated(state, globalObject, impl.releaseNonNull()) : JSC::jsNull(); }

template<> struct JSDOMWrapperConverterTraits<TestStringifierOperationNamedToString> {
    using WrapperClass = JSTestStringifierOperationNamedToString;
    using ToWrappedReturnType = TestStringifierOperationNamedToString*;
};

} // namespace WebCore

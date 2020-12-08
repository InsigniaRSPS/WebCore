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
#include "TestStringifierOperationImplementedAs.h"
#include <wtf/NeverDestroyed.h>

namespace WebCore {

class JSTestStringifierOperationImplementedAs : public JSDOMWrapper<TestStringifierOperationImplementedAs> {
public:
    using Base = JSDOMWrapper<TestStringifierOperationImplementedAs>;
    static JSTestStringifierOperationImplementedAs* create(JSC::Structure* structure, JSDOMGlobalObject* globalObject, Ref<TestStringifierOperationImplementedAs>&& impl)
    {
        JSTestStringifierOperationImplementedAs* ptr = new (NotNull, JSC::allocateCell<JSTestStringifierOperationImplementedAs>(globalObject->vm().heap)) JSTestStringifierOperationImplementedAs(structure, *globalObject, WTFMove(impl));
        ptr->finishCreation(globalObject->vm());
        return ptr;
    }

    static JSC::JSObject* createPrototype(JSC::VM&, JSDOMGlobalObject&);
    static JSC::JSObject* prototype(JSC::VM&, JSDOMGlobalObject&);
    static TestStringifierOperationImplementedAs* toWrapped(JSC::VM&, JSC::JSValue);
    static void destroy(JSC::JSCell*);

    DECLARE_INFO;

    static JSC::Structure* createStructure(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(vm, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), info());
    }

    static JSC::JSValue getConstructor(JSC::VM&, const JSC::JSGlobalObject*);
    static void heapSnapshot(JSCell*, JSC::HeapSnapshotBuilder&);
protected:
    JSTestStringifierOperationImplementedAs(JSC::Structure*, JSDOMGlobalObject&, Ref<TestStringifierOperationImplementedAs>&&);

    void finishCreation(JSC::VM&);
};

class JSTestStringifierOperationImplementedAsOwner : public JSC::WeakHandleOwner {
public:
    virtual bool isReachableFromOpaqueRoots(JSC::JSCHandle<JSC::Unknown>, void* context, JSC::SlotVisitor&, const char**);
    virtual void finalize(JSC::JSCHandle<JSC::Unknown>, void* context);
};

inline JSC::WeakHandleOwner* wrapperOwner(DOMWrapperWorld&, TestStringifierOperationImplementedAs*)
{
    static NeverDestroyed<JSTestStringifierOperationImplementedAsOwner> owner;
    return &owner.get();
}

inline void* wrapperKey(TestStringifierOperationImplementedAs* wrappableObject)
{
    return wrappableObject;
}

JSC::JSValue toJS(JSC::ExecState*, JSDOMGlobalObject*, TestStringifierOperationImplementedAs&);
inline JSC::JSValue toJS(JSC::ExecState* state, JSDOMGlobalObject* globalObject, TestStringifierOperationImplementedAs* impl) { return impl ? toJS(state, globalObject, *impl) : JSC::jsNull(); }
JSC::JSValue toJSNewlyCreated(JSC::ExecState*, JSDOMGlobalObject*, Ref<TestStringifierOperationImplementedAs>&&);
inline JSC::JSValue toJSNewlyCreated(JSC::ExecState* state, JSDOMGlobalObject* globalObject, RefPtr<TestStringifierOperationImplementedAs>&& impl) { return impl ? toJSNewlyCreated(state, globalObject, impl.releaseNonNull()) : JSC::jsNull(); }

template<> struct JSDOMWrapperConverterTraits<TestStringifierOperationImplementedAs> {
    using WrapperClass = JSTestStringifierOperationImplementedAs;
    using ToWrappedReturnType = TestStringifierOperationImplementedAs*;
};

} // namespace WebCore

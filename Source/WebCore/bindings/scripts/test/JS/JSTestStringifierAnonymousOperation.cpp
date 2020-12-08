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

#include "config.h"
#include "JSTestStringifierAnonymousOperation.h"

#include "JSDOMBinding.h"
#include "JSDOMConstructorNotConstructable.h"
#include "JSDOMConvertStrings.h"
#include "JSDOMExceptionHandling.h"
#include "JSDOMOperation.h"
#include "JSDOMWrapperCache.h"
#include "ScriptExecutionContext.h"
#include <JavaScriptCore/FunctionPrototype.h>
#include <JavaScriptCore/HeapSnapshotBuilder.h>
#include <JavaScriptCore/JSCInlines.h>
#include <wtf/GetPtr.h>
#include <wtf/PointerPreparations.h>
#include <wtf/URL.h>


namespace WebCore {
using namespace JSC;

// Functions

JSC::EncodedJSValue JSC_HOST_CALL jsTestStringifierAnonymousOperationPrototypeFunctionToString(JSC::ExecState*);

// Attributes

JSC::EncodedJSValue jsTestStringifierAnonymousOperationConstructor(JSC::ExecState*, JSC::EncodedJSValue, JSC::PropertyName);
bool setJSTestStringifierAnonymousOperationConstructor(JSC::ExecState*, JSC::EncodedJSValue, JSC::EncodedJSValue);

class JSTestStringifierAnonymousOperationPrototype : public JSC::JSNonFinalObject {
public:
    using Base = JSC::JSNonFinalObject;
    static JSTestStringifierAnonymousOperationPrototype* create(JSC::VM& vm, JSDOMGlobalObject* globalObject, JSC::Structure* structure)
    {
        JSTestStringifierAnonymousOperationPrototype* ptr = new (NotNull, JSC::allocateCell<JSTestStringifierAnonymousOperationPrototype>(vm.heap)) JSTestStringifierAnonymousOperationPrototype(vm, globalObject, structure);
        ptr->finishCreation(vm);
        return ptr;
    }

    DECLARE_INFO;
    static JSC::Structure* createStructure(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(vm, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), info());
    }

private:
    JSTestStringifierAnonymousOperationPrototype(JSC::VM& vm, JSC::JSGlobalObject*, JSC::Structure* structure)
        : JSC::JSNonFinalObject(vm, structure)
    {
    }

    void finishCreation(JSC::VM&);
};

using JSTestStringifierAnonymousOperationConstructor = JSDOMConstructorNotConstructable<JSTestStringifierAnonymousOperation>;

template<> JSValue JSTestStringifierAnonymousOperationConstructor::prototypeForStructure(JSC::VM& vm, const JSDOMGlobalObject& globalObject)
{
    UNUSED_PARAM(vm);
    return globalObject.functionPrototype();
}

template<> void JSTestStringifierAnonymousOperationConstructor::initializeProperties(VM& vm, JSDOMGlobalObject& globalObject)
{
    putDirect(vm, vm.propertyNames->prototype, JSTestStringifierAnonymousOperation::prototype(vm, globalObject), JSC::PropertyAttribute::DontDelete | JSC::PropertyAttribute::ReadOnly | JSC::PropertyAttribute::DontEnum);
    putDirect(vm, vm.propertyNames->name, jsNontrivialString(&vm, String("TestStringifierAnonymousOperation"_s)), JSC::PropertyAttribute::ReadOnly | JSC::PropertyAttribute::DontEnum);
    putDirect(vm, vm.propertyNames->length, jsNumber(0), JSC::PropertyAttribute::ReadOnly | JSC::PropertyAttribute::DontEnum);
}

template<> const ClassInfo JSTestStringifierAnonymousOperationConstructor::s_info = { "TestStringifierAnonymousOperation", &Base::s_info, nullptr, nullptr, CREATE_METHOD_TABLE(JSTestStringifierAnonymousOperationConstructor) };

/* Hash table for prototype */

static const HashTableValue JSTestStringifierAnonymousOperationPrototypeTableValues[] =
{
    { "constructor", static_cast<unsigned>(JSC::PropertyAttribute::DontEnum), NoIntrinsic, { (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsTestStringifierAnonymousOperationConstructor), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(setJSTestStringifierAnonymousOperationConstructor) } },
    { "toString", static_cast<unsigned>(JSC::PropertyAttribute::Function), NoIntrinsic, { (intptr_t)static_cast<RawNativeFunction>(jsTestStringifierAnonymousOperationPrototypeFunctionToString), (intptr_t) (0) } },
};

const ClassInfo JSTestStringifierAnonymousOperationPrototype::s_info = { "TestStringifierAnonymousOperationPrototype", &Base::s_info, nullptr, nullptr, CREATE_METHOD_TABLE(JSTestStringifierAnonymousOperationPrototype) };

void JSTestStringifierAnonymousOperationPrototype::finishCreation(VM& vm)
{
    Base::finishCreation(vm);
    reifyStaticProperties(vm, JSTestStringifierAnonymousOperation::info(), JSTestStringifierAnonymousOperationPrototypeTableValues, *this);
}

const ClassInfo JSTestStringifierAnonymousOperation::s_info = { "TestStringifierAnonymousOperation", &Base::s_info, nullptr, nullptr, CREATE_METHOD_TABLE(JSTestStringifierAnonymousOperation) };

JSTestStringifierAnonymousOperation::JSTestStringifierAnonymousOperation(Structure* structure, JSDOMGlobalObject& globalObject, Ref<TestStringifierAnonymousOperation>&& impl)
    : JSDOMWrapper<TestStringifierAnonymousOperation>(structure, globalObject, WTFMove(impl))
{
}

void JSTestStringifierAnonymousOperation::finishCreation(VM& vm)
{
    Base::finishCreation(vm);
    ASSERT(inherits(vm, info()));

}

JSObject* JSTestStringifierAnonymousOperation::createPrototype(VM& vm, JSDOMGlobalObject& globalObject)
{
    return JSTestStringifierAnonymousOperationPrototype::create(vm, &globalObject, JSTestStringifierAnonymousOperationPrototype::createStructure(vm, &globalObject, globalObject.objectPrototype()));
}

JSObject* JSTestStringifierAnonymousOperation::prototype(VM& vm, JSDOMGlobalObject& globalObject)
{
    return getDOMPrototype<JSTestStringifierAnonymousOperation>(vm, globalObject);
}

JSValue JSTestStringifierAnonymousOperation::getConstructor(VM& vm, const JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSTestStringifierAnonymousOperationConstructor>(vm, *jsCast<const JSDOMGlobalObject*>(globalObject));
}

void JSTestStringifierAnonymousOperation::destroy(JSC::JSCell* cell)
{
    JSTestStringifierAnonymousOperation* thisObject = static_cast<JSTestStringifierAnonymousOperation*>(cell);
    thisObject->JSTestStringifierAnonymousOperation::~JSTestStringifierAnonymousOperation();
}

template<> inline JSTestStringifierAnonymousOperation* IDLOperation<JSTestStringifierAnonymousOperation>::cast(ExecState& state)
{
    return jsDynamicCast<JSTestStringifierAnonymousOperation*>(state.vm(), state.thisValue());
}

EncodedJSValue jsTestStringifierAnonymousOperationConstructor(ExecState* state, EncodedJSValue thisValue, PropertyName)
{
    VM& vm = state->vm();
    auto throwScope = DECLARE_THROW_SCOPE(vm);
    auto* prototype = jsDynamicCast<JSTestStringifierAnonymousOperationPrototype*>(vm, JSValue::decode(thisValue));
    if (UNLIKELY(!prototype))
        return throwVMTypeError(state, throwScope);
    return JSValue::encode(JSTestStringifierAnonymousOperation::getConstructor(state->vm(), prototype->globalObject()));
}

bool setJSTestStringifierAnonymousOperationConstructor(ExecState* state, EncodedJSValue thisValue, EncodedJSValue encodedValue)
{
    VM& vm = state->vm();
    auto throwScope = DECLARE_THROW_SCOPE(vm);
    auto* prototype = jsDynamicCast<JSTestStringifierAnonymousOperationPrototype*>(vm, JSValue::decode(thisValue));
    if (UNLIKELY(!prototype)) {
        throwVMTypeError(state, throwScope);
        return false;
    }
    // Shadowing a built-in constructor
    return prototype->putDirect(vm, vm.propertyNames->constructor, JSValue::decode(encodedValue));
}

static inline JSC::EncodedJSValue jsTestStringifierAnonymousOperationPrototypeFunctionToStringBody(JSC::ExecState* state, typename IDLOperation<JSTestStringifierAnonymousOperation>::ClassParameter castedThis, JSC::ThrowScope& throwScope)
{
    UNUSED_PARAM(state);
    UNUSED_PARAM(throwScope);
    auto& impl = castedThis->wrapped();
    return JSValue::encode(toJS<IDLDOMString>(*state, impl.toString()));
}

EncodedJSValue JSC_HOST_CALL jsTestStringifierAnonymousOperationPrototypeFunctionToString(ExecState* state)
{
    return IDLOperation<JSTestStringifierAnonymousOperation>::call<jsTestStringifierAnonymousOperationPrototypeFunctionToStringBody>(*state, "toString");
}

void JSTestStringifierAnonymousOperation::heapSnapshot(JSCell* cell, HeapSnapshotBuilder& builder)
{
    auto* thisObject = jsCast<JSTestStringifierAnonymousOperation*>(cell);
    builder.setWrappedObjectForCell(cell, &thisObject->wrapped());
    if (thisObject->scriptExecutionContext())
        builder.setLabelForCell(cell, "url " + thisObject->scriptExecutionContext()->url().string());
    Base::heapSnapshot(cell, builder);
}

bool JSTestStringifierAnonymousOperationOwner::isReachableFromOpaqueRoots(JSC::JSCHandle<JSC::Unknown> handle, void*, SlotVisitor& visitor, const char** reason)
{
    UNUSED_PARAM(handle);
    UNUSED_PARAM(visitor);
    UNUSED_PARAM(reason);
    return false;
}

void JSTestStringifierAnonymousOperationOwner::finalize(JSC::JSCHandle<JSC::Unknown> handle, void* context)
{
    auto* jsTestStringifierAnonymousOperation = static_cast<JSTestStringifierAnonymousOperation*>(handle.slot()->asCell());
    auto& world = *static_cast<DOMWrapperWorld*>(context);
    uncacheWrapper(world, &jsTestStringifierAnonymousOperation->wrapped(), jsTestStringifierAnonymousOperation);
}

#if ENABLE(BINDING_INTEGRITY)
#if PLATFORM(WIN)
#pragma warning(disable: 4483)
extern "C" { extern void (*const __identifier("??_7TestStringifierAnonymousOperation@WebCore@@6B@")[])(); }
#else
extern "C" { extern void* _ZTVN7WebCore33TestStringifierAnonymousOperationE[]; }
#endif
#endif

JSC::JSValue toJSNewlyCreated(JSC::ExecState*, JSDOMGlobalObject* globalObject, Ref<TestStringifierAnonymousOperation>&& impl)
{

#if ENABLE(BINDING_INTEGRITY)
    void* actualVTablePointer = *(reinterpret_cast<void**>(impl.ptr()));
#if PLATFORM(WIN)
    void* expectedVTablePointer = WTF_PREPARE_VTBL_POINTER_FOR_INSPECTION(__identifier("??_7TestStringifierAnonymousOperation@WebCore@@6B@"));
#else
    void* expectedVTablePointer = WTF_PREPARE_VTBL_POINTER_FOR_INSPECTION(&_ZTVN7WebCore33TestStringifierAnonymousOperationE[2]);
#endif

    // If this fails TestStringifierAnonymousOperation does not have a vtable, so you need to add the
    // ImplementationLacksVTable attribute to the interface definition
    static_assert(std::is_polymorphic<TestStringifierAnonymousOperation>::value, "TestStringifierAnonymousOperation is not polymorphic");

    // If you hit this assertion you either have a use after free bug, or
    // TestStringifierAnonymousOperation has subclasses. If TestStringifierAnonymousOperation has subclasses that get passed
    // to toJS() we currently require TestStringifierAnonymousOperation you to opt out of binding hardening
    // by adding the SkipVTableValidation attribute to the interface IDL definition
    RELEASE_ASSERT(actualVTablePointer == expectedVTablePointer);
#endif
    return createWrapper<TestStringifierAnonymousOperation>(globalObject, WTFMove(impl));
}

JSC::JSValue toJS(JSC::ExecState* state, JSDOMGlobalObject* globalObject, TestStringifierAnonymousOperation& impl)
{
    return wrap(state, globalObject, impl);
}

TestStringifierAnonymousOperation* JSTestStringifierAnonymousOperation::toWrapped(JSC::VM& vm, JSC::JSValue value)
{
    if (auto* wrapper = jsDynamicCast<JSTestStringifierAnonymousOperation*>(vm, value))
        return &wrapper->wrapped();
    return nullptr;
}

}

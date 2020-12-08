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
#include "JSTestGenerateIsReachable.h"

#include "JSDOMAttribute.h"
#include "JSDOMBinding.h"
#include "JSDOMConstructorNotConstructable.h"
#include "JSDOMConvertStrings.h"
#include "JSDOMExceptionHandling.h"
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

// Attributes

JSC::EncodedJSValue jsTestGenerateIsReachableConstructor(JSC::ExecState*, JSC::EncodedJSValue, JSC::PropertyName);
bool setJSTestGenerateIsReachableConstructor(JSC::ExecState*, JSC::EncodedJSValue, JSC::EncodedJSValue);
JSC::EncodedJSValue jsTestGenerateIsReachableASecretAttribute(JSC::ExecState*, JSC::EncodedJSValue, JSC::PropertyName);

class JSTestGenerateIsReachablePrototype : public JSC::JSNonFinalObject {
public:
    using Base = JSC::JSNonFinalObject;
    static JSTestGenerateIsReachablePrototype* create(JSC::VM& vm, JSDOMGlobalObject* globalObject, JSC::Structure* structure)
    {
        JSTestGenerateIsReachablePrototype* ptr = new (NotNull, JSC::allocateCell<JSTestGenerateIsReachablePrototype>(vm.heap)) JSTestGenerateIsReachablePrototype(vm, globalObject, structure);
        ptr->finishCreation(vm);
        return ptr;
    }

    DECLARE_INFO;
    static JSC::Structure* createStructure(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(vm, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), info());
    }

private:
    JSTestGenerateIsReachablePrototype(JSC::VM& vm, JSC::JSGlobalObject*, JSC::Structure* structure)
        : JSC::JSNonFinalObject(vm, structure)
    {
    }

    void finishCreation(JSC::VM&);
};

using JSTestGenerateIsReachableConstructor = JSDOMConstructorNotConstructable<JSTestGenerateIsReachable>;

template<> JSValue JSTestGenerateIsReachableConstructor::prototypeForStructure(JSC::VM& vm, const JSDOMGlobalObject& globalObject)
{
    UNUSED_PARAM(vm);
    return globalObject.functionPrototype();
}

template<> void JSTestGenerateIsReachableConstructor::initializeProperties(VM& vm, JSDOMGlobalObject& globalObject)
{
    putDirect(vm, vm.propertyNames->prototype, JSTestGenerateIsReachable::prototype(vm, globalObject), JSC::PropertyAttribute::DontDelete | JSC::PropertyAttribute::ReadOnly | JSC::PropertyAttribute::DontEnum);
    putDirect(vm, vm.propertyNames->name, jsNontrivialString(&vm, String("TestGenerateIsReachable"_s)), JSC::PropertyAttribute::ReadOnly | JSC::PropertyAttribute::DontEnum);
    putDirect(vm, vm.propertyNames->length, jsNumber(0), JSC::PropertyAttribute::ReadOnly | JSC::PropertyAttribute::DontEnum);
}

template<> const ClassInfo JSTestGenerateIsReachableConstructor::s_info = { "TestGenerateIsReachable", &Base::s_info, nullptr, nullptr, CREATE_METHOD_TABLE(JSTestGenerateIsReachableConstructor) };

/* Hash table for prototype */

static const HashTableValue JSTestGenerateIsReachablePrototypeTableValues[] =
{
    { "constructor", static_cast<unsigned>(JSC::PropertyAttribute::DontEnum), NoIntrinsic, { (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsTestGenerateIsReachableConstructor), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(setJSTestGenerateIsReachableConstructor) } },
    { "aSecretAttribute", static_cast<unsigned>(JSC::PropertyAttribute::ReadOnly | JSC::PropertyAttribute::CustomAccessor | JSC::PropertyAttribute::DOMAttribute), NoIntrinsic, { (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsTestGenerateIsReachableASecretAttribute), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(0) } },
};

const ClassInfo JSTestGenerateIsReachablePrototype::s_info = { "TestGenerateIsReachablePrototype", &Base::s_info, nullptr, nullptr, CREATE_METHOD_TABLE(JSTestGenerateIsReachablePrototype) };

void JSTestGenerateIsReachablePrototype::finishCreation(VM& vm)
{
    Base::finishCreation(vm);
    reifyStaticProperties(vm, JSTestGenerateIsReachable::info(), JSTestGenerateIsReachablePrototypeTableValues, *this);
    bool hasDisabledRuntimeProperties = false;
    if (!jsCast<JSDOMGlobalObject*>(globalObject())->scriptExecutionContext()->isSecureContext()) {
        hasDisabledRuntimeProperties = true;
        auto propertyName = Identifier::fromString(&vm, reinterpret_cast<const LChar*>("aSecretAttribute"), strlen("aSecretAttribute"));
        VM::DeletePropertyModeScope scope(vm, VM::DeletePropertyMode::IgnoreConfigurable);
        JSObject::deleteProperty(this, globalObject()->globalExec(), propertyName);
    }
    if (hasDisabledRuntimeProperties && structure()->isDictionary())
        flattenDictionaryObject(vm);
}

const ClassInfo JSTestGenerateIsReachable::s_info = { "TestGenerateIsReachable", &Base::s_info, nullptr, nullptr, CREATE_METHOD_TABLE(JSTestGenerateIsReachable) };

JSTestGenerateIsReachable::JSTestGenerateIsReachable(Structure* structure, JSDOMGlobalObject& globalObject, Ref<TestGenerateIsReachable>&& impl)
    : JSDOMWrapper<TestGenerateIsReachable>(structure, globalObject, WTFMove(impl))
{
}

void JSTestGenerateIsReachable::finishCreation(VM& vm)
{
    Base::finishCreation(vm);
    ASSERT(inherits(vm, info()));

}

JSObject* JSTestGenerateIsReachable::createPrototype(VM& vm, JSDOMGlobalObject& globalObject)
{
    return JSTestGenerateIsReachablePrototype::create(vm, &globalObject, JSTestGenerateIsReachablePrototype::createStructure(vm, &globalObject, globalObject.objectPrototype()));
}

JSObject* JSTestGenerateIsReachable::prototype(VM& vm, JSDOMGlobalObject& globalObject)
{
    return getDOMPrototype<JSTestGenerateIsReachable>(vm, globalObject);
}

JSValue JSTestGenerateIsReachable::getConstructor(VM& vm, const JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSTestGenerateIsReachableConstructor>(vm, *jsCast<const JSDOMGlobalObject*>(globalObject));
}

void JSTestGenerateIsReachable::destroy(JSC::JSCell* cell)
{
    JSTestGenerateIsReachable* thisObject = static_cast<JSTestGenerateIsReachable*>(cell);
    thisObject->JSTestGenerateIsReachable::~JSTestGenerateIsReachable();
}

template<> inline JSTestGenerateIsReachable* IDLAttribute<JSTestGenerateIsReachable>::cast(ExecState& state, EncodedJSValue thisValue)
{
    return jsDynamicCast<JSTestGenerateIsReachable*>(state.vm(), JSValue::decode(thisValue));
}

EncodedJSValue jsTestGenerateIsReachableConstructor(ExecState* state, EncodedJSValue thisValue, PropertyName)
{
    VM& vm = state->vm();
    auto throwScope = DECLARE_THROW_SCOPE(vm);
    auto* prototype = jsDynamicCast<JSTestGenerateIsReachablePrototype*>(vm, JSValue::decode(thisValue));
    if (UNLIKELY(!prototype))
        return throwVMTypeError(state, throwScope);
    return JSValue::encode(JSTestGenerateIsReachable::getConstructor(state->vm(), prototype->globalObject()));
}

bool setJSTestGenerateIsReachableConstructor(ExecState* state, EncodedJSValue thisValue, EncodedJSValue encodedValue)
{
    VM& vm = state->vm();
    auto throwScope = DECLARE_THROW_SCOPE(vm);
    auto* prototype = jsDynamicCast<JSTestGenerateIsReachablePrototype*>(vm, JSValue::decode(thisValue));
    if (UNLIKELY(!prototype)) {
        throwVMTypeError(state, throwScope);
        return false;
    }
    // Shadowing a built-in constructor
    return prototype->putDirect(vm, vm.propertyNames->constructor, JSValue::decode(encodedValue));
}

static inline JSValue jsTestGenerateIsReachableASecretAttributeGetter(ExecState& state, JSTestGenerateIsReachable& thisObject, ThrowScope& throwScope)
{
    UNUSED_PARAM(throwScope);
    UNUSED_PARAM(state);
    auto& impl = thisObject.wrapped();
    JSValue result = toJS<IDLDOMString>(state, throwScope, impl.aSecretAttribute());
    return result;
}

EncodedJSValue jsTestGenerateIsReachableASecretAttribute(ExecState* state, EncodedJSValue thisValue, PropertyName)
{
    return IDLAttribute<JSTestGenerateIsReachable>::get<jsTestGenerateIsReachableASecretAttributeGetter, CastedThisErrorBehavior::Assert>(*state, thisValue, "aSecretAttribute");
}

void JSTestGenerateIsReachable::heapSnapshot(JSCell* cell, HeapSnapshotBuilder& builder)
{
    auto* thisObject = jsCast<JSTestGenerateIsReachable*>(cell);
    builder.setWrappedObjectForCell(cell, &thisObject->wrapped());
    if (thisObject->scriptExecutionContext())
        builder.setLabelForCell(cell, "url " + thisObject->scriptExecutionContext()->url().string());
    Base::heapSnapshot(cell, builder);
}

bool JSTestGenerateIsReachableOwner::isReachableFromOpaqueRoots(JSC::JSCHandle<JSC::Unknown> handle, void*, SlotVisitor& visitor, const char** reason)
{
    auto* jsTestGenerateIsReachable = jsCast<JSTestGenerateIsReachable*>(handle.slot()->asCell());
    TestGenerateIsReachable* root = &jsTestGenerateIsReachable->wrapped();
    if (UNLIKELY(reason))
        *reason = "Reachable from TestGenerateIsReachable";
    return visitor.containsOpaqueRoot(root);
}

void JSTestGenerateIsReachableOwner::finalize(JSC::JSCHandle<JSC::Unknown> handle, void* context)
{
    auto* jsTestGenerateIsReachable = static_cast<JSTestGenerateIsReachable*>(handle.slot()->asCell());
    auto& world = *static_cast<DOMWrapperWorld*>(context);
    uncacheWrapper(world, &jsTestGenerateIsReachable->wrapped(), jsTestGenerateIsReachable);
}

#if ENABLE(BINDING_INTEGRITY)
#if PLATFORM(WIN)
#pragma warning(disable: 4483)
extern "C" { extern void (*const __identifier("??_7TestGenerateIsReachable@WebCore@@6B@")[])(); }
#else
extern "C" { extern void* _ZTVN7WebCore23TestGenerateIsReachableE[]; }
#endif
#endif

JSC::JSValue toJSNewlyCreated(JSC::ExecState*, JSDOMGlobalObject* globalObject, Ref<TestGenerateIsReachable>&& impl)
{

#if ENABLE(BINDING_INTEGRITY)
    void* actualVTablePointer = *(reinterpret_cast<void**>(impl.ptr()));
#if PLATFORM(WIN)
    void* expectedVTablePointer = WTF_PREPARE_VTBL_POINTER_FOR_INSPECTION(__identifier("??_7TestGenerateIsReachable@WebCore@@6B@"));
#else
    void* expectedVTablePointer = WTF_PREPARE_VTBL_POINTER_FOR_INSPECTION(&_ZTVN7WebCore23TestGenerateIsReachableE[2]);
#endif

    // If this fails TestGenerateIsReachable does not have a vtable, so you need to add the
    // ImplementationLacksVTable attribute to the interface definition
    static_assert(std::is_polymorphic<TestGenerateIsReachable>::value, "TestGenerateIsReachable is not polymorphic");

    // If you hit this assertion you either have a use after free bug, or
    // TestGenerateIsReachable has subclasses. If TestGenerateIsReachable has subclasses that get passed
    // to toJS() we currently require TestGenerateIsReachable you to opt out of binding hardening
    // by adding the SkipVTableValidation attribute to the interface IDL definition
    RELEASE_ASSERT(actualVTablePointer == expectedVTablePointer);
#endif
    return createWrapper<TestGenerateIsReachable>(globalObject, WTFMove(impl));
}

JSC::JSValue toJS(JSC::ExecState* state, JSDOMGlobalObject* globalObject, TestGenerateIsReachable& impl)
{
    return wrap(state, globalObject, impl);
}

TestGenerateIsReachable* JSTestGenerateIsReachable::toWrapped(JSC::VM& vm, JSC::JSValue value)
{
    if (auto* wrapper = jsDynamicCast<JSTestGenerateIsReachable*>(vm, value))
        return &wrapper->wrapped();
    return nullptr;
}

}

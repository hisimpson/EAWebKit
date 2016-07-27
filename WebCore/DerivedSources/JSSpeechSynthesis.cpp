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

#if ENABLE(SPEECH_SYNTHESIS)

#include "JSSpeechSynthesis.h"

#include "ExceptionCode.h"
#include "JSDOMBinding.h"
#include "JSSpeechSynthesisUtterance.h"
#include "JSSpeechSynthesisVoice.h"
#include "SpeechSynthesis.h"
#include "SpeechSynthesisVoice.h"
#include <runtime/Error.h>
#include <runtime/JSArray.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

/* Hash table */

static const HashTableValue JSSpeechSynthesisTableValues[] =
{
    { "pending", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSpeechSynthesisPending), (intptr_t)0 },
    { "speaking", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSpeechSynthesisSpeaking), (intptr_t)0 },
    { "paused", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSpeechSynthesisPaused), (intptr_t)0 },
    { 0, 0, NoIntrinsic, 0, 0 }
};

static const HashTable JSSpeechSynthesisTable = { 8, 7, JSSpeechSynthesisTableValues, 0 };
/* Hash table for prototype */

static const HashTableValue JSSpeechSynthesisPrototypeTableValues[] =
{
    { "speak", DontDelete | JSC::Function, NoIntrinsic, (intptr_t)static_cast<NativeFunction>(jsSpeechSynthesisPrototypeFunctionSpeak), (intptr_t)1 },
    { "cancel", DontDelete | JSC::Function, NoIntrinsic, (intptr_t)static_cast<NativeFunction>(jsSpeechSynthesisPrototypeFunctionCancel), (intptr_t)0 },
    { "pause", DontDelete | JSC::Function, NoIntrinsic, (intptr_t)static_cast<NativeFunction>(jsSpeechSynthesisPrototypeFunctionPause), (intptr_t)0 },
    { "resume", DontDelete | JSC::Function, NoIntrinsic, (intptr_t)static_cast<NativeFunction>(jsSpeechSynthesisPrototypeFunctionResume), (intptr_t)0 },
    { "getVoices", DontDelete | JSC::Function, NoIntrinsic, (intptr_t)static_cast<NativeFunction>(jsSpeechSynthesisPrototypeFunctionGetVoices), (intptr_t)0 },
    { 0, 0, NoIntrinsic, 0, 0 }
};

static const HashTable JSSpeechSynthesisPrototypeTable = { 16, 15, JSSpeechSynthesisPrototypeTableValues, 0 };
const ClassInfo JSSpeechSynthesisPrototype::s_info = { "SpeechSynthesisPrototype", &Base::s_info, &JSSpeechSynthesisPrototypeTable, 0, CREATE_METHOD_TABLE(JSSpeechSynthesisPrototype) };

JSObject* JSSpeechSynthesisPrototype::self(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSSpeechSynthesis>(vm, globalObject);
}

bool JSSpeechSynthesisPrototype::getOwnPropertySlot(JSObject* object, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    JSSpeechSynthesisPrototype* thisObject = jsCast<JSSpeechSynthesisPrototype*>(object);
    return getStaticFunctionSlot<JSObject>(exec, JSSpeechSynthesisPrototypeTable, thisObject, propertyName, slot);
}

const ClassInfo JSSpeechSynthesis::s_info = { "SpeechSynthesis", &Base::s_info, &JSSpeechSynthesisTable, 0 , CREATE_METHOD_TABLE(JSSpeechSynthesis) };

JSSpeechSynthesis::JSSpeechSynthesis(Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<SpeechSynthesis> impl)
    : JSDOMWrapper(structure, globalObject)
    , m_impl(impl.leakRef())
{
}

void JSSpeechSynthesis::finishCreation(VM& vm)
{
    Base::finishCreation(vm);
    ASSERT(inherits(info()));
}

JSObject* JSSpeechSynthesis::createPrototype(VM& vm, JSGlobalObject* globalObject)
{
    return JSSpeechSynthesisPrototype::create(vm, globalObject, JSSpeechSynthesisPrototype::createStructure(vm, globalObject, globalObject->objectPrototype()));
}

void JSSpeechSynthesis::destroy(JSC::JSCell* cell)
{
    JSSpeechSynthesis* thisObject = static_cast<JSSpeechSynthesis*>(cell);
    thisObject->JSSpeechSynthesis::~JSSpeechSynthesis();
}

JSSpeechSynthesis::~JSSpeechSynthesis()
{
    releaseImplIfNotNull();
}

bool JSSpeechSynthesis::getOwnPropertySlot(JSObject* object, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    JSSpeechSynthesis* thisObject = jsCast<JSSpeechSynthesis*>(object);
    ASSERT_GC_OBJECT_INHERITS(thisObject, info());
    return getStaticValueSlot<JSSpeechSynthesis, Base>(exec, JSSpeechSynthesisTable, thisObject, propertyName, slot);
}

JSValue jsSpeechSynthesisPending(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSSpeechSynthesis* castedThis = jsCast<JSSpeechSynthesis*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SpeechSynthesis& impl = castedThis->impl();
    JSValue result = jsBoolean(impl.pending());
    return result;
}


JSValue jsSpeechSynthesisSpeaking(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSSpeechSynthesis* castedThis = jsCast<JSSpeechSynthesis*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SpeechSynthesis& impl = castedThis->impl();
    JSValue result = jsBoolean(impl.speaking());
    return result;
}


JSValue jsSpeechSynthesisPaused(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSSpeechSynthesis* castedThis = jsCast<JSSpeechSynthesis*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SpeechSynthesis& impl = castedThis->impl();
    JSValue result = jsBoolean(impl.paused());
    return result;
}


EncodedJSValue JSC_HOST_CALL jsSpeechSynthesisPrototypeFunctionSpeak(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(JSSpeechSynthesis::info()))
        return throwVMTypeError(exec);
    JSSpeechSynthesis* castedThis = jsCast<JSSpeechSynthesis*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, JSSpeechSynthesis::info());
    SpeechSynthesis& impl = castedThis->impl();
    if (exec->argumentCount() < 1)
        return throwVMError(exec, createNotEnoughArgumentsError(exec));
    SpeechSynthesisUtterance* utterance(toSpeechSynthesisUtterance(exec->argument(0)));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());
    impl.speak(utterance);
    return JSValue::encode(jsUndefined());
}

EncodedJSValue JSC_HOST_CALL jsSpeechSynthesisPrototypeFunctionCancel(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(JSSpeechSynthesis::info()))
        return throwVMTypeError(exec);
    JSSpeechSynthesis* castedThis = jsCast<JSSpeechSynthesis*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, JSSpeechSynthesis::info());
    SpeechSynthesis& impl = castedThis->impl();
    impl.cancel();
    return JSValue::encode(jsUndefined());
}

EncodedJSValue JSC_HOST_CALL jsSpeechSynthesisPrototypeFunctionPause(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(JSSpeechSynthesis::info()))
        return throwVMTypeError(exec);
    JSSpeechSynthesis* castedThis = jsCast<JSSpeechSynthesis*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, JSSpeechSynthesis::info());
    SpeechSynthesis& impl = castedThis->impl();
    impl.pause();
    return JSValue::encode(jsUndefined());
}

EncodedJSValue JSC_HOST_CALL jsSpeechSynthesisPrototypeFunctionResume(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(JSSpeechSynthesis::info()))
        return throwVMTypeError(exec);
    JSSpeechSynthesis* castedThis = jsCast<JSSpeechSynthesis*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, JSSpeechSynthesis::info());
    SpeechSynthesis& impl = castedThis->impl();
    impl.resume();
    return JSValue::encode(jsUndefined());
}

EncodedJSValue JSC_HOST_CALL jsSpeechSynthesisPrototypeFunctionGetVoices(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(JSSpeechSynthesis::info()))
        return throwVMTypeError(exec);
    JSSpeechSynthesis* castedThis = jsCast<JSSpeechSynthesis*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, JSSpeechSynthesis::info());
    SpeechSynthesis& impl = castedThis->impl();

    JSC::JSValue result = jsArray(exec, castedThis->globalObject(), impl.getVoices());
    return JSValue::encode(result);
}

static inline bool isObservable(JSSpeechSynthesis* jsSpeechSynthesis)
{
    if (jsSpeechSynthesis->hasCustomProperties())
        return true;
    return false;
}

bool JSSpeechSynthesisOwner::isReachableFromOpaqueRoots(JSC::Handle<JSC::Unknown> handle, void*, SlotVisitor& visitor)
{
    JSSpeechSynthesis* jsSpeechSynthesis = jsCast<JSSpeechSynthesis*>(handle.get().asCell());
    if (!isObservable(jsSpeechSynthesis))
        return false;
    UNUSED_PARAM(visitor);
    return false;
}

void JSSpeechSynthesisOwner::finalize(JSC::Handle<JSC::Unknown> handle, void* context)
{
    JSSpeechSynthesis* jsSpeechSynthesis = jsCast<JSSpeechSynthesis*>(handle.get().asCell());
    DOMWrapperWorld& world = *static_cast<DOMWrapperWorld*>(context);
    uncacheWrapper(world, &jsSpeechSynthesis->impl(), jsSpeechSynthesis);
    jsSpeechSynthesis->releaseImpl();
}

#if ENABLE(BINDING_INTEGRITY)
#if PLATFORM(WIN)
#pragma warning(disable: 4483)
extern "C" { extern void (*const __identifier("??_7SpeechSynthesis@WebCore@@6B@")[])(); }
#else
extern "C" { extern void* _ZTVN7WebCore15SpeechSynthesisE[]; }
#endif
#endif
JSC::JSValue toJS(JSC::ExecState* exec, JSDOMGlobalObject* globalObject, SpeechSynthesis* impl)
{
    if (!impl)
        return jsNull();
    if (JSValue result = getExistingWrapper<JSSpeechSynthesis>(exec, impl))
        return result;

#if ENABLE(BINDING_INTEGRITY)
    void* actualVTablePointer = *(reinterpret_cast<void**>(impl));
#if PLATFORM(WIN)
    void* expectedVTablePointer = reinterpret_cast<void*>(__identifier("??_7SpeechSynthesis@WebCore@@6B@"));
#else
    void* expectedVTablePointer = &_ZTVN7WebCore15SpeechSynthesisE[2];
#if COMPILER(CLANG)
    // If this fails SpeechSynthesis does not have a vtable, so you need to add the
    // ImplementationLacksVTable attribute to the interface definition
    COMPILE_ASSERT(__is_polymorphic(SpeechSynthesis), SpeechSynthesis_is_not_polymorphic);
#endif
#endif
    // If you hit this assertion you either have a use after free bug, or
    // SpeechSynthesis has subclasses. If SpeechSynthesis has subclasses that get passed
    // to toJS() we currently require SpeechSynthesis you to opt out of binding hardening
    // by adding the SkipVTableValidation attribute to the interface IDL definition
    RELEASE_ASSERT(actualVTablePointer == expectedVTablePointer);
#endif
    ReportMemoryCost<SpeechSynthesis>::reportMemoryCost(exec, impl);
    return createNewWrapper<JSSpeechSynthesis>(exec, globalObject, impl);
}

SpeechSynthesis* toSpeechSynthesis(JSC::JSValue value)
{
    return value.inherits(JSSpeechSynthesis::info()) ? &jsCast<JSSpeechSynthesis*>(asObject(value))->impl() : 0;
}

}

#endif // ENABLE(SPEECH_SYNTHESIS)
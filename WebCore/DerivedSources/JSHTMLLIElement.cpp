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
#include "JSHTMLLIElement.h"

#include "HTMLLIElement.h"
#include "HTMLNames.h"
#include "URL.h"
#include <runtime/JSString.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

/* Hash table */

static const HashTableValue JSHTMLLIElementTableValues[] =
{
    { "type", DontDelete, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLLIElementType), (intptr_t)setJSHTMLLIElementType },
    { "value", DontDelete, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLLIElementValue), (intptr_t)setJSHTMLLIElementValue },
    { "constructor", DontEnum | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLLIElementConstructor), (intptr_t)0 },
    { 0, 0, NoIntrinsic, 0, 0 }
};

static const HashTable JSHTMLLIElementTable = { 9, 7, JSHTMLLIElementTableValues, 0 };
/* Hash table for constructor */

static const HashTableValue JSHTMLLIElementConstructorTableValues[] =
{
    { 0, 0, NoIntrinsic, 0, 0 }
};

static const HashTable JSHTMLLIElementConstructorTable = { 1, 0, JSHTMLLIElementConstructorTableValues, 0 };
const ClassInfo JSHTMLLIElementConstructor::s_info = { "HTMLLIElementConstructor", &Base::s_info, &JSHTMLLIElementConstructorTable, 0, CREATE_METHOD_TABLE(JSHTMLLIElementConstructor) };

JSHTMLLIElementConstructor::JSHTMLLIElementConstructor(Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
}

void JSHTMLLIElementConstructor::finishCreation(VM& vm, JSDOMGlobalObject* globalObject)
{
    Base::finishCreation(vm);
    ASSERT(inherits(info()));
    putDirect(vm, vm.propertyNames->prototype, JSHTMLLIElementPrototype::self(vm, globalObject), DontDelete | ReadOnly);
    putDirect(vm, vm.propertyNames->length, jsNumber(0), ReadOnly | DontDelete | DontEnum);
}

bool JSHTMLLIElementConstructor::getOwnPropertySlot(JSObject* object, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSHTMLLIElementConstructor, JSDOMWrapper>(exec, JSHTMLLIElementConstructorTable, jsCast<JSHTMLLIElementConstructor*>(object), propertyName, slot);
}

/* Hash table for prototype */

static const HashTableValue JSHTMLLIElementPrototypeTableValues[] =
{
    { 0, 0, NoIntrinsic, 0, 0 }
};

static const HashTable JSHTMLLIElementPrototypeTable = { 1, 0, JSHTMLLIElementPrototypeTableValues, 0 };
const ClassInfo JSHTMLLIElementPrototype::s_info = { "HTMLLIElementPrototype", &Base::s_info, &JSHTMLLIElementPrototypeTable, 0, CREATE_METHOD_TABLE(JSHTMLLIElementPrototype) };

JSObject* JSHTMLLIElementPrototype::self(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSHTMLLIElement>(vm, globalObject);
}

const ClassInfo JSHTMLLIElement::s_info = { "HTMLLIElement", &Base::s_info, &JSHTMLLIElementTable, 0 , CREATE_METHOD_TABLE(JSHTMLLIElement) };

JSHTMLLIElement::JSHTMLLIElement(Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<HTMLLIElement> impl)
    : JSHTMLElement(structure, globalObject, impl)
{
}

void JSHTMLLIElement::finishCreation(VM& vm)
{
    Base::finishCreation(vm);
    ASSERT(inherits(info()));
}

JSObject* JSHTMLLIElement::createPrototype(VM& vm, JSGlobalObject* globalObject)
{
    return JSHTMLLIElementPrototype::create(vm, globalObject, JSHTMLLIElementPrototype::createStructure(vm, globalObject, JSHTMLElementPrototype::self(vm, globalObject)));
}

bool JSHTMLLIElement::getOwnPropertySlot(JSObject* object, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    JSHTMLLIElement* thisObject = jsCast<JSHTMLLIElement*>(object);
    ASSERT_GC_OBJECT_INHERITS(thisObject, info());
    return getStaticValueSlot<JSHTMLLIElement, Base>(exec, JSHTMLLIElementTable, thisObject, propertyName, slot);
}

JSValue jsHTMLLIElementType(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSHTMLLIElement* castedThis = jsCast<JSHTMLLIElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    HTMLLIElement& impl = castedThis->impl();
    JSValue result = jsStringWithCache(exec, impl.fastGetAttribute(WebCore::HTMLNames::typeAttr));
    return result;
}


JSValue jsHTMLLIElementValue(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSHTMLLIElement* castedThis = jsCast<JSHTMLLIElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    HTMLLIElement& impl = castedThis->impl();
    JSValue result = jsNumber(impl.getIntegralAttribute(WebCore::HTMLNames::valueAttr));
    return result;
}


JSValue jsHTMLLIElementConstructor(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSHTMLLIElement* domObject = jsCast<JSHTMLLIElement*>(asObject(slotBase));
    return JSHTMLLIElement::getConstructor(exec->vm(), domObject->globalObject());
}

void JSHTMLLIElement::put(JSCell* cell, ExecState* exec, PropertyName propertyName, JSValue value, PutPropertySlot& slot)
{
    JSHTMLLIElement* thisObject = jsCast<JSHTMLLIElement*>(cell);
    ASSERT_GC_OBJECT_INHERITS(thisObject, info());
    lookupPut<JSHTMLLIElement, Base>(exec, propertyName, value, JSHTMLLIElementTable, thisObject, slot);
}

void setJSHTMLLIElementType(ExecState* exec, JSObject* thisObject, JSValue value)
{
    UNUSED_PARAM(exec);
    JSHTMLLIElement* castedThis = jsCast<JSHTMLLIElement*>(thisObject);
    HTMLLIElement& impl = castedThis->impl();
    const String& nativeValue(valueToStringWithNullCheck(exec, value));
    if (exec->hadException())
        return;
    impl.setAttribute(WebCore::HTMLNames::typeAttr, nativeValue);
}


void setJSHTMLLIElementValue(ExecState* exec, JSObject* thisObject, JSValue value)
{
    UNUSED_PARAM(exec);
    JSHTMLLIElement* castedThis = jsCast<JSHTMLLIElement*>(thisObject);
    HTMLLIElement& impl = castedThis->impl();
    int nativeValue(toInt32(exec, value, NormalConversion));
    if (exec->hadException())
        return;
    impl.setIntegralAttribute(WebCore::HTMLNames::valueAttr, nativeValue);
}


JSValue JSHTMLLIElement::getConstructor(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSHTMLLIElementConstructor>(vm, jsCast<JSDOMGlobalObject*>(globalObject));
}


}
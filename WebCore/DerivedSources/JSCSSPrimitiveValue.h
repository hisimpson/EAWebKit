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

#ifndef JSCSSPrimitiveValue_h
#define JSCSSPrimitiveValue_h

#include "CSSPrimitiveValue.h"
#include "JSCSSValue.h"
#include "JSDOMBinding.h"
#include <runtime/JSObject.h>

namespace WebCore {

class JSCSSPrimitiveValue : public JSCSSValue {
public:
    typedef JSCSSValue Base;
    static JSCSSPrimitiveValue* create(JSC::Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<CSSPrimitiveValue> impl)
    {
        JSCSSPrimitiveValue* ptr = new (NotNull, JSC::allocateCell<JSCSSPrimitiveValue>(globalObject->vm().heap)) JSCSSPrimitiveValue(structure, globalObject, impl);
        ptr->finishCreation(globalObject->vm());
        return ptr;
    }

    static JSC::JSObject* createPrototype(JSC::VM&, JSC::JSGlobalObject*);
    static bool getOwnPropertySlot(JSC::JSObject*, JSC::ExecState*, JSC::PropertyName, JSC::PropertySlot&);
    DECLARE_INFO;

    static JSC::Structure* createStructure(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(vm, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), info());
    }

    static JSC::JSValue getConstructor(JSC::VM&, JSC::JSGlobalObject*);
    CSSPrimitiveValue& impl() const
    {
        return static_cast<CSSPrimitiveValue&>(Base::impl());
    }
protected:
    JSCSSPrimitiveValue(JSC::Structure*, JSDOMGlobalObject*, PassRefPtr<CSSPrimitiveValue>);
    void finishCreation(JSC::VM&);
    static const unsigned StructureFlags = JSC::OverridesGetOwnPropertySlot | JSC::InterceptsGetOwnPropertySlotByIndexEvenWhenLengthIsNotZero | Base::StructureFlags;
};


class JSCSSPrimitiveValuePrototype : public JSC::JSNonFinalObject {
public:
    typedef JSC::JSNonFinalObject Base;
    static JSC::JSObject* self(JSC::VM&, JSC::JSGlobalObject*);
    static JSCSSPrimitiveValuePrototype* create(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::Structure* structure)
    {
        JSCSSPrimitiveValuePrototype* ptr = new (NotNull, JSC::allocateCell<JSCSSPrimitiveValuePrototype>(vm.heap)) JSCSSPrimitiveValuePrototype(vm, globalObject, structure);
        ptr->finishCreation(vm);
        return ptr;
    }

    DECLARE_INFO;
    static bool getOwnPropertySlot(JSC::JSObject*, JSC::ExecState*, JSC::PropertyName, JSC::PropertySlot&);
    static JSC::Structure* createStructure(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(vm, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), info());
    }

private:
    JSCSSPrimitiveValuePrototype(JSC::VM& vm, JSC::JSGlobalObject*, JSC::Structure* structure) : JSC::JSNonFinalObject(vm, structure) { }
protected:
    static const unsigned StructureFlags = JSC::OverridesGetOwnPropertySlot | Base::StructureFlags;
};

class JSCSSPrimitiveValueConstructor : public DOMConstructorObject {
private:
    JSCSSPrimitiveValueConstructor(JSC::Structure*, JSDOMGlobalObject*);
    void finishCreation(JSC::VM&, JSDOMGlobalObject*);

public:
    typedef DOMConstructorObject Base;
    static JSCSSPrimitiveValueConstructor* create(JSC::VM& vm, JSC::Structure* structure, JSDOMGlobalObject* globalObject)
    {
        JSCSSPrimitiveValueConstructor* ptr = new (NotNull, JSC::allocateCell<JSCSSPrimitiveValueConstructor>(vm.heap)) JSCSSPrimitiveValueConstructor(structure, globalObject);
        ptr->finishCreation(vm, globalObject);
        return ptr;
    }

    static bool getOwnPropertySlot(JSC::JSObject*, JSC::ExecState*, JSC::PropertyName, JSC::PropertySlot&);
    DECLARE_INFO;
    static JSC::Structure* createStructure(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(vm, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), info());
    }
protected:
    static const unsigned StructureFlags = JSC::OverridesGetOwnPropertySlot | JSC::ImplementsHasInstance | DOMConstructorObject::StructureFlags;
};

// Functions

JSC::EncodedJSValue JSC_HOST_CALL jsCSSPrimitiveValuePrototypeFunctionSetFloatValue(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsCSSPrimitiveValuePrototypeFunctionGetFloatValue(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsCSSPrimitiveValuePrototypeFunctionSetStringValue(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsCSSPrimitiveValuePrototypeFunctionGetStringValue(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsCSSPrimitiveValuePrototypeFunctionGetCounterValue(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsCSSPrimitiveValuePrototypeFunctionGetRectValue(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsCSSPrimitiveValuePrototypeFunctionGetRGBColorValue(JSC::ExecState*);
// Attributes

JSC::JSValue jsCSSPrimitiveValuePrimitiveType(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsCSSPrimitiveValueConstructor(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
// Constants

JSC::JSValue jsCSSPrimitiveValueCSS_UNKNOWN(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsCSSPrimitiveValueCSS_NUMBER(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsCSSPrimitiveValueCSS_PERCENTAGE(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsCSSPrimitiveValueCSS_EMS(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsCSSPrimitiveValueCSS_EXS(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsCSSPrimitiveValueCSS_PX(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsCSSPrimitiveValueCSS_CM(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsCSSPrimitiveValueCSS_MM(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsCSSPrimitiveValueCSS_IN(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsCSSPrimitiveValueCSS_PT(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsCSSPrimitiveValueCSS_PC(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsCSSPrimitiveValueCSS_DEG(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsCSSPrimitiveValueCSS_RAD(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsCSSPrimitiveValueCSS_GRAD(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsCSSPrimitiveValueCSS_MS(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsCSSPrimitiveValueCSS_S(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsCSSPrimitiveValueCSS_HZ(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsCSSPrimitiveValueCSS_KHZ(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsCSSPrimitiveValueCSS_DIMENSION(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsCSSPrimitiveValueCSS_STRING(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsCSSPrimitiveValueCSS_URI(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsCSSPrimitiveValueCSS_IDENT(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsCSSPrimitiveValueCSS_ATTR(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsCSSPrimitiveValueCSS_COUNTER(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsCSSPrimitiveValueCSS_RECT(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsCSSPrimitiveValueCSS_RGBCOLOR(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsCSSPrimitiveValueCSS_VW(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsCSSPrimitiveValueCSS_VH(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsCSSPrimitiveValueCSS_VMIN(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsCSSPrimitiveValueCSS_VMAX(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);

} // namespace WebCore

#endif
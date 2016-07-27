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

#ifndef JSMediaKeyEvent_h
#define JSMediaKeyEvent_h

#if ENABLE(ENCRYPTED_MEDIA)

#include "JSDOMBinding.h"
#include "JSEvent.h"
#include "MediaKeyEvent.h"
#include <runtime/JSObject.h>

namespace WebCore {

class JSDictionary;

class JSMediaKeyEvent : public JSEvent {
public:
    typedef JSEvent Base;
    static JSMediaKeyEvent* create(JSC::Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<MediaKeyEvent> impl)
    {
        JSMediaKeyEvent* ptr = new (NotNull, JSC::allocateCell<JSMediaKeyEvent>(globalObject->vm().heap)) JSMediaKeyEvent(structure, globalObject, impl);
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
    MediaKeyEvent& impl() const
    {
        return static_cast<MediaKeyEvent&>(Base::impl());
    }
protected:
    JSMediaKeyEvent(JSC::Structure*, JSDOMGlobalObject*, PassRefPtr<MediaKeyEvent>);
    void finishCreation(JSC::VM&);
    static const unsigned StructureFlags = JSC::OverridesGetOwnPropertySlot | JSC::InterceptsGetOwnPropertySlotByIndexEvenWhenLengthIsNotZero | Base::StructureFlags;
};


class JSMediaKeyEventPrototype : public JSC::JSNonFinalObject {
public:
    typedef JSC::JSNonFinalObject Base;
    static JSC::JSObject* self(JSC::VM&, JSC::JSGlobalObject*);
    static JSMediaKeyEventPrototype* create(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::Structure* structure)
    {
        JSMediaKeyEventPrototype* ptr = new (NotNull, JSC::allocateCell<JSMediaKeyEventPrototype>(vm.heap)) JSMediaKeyEventPrototype(vm, globalObject, structure);
        ptr->finishCreation(vm);
        return ptr;
    }

    DECLARE_INFO;
    static JSC::Structure* createStructure(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(vm, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), info());
    }

private:
    JSMediaKeyEventPrototype(JSC::VM& vm, JSC::JSGlobalObject*, JSC::Structure* structure) : JSC::JSNonFinalObject(vm, structure) { }
protected:
    static const unsigned StructureFlags = Base::StructureFlags;
};

class JSMediaKeyEventConstructor : public DOMConstructorObject {
private:
    JSMediaKeyEventConstructor(JSC::Structure*, JSDOMGlobalObject*);
    void finishCreation(JSC::VM&, JSDOMGlobalObject*);

public:
    typedef DOMConstructorObject Base;
    static JSMediaKeyEventConstructor* create(JSC::VM& vm, JSC::Structure* structure, JSDOMGlobalObject* globalObject)
    {
        JSMediaKeyEventConstructor* ptr = new (NotNull, JSC::allocateCell<JSMediaKeyEventConstructor>(vm.heap)) JSMediaKeyEventConstructor(structure, globalObject);
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
    static JSC::EncodedJSValue JSC_HOST_CALL constructJSMediaKeyEvent(JSC::ExecState*);
    static JSC::ConstructType getConstructData(JSC::JSCell*, JSC::ConstructData&);
};

bool fillMediaKeyEventInit(MediaKeyEventInit&, JSDictionary&);

// Attributes

JSC::JSValue jsMediaKeyEventKeySystem(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsMediaKeyEventSessionId(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsMediaKeyEventInitData(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsMediaKeyEventMessage(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsMediaKeyEventDefaultURL(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsMediaKeyEventErrorCode(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsMediaKeyEventSystemCode(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsMediaKeyEventConstructor(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);

} // namespace WebCore

#endif // ENABLE(ENCRYPTED_MEDIA)

#endif
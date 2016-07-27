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

#ifndef JSXSLTProcessor_h
#define JSXSLTProcessor_h

#if ENABLE(XSLT)

#include "JSDOMBinding.h"
#include "XSLTProcessor.h"
#include <runtime/JSGlobalObject.h>
#include <runtime/JSObject.h>
#include <runtime/ObjectPrototype.h>

namespace WebCore {

class JSXSLTProcessor : public JSDOMWrapper {
public:
    typedef JSDOMWrapper Base;
    static JSXSLTProcessor* create(JSC::Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<XSLTProcessor> impl)
    {
        JSXSLTProcessor* ptr = new (NotNull, JSC::allocateCell<JSXSLTProcessor>(globalObject->vm().heap)) JSXSLTProcessor(structure, globalObject, impl);
        ptr->finishCreation(globalObject->vm());
        return ptr;
    }

    static JSC::JSObject* createPrototype(JSC::VM&, JSC::JSGlobalObject*);
    static bool getOwnPropertySlot(JSC::JSObject*, JSC::ExecState*, JSC::PropertyName, JSC::PropertySlot&);
    static void destroy(JSC::JSCell*);
    ~JSXSLTProcessor();
    DECLARE_INFO;

    static JSC::Structure* createStructure(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(vm, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), info());
    }

    static JSC::JSValue getConstructor(JSC::VM&, JSC::JSGlobalObject*);

    // Custom functions
    JSC::JSValue setParameter(JSC::ExecState*);
    JSC::JSValue getParameter(JSC::ExecState*);
    JSC::JSValue removeParameter(JSC::ExecState*);
    XSLTProcessor& impl() const { return *m_impl; }
    void releaseImpl() { m_impl->deref(); m_impl = 0; }

    void releaseImplIfNotNull()
    {
        if (m_impl) {
            m_impl->deref();
            m_impl = 0;
        }
    }

private:
    XSLTProcessor* m_impl;
protected:
    JSXSLTProcessor(JSC::Structure*, JSDOMGlobalObject*, PassRefPtr<XSLTProcessor>);
    void finishCreation(JSC::VM&);
    static const unsigned StructureFlags = JSC::OverridesGetOwnPropertySlot | JSC::InterceptsGetOwnPropertySlotByIndexEvenWhenLengthIsNotZero | Base::StructureFlags;
};

class JSXSLTProcessorOwner : public JSC::WeakHandleOwner {
public:
    virtual bool isReachableFromOpaqueRoots(JSC::Handle<JSC::Unknown>, void* context, JSC::SlotVisitor&);
    virtual void finalize(JSC::Handle<JSC::Unknown>, void* context);
};

inline JSC::WeakHandleOwner* wrapperOwner(DOMWrapperWorld&, XSLTProcessor*)
{
    DEFINE_STATIC_LOCAL(JSXSLTProcessorOwner, jsXSLTProcessorOwner, ());
    return &jsXSLTProcessorOwner;
}

inline void* wrapperContext(DOMWrapperWorld& world, XSLTProcessor*)
{
    return &world;
}

JSC::JSValue toJS(JSC::ExecState*, JSDOMGlobalObject*, XSLTProcessor*);
XSLTProcessor* toXSLTProcessor(JSC::JSValue);

class JSXSLTProcessorPrototype : public JSC::JSNonFinalObject {
public:
    typedef JSC::JSNonFinalObject Base;
    static JSC::JSObject* self(JSC::VM&, JSC::JSGlobalObject*);
    static JSXSLTProcessorPrototype* create(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::Structure* structure)
    {
        JSXSLTProcessorPrototype* ptr = new (NotNull, JSC::allocateCell<JSXSLTProcessorPrototype>(vm.heap)) JSXSLTProcessorPrototype(vm, globalObject, structure);
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
    JSXSLTProcessorPrototype(JSC::VM& vm, JSC::JSGlobalObject*, JSC::Structure* structure) : JSC::JSNonFinalObject(vm, structure) { }
protected:
    static const unsigned StructureFlags = JSC::OverridesGetOwnPropertySlot | Base::StructureFlags;
};

class JSXSLTProcessorConstructor : public DOMConstructorObject {
private:
    JSXSLTProcessorConstructor(JSC::Structure*, JSDOMGlobalObject*);
    void finishCreation(JSC::VM&, JSDOMGlobalObject*);

public:
    typedef DOMConstructorObject Base;
    static JSXSLTProcessorConstructor* create(JSC::VM& vm, JSC::Structure* structure, JSDOMGlobalObject* globalObject)
    {
        JSXSLTProcessorConstructor* ptr = new (NotNull, JSC::allocateCell<JSXSLTProcessorConstructor>(vm.heap)) JSXSLTProcessorConstructor(structure, globalObject);
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
    static JSC::EncodedJSValue JSC_HOST_CALL constructJSXSLTProcessor(JSC::ExecState*);
    static JSC::ConstructType getConstructData(JSC::JSCell*, JSC::ConstructData&);
};

// Functions

JSC::EncodedJSValue JSC_HOST_CALL jsXSLTProcessorPrototypeFunctionImportStylesheet(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsXSLTProcessorPrototypeFunctionTransformToFragment(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsXSLTProcessorPrototypeFunctionTransformToDocument(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsXSLTProcessorPrototypeFunctionSetParameter(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsXSLTProcessorPrototypeFunctionGetParameter(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsXSLTProcessorPrototypeFunctionRemoveParameter(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsXSLTProcessorPrototypeFunctionClearParameters(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsXSLTProcessorPrototypeFunctionReset(JSC::ExecState*);
// Attributes

JSC::JSValue jsXSLTProcessorConstructor(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);

} // namespace WebCore

#endif // ENABLE(XSLT)

#endif
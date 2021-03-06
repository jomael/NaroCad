// File generated by CPPExt (Transient)
//
#ifndef _ShapeExtend_BasicMsgRegistrator_OCWrappers_HeaderFile
#define _ShapeExtend_BasicMsgRegistrator_OCWrappers_HeaderFile

// include the wrapped class
#include <ShapeExtend_BasicMsgRegistrator.hxx>
#include "../Converter.h"

#include "../MMgt/MMgt_TShared.h"

#include "../Message/Message_Gravity.h"


namespace OCNaroWrappers
{

ref class OCStandard_Transient;
ref class OCMessage_Msg;
ref class OCTopoDS_Shape;


//! Abstract class that can be used for attaching messages <br>
//!          to the objects (e.g. shapes). <br>
//!          It is used by ShapeHealing algorithms to attach a message <br>
//!          describing encountered case (e.g. removing small edge from <br>
//!          a wire). <br>
public ref class OCShapeExtend_BasicMsgRegistrator : OCMMgt_TShared {

protected:
  // dummy constructor;
  OCShapeExtend_BasicMsgRegistrator(OCDummy^) : OCMMgt_TShared((OCDummy^)nullptr) {};

public:

// constructor from native
OCShapeExtend_BasicMsgRegistrator(Handle(ShapeExtend_BasicMsgRegistrator)* nativeHandle);

// Methods PUBLIC

//! Empty constructor. <br>
OCShapeExtend_BasicMsgRegistrator();

//! Sends a message to be attached to the object. <br>
//!          Object can be of any type interpreted by redefined MsgRegistrator. <br>
virtual /*instead*/  void Send(OCNaroWrappers::OCStandard_Transient^ object, OCNaroWrappers::OCMessage_Msg^ message, OCMessage_Gravity gravity) ;

//! Sends a message to be attached to the shape. <br>
virtual /*instead*/  void Send(OCNaroWrappers::OCTopoDS_Shape^ shape, OCNaroWrappers::OCMessage_Msg^ message, OCMessage_Gravity gravity) ;

//! Calls Send method with Null Transient. <br>
virtual /*instead*/  void Send(OCNaroWrappers::OCMessage_Msg^ message, OCMessage_Gravity gravity) ;

~OCShapeExtend_BasicMsgRegistrator()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif

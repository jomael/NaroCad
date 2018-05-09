// File generated by CPPExt (Transient)
//
#ifndef _StepBasic_ApplicationContextElement_OCWrappers_HeaderFile
#define _StepBasic_ApplicationContextElement_OCWrappers_HeaderFile

// include the wrapped class
#include <StepBasic_ApplicationContextElement.hxx>
#include "../Converter.h"

#include "../MMgt/MMgt_TShared.h"



namespace OCNaroWrappers
{

ref class OCTCollection_HAsciiString;
ref class OCStepBasic_ApplicationContext;



public ref class OCStepBasic_ApplicationContextElement : OCMMgt_TShared {

protected:
  // dummy constructor;
  OCStepBasic_ApplicationContextElement(OCDummy^) : OCMMgt_TShared((OCDummy^)nullptr) {};

public:

// constructor from native
OCStepBasic_ApplicationContextElement(Handle(StepBasic_ApplicationContextElement)* nativeHandle);

// Methods PUBLIC

//! Returns a ApplicationContextElement <br>
OCStepBasic_ApplicationContextElement();


virtual /*instead*/  void Init(OCNaroWrappers::OCTCollection_HAsciiString^ aName, OCNaroWrappers::OCStepBasic_ApplicationContext^ aFrameOfReference) ;


 /*instead*/  void SetName(OCNaroWrappers::OCTCollection_HAsciiString^ aName) ;


 /*instead*/  OCTCollection_HAsciiString^ Name() ;


 /*instead*/  void SetFrameOfReference(OCNaroWrappers::OCStepBasic_ApplicationContext^ aFrameOfReference) ;


 /*instead*/  OCStepBasic_ApplicationContext^ FrameOfReference() ;

~OCStepBasic_ApplicationContextElement()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif

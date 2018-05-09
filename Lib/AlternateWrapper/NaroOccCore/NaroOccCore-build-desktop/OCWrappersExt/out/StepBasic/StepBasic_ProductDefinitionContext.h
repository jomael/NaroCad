// File generated by CPPExt (Transient)
//
#ifndef _StepBasic_ProductDefinitionContext_OCWrappers_HeaderFile
#define _StepBasic_ProductDefinitionContext_OCWrappers_HeaderFile

// include the wrapped class
#include <StepBasic_ProductDefinitionContext.hxx>
#include "../Converter.h"

#include "StepBasic_ApplicationContextElement.h"



namespace OCNaroWrappers
{

ref class OCTCollection_HAsciiString;
ref class OCStepBasic_ApplicationContext;



public ref class OCStepBasic_ProductDefinitionContext : OCStepBasic_ApplicationContextElement {

protected:
  // dummy constructor;
  OCStepBasic_ProductDefinitionContext(OCDummy^) : OCStepBasic_ApplicationContextElement((OCDummy^)nullptr) {};

public:

// constructor from native
OCStepBasic_ProductDefinitionContext(Handle(StepBasic_ProductDefinitionContext)* nativeHandle);

// Methods PUBLIC

//! Returns a ProductDefinitionContext <br>
OCStepBasic_ProductDefinitionContext();


virtual /*instead*/  void Init(OCNaroWrappers::OCTCollection_HAsciiString^ aName, OCNaroWrappers::OCStepBasic_ApplicationContext^ aFrameOfReference) override;


virtual /*instead*/  void Init(OCNaroWrappers::OCTCollection_HAsciiString^ aName, OCNaroWrappers::OCStepBasic_ApplicationContext^ aFrameOfReference, OCNaroWrappers::OCTCollection_HAsciiString^ aLifeCycleStage) ;


 /*instead*/  void SetLifeCycleStage(OCNaroWrappers::OCTCollection_HAsciiString^ aLifeCycleStage) ;


 /*instead*/  OCTCollection_HAsciiString^ LifeCycleStage() ;

~OCStepBasic_ProductDefinitionContext()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
// File generated by CPPExt (Transient)
//
#ifndef _StepBasic_DocumentProductEquivalence_OCWrappers_HeaderFile
#define _StepBasic_DocumentProductEquivalence_OCWrappers_HeaderFile

// include the wrapped class
#include <StepBasic_DocumentProductEquivalence.hxx>
#include "../Converter.h"

#include "StepBasic_DocumentProductAssociation.h"



namespace OCNaroWrappers
{



//! Representation of STEP entity DocumentProductEquivalence <br>
public ref class OCStepBasic_DocumentProductEquivalence : OCStepBasic_DocumentProductAssociation {

protected:
  // dummy constructor;
  OCStepBasic_DocumentProductEquivalence(OCDummy^) : OCStepBasic_DocumentProductAssociation((OCDummy^)nullptr) {};

public:

// constructor from native
OCStepBasic_DocumentProductEquivalence(Handle(StepBasic_DocumentProductEquivalence)* nativeHandle);

// Methods PUBLIC

//! Empty constructor <br>
OCStepBasic_DocumentProductEquivalence();

~OCStepBasic_DocumentProductEquivalence()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif

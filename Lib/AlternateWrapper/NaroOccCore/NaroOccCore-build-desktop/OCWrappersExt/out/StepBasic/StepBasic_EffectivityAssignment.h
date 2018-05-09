// File generated by CPPExt (Transient)
//
#ifndef _StepBasic_EffectivityAssignment_OCWrappers_HeaderFile
#define _StepBasic_EffectivityAssignment_OCWrappers_HeaderFile

// include the wrapped class
#include <StepBasic_EffectivityAssignment.hxx>
#include "../Converter.h"

#include "../MMgt/MMgt_TShared.h"



namespace OCNaroWrappers
{

ref class OCStepBasic_Effectivity;


//! Representation of STEP entity EffectivityAssignment <br>
public ref class OCStepBasic_EffectivityAssignment : OCMMgt_TShared {

protected:
  // dummy constructor;
  OCStepBasic_EffectivityAssignment(OCDummy^) : OCMMgt_TShared((OCDummy^)nullptr) {};

public:

// constructor from native
OCStepBasic_EffectivityAssignment(Handle(StepBasic_EffectivityAssignment)* nativeHandle);

// Methods PUBLIC

//! Empty constructor <br>
OCStepBasic_EffectivityAssignment();

//! Initialize all fields (own and inherited) <br>
 /*instead*/  void Init(OCNaroWrappers::OCStepBasic_Effectivity^ aAssignedEffectivity) ;

//! Returns field AssignedEffectivity <br>
 /*instead*/  OCStepBasic_Effectivity^ AssignedEffectivity() ;

//! Set field AssignedEffectivity <br>
 /*instead*/  void SetAssignedEffectivity(OCNaroWrappers::OCStepBasic_Effectivity^ AssignedEffectivity) ;

~OCStepBasic_EffectivityAssignment()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif

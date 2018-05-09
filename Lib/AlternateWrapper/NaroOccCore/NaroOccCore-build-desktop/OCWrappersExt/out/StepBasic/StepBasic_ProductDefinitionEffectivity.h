// File generated by CPPExt (Transient)
//
#ifndef _StepBasic_ProductDefinitionEffectivity_OCWrappers_HeaderFile
#define _StepBasic_ProductDefinitionEffectivity_OCWrappers_HeaderFile

// include the wrapped class
#include <StepBasic_ProductDefinitionEffectivity.hxx>
#include "../Converter.h"

#include "StepBasic_Effectivity.h"



namespace OCNaroWrappers
{

ref class OCStepBasic_ProductDefinitionRelationship;
ref class OCTCollection_HAsciiString;



public ref class OCStepBasic_ProductDefinitionEffectivity : OCStepBasic_Effectivity {

protected:
  // dummy constructor;
  OCStepBasic_ProductDefinitionEffectivity(OCDummy^) : OCStepBasic_Effectivity((OCDummy^)nullptr) {};

public:

// constructor from native
OCStepBasic_ProductDefinitionEffectivity(Handle(StepBasic_ProductDefinitionEffectivity)* nativeHandle);

// Methods PUBLIC


OCStepBasic_ProductDefinitionEffectivity();


 /*instead*/  void Init(OCNaroWrappers::OCTCollection_HAsciiString^ aId, OCNaroWrappers::OCStepBasic_ProductDefinitionRelationship^ aUsage) ;


 /*instead*/  OCStepBasic_ProductDefinitionRelationship^ Usage() ;


 /*instead*/  void SetUsage(OCNaroWrappers::OCStepBasic_ProductDefinitionRelationship^ aUsage) ;

~OCStepBasic_ProductDefinitionEffectivity()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif

// File generated by CPPExt (Transient)
//
#ifndef _StepBasic_SiUnitAndRatioUnit_OCWrappers_HeaderFile
#define _StepBasic_SiUnitAndRatioUnit_OCWrappers_HeaderFile

// include the wrapped class
#include <StepBasic_SiUnitAndRatioUnit.hxx>
#include "../Converter.h"

#include "StepBasic_SiUnit.h"

#include "StepBasic_SiPrefix.h"
#include "StepBasic_SiUnitName.h"


namespace OCNaroWrappers
{

ref class OCStepBasic_RatioUnit;
ref class OCStepBasic_DimensionalExponents;



public ref class OCStepBasic_SiUnitAndRatioUnit : OCStepBasic_SiUnit {

protected:
  // dummy constructor;
  OCStepBasic_SiUnitAndRatioUnit(OCDummy^) : OCStepBasic_SiUnit((OCDummy^)nullptr) {};

public:

// constructor from native
OCStepBasic_SiUnitAndRatioUnit(Handle(StepBasic_SiUnitAndRatioUnit)* nativeHandle);

// Methods PUBLIC

//! Returns a SiUnitAndRatioUnit <br>
OCStepBasic_SiUnitAndRatioUnit();


virtual /*instead*/  void Init(OCNaroWrappers::OCStepBasic_DimensionalExponents^ aDimensions) override;


virtual /*instead*/  void Init(System::Boolean hasAprefix, OCStepBasic_SiPrefix aPrefix, OCStepBasic_SiUnitName aName) override;


 /*instead*/  void SetRatioUnit(OCNaroWrappers::OCStepBasic_RatioUnit^ aRatioUnit) ;


 /*instead*/  OCStepBasic_RatioUnit^ RatioUnit() ;

~OCStepBasic_SiUnitAndRatioUnit()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif

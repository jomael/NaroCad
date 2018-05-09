// File generated by CPPExt (Transient)
//
#ifndef _StepBasic_ConversionBasedUnitAndTimeUnit_OCWrappers_HeaderFile
#define _StepBasic_ConversionBasedUnitAndTimeUnit_OCWrappers_HeaderFile

// include the wrapped class
#include <StepBasic_ConversionBasedUnitAndTimeUnit.hxx>
#include "../Converter.h"

#include "StepBasic_ConversionBasedUnit.h"



namespace OCNaroWrappers
{

ref class OCStepBasic_TimeUnit;
ref class OCStepBasic_DimensionalExponents;
ref class OCTCollection_HAsciiString;
ref class OCStepBasic_MeasureWithUnit;



public ref class OCStepBasic_ConversionBasedUnitAndTimeUnit : OCStepBasic_ConversionBasedUnit {

protected:
  // dummy constructor;
  OCStepBasic_ConversionBasedUnitAndTimeUnit(OCDummy^) : OCStepBasic_ConversionBasedUnit((OCDummy^)nullptr) {};

public:

// constructor from native
OCStepBasic_ConversionBasedUnitAndTimeUnit(Handle(StepBasic_ConversionBasedUnitAndTimeUnit)* nativeHandle);

// Methods PUBLIC

//! Returns a ConversionBasedUnitAndTimeUnit <br>
OCStepBasic_ConversionBasedUnitAndTimeUnit();


virtual /*instead*/  void Init(OCNaroWrappers::OCStepBasic_DimensionalExponents^ aDimensions) override;


virtual /*instead*/  void Init(OCNaroWrappers::OCStepBasic_DimensionalExponents^ aDimensions, OCNaroWrappers::OCTCollection_HAsciiString^ aName, OCNaroWrappers::OCStepBasic_MeasureWithUnit^ aConversionFactor) override;


 /*instead*/  void SetTimeUnit(OCNaroWrappers::OCStepBasic_TimeUnit^ aTimeUnit) ;


 /*instead*/  OCStepBasic_TimeUnit^ TimeUnit() ;

~OCStepBasic_ConversionBasedUnitAndTimeUnit()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif

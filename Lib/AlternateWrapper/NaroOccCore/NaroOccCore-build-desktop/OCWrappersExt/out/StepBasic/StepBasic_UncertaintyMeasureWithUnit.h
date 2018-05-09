// File generated by CPPExt (Transient)
//
#ifndef _StepBasic_UncertaintyMeasureWithUnit_OCWrappers_HeaderFile
#define _StepBasic_UncertaintyMeasureWithUnit_OCWrappers_HeaderFile

// include the wrapped class
#include <StepBasic_UncertaintyMeasureWithUnit.hxx>
#include "../Converter.h"

#include "StepBasic_MeasureWithUnit.h"



namespace OCNaroWrappers
{

ref class OCTCollection_HAsciiString;
ref class OCStepBasic_MeasureValueMember;
ref class OCStepBasic_Unit;



public ref class OCStepBasic_UncertaintyMeasureWithUnit : OCStepBasic_MeasureWithUnit {

protected:
  // dummy constructor;
  OCStepBasic_UncertaintyMeasureWithUnit(OCDummy^) : OCStepBasic_MeasureWithUnit((OCDummy^)nullptr) {};

public:

// constructor from native
OCStepBasic_UncertaintyMeasureWithUnit(Handle(StepBasic_UncertaintyMeasureWithUnit)* nativeHandle);

// Methods PUBLIC

//! Returns a UncertaintyMeasureWithUnit <br>
OCStepBasic_UncertaintyMeasureWithUnit();


virtual /*instead*/  void Init(OCNaroWrappers::OCStepBasic_MeasureValueMember^ aValueComponent, OCNaroWrappers::OCStepBasic_Unit^ aUnitComponent) override;


virtual /*instead*/  void Init(OCNaroWrappers::OCStepBasic_MeasureValueMember^ aValueComponent, OCNaroWrappers::OCStepBasic_Unit^ aUnitComponent, OCNaroWrappers::OCTCollection_HAsciiString^ aName, OCNaroWrappers::OCTCollection_HAsciiString^ aDescription) ;


 /*instead*/  void SetName(OCNaroWrappers::OCTCollection_HAsciiString^ aName) ;


 /*instead*/  OCTCollection_HAsciiString^ Name() ;


 /*instead*/  void SetDescription(OCNaroWrappers::OCTCollection_HAsciiString^ aDescription) ;


 /*instead*/  OCTCollection_HAsciiString^ Description() ;

~OCStepBasic_UncertaintyMeasureWithUnit()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif

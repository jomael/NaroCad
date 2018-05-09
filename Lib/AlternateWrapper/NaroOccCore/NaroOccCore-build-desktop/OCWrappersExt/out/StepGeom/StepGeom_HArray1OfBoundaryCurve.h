// File generated by CPPExt (Transient)
//
#ifndef _StepGeom_HArray1OfBoundaryCurve_OCWrappers_HeaderFile
#define _StepGeom_HArray1OfBoundaryCurve_OCWrappers_HeaderFile

// include the wrapped class
#include <StepGeom_HArray1OfBoundaryCurve.hxx>
#include "../Converter.h"

#include "../MMgt/MMgt_TShared.h"

#include "StepGeom_Array1OfBoundaryCurve.h"


namespace OCNaroWrappers
{

ref class OCStepGeom_BoundaryCurve;
ref class OCStepGeom_Array1OfBoundaryCurve;



public ref class OCStepGeom_HArray1OfBoundaryCurve : OCMMgt_TShared {

protected:
  // dummy constructor;
  OCStepGeom_HArray1OfBoundaryCurve(OCDummy^) : OCMMgt_TShared((OCDummy^)nullptr) {};

public:

// constructor from native
OCStepGeom_HArray1OfBoundaryCurve(Handle(StepGeom_HArray1OfBoundaryCurve)* nativeHandle);

// Methods PUBLIC


OCStepGeom_HArray1OfBoundaryCurve(Standard_Integer Low, Standard_Integer Up);


OCStepGeom_HArray1OfBoundaryCurve(Standard_Integer Low, Standard_Integer Up, OCNaroWrappers::OCStepGeom_BoundaryCurve^ V);


 /*instead*/  void Init(OCNaroWrappers::OCStepGeom_BoundaryCurve^ V) ;


 /*instead*/  Standard_Integer Length() ;


 /*instead*/  Standard_Integer Lower() ;


 /*instead*/  Standard_Integer Upper() ;


 /*instead*/  void SetValue(Standard_Integer Index, OCNaroWrappers::OCStepGeom_BoundaryCurve^ Value) ;


 /*instead*/  OCStepGeom_BoundaryCurve^ Value(Standard_Integer Index) ;


 /*instead*/  OCStepGeom_BoundaryCurve^ ChangeValue(Standard_Integer Index) ;


 /*instead*/  OCStepGeom_Array1OfBoundaryCurve^ Array1() ;


 /*instead*/  OCStepGeom_Array1OfBoundaryCurve^ ChangeArray1() ;

~OCStepGeom_HArray1OfBoundaryCurve()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif

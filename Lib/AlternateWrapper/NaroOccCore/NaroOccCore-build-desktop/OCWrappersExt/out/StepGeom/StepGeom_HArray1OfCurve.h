// File generated by CPPExt (Transient)
//
#ifndef _StepGeom_HArray1OfCurve_OCWrappers_HeaderFile
#define _StepGeom_HArray1OfCurve_OCWrappers_HeaderFile

// include the wrapped class
#include <StepGeom_HArray1OfCurve.hxx>
#include "../Converter.h"

#include "../MMgt/MMgt_TShared.h"

#include "StepGeom_Array1OfCurve.h"


namespace OCNaroWrappers
{

ref class OCStepGeom_Curve;
ref class OCStepGeom_Array1OfCurve;



public ref class OCStepGeom_HArray1OfCurve : OCMMgt_TShared {

protected:
  // dummy constructor;
  OCStepGeom_HArray1OfCurve(OCDummy^) : OCMMgt_TShared((OCDummy^)nullptr) {};

public:

// constructor from native
OCStepGeom_HArray1OfCurve(Handle(StepGeom_HArray1OfCurve)* nativeHandle);

// Methods PUBLIC


OCStepGeom_HArray1OfCurve(Standard_Integer Low, Standard_Integer Up);


OCStepGeom_HArray1OfCurve(Standard_Integer Low, Standard_Integer Up, OCNaroWrappers::OCStepGeom_Curve^ V);


 /*instead*/  void Init(OCNaroWrappers::OCStepGeom_Curve^ V) ;


 /*instead*/  Standard_Integer Length() ;


 /*instead*/  Standard_Integer Lower() ;


 /*instead*/  Standard_Integer Upper() ;


 /*instead*/  void SetValue(Standard_Integer Index, OCNaroWrappers::OCStepGeom_Curve^ Value) ;


 /*instead*/  OCStepGeom_Curve^ Value(Standard_Integer Index) ;


 /*instead*/  OCStepGeom_Curve^ ChangeValue(Standard_Integer Index) ;


 /*instead*/  OCStepGeom_Array1OfCurve^ Array1() ;


 /*instead*/  OCStepGeom_Array1OfCurve^ ChangeArray1() ;

~OCStepGeom_HArray1OfCurve()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif

// File generated by CPPExt (MPV)
//
#ifndef _StepGeom_BSplineSurfaceWithKnotsAndRationalBSplineSurface_OCWrappers_HeaderFile
#define _StepGeom_BSplineSurfaceWithKnotsAndRationalBSplineSurface_OCWrappers_HeaderFile

// include native header
#include <StepGeom_BSplineSurfaceWithKnotsAndRationalBSplineSurface.hxx>
#include "../Converter.h"

#include "StepGeom_BSplineSurface.h"

#include "StepGeom_BSplineSurfaceWithKnots.h"
#include "StepGeom_RationalBSplineSurface.h"
#include "StepGeom_BSplineSurface.h"
#include "StepGeom_BSplineSurfaceForm.h"
#include "../StepData/StepData_Logical.h"
#include "StepGeom_KnotType.h"


namespace OCNaroWrappers
{

ref class OCTCollection_HAsciiString;
ref class OCStepGeom_HArray2OfCartesianPoint;
ref class OCStepGeom_BSplineSurfaceWithKnots;
ref class OCStepGeom_RationalBSplineSurface;
ref class OCTColStd_HArray1OfInteger;
ref class OCTColStd_HArray1OfReal;
ref class OCTColStd_HArray2OfReal;



public ref class OCStepGeom_BSplineSurfaceWithKnotsAndRationalBSplineSurface  : public OCStepGeom_BSplineSurface {

protected:
  // dummy constructor;
  OCStepGeom_BSplineSurfaceWithKnotsAndRationalBSplineSurface(OCDummy^) : OCStepGeom_BSplineSurface((OCDummy^)nullptr) {};

public:

// constructor from native
OCStepGeom_BSplineSurfaceWithKnotsAndRationalBSplineSurface(StepGeom_BSplineSurfaceWithKnotsAndRationalBSplineSurface* nativeHandle);

// Methods PUBLIC

//! Returns a BSplineSurfaceWithKnotsAndRationalBSplineSurface <br>
OCStepGeom_BSplineSurfaceWithKnotsAndRationalBSplineSurface();


virtual /*instead*/  void Init(OCNaroWrappers::OCTCollection_HAsciiString^ aName, Standard_Integer aUDegree, Standard_Integer aVDegree, OCNaroWrappers::OCStepGeom_HArray2OfCartesianPoint^ aControlPointsList, OCStepGeom_BSplineSurfaceForm aSurfaceForm, OCStepData_Logical aUClosed, OCStepData_Logical aVClosed, OCStepData_Logical aSelfIntersect) override;


virtual /*instead*/  void Init(OCNaroWrappers::OCTCollection_HAsciiString^ aName, Standard_Integer aUDegree, Standard_Integer aVDegree, OCNaroWrappers::OCStepGeom_HArray2OfCartesianPoint^ aControlPointsList, OCStepGeom_BSplineSurfaceForm aSurfaceForm, OCStepData_Logical aUClosed, OCStepData_Logical aVClosed, OCStepData_Logical aSelfIntersect, OCNaroWrappers::OCStepGeom_BSplineSurfaceWithKnots^ aBSplineSurfaceWithKnots, OCNaroWrappers::OCStepGeom_RationalBSplineSurface^ aRationalBSplineSurface) ;


virtual /*instead*/  void Init(OCNaroWrappers::OCTCollection_HAsciiString^ aName, Standard_Integer aUDegree, Standard_Integer aVDegree, OCNaroWrappers::OCStepGeom_HArray2OfCartesianPoint^ aControlPointsList, OCStepGeom_BSplineSurfaceForm aSurfaceForm, OCStepData_Logical aUClosed, OCStepData_Logical aVClosed, OCStepData_Logical aSelfIntersect, OCNaroWrappers::OCTColStd_HArray1OfInteger^ aUMultiplicities, OCNaroWrappers::OCTColStd_HArray1OfInteger^ aVMultiplicities, OCNaroWrappers::OCTColStd_HArray1OfReal^ aUKnots, OCNaroWrappers::OCTColStd_HArray1OfReal^ aVKnots, OCStepGeom_KnotType aKnotSpec, OCNaroWrappers::OCTColStd_HArray2OfReal^ aWeightsData) ;


 /*instead*/  void SetBSplineSurfaceWithKnots(OCNaroWrappers::OCStepGeom_BSplineSurfaceWithKnots^ aBSplineSurfaceWithKnots) ;


 /*instead*/  OCStepGeom_BSplineSurfaceWithKnots^ BSplineSurfaceWithKnots() ;


 /*instead*/  void SetRationalBSplineSurface(OCNaroWrappers::OCStepGeom_RationalBSplineSurface^ aRationalBSplineSurface) ;


 /*instead*/  OCStepGeom_RationalBSplineSurface^ RationalBSplineSurface() ;


 /*instead*/  void SetUMultiplicities(OCNaroWrappers::OCTColStd_HArray1OfInteger^ aUMultiplicities) ;


 /*instead*/  OCTColStd_HArray1OfInteger^ UMultiplicities() ;


 /*instead*/  Standard_Integer UMultiplicitiesValue(Standard_Integer num) ;


 /*instead*/  Standard_Integer NbUMultiplicities() ;


 /*instead*/  void SetVMultiplicities(OCNaroWrappers::OCTColStd_HArray1OfInteger^ aVMultiplicities) ;


 /*instead*/  OCTColStd_HArray1OfInteger^ VMultiplicities() ;


 /*instead*/  Standard_Integer VMultiplicitiesValue(Standard_Integer num) ;


 /*instead*/  Standard_Integer NbVMultiplicities() ;


 /*instead*/  void SetUKnots(OCNaroWrappers::OCTColStd_HArray1OfReal^ aUKnots) ;


 /*instead*/  OCTColStd_HArray1OfReal^ UKnots() ;


 /*instead*/  Standard_Real UKnotsValue(Standard_Integer num) ;


 /*instead*/  Standard_Integer NbUKnots() ;


 /*instead*/  void SetVKnots(OCNaroWrappers::OCTColStd_HArray1OfReal^ aVKnots) ;


 /*instead*/  OCTColStd_HArray1OfReal^ VKnots() ;


 /*instead*/  Standard_Real VKnotsValue(Standard_Integer num) ;


 /*instead*/  Standard_Integer NbVKnots() ;


 /*instead*/  void SetKnotSpec(OCStepGeom_KnotType aKnotSpec) ;


 /*instead*/  OCStepGeom_KnotType KnotSpec() ;


 /*instead*/  void SetWeightsData(OCNaroWrappers::OCTColStd_HArray2OfReal^ aWeightsData) ;


 /*instead*/  OCTColStd_HArray2OfReal^ WeightsData() ;


 /*instead*/  Standard_Real WeightsDataValue(Standard_Integer num1, Standard_Integer num2) ;


 /*instead*/  Standard_Integer NbWeightsDataI() ;


 /*instead*/  Standard_Integer NbWeightsDataJ() ;

~OCStepGeom_BSplineSurfaceWithKnotsAndRationalBSplineSurface()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif

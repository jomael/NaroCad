// File generated by CPPExt (MPV)
//
#ifndef _StepGeom_UniformSurfaceAndRationalBSplineSurface_OCWrappers_HeaderFile
#define _StepGeom_UniformSurfaceAndRationalBSplineSurface_OCWrappers_HeaderFile

// include native header
#include <StepGeom_UniformSurfaceAndRationalBSplineSurface.hxx>
#include "../Converter.h"

#include "StepGeom_BSplineSurface.h"

#include "StepGeom_UniformSurface.h"
#include "StepGeom_RationalBSplineSurface.h"
#include "StepGeom_BSplineSurface.h"
#include "StepGeom_BSplineSurfaceForm.h"
#include "../StepData/StepData_Logical.h"


namespace OCNaroWrappers
{

ref class OCTCollection_HAsciiString;
ref class OCStepGeom_HArray2OfCartesianPoint;
ref class OCStepGeom_UniformSurface;
ref class OCStepGeom_RationalBSplineSurface;
ref class OCTColStd_HArray2OfReal;



public ref class OCStepGeom_UniformSurfaceAndRationalBSplineSurface  : public OCStepGeom_BSplineSurface {

protected:
  // dummy constructor;
  OCStepGeom_UniformSurfaceAndRationalBSplineSurface(OCDummy^) : OCStepGeom_BSplineSurface((OCDummy^)nullptr) {};

public:

// constructor from native
OCStepGeom_UniformSurfaceAndRationalBSplineSurface(StepGeom_UniformSurfaceAndRationalBSplineSurface* nativeHandle);

// Methods PUBLIC

//! Returns a UniformSurfaceAndRationalBSplineSurface <br>
OCStepGeom_UniformSurfaceAndRationalBSplineSurface();


virtual /*instead*/  void Init(OCNaroWrappers::OCTCollection_HAsciiString^ aName, Standard_Integer aUDegree, Standard_Integer aVDegree, OCNaroWrappers::OCStepGeom_HArray2OfCartesianPoint^ aControlPointsList, OCStepGeom_BSplineSurfaceForm aSurfaceForm, OCStepData_Logical aUClosed, OCStepData_Logical aVClosed, OCStepData_Logical aSelfIntersect) override;


virtual /*instead*/  void Init(OCNaroWrappers::OCTCollection_HAsciiString^ aName, Standard_Integer aUDegree, Standard_Integer aVDegree, OCNaroWrappers::OCStepGeom_HArray2OfCartesianPoint^ aControlPointsList, OCStepGeom_BSplineSurfaceForm aSurfaceForm, OCStepData_Logical aUClosed, OCStepData_Logical aVClosed, OCStepData_Logical aSelfIntersect, OCNaroWrappers::OCStepGeom_UniformSurface^ aUniformSurface, OCNaroWrappers::OCStepGeom_RationalBSplineSurface^ aRationalBSplineSurface) ;


virtual /*instead*/  void Init(OCNaroWrappers::OCTCollection_HAsciiString^ aName, Standard_Integer aUDegree, Standard_Integer aVDegree, OCNaroWrappers::OCStepGeom_HArray2OfCartesianPoint^ aControlPointsList, OCStepGeom_BSplineSurfaceForm aSurfaceForm, OCStepData_Logical aUClosed, OCStepData_Logical aVClosed, OCStepData_Logical aSelfIntersect, OCNaroWrappers::OCTColStd_HArray2OfReal^ aWeightsData) ;


 /*instead*/  void SetUniformSurface(OCNaroWrappers::OCStepGeom_UniformSurface^ aUniformSurface) ;


 /*instead*/  OCStepGeom_UniformSurface^ UniformSurface() ;


 /*instead*/  void SetRationalBSplineSurface(OCNaroWrappers::OCStepGeom_RationalBSplineSurface^ aRationalBSplineSurface) ;


 /*instead*/  OCStepGeom_RationalBSplineSurface^ RationalBSplineSurface() ;


 /*instead*/  void SetWeightsData(OCNaroWrappers::OCTColStd_HArray2OfReal^ aWeightsData) ;


 /*instead*/  OCTColStd_HArray2OfReal^ WeightsData() ;


 /*instead*/  Standard_Real WeightsDataValue(Standard_Integer num1, Standard_Integer num2) ;


 /*instead*/  Standard_Integer NbWeightsDataI() ;


 /*instead*/  Standard_Integer NbWeightsDataJ() ;

~OCStepGeom_UniformSurfaceAndRationalBSplineSurface()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif

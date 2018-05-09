// File generated by CPPExt (CPP file)
//

#include "StepGeom_ToroidalSurface.h"
#include "../Converter.h"
#include "../TCollection/TCollection_HAsciiString.h"
#include "StepGeom_Axis2Placement3d.h"


using namespace OCNaroWrappers;

OCStepGeom_ToroidalSurface::OCStepGeom_ToroidalSurface(StepGeom_ToroidalSurface* nativeHandle) : OCStepGeom_ElementarySurface((OCDummy^)nullptr)

{
  this->nativeHandle = nativeHandle;
}

OCStepGeom_ToroidalSurface::OCStepGeom_ToroidalSurface() : OCStepGeom_ElementarySurface((OCDummy^)nullptr)

{
  nativeHandle = new StepGeom_ToroidalSurface();
}

 void OCStepGeom_ToroidalSurface::Init(OCNaroWrappers::OCTCollection_HAsciiString^ aName, OCNaroWrappers::OCStepGeom_Axis2Placement3d^ aPosition)
{
  ((StepGeom_ToroidalSurface*)nativeHandle)->Init(*((Handle_TCollection_HAsciiString*)aName->Handle), *((StepGeom_Axis2Placement3d*)aPosition->Handle));
}

 void OCStepGeom_ToroidalSurface::Init(OCNaroWrappers::OCTCollection_HAsciiString^ aName, OCNaroWrappers::OCStepGeom_Axis2Placement3d^ aPosition, Standard_Real aMajorRadius, Standard_Real aMinorRadius)
{
  ((StepGeom_ToroidalSurface*)nativeHandle)->Init(*((Handle_TCollection_HAsciiString*)aName->Handle), *((StepGeom_Axis2Placement3d*)aPosition->Handle), aMajorRadius, aMinorRadius);
}

 void OCStepGeom_ToroidalSurface::SetMajorRadius(Standard_Real aMajorRadius)
{
  ((StepGeom_ToroidalSurface*)nativeHandle)->SetMajorRadius(aMajorRadius);
}

 Standard_Real OCStepGeom_ToroidalSurface::MajorRadius()
{
  return ((StepGeom_ToroidalSurface*)nativeHandle)->MajorRadius();
}

 void OCStepGeom_ToroidalSurface::SetMinorRadius(Standard_Real aMinorRadius)
{
  ((StepGeom_ToroidalSurface*)nativeHandle)->SetMinorRadius(aMinorRadius);
}

 Standard_Real OCStepGeom_ToroidalSurface::MinorRadius()
{
  return ((StepGeom_ToroidalSurface*)nativeHandle)->MinorRadius();
}



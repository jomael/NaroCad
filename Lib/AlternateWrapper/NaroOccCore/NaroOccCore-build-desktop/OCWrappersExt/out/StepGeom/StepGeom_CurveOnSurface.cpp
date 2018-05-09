// File generated by CPPExt (CPP file)
//

#include "StepGeom_CurveOnSurface.h"
#include "../Converter.h"
#include "../Standard/Standard_Transient.h"
#include "StepGeom_Pcurve.h"
#include "StepGeom_SurfaceCurve.h"
#include "StepGeom_CompositeCurveOnSurface.h"


using namespace OCNaroWrappers;

OCStepGeom_CurveOnSurface::OCStepGeom_CurveOnSurface(StepGeom_CurveOnSurface* nativeHandle) : OCStepData_SelectType((OCDummy^)nullptr)

{
  this->nativeHandle = nativeHandle;
}

OCStepGeom_CurveOnSurface::OCStepGeom_CurveOnSurface() : OCStepData_SelectType((OCDummy^)nullptr)

{
  nativeHandle = new StepGeom_CurveOnSurface();
}

 Standard_Integer OCStepGeom_CurveOnSurface::CaseNum(OCNaroWrappers::OCStandard_Transient^ ent)
{
  return ((StepGeom_CurveOnSurface*)nativeHandle)->CaseNum(*((Handle_Standard_Transient*)ent->Handle));
}

OCStepGeom_Pcurve^ OCStepGeom_CurveOnSurface::Pcurve()
{
  StepGeom_Pcurve* tmp = new StepGeom_Pcurve();
  *tmp = ((StepGeom_CurveOnSurface*)nativeHandle)->Pcurve();
  return gcnew OCStepGeom_Pcurve(tmp);
}

OCStepGeom_SurfaceCurve^ OCStepGeom_CurveOnSurface::SurfaceCurve()
{
  StepGeom_SurfaceCurve* tmp = new StepGeom_SurfaceCurve();
  *tmp = ((StepGeom_CurveOnSurface*)nativeHandle)->SurfaceCurve();
  return gcnew OCStepGeom_SurfaceCurve(tmp);
}

OCStepGeom_CompositeCurveOnSurface^ OCStepGeom_CurveOnSurface::CompositeCurveOnSurface()
{
  StepGeom_CompositeCurveOnSurface* tmp = new StepGeom_CompositeCurveOnSurface();
  *tmp = ((StepGeom_CurveOnSurface*)nativeHandle)->CompositeCurveOnSurface();
  return gcnew OCStepGeom_CompositeCurveOnSurface(tmp);
}



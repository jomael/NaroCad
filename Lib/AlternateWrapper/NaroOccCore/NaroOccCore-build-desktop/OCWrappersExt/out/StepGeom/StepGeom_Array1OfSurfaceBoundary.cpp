// File generated by CPPExt (CPP file)
//

#include "StepGeom_Array1OfSurfaceBoundary.h"
#include "../Converter.h"
#include "StepGeom_SurfaceBoundary.h"


using namespace OCNaroWrappers;

OCStepGeom_Array1OfSurfaceBoundary::OCStepGeom_Array1OfSurfaceBoundary(StepGeom_Array1OfSurfaceBoundary* nativeHandle) 
{
  this->nativeHandle = nativeHandle;
}

OCStepGeom_Array1OfSurfaceBoundary::OCStepGeom_Array1OfSurfaceBoundary(Standard_Integer Low, Standard_Integer Up) 
{
  nativeHandle = new StepGeom_Array1OfSurfaceBoundary(Low, Up);
}

OCStepGeom_Array1OfSurfaceBoundary::OCStepGeom_Array1OfSurfaceBoundary(OCNaroWrappers::OCStepGeom_SurfaceBoundary^ Item, Standard_Integer Low, Standard_Integer Up) 
{
  nativeHandle = new StepGeom_Array1OfSurfaceBoundary(*((StepGeom_SurfaceBoundary*)Item->Handle), Low, Up);
}

 void OCStepGeom_Array1OfSurfaceBoundary::Init(OCNaroWrappers::OCStepGeom_SurfaceBoundary^ V)
{
  ((StepGeom_Array1OfSurfaceBoundary*)nativeHandle)->Init(*((StepGeom_SurfaceBoundary*)V->Handle));
}

 System::Boolean OCStepGeom_Array1OfSurfaceBoundary::IsAllocated()
{
  return OCConverter::StandardBooleanToBoolean(((StepGeom_Array1OfSurfaceBoundary*)nativeHandle)->IsAllocated());
}

OCStepGeom_Array1OfSurfaceBoundary^ OCStepGeom_Array1OfSurfaceBoundary::Assign(OCNaroWrappers::OCStepGeom_Array1OfSurfaceBoundary^ Other)
{
  StepGeom_Array1OfSurfaceBoundary* tmp = new StepGeom_Array1OfSurfaceBoundary(0, 0);
  *tmp = ((StepGeom_Array1OfSurfaceBoundary*)nativeHandle)->Assign(*((StepGeom_Array1OfSurfaceBoundary*)Other->Handle));
  return gcnew OCStepGeom_Array1OfSurfaceBoundary(tmp);
}

 Standard_Integer OCStepGeom_Array1OfSurfaceBoundary::Length()
{
  return ((StepGeom_Array1OfSurfaceBoundary*)nativeHandle)->Length();
}

 Standard_Integer OCStepGeom_Array1OfSurfaceBoundary::Lower()
{
  return ((StepGeom_Array1OfSurfaceBoundary*)nativeHandle)->Lower();
}

 Standard_Integer OCStepGeom_Array1OfSurfaceBoundary::Upper()
{
  return ((StepGeom_Array1OfSurfaceBoundary*)nativeHandle)->Upper();
}

 void OCStepGeom_Array1OfSurfaceBoundary::SetValue(Standard_Integer Index, OCNaroWrappers::OCStepGeom_SurfaceBoundary^ Value)
{
  ((StepGeom_Array1OfSurfaceBoundary*)nativeHandle)->SetValue(Index, *((StepGeom_SurfaceBoundary*)Value->Handle));
}

OCStepGeom_SurfaceBoundary^ OCStepGeom_Array1OfSurfaceBoundary::Value(Standard_Integer Index)
{
  StepGeom_SurfaceBoundary* tmp = new StepGeom_SurfaceBoundary();
  *tmp = ((StepGeom_Array1OfSurfaceBoundary*)nativeHandle)->Value(Index);
  return gcnew OCStepGeom_SurfaceBoundary(tmp);
}

OCStepGeom_SurfaceBoundary^ OCStepGeom_Array1OfSurfaceBoundary::ChangeValue(Standard_Integer Index)
{
  StepGeom_SurfaceBoundary* tmp = new StepGeom_SurfaceBoundary();
  *tmp = ((StepGeom_Array1OfSurfaceBoundary*)nativeHandle)->ChangeValue(Index);
  return gcnew OCStepGeom_SurfaceBoundary(tmp);
}



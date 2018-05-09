// File generated by CPPExt (CPP file)
//

#include "StepShape_HArray1OfGeometricSetSelect.h"
#include "../Converter.h"
#include "StepShape_GeometricSetSelect.h"
#include "StepShape_Array1OfGeometricSetSelect.h"


using namespace OCNaroWrappers;

OCStepShape_HArray1OfGeometricSetSelect::OCStepShape_HArray1OfGeometricSetSelect(Handle(StepShape_HArray1OfGeometricSetSelect)* nativeHandle) : OCMMgt_TShared((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_StepShape_HArray1OfGeometricSetSelect(*nativeHandle);
}

OCStepShape_HArray1OfGeometricSetSelect::OCStepShape_HArray1OfGeometricSetSelect(Standard_Integer Low, Standard_Integer Up) : OCMMgt_TShared((OCDummy^)nullptr)

{
  nativeHandle = new Handle_StepShape_HArray1OfGeometricSetSelect(new StepShape_HArray1OfGeometricSetSelect(Low, Up));
}

OCStepShape_HArray1OfGeometricSetSelect::OCStepShape_HArray1OfGeometricSetSelect(Standard_Integer Low, Standard_Integer Up, OCNaroWrappers::OCStepShape_GeometricSetSelect^ V) : OCMMgt_TShared((OCDummy^)nullptr)

{
  nativeHandle = new Handle_StepShape_HArray1OfGeometricSetSelect(new StepShape_HArray1OfGeometricSetSelect(Low, Up, *((StepShape_GeometricSetSelect*)V->Handle)));
}

 void OCStepShape_HArray1OfGeometricSetSelect::Init(OCNaroWrappers::OCStepShape_GeometricSetSelect^ V)
{
  (*((Handle_StepShape_HArray1OfGeometricSetSelect*)nativeHandle))->Init(*((StepShape_GeometricSetSelect*)V->Handle));
}

 Standard_Integer OCStepShape_HArray1OfGeometricSetSelect::Length()
{
  return (*((Handle_StepShape_HArray1OfGeometricSetSelect*)nativeHandle))->Length();
}

 Standard_Integer OCStepShape_HArray1OfGeometricSetSelect::Lower()
{
  return (*((Handle_StepShape_HArray1OfGeometricSetSelect*)nativeHandle))->Lower();
}

 Standard_Integer OCStepShape_HArray1OfGeometricSetSelect::Upper()
{
  return (*((Handle_StepShape_HArray1OfGeometricSetSelect*)nativeHandle))->Upper();
}

 void OCStepShape_HArray1OfGeometricSetSelect::SetValue(Standard_Integer Index, OCNaroWrappers::OCStepShape_GeometricSetSelect^ Value)
{
  (*((Handle_StepShape_HArray1OfGeometricSetSelect*)nativeHandle))->SetValue(Index, *((StepShape_GeometricSetSelect*)Value->Handle));
}

OCStepShape_GeometricSetSelect^ OCStepShape_HArray1OfGeometricSetSelect::Value(Standard_Integer Index)
{
  StepShape_GeometricSetSelect* tmp = new StepShape_GeometricSetSelect();
  *tmp = (*((Handle_StepShape_HArray1OfGeometricSetSelect*)nativeHandle))->Value(Index);
  return gcnew OCStepShape_GeometricSetSelect(tmp);
}

OCStepShape_GeometricSetSelect^ OCStepShape_HArray1OfGeometricSetSelect::ChangeValue(Standard_Integer Index)
{
  StepShape_GeometricSetSelect* tmp = new StepShape_GeometricSetSelect();
  *tmp = (*((Handle_StepShape_HArray1OfGeometricSetSelect*)nativeHandle))->ChangeValue(Index);
  return gcnew OCStepShape_GeometricSetSelect(tmp);
}

OCStepShape_Array1OfGeometricSetSelect^ OCStepShape_HArray1OfGeometricSetSelect::Array1()
{
  StepShape_Array1OfGeometricSetSelect* tmp = new StepShape_Array1OfGeometricSetSelect(0, 0);
  *tmp = (*((Handle_StepShape_HArray1OfGeometricSetSelect*)nativeHandle))->Array1();
  return gcnew OCStepShape_Array1OfGeometricSetSelect(tmp);
}

OCStepShape_Array1OfGeometricSetSelect^ OCStepShape_HArray1OfGeometricSetSelect::ChangeArray1()
{
  StepShape_Array1OfGeometricSetSelect* tmp = new StepShape_Array1OfGeometricSetSelect(0, 0);
  *tmp = (*((Handle_StepShape_HArray1OfGeometricSetSelect*)nativeHandle))->ChangeArray1();
  return gcnew OCStepShape_Array1OfGeometricSetSelect(tmp);
}


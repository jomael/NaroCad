// File generated by CPPExt (CPP file)
//

#include "StepShape_Array1OfConnectedEdgeSet.h"
#include "../Converter.h"
#include "StepShape_ConnectedEdgeSet.h"


using namespace OCNaroWrappers;

OCStepShape_Array1OfConnectedEdgeSet::OCStepShape_Array1OfConnectedEdgeSet(StepShape_Array1OfConnectedEdgeSet* nativeHandle) 
{
  this->nativeHandle = nativeHandle;
}

OCStepShape_Array1OfConnectedEdgeSet::OCStepShape_Array1OfConnectedEdgeSet(Standard_Integer Low, Standard_Integer Up) 
{
  nativeHandle = new StepShape_Array1OfConnectedEdgeSet(Low, Up);
}

OCStepShape_Array1OfConnectedEdgeSet::OCStepShape_Array1OfConnectedEdgeSet(OCNaroWrappers::OCStepShape_ConnectedEdgeSet^ Item, Standard_Integer Low, Standard_Integer Up) 
{
  nativeHandle = new StepShape_Array1OfConnectedEdgeSet(*((StepShape_ConnectedEdgeSet*)Item->Handle), Low, Up);
}

 void OCStepShape_Array1OfConnectedEdgeSet::Init(OCNaroWrappers::OCStepShape_ConnectedEdgeSet^ V)
{
  ((StepShape_Array1OfConnectedEdgeSet*)nativeHandle)->Init(*((StepShape_ConnectedEdgeSet*)V->Handle));
}

 System::Boolean OCStepShape_Array1OfConnectedEdgeSet::IsAllocated()
{
  return OCConverter::StandardBooleanToBoolean(((StepShape_Array1OfConnectedEdgeSet*)nativeHandle)->IsAllocated());
}

OCStepShape_Array1OfConnectedEdgeSet^ OCStepShape_Array1OfConnectedEdgeSet::Assign(OCNaroWrappers::OCStepShape_Array1OfConnectedEdgeSet^ Other)
{
  StepShape_Array1OfConnectedEdgeSet* tmp = new StepShape_Array1OfConnectedEdgeSet(0, 0);
  *tmp = ((StepShape_Array1OfConnectedEdgeSet*)nativeHandle)->Assign(*((StepShape_Array1OfConnectedEdgeSet*)Other->Handle));
  return gcnew OCStepShape_Array1OfConnectedEdgeSet(tmp);
}

 Standard_Integer OCStepShape_Array1OfConnectedEdgeSet::Length()
{
  return ((StepShape_Array1OfConnectedEdgeSet*)nativeHandle)->Length();
}

 Standard_Integer OCStepShape_Array1OfConnectedEdgeSet::Lower()
{
  return ((StepShape_Array1OfConnectedEdgeSet*)nativeHandle)->Lower();
}

 Standard_Integer OCStepShape_Array1OfConnectedEdgeSet::Upper()
{
  return ((StepShape_Array1OfConnectedEdgeSet*)nativeHandle)->Upper();
}

 void OCStepShape_Array1OfConnectedEdgeSet::SetValue(Standard_Integer Index, OCNaroWrappers::OCStepShape_ConnectedEdgeSet^ Value)
{
  ((StepShape_Array1OfConnectedEdgeSet*)nativeHandle)->SetValue(Index, *((StepShape_ConnectedEdgeSet*)Value->Handle));
}

OCStepShape_ConnectedEdgeSet^ OCStepShape_Array1OfConnectedEdgeSet::Value(Standard_Integer Index)
{
  StepShape_ConnectedEdgeSet* tmp = new StepShape_ConnectedEdgeSet();
  *tmp = ((StepShape_Array1OfConnectedEdgeSet*)nativeHandle)->Value(Index);
  return gcnew OCStepShape_ConnectedEdgeSet(tmp);
}

OCStepShape_ConnectedEdgeSet^ OCStepShape_Array1OfConnectedEdgeSet::ChangeValue(Standard_Integer Index)
{
  StepShape_ConnectedEdgeSet* tmp = new StepShape_ConnectedEdgeSet();
  *tmp = ((StepShape_Array1OfConnectedEdgeSet*)nativeHandle)->ChangeValue(Index);
  return gcnew OCStepShape_ConnectedEdgeSet(tmp);
}



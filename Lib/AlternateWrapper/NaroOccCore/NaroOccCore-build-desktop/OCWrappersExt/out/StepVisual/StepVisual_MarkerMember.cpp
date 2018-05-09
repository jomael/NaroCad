// File generated by CPPExt (CPP file)
//

#include "StepVisual_MarkerMember.h"
#include "../Converter.h"


using namespace OCNaroWrappers;

OCStepVisual_MarkerMember::OCStepVisual_MarkerMember(Handle(StepVisual_MarkerMember)* nativeHandle) : OCStepData_SelectInt((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_StepVisual_MarkerMember(*nativeHandle);
}

OCStepVisual_MarkerMember::OCStepVisual_MarkerMember() : OCStepData_SelectInt((OCDummy^)nullptr)

{
  nativeHandle = new Handle_StepVisual_MarkerMember(new StepVisual_MarkerMember());
}

 System::Boolean OCStepVisual_MarkerMember::HasName()
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_StepVisual_MarkerMember*)nativeHandle))->HasName());
}

 System::String^ OCStepVisual_MarkerMember::Name()
{
  return OCConverter::StandardCStringToString((*((Handle_StepVisual_MarkerMember*)nativeHandle))->Name());
}

 System::Boolean OCStepVisual_MarkerMember::SetName(System::String^ name)
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_StepVisual_MarkerMember*)nativeHandle))->SetName(OCConverter::StringToStandardCString(name)));
}

 System::String^ OCStepVisual_MarkerMember::EnumText()
{
  return OCConverter::StandardCStringToString((*((Handle_StepVisual_MarkerMember*)nativeHandle))->EnumText());
}

 void OCStepVisual_MarkerMember::SetEnumText(Standard_Integer val, System::String^ text)
{
  (*((Handle_StepVisual_MarkerMember*)nativeHandle))->SetEnumText(val, OCConverter::StringToStandardCString(text));
}

 void OCStepVisual_MarkerMember::SetValue(OCStepVisual_MarkerType val)
{
  (*((Handle_StepVisual_MarkerMember*)nativeHandle))->SetValue((StepVisual_MarkerType)val);
}

 OCStepVisual_MarkerType OCStepVisual_MarkerMember::Value()
{
  return (OCStepVisual_MarkerType)((*((Handle_StepVisual_MarkerMember*)nativeHandle))->Value());
}


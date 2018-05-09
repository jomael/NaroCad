// File generated by CPPExt (CPP file)
//

#include "StepData_EnumTool.h"
#include "../Converter.h"
#include "../TCollection/TCollection_AsciiString.h"


using namespace OCNaroWrappers;

OCStepData_EnumTool::OCStepData_EnumTool(StepData_EnumTool* nativeHandle) 
{
  this->nativeHandle = nativeHandle;
}

OCStepData_EnumTool::OCStepData_EnumTool(System::String^ e0, System::String^ e1, System::String^ e2, System::String^ e3, System::String^ e4, System::String^ e5, System::String^ e6, System::String^ e7, System::String^ e8, System::String^ e9, System::String^ e10, System::String^ e11, System::String^ e12, System::String^ e13, System::String^ e14, System::String^ e15, System::String^ e16, System::String^ e17, System::String^ e18, System::String^ e19, System::String^ e20, System::String^ e21, System::String^ e22, System::String^ e23, System::String^ e24, System::String^ e25, System::String^ e26, System::String^ e27, System::String^ e28, System::String^ e29, System::String^ e30, System::String^ e31, System::String^ e32, System::String^ e33, System::String^ e34, System::String^ e35, System::String^ e36, System::String^ e37, System::String^ e38, System::String^ e39) 
{
  nativeHandle = new StepData_EnumTool(OCConverter::StringToStandardCString(e0), OCConverter::StringToStandardCString(e1), OCConverter::StringToStandardCString(e2), OCConverter::StringToStandardCString(e3), OCConverter::StringToStandardCString(e4), OCConverter::StringToStandardCString(e5), OCConverter::StringToStandardCString(e6), OCConverter::StringToStandardCString(e7), OCConverter::StringToStandardCString(e8), OCConverter::StringToStandardCString(e9), OCConverter::StringToStandardCString(e10), OCConverter::StringToStandardCString(e11), OCConverter::StringToStandardCString(e12), OCConverter::StringToStandardCString(e13), OCConverter::StringToStandardCString(e14), OCConverter::StringToStandardCString(e15), OCConverter::StringToStandardCString(e16), OCConverter::StringToStandardCString(e17), OCConverter::StringToStandardCString(e18), OCConverter::StringToStandardCString(e19), OCConverter::StringToStandardCString(e20), OCConverter::StringToStandardCString(e21), OCConverter::StringToStandardCString(e22), OCConverter::StringToStandardCString(e23), OCConverter::StringToStandardCString(e24), OCConverter::StringToStandardCString(e25), OCConverter::StringToStandardCString(e26), OCConverter::StringToStandardCString(e27), OCConverter::StringToStandardCString(e28), OCConverter::StringToStandardCString(e29), OCConverter::StringToStandardCString(e30), OCConverter::StringToStandardCString(e31), OCConverter::StringToStandardCString(e32), OCConverter::StringToStandardCString(e33), OCConverter::StringToStandardCString(e34), OCConverter::StringToStandardCString(e35), OCConverter::StringToStandardCString(e36), OCConverter::StringToStandardCString(e37), OCConverter::StringToStandardCString(e38), OCConverter::StringToStandardCString(e39));
}

 void OCStepData_EnumTool::AddDefinition(System::String^ term)
{
  ((StepData_EnumTool*)nativeHandle)->AddDefinition(OCConverter::StringToStandardCString(term));
}

 System::Boolean OCStepData_EnumTool::IsSet()
{
  return OCConverter::StandardBooleanToBoolean(((StepData_EnumTool*)nativeHandle)->IsSet());
}

 Standard_Integer OCStepData_EnumTool::MaxValue()
{
  return ((StepData_EnumTool*)nativeHandle)->MaxValue();
}

 void OCStepData_EnumTool::Optional(System::Boolean mode)
{
  ((StepData_EnumTool*)nativeHandle)->Optional(OCConverter::BooleanToStandardBoolean(mode));
}

 Standard_Integer OCStepData_EnumTool::NullValue()
{
  return ((StepData_EnumTool*)nativeHandle)->NullValue();
}

OCTCollection_AsciiString^ OCStepData_EnumTool::Text(Standard_Integer num)
{
  TCollection_AsciiString* tmp = new TCollection_AsciiString();
  *tmp = ((StepData_EnumTool*)nativeHandle)->Text(num);
  return gcnew OCTCollection_AsciiString(tmp);
}

 Standard_Integer OCStepData_EnumTool::Value(System::String^ txt)
{
  return ((StepData_EnumTool*)nativeHandle)->Value(OCConverter::StringToStandardCString(txt));
}

 Standard_Integer OCStepData_EnumTool::Value(OCNaroWrappers::OCTCollection_AsciiString^ txt)
{
  return ((StepData_EnumTool*)nativeHandle)->Value(*((TCollection_AsciiString*)txt->Handle));
}



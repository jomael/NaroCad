// File generated by CPPExt (CPP file)
//

#include "Interface_FileParameter.h"
#include "../Converter.h"
#include "../TCollection/TCollection_AsciiString.h"


using namespace OCNaroWrappers;

OCInterface_FileParameter::OCInterface_FileParameter(Interface_FileParameter* nativeHandle) 
{
  this->nativeHandle = nativeHandle;
}

OCInterface_FileParameter::OCInterface_FileParameter() 
{
  nativeHandle = new Interface_FileParameter();
}

 void OCInterface_FileParameter::Init(OCNaroWrappers::OCTCollection_AsciiString^ val, OCInterface_ParamType typ)
{
  ((Interface_FileParameter*)nativeHandle)->Init(*((TCollection_AsciiString*)val->Handle), (Interface_ParamType)typ);
}

 void OCInterface_FileParameter::Init(System::String^ val, OCInterface_ParamType typ)
{
  ((Interface_FileParameter*)nativeHandle)->Init(OCConverter::StringToStandardCString(val), (Interface_ParamType)typ);
}

 System::String^ OCInterface_FileParameter::CValue()
{
  return OCConverter::StandardCStringToString(((Interface_FileParameter*)nativeHandle)->CValue());
}

 OCInterface_ParamType OCInterface_FileParameter::ParamType()
{
  return (OCInterface_ParamType)(((Interface_FileParameter*)nativeHandle)->ParamType());
}

 void OCInterface_FileParameter::SetEntityNumber(Standard_Integer num)
{
  ((Interface_FileParameter*)nativeHandle)->SetEntityNumber(num);
}

 Standard_Integer OCInterface_FileParameter::EntityNumber()
{
  return ((Interface_FileParameter*)nativeHandle)->EntityNumber();
}

 void OCInterface_FileParameter::Clear()
{
  ((Interface_FileParameter*)nativeHandle)->Clear();
}



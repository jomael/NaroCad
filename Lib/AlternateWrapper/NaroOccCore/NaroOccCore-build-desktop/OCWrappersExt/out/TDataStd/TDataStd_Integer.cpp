// File generated by CPPExt (CPP file)
//

#include "TDataStd_Integer.h"
#include "../Converter.h"
#include "../Standard/Standard_GUID.h"
#include "../TDF/TDF_Label.h"
#include "../TDF/TDF_Attribute.h"
#include "../TDF/TDF_RelocationTable.h"


using namespace OCNaroWrappers;

OCTDataStd_Integer::OCTDataStd_Integer(Handle(TDataStd_Integer)* nativeHandle) : OCTDF_Attribute((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_TDataStd_Integer(*nativeHandle);
}

OCStandard_GUID^ OCTDataStd_Integer::GetID()
{
  Standard_GUID* tmp = new Standard_GUID();
  *tmp = TDataStd_Integer::GetID();
  return gcnew OCStandard_GUID(tmp);
}

OCTDataStd_Integer^ OCTDataStd_Integer::Set(OCNaroWrappers::OCTDF_Label^ label, Standard_Integer value)
{
  Handle(TDataStd_Integer) tmp = TDataStd_Integer::Set(*((TDF_Label*)label->Handle), value);
  return gcnew OCTDataStd_Integer(&tmp);
}

 void OCTDataStd_Integer::Set(Standard_Integer V)
{
  (*((Handle_TDataStd_Integer*)nativeHandle))->Set(V);
}

 Standard_Integer OCTDataStd_Integer::Get()
{
  return (*((Handle_TDataStd_Integer*)nativeHandle))->Get();
}

 System::Boolean OCTDataStd_Integer::IsCaptured()
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_TDataStd_Integer*)nativeHandle))->IsCaptured());
}

OCStandard_GUID^ OCTDataStd_Integer::ID()
{
  Standard_GUID* tmp = new Standard_GUID();
  *tmp = (*((Handle_TDataStd_Integer*)nativeHandle))->ID();
  return gcnew OCStandard_GUID(tmp);
}

 void OCTDataStd_Integer::Restore(OCNaroWrappers::OCTDF_Attribute^ With)
{
  (*((Handle_TDataStd_Integer*)nativeHandle))->Restore(*((Handle_TDF_Attribute*)With->Handle));
}

OCTDF_Attribute^ OCTDataStd_Integer::NewEmpty()
{
  Handle(TDF_Attribute) tmp = (*((Handle_TDataStd_Integer*)nativeHandle))->NewEmpty();
  return gcnew OCTDF_Attribute(&tmp);
}

 void OCTDataStd_Integer::Paste(OCNaroWrappers::OCTDF_Attribute^ Into, OCNaroWrappers::OCTDF_RelocationTable^ RT)
{
  (*((Handle_TDataStd_Integer*)nativeHandle))->Paste(*((Handle_TDF_Attribute*)Into->Handle), *((Handle_TDF_RelocationTable*)RT->Handle));
}

 Standard_OStream& OCTDataStd_Integer::Dump(Standard_OStream& anOS)
{
  return (*((Handle_TDataStd_Integer*)nativeHandle))->Dump(anOS);
}

OCTDataStd_Integer::OCTDataStd_Integer() : OCTDF_Attribute((OCDummy^)nullptr)

{
  nativeHandle = new Handle_TDataStd_Integer(new TDataStd_Integer());
}



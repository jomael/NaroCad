// File generated by CPPExt (CPP file)
//

#include "TDataStd_Real.h"
#include "../Converter.h"
#include "../Standard/Standard_GUID.h"
#include "../TDF/TDF_Label.h"
#include "../TDF/TDF_Attribute.h"
#include "../TDF/TDF_RelocationTable.h"


using namespace OCNaroWrappers;

OCTDataStd_Real::OCTDataStd_Real(Handle(TDataStd_Real)* nativeHandle) : OCTDF_Attribute((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_TDataStd_Real(*nativeHandle);
}

OCStandard_GUID^ OCTDataStd_Real::GetID()
{
  Standard_GUID* tmp = new Standard_GUID();
  *tmp = TDataStd_Real::GetID();
  return gcnew OCStandard_GUID(tmp);
}

OCTDataStd_Real^ OCTDataStd_Real::Set(OCNaroWrappers::OCTDF_Label^ label, Standard_Real value)
{
  Handle(TDataStd_Real) tmp = TDataStd_Real::Set(*((TDF_Label*)label->Handle), value);
  return gcnew OCTDataStd_Real(&tmp);
}

OCTDataStd_Real::OCTDataStd_Real() : OCTDF_Attribute((OCDummy^)nullptr)

{
  nativeHandle = new Handle_TDataStd_Real(new TDataStd_Real());
}

 void OCTDataStd_Real::SetDimension(OCTDataStd_RealEnum DIM)
{
  (*((Handle_TDataStd_Real*)nativeHandle))->SetDimension((TDataStd_RealEnum)DIM);
}

 OCTDataStd_RealEnum OCTDataStd_Real::GetDimension()
{
  return (OCTDataStd_RealEnum)((*((Handle_TDataStd_Real*)nativeHandle))->GetDimension());
}

 void OCTDataStd_Real::Set(Standard_Real V)
{
  (*((Handle_TDataStd_Real*)nativeHandle))->Set(V);
}

 Standard_Real OCTDataStd_Real::Get()
{
  return (*((Handle_TDataStd_Real*)nativeHandle))->Get();
}

 System::Boolean OCTDataStd_Real::IsCaptured()
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_TDataStd_Real*)nativeHandle))->IsCaptured());
}

OCStandard_GUID^ OCTDataStd_Real::ID()
{
  Standard_GUID* tmp = new Standard_GUID();
  *tmp = (*((Handle_TDataStd_Real*)nativeHandle))->ID();
  return gcnew OCStandard_GUID(tmp);
}

 void OCTDataStd_Real::Restore(OCNaroWrappers::OCTDF_Attribute^ With)
{
  (*((Handle_TDataStd_Real*)nativeHandle))->Restore(*((Handle_TDF_Attribute*)With->Handle));
}

OCTDF_Attribute^ OCTDataStd_Real::NewEmpty()
{
  Handle(TDF_Attribute) tmp = (*((Handle_TDataStd_Real*)nativeHandle))->NewEmpty();
  return gcnew OCTDF_Attribute(&tmp);
}

 void OCTDataStd_Real::Paste(OCNaroWrappers::OCTDF_Attribute^ Into, OCNaroWrappers::OCTDF_RelocationTable^ RT)
{
  (*((Handle_TDataStd_Real*)nativeHandle))->Paste(*((Handle_TDF_Attribute*)Into->Handle), *((Handle_TDF_RelocationTable*)RT->Handle));
}

 Standard_OStream& OCTDataStd_Real::Dump(Standard_OStream& anOS)
{
  return (*((Handle_TDataStd_Real*)nativeHandle))->Dump(anOS);
}



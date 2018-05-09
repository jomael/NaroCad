// File generated by CPPExt (CPP file)
//

#include "TFunction_Function.h"
#include "../Converter.h"
#include "../TDF/TDF_Label.h"
#include "../Standard/Standard_GUID.h"
#include "../TDF/TDF_Attribute.h"
#include "../TDF/TDF_RelocationTable.h"
#include "../TDF/TDF_DataSet.h"


using namespace OCNaroWrappers;

OCTFunction_Function::OCTFunction_Function(Handle(TFunction_Function)* nativeHandle) : OCTDF_Attribute((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_TFunction_Function(*nativeHandle);
}

OCTFunction_Function^ OCTFunction_Function::Set(OCNaroWrappers::OCTDF_Label^ L)
{
  Handle(TFunction_Function) tmp = TFunction_Function::Set(*((TDF_Label*)L->Handle));
  return gcnew OCTFunction_Function(&tmp);
}

OCTFunction_Function^ OCTFunction_Function::Set(OCNaroWrappers::OCTDF_Label^ L, OCNaroWrappers::OCStandard_GUID^ DriverID)
{
  Handle(TFunction_Function) tmp = TFunction_Function::Set(*((TDF_Label*)L->Handle), *((Standard_GUID*)DriverID->Handle));
  return gcnew OCTFunction_Function(&tmp);
}

OCStandard_GUID^ OCTFunction_Function::GetID()
{
  Standard_GUID* tmp = new Standard_GUID();
  *tmp = TFunction_Function::GetID();
  return gcnew OCStandard_GUID(tmp);
}

OCTFunction_Function::OCTFunction_Function() : OCTDF_Attribute((OCDummy^)nullptr)

{
  nativeHandle = new Handle_TFunction_Function(new TFunction_Function());
}

OCStandard_GUID^ OCTFunction_Function::GetDriverGUID()
{
  Standard_GUID* tmp = new Standard_GUID();
  *tmp = (*((Handle_TFunction_Function*)nativeHandle))->GetDriverGUID();
  return gcnew OCStandard_GUID(tmp);
}

 void OCTFunction_Function::SetDriverGUID(OCNaroWrappers::OCStandard_GUID^ guid)
{
  (*((Handle_TFunction_Function*)nativeHandle))->SetDriverGUID(*((Standard_GUID*)guid->Handle));
}

 System::Boolean OCTFunction_Function::Failed()
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_TFunction_Function*)nativeHandle))->Failed());
}

 void OCTFunction_Function::SetFailure(Standard_Integer mode)
{
  (*((Handle_TFunction_Function*)nativeHandle))->SetFailure(mode);
}

 Standard_Integer OCTFunction_Function::GetFailure()
{
  return (*((Handle_TFunction_Function*)nativeHandle))->GetFailure();
}

OCStandard_GUID^ OCTFunction_Function::ID()
{
  Standard_GUID* tmp = new Standard_GUID();
  *tmp = (*((Handle_TFunction_Function*)nativeHandle))->ID();
  return gcnew OCStandard_GUID(tmp);
}

 void OCTFunction_Function::Restore(OCNaroWrappers::OCTDF_Attribute^ with)
{
  (*((Handle_TFunction_Function*)nativeHandle))->Restore(*((Handle_TDF_Attribute*)with->Handle));
}

 void OCTFunction_Function::Paste(OCNaroWrappers::OCTDF_Attribute^ into, OCNaroWrappers::OCTDF_RelocationTable^ RT)
{
  (*((Handle_TFunction_Function*)nativeHandle))->Paste(*((Handle_TDF_Attribute*)into->Handle), *((Handle_TDF_RelocationTable*)RT->Handle));
}

OCTDF_Attribute^ OCTFunction_Function::NewEmpty()
{
  Handle(TDF_Attribute) tmp = (*((Handle_TFunction_Function*)nativeHandle))->NewEmpty();
  return gcnew OCTDF_Attribute(&tmp);
}

 void OCTFunction_Function::References(OCNaroWrappers::OCTDF_DataSet^ aDataSet)
{
  (*((Handle_TFunction_Function*)nativeHandle))->References(*((Handle_TDF_DataSet*)aDataSet->Handle));
}

 Standard_OStream& OCTFunction_Function::Dump(Standard_OStream& anOS)
{
  return (*((Handle_TFunction_Function*)nativeHandle))->Dump(anOS);
}



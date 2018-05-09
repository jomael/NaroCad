// File generated by CPPExt (CPP file)
//

#include "TDF_Reference.h"
#include "../Converter.h"
#include "../Standard/Standard_GUID.h"
#include "TDF_Label.h"
#include "TDF_Attribute.h"
#include "TDF_RelocationTable.h"
#include "TDF_DataSet.h"


using namespace OCNaroWrappers;

OCTDF_Reference::OCTDF_Reference(Handle(TDF_Reference)* nativeHandle) : OCTDF_Attribute((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_TDF_Reference(*nativeHandle);
}

OCStandard_GUID^ OCTDF_Reference::GetID()
{
  Standard_GUID* tmp = new Standard_GUID();
  *tmp = TDF_Reference::GetID();
  return gcnew OCStandard_GUID(tmp);
}

OCTDF_Reference^ OCTDF_Reference::Set(OCNaroWrappers::OCTDF_Label^ I, OCNaroWrappers::OCTDF_Label^ Origin)
{
  Handle(TDF_Reference) tmp = TDF_Reference::Set(*((TDF_Label*)I->Handle), *((TDF_Label*)Origin->Handle));
  return gcnew OCTDF_Reference(&tmp);
}

 void OCTDF_Reference::Set(OCNaroWrappers::OCTDF_Label^ Origin)
{
  (*((Handle_TDF_Reference*)nativeHandle))->Set(*((TDF_Label*)Origin->Handle));
}

OCTDF_Label^ OCTDF_Reference::Get()
{
  TDF_Label* tmp = new TDF_Label();
  *tmp = (*((Handle_TDF_Reference*)nativeHandle))->Get();
  return gcnew OCTDF_Label(tmp);
}

OCStandard_GUID^ OCTDF_Reference::ID()
{
  Standard_GUID* tmp = new Standard_GUID();
  *tmp = (*((Handle_TDF_Reference*)nativeHandle))->ID();
  return gcnew OCStandard_GUID(tmp);
}

 void OCTDF_Reference::Restore(OCNaroWrappers::OCTDF_Attribute^ With)
{
  (*((Handle_TDF_Reference*)nativeHandle))->Restore(*((Handle_TDF_Attribute*)With->Handle));
}

OCTDF_Attribute^ OCTDF_Reference::NewEmpty()
{
  Handle(TDF_Attribute) tmp = (*((Handle_TDF_Reference*)nativeHandle))->NewEmpty();
  return gcnew OCTDF_Attribute(&tmp);
}

 void OCTDF_Reference::Paste(OCNaroWrappers::OCTDF_Attribute^ Into, OCNaroWrappers::OCTDF_RelocationTable^ RT)
{
  (*((Handle_TDF_Reference*)nativeHandle))->Paste(*((Handle_TDF_Attribute*)Into->Handle), *((Handle_TDF_RelocationTable*)RT->Handle));
}

 void OCTDF_Reference::References(OCNaroWrappers::OCTDF_DataSet^ DS)
{
  (*((Handle_TDF_Reference*)nativeHandle))->References(*((Handle_TDF_DataSet*)DS->Handle));
}

 Standard_OStream& OCTDF_Reference::Dump(Standard_OStream& anOS)
{
  return (*((Handle_TDF_Reference*)nativeHandle))->Dump(anOS);
}

OCTDF_Reference::OCTDF_Reference() : OCTDF_Attribute((OCDummy^)nullptr)

{
  nativeHandle = new Handle_TDF_Reference(new TDF_Reference());
}



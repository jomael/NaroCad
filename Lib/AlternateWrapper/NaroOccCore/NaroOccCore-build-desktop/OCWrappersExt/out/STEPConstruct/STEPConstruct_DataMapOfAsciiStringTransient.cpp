// File generated by CPPExt (CPP file)
//

#include "STEPConstruct_DataMapOfAsciiStringTransient.h"
#include "../Converter.h"
#include "../TCollection/TCollection_AsciiString.h"
#include "../Standard/Standard_Transient.h"
#include "STEPConstruct_DataMapNodeOfDataMapOfAsciiStringTransient.h"
#include "STEPConstruct_DataMapIteratorOfDataMapOfAsciiStringTransient.h"


using namespace OCNaroWrappers;

OCSTEPConstruct_DataMapOfAsciiStringTransient::OCSTEPConstruct_DataMapOfAsciiStringTransient(STEPConstruct_DataMapOfAsciiStringTransient* nativeHandle) : OCTCollection_BasicMap((OCDummy^)nullptr)

{
  this->nativeHandle = nativeHandle;
}

OCSTEPConstruct_DataMapOfAsciiStringTransient::OCSTEPConstruct_DataMapOfAsciiStringTransient(Standard_Integer NbBuckets) : OCTCollection_BasicMap((OCDummy^)nullptr)

{
  nativeHandle = new STEPConstruct_DataMapOfAsciiStringTransient(NbBuckets);
}

OCSTEPConstruct_DataMapOfAsciiStringTransient^ OCSTEPConstruct_DataMapOfAsciiStringTransient::Assign(OCNaroWrappers::OCSTEPConstruct_DataMapOfAsciiStringTransient^ Other)
{
  STEPConstruct_DataMapOfAsciiStringTransient* tmp = new STEPConstruct_DataMapOfAsciiStringTransient(0);
  *tmp = ((STEPConstruct_DataMapOfAsciiStringTransient*)nativeHandle)->Assign(*((STEPConstruct_DataMapOfAsciiStringTransient*)Other->Handle));
  return gcnew OCSTEPConstruct_DataMapOfAsciiStringTransient(tmp);
}

 void OCSTEPConstruct_DataMapOfAsciiStringTransient::ReSize(Standard_Integer NbBuckets)
{
  ((STEPConstruct_DataMapOfAsciiStringTransient*)nativeHandle)->ReSize(NbBuckets);
}

 System::Boolean OCSTEPConstruct_DataMapOfAsciiStringTransient::Bind(OCNaroWrappers::OCTCollection_AsciiString^ K, OCNaroWrappers::OCStandard_Transient^ I)
{
  return OCConverter::StandardBooleanToBoolean(((STEPConstruct_DataMapOfAsciiStringTransient*)nativeHandle)->Bind(*((TCollection_AsciiString*)K->Handle), *((Handle_Standard_Transient*)I->Handle)));
}

 System::Boolean OCSTEPConstruct_DataMapOfAsciiStringTransient::IsBound(OCNaroWrappers::OCTCollection_AsciiString^ K)
{
  return OCConverter::StandardBooleanToBoolean(((STEPConstruct_DataMapOfAsciiStringTransient*)nativeHandle)->IsBound(*((TCollection_AsciiString*)K->Handle)));
}

 System::Boolean OCSTEPConstruct_DataMapOfAsciiStringTransient::UnBind(OCNaroWrappers::OCTCollection_AsciiString^ K)
{
  return OCConverter::StandardBooleanToBoolean(((STEPConstruct_DataMapOfAsciiStringTransient*)nativeHandle)->UnBind(*((TCollection_AsciiString*)K->Handle)));
}

OCStandard_Transient^ OCSTEPConstruct_DataMapOfAsciiStringTransient::Find(OCNaroWrappers::OCTCollection_AsciiString^ K)
{
  Handle(Standard_Transient) tmp = ((STEPConstruct_DataMapOfAsciiStringTransient*)nativeHandle)->Find(*((TCollection_AsciiString*)K->Handle));
  return gcnew OCStandard_Transient(&tmp);
}

OCStandard_Transient^ OCSTEPConstruct_DataMapOfAsciiStringTransient::ChangeFind(OCNaroWrappers::OCTCollection_AsciiString^ K)
{
  Handle(Standard_Transient) tmp = ((STEPConstruct_DataMapOfAsciiStringTransient*)nativeHandle)->ChangeFind(*((TCollection_AsciiString*)K->Handle));
  return gcnew OCStandard_Transient(&tmp);
}

 Standard_Address OCSTEPConstruct_DataMapOfAsciiStringTransient::Find1(OCNaroWrappers::OCTCollection_AsciiString^ K)
{
  return ((STEPConstruct_DataMapOfAsciiStringTransient*)nativeHandle)->Find1(*((TCollection_AsciiString*)K->Handle));
}

 Standard_Address OCSTEPConstruct_DataMapOfAsciiStringTransient::ChangeFind1(OCNaroWrappers::OCTCollection_AsciiString^ K)
{
  return ((STEPConstruct_DataMapOfAsciiStringTransient*)nativeHandle)->ChangeFind1(*((TCollection_AsciiString*)K->Handle));
}



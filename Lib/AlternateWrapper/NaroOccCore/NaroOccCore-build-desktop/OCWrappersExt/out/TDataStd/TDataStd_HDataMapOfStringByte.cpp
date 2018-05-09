// File generated by CPPExt (CPP file)
//

#include "TDataStd_HDataMapOfStringByte.h"
#include "../Converter.h"
#include "TDataStd_DataMapOfStringByte.h"


using namespace OCNaroWrappers;

OCTDataStd_HDataMapOfStringByte::OCTDataStd_HDataMapOfStringByte(Handle(TDataStd_HDataMapOfStringByte)* nativeHandle) : OCMMgt_TShared((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_TDataStd_HDataMapOfStringByte(*nativeHandle);
}

OCTDataStd_HDataMapOfStringByte::OCTDataStd_HDataMapOfStringByte(Standard_Integer NbBuckets) : OCMMgt_TShared((OCDummy^)nullptr)

{
  nativeHandle = new Handle_TDataStd_HDataMapOfStringByte(new TDataStd_HDataMapOfStringByte(NbBuckets));
}

OCTDataStd_HDataMapOfStringByte::OCTDataStd_HDataMapOfStringByte(OCNaroWrappers::OCTDataStd_DataMapOfStringByte^ theOther) : OCMMgt_TShared((OCDummy^)nullptr)

{
  nativeHandle = new Handle_TDataStd_HDataMapOfStringByte(new TDataStd_HDataMapOfStringByte(*((TDataStd_DataMapOfStringByte*)theOther->Handle)));
}

OCTDataStd_DataMapOfStringByte^ OCTDataStd_HDataMapOfStringByte::Map()
{
  TDataStd_DataMapOfStringByte* tmp = new TDataStd_DataMapOfStringByte(0);
  *tmp = (*((Handle_TDataStd_HDataMapOfStringByte*)nativeHandle))->Map();
  return gcnew OCTDataStd_DataMapOfStringByte(tmp);
}

OCTDataStd_DataMapOfStringByte^ OCTDataStd_HDataMapOfStringByte::ChangeMap()
{
  TDataStd_DataMapOfStringByte* tmp = new TDataStd_DataMapOfStringByte(0);
  *tmp = (*((Handle_TDataStd_HDataMapOfStringByte*)nativeHandle))->ChangeMap();
  return gcnew OCTDataStd_DataMapOfStringByte(tmp);
}



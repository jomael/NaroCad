// File generated by CPPExt (CPP file)
//

#include "TDataStd_HDataMapOfStringHArray1OfInteger.h"
#include "../Converter.h"
#include "TDataStd_DataMapOfStringHArray1OfInteger.h"


using namespace OCNaroWrappers;

OCTDataStd_HDataMapOfStringHArray1OfInteger::OCTDataStd_HDataMapOfStringHArray1OfInteger(Handle(TDataStd_HDataMapOfStringHArray1OfInteger)* nativeHandle) : OCMMgt_TShared((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_TDataStd_HDataMapOfStringHArray1OfInteger(*nativeHandle);
}

OCTDataStd_HDataMapOfStringHArray1OfInteger::OCTDataStd_HDataMapOfStringHArray1OfInteger(Standard_Integer NbBuckets) : OCMMgt_TShared((OCDummy^)nullptr)

{
  nativeHandle = new Handle_TDataStd_HDataMapOfStringHArray1OfInteger(new TDataStd_HDataMapOfStringHArray1OfInteger(NbBuckets));
}

OCTDataStd_HDataMapOfStringHArray1OfInteger::OCTDataStd_HDataMapOfStringHArray1OfInteger(OCNaroWrappers::OCTDataStd_DataMapOfStringHArray1OfInteger^ theOther) : OCMMgt_TShared((OCDummy^)nullptr)

{
  nativeHandle = new Handle_TDataStd_HDataMapOfStringHArray1OfInteger(new TDataStd_HDataMapOfStringHArray1OfInteger(*((TDataStd_DataMapOfStringHArray1OfInteger*)theOther->Handle)));
}

OCTDataStd_DataMapOfStringHArray1OfInteger^ OCTDataStd_HDataMapOfStringHArray1OfInteger::Map()
{
  TDataStd_DataMapOfStringHArray1OfInteger* tmp = new TDataStd_DataMapOfStringHArray1OfInteger(0);
  *tmp = (*((Handle_TDataStd_HDataMapOfStringHArray1OfInteger*)nativeHandle))->Map();
  return gcnew OCTDataStd_DataMapOfStringHArray1OfInteger(tmp);
}

OCTDataStd_DataMapOfStringHArray1OfInteger^ OCTDataStd_HDataMapOfStringHArray1OfInteger::ChangeMap()
{
  TDataStd_DataMapOfStringHArray1OfInteger* tmp = new TDataStd_DataMapOfStringHArray1OfInteger(0);
  *tmp = (*((Handle_TDataStd_HDataMapOfStringHArray1OfInteger*)nativeHandle))->ChangeMap();
  return gcnew OCTDataStd_DataMapOfStringHArray1OfInteger(tmp);
}


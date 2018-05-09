// File generated by CPPExt (CPP file)
//

#include "TDataStd_HDataMapOfStringHArray1OfReal.h"
#include "../Converter.h"
#include "TDataStd_DataMapOfStringHArray1OfReal.h"


using namespace OCNaroWrappers;

OCTDataStd_HDataMapOfStringHArray1OfReal::OCTDataStd_HDataMapOfStringHArray1OfReal(Handle(TDataStd_HDataMapOfStringHArray1OfReal)* nativeHandle) : OCMMgt_TShared((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_TDataStd_HDataMapOfStringHArray1OfReal(*nativeHandle);
}

OCTDataStd_HDataMapOfStringHArray1OfReal::OCTDataStd_HDataMapOfStringHArray1OfReal(Standard_Integer NbBuckets) : OCMMgt_TShared((OCDummy^)nullptr)

{
  nativeHandle = new Handle_TDataStd_HDataMapOfStringHArray1OfReal(new TDataStd_HDataMapOfStringHArray1OfReal(NbBuckets));
}

OCTDataStd_HDataMapOfStringHArray1OfReal::OCTDataStd_HDataMapOfStringHArray1OfReal(OCNaroWrappers::OCTDataStd_DataMapOfStringHArray1OfReal^ theOther) : OCMMgt_TShared((OCDummy^)nullptr)

{
  nativeHandle = new Handle_TDataStd_HDataMapOfStringHArray1OfReal(new TDataStd_HDataMapOfStringHArray1OfReal(*((TDataStd_DataMapOfStringHArray1OfReal*)theOther->Handle)));
}

OCTDataStd_DataMapOfStringHArray1OfReal^ OCTDataStd_HDataMapOfStringHArray1OfReal::Map()
{
  TDataStd_DataMapOfStringHArray1OfReal* tmp = new TDataStd_DataMapOfStringHArray1OfReal(0);
  *tmp = (*((Handle_TDataStd_HDataMapOfStringHArray1OfReal*)nativeHandle))->Map();
  return gcnew OCTDataStd_DataMapOfStringHArray1OfReal(tmp);
}

OCTDataStd_DataMapOfStringHArray1OfReal^ OCTDataStd_HDataMapOfStringHArray1OfReal::ChangeMap()
{
  TDataStd_DataMapOfStringHArray1OfReal* tmp = new TDataStd_DataMapOfStringHArray1OfReal(0);
  *tmp = (*((Handle_TDataStd_HDataMapOfStringHArray1OfReal*)nativeHandle))->ChangeMap();
  return gcnew OCTDataStd_DataMapOfStringHArray1OfReal(tmp);
}



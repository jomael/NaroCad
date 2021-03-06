// File generated by CPPExt (CPP file)
//

#include "TColStd_SequenceOfAddress.h"
#include "../Converter.h"
#include "TColStd_SequenceNodeOfSequenceOfAddress.h"


using namespace OCNaroWrappers;

OCTColStd_SequenceOfAddress::OCTColStd_SequenceOfAddress(TColStd_SequenceOfAddress* nativeHandle) : OCTCollection_BaseSequence((OCDummy^)nullptr)

{
  this->nativeHandle = nativeHandle;
}

OCTColStd_SequenceOfAddress::OCTColStd_SequenceOfAddress() : OCTCollection_BaseSequence((OCDummy^)nullptr)

{
  nativeHandle = new TColStd_SequenceOfAddress();
}

OCTColStd_SequenceOfAddress^ OCTColStd_SequenceOfAddress::Assign(OCNaroWrappers::OCTColStd_SequenceOfAddress^ Other)
{
  TColStd_SequenceOfAddress* tmp = new TColStd_SequenceOfAddress();
  *tmp = ((TColStd_SequenceOfAddress*)nativeHandle)->Assign(*((TColStd_SequenceOfAddress*)Other->Handle));
  return gcnew OCTColStd_SequenceOfAddress(tmp);
}

 void OCTColStd_SequenceOfAddress::Append(Standard_Address T)
{
  ((TColStd_SequenceOfAddress*)nativeHandle)->Append(T);
}

 void OCTColStd_SequenceOfAddress::Append(OCNaroWrappers::OCTColStd_SequenceOfAddress^ S)
{
  ((TColStd_SequenceOfAddress*)nativeHandle)->Append(*((TColStd_SequenceOfAddress*)S->Handle));
}

 void OCTColStd_SequenceOfAddress::Prepend(Standard_Address T)
{
  ((TColStd_SequenceOfAddress*)nativeHandle)->Prepend(T);
}

 void OCTColStd_SequenceOfAddress::Prepend(OCNaroWrappers::OCTColStd_SequenceOfAddress^ S)
{
  ((TColStd_SequenceOfAddress*)nativeHandle)->Prepend(*((TColStd_SequenceOfAddress*)S->Handle));
}

 void OCTColStd_SequenceOfAddress::InsertBefore(Standard_Integer Index, Standard_Address T)
{
  ((TColStd_SequenceOfAddress*)nativeHandle)->InsertBefore(Index, T);
}

 void OCTColStd_SequenceOfAddress::InsertBefore(Standard_Integer Index, OCNaroWrappers::OCTColStd_SequenceOfAddress^ S)
{
  ((TColStd_SequenceOfAddress*)nativeHandle)->InsertBefore(Index, *((TColStd_SequenceOfAddress*)S->Handle));
}

 void OCTColStd_SequenceOfAddress::InsertAfter(Standard_Integer Index, Standard_Address T)
{
  ((TColStd_SequenceOfAddress*)nativeHandle)->InsertAfter(Index, T);
}

 void OCTColStd_SequenceOfAddress::InsertAfter(Standard_Integer Index, OCNaroWrappers::OCTColStd_SequenceOfAddress^ S)
{
  ((TColStd_SequenceOfAddress*)nativeHandle)->InsertAfter(Index, *((TColStd_SequenceOfAddress*)S->Handle));
}

 Standard_Address OCTColStd_SequenceOfAddress::First()
{
  return ((TColStd_SequenceOfAddress*)nativeHandle)->First();
}

 Standard_Address OCTColStd_SequenceOfAddress::Last()
{
  return ((TColStd_SequenceOfAddress*)nativeHandle)->Last();
}

 void OCTColStd_SequenceOfAddress::Split(Standard_Integer Index, OCNaroWrappers::OCTColStd_SequenceOfAddress^ Sub)
{
  ((TColStd_SequenceOfAddress*)nativeHandle)->Split(Index, *((TColStd_SequenceOfAddress*)Sub->Handle));
}

 Standard_Address OCTColStd_SequenceOfAddress::Value(Standard_Integer Index)
{
  return ((TColStd_SequenceOfAddress*)nativeHandle)->Value(Index);
}

 void OCTColStd_SequenceOfAddress::SetValue(Standard_Integer Index, Standard_Address I)
{
  ((TColStd_SequenceOfAddress*)nativeHandle)->SetValue(Index, I);
}

 Standard_Address OCTColStd_SequenceOfAddress::ChangeValue(Standard_Integer Index)
{
  return ((TColStd_SequenceOfAddress*)nativeHandle)->ChangeValue(Index);
}

 void OCTColStd_SequenceOfAddress::Remove(Standard_Integer Index)
{
  ((TColStd_SequenceOfAddress*)nativeHandle)->Remove(Index);
}

 void OCTColStd_SequenceOfAddress::Remove(Standard_Integer FromIndex, Standard_Integer ToIndex)
{
  ((TColStd_SequenceOfAddress*)nativeHandle)->Remove(FromIndex, ToIndex);
}



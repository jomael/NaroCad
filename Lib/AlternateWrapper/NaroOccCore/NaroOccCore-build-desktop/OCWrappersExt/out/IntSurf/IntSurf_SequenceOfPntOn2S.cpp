// File generated by CPPExt (CPP file)
//

#include "IntSurf_SequenceOfPntOn2S.h"
#include "../Converter.h"
#include "IntSurf_PntOn2S.h"
#include "IntSurf_SequenceNodeOfSequenceOfPntOn2S.h"


using namespace OCNaroWrappers;

OCIntSurf_SequenceOfPntOn2S::OCIntSurf_SequenceOfPntOn2S(IntSurf_SequenceOfPntOn2S* nativeHandle) : OCTCollection_BaseSequence((OCDummy^)nullptr)

{
  this->nativeHandle = nativeHandle;
}

OCIntSurf_SequenceOfPntOn2S::OCIntSurf_SequenceOfPntOn2S() : OCTCollection_BaseSequence((OCDummy^)nullptr)

{
  nativeHandle = new IntSurf_SequenceOfPntOn2S();
}

OCIntSurf_SequenceOfPntOn2S^ OCIntSurf_SequenceOfPntOn2S::Assign(OCNaroWrappers::OCIntSurf_SequenceOfPntOn2S^ Other)
{
  IntSurf_SequenceOfPntOn2S* tmp = new IntSurf_SequenceOfPntOn2S();
  *tmp = ((IntSurf_SequenceOfPntOn2S*)nativeHandle)->Assign(*((IntSurf_SequenceOfPntOn2S*)Other->Handle));
  return gcnew OCIntSurf_SequenceOfPntOn2S(tmp);
}

 void OCIntSurf_SequenceOfPntOn2S::Append(OCNaroWrappers::OCIntSurf_PntOn2S^ T)
{
  ((IntSurf_SequenceOfPntOn2S*)nativeHandle)->Append(*((IntSurf_PntOn2S*)T->Handle));
}

 void OCIntSurf_SequenceOfPntOn2S::Append(OCNaroWrappers::OCIntSurf_SequenceOfPntOn2S^ S)
{
  ((IntSurf_SequenceOfPntOn2S*)nativeHandle)->Append(*((IntSurf_SequenceOfPntOn2S*)S->Handle));
}

 void OCIntSurf_SequenceOfPntOn2S::Prepend(OCNaroWrappers::OCIntSurf_PntOn2S^ T)
{
  ((IntSurf_SequenceOfPntOn2S*)nativeHandle)->Prepend(*((IntSurf_PntOn2S*)T->Handle));
}

 void OCIntSurf_SequenceOfPntOn2S::Prepend(OCNaroWrappers::OCIntSurf_SequenceOfPntOn2S^ S)
{
  ((IntSurf_SequenceOfPntOn2S*)nativeHandle)->Prepend(*((IntSurf_SequenceOfPntOn2S*)S->Handle));
}

 void OCIntSurf_SequenceOfPntOn2S::InsertBefore(Standard_Integer Index, OCNaroWrappers::OCIntSurf_PntOn2S^ T)
{
  ((IntSurf_SequenceOfPntOn2S*)nativeHandle)->InsertBefore(Index, *((IntSurf_PntOn2S*)T->Handle));
}

 void OCIntSurf_SequenceOfPntOn2S::InsertBefore(Standard_Integer Index, OCNaroWrappers::OCIntSurf_SequenceOfPntOn2S^ S)
{
  ((IntSurf_SequenceOfPntOn2S*)nativeHandle)->InsertBefore(Index, *((IntSurf_SequenceOfPntOn2S*)S->Handle));
}

 void OCIntSurf_SequenceOfPntOn2S::InsertAfter(Standard_Integer Index, OCNaroWrappers::OCIntSurf_PntOn2S^ T)
{
  ((IntSurf_SequenceOfPntOn2S*)nativeHandle)->InsertAfter(Index, *((IntSurf_PntOn2S*)T->Handle));
}

 void OCIntSurf_SequenceOfPntOn2S::InsertAfter(Standard_Integer Index, OCNaroWrappers::OCIntSurf_SequenceOfPntOn2S^ S)
{
  ((IntSurf_SequenceOfPntOn2S*)nativeHandle)->InsertAfter(Index, *((IntSurf_SequenceOfPntOn2S*)S->Handle));
}

OCIntSurf_PntOn2S^ OCIntSurf_SequenceOfPntOn2S::First()
{
  IntSurf_PntOn2S* tmp = new IntSurf_PntOn2S();
  *tmp = ((IntSurf_SequenceOfPntOn2S*)nativeHandle)->First();
  return gcnew OCIntSurf_PntOn2S(tmp);
}

OCIntSurf_PntOn2S^ OCIntSurf_SequenceOfPntOn2S::Last()
{
  IntSurf_PntOn2S* tmp = new IntSurf_PntOn2S();
  *tmp = ((IntSurf_SequenceOfPntOn2S*)nativeHandle)->Last();
  return gcnew OCIntSurf_PntOn2S(tmp);
}

 void OCIntSurf_SequenceOfPntOn2S::Split(Standard_Integer Index, OCNaroWrappers::OCIntSurf_SequenceOfPntOn2S^ Sub)
{
  ((IntSurf_SequenceOfPntOn2S*)nativeHandle)->Split(Index, *((IntSurf_SequenceOfPntOn2S*)Sub->Handle));
}

OCIntSurf_PntOn2S^ OCIntSurf_SequenceOfPntOn2S::Value(Standard_Integer Index)
{
  IntSurf_PntOn2S* tmp = new IntSurf_PntOn2S();
  *tmp = ((IntSurf_SequenceOfPntOn2S*)nativeHandle)->Value(Index);
  return gcnew OCIntSurf_PntOn2S(tmp);
}

 void OCIntSurf_SequenceOfPntOn2S::SetValue(Standard_Integer Index, OCNaroWrappers::OCIntSurf_PntOn2S^ I)
{
  ((IntSurf_SequenceOfPntOn2S*)nativeHandle)->SetValue(Index, *((IntSurf_PntOn2S*)I->Handle));
}

OCIntSurf_PntOn2S^ OCIntSurf_SequenceOfPntOn2S::ChangeValue(Standard_Integer Index)
{
  IntSurf_PntOn2S* tmp = new IntSurf_PntOn2S();
  *tmp = ((IntSurf_SequenceOfPntOn2S*)nativeHandle)->ChangeValue(Index);
  return gcnew OCIntSurf_PntOn2S(tmp);
}

 void OCIntSurf_SequenceOfPntOn2S::Remove(Standard_Integer Index)
{
  ((IntSurf_SequenceOfPntOn2S*)nativeHandle)->Remove(Index);
}

 void OCIntSurf_SequenceOfPntOn2S::Remove(Standard_Integer FromIndex, Standard_Integer ToIndex)
{
  ((IntSurf_SequenceOfPntOn2S*)nativeHandle)->Remove(FromIndex, ToIndex);
}



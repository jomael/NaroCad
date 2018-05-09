// File generated by CPPExt (CPP file)
//

#include "Extrema_SequenceOfPOnCurv2d.h"
#include "../Converter.h"
#include "Extrema_POnCurv2d.h"
#include "Extrema_SequenceNodeOfSequenceOfPOnCurv2d.h"


using namespace OCNaroWrappers;

OCExtrema_SequenceOfPOnCurv2d::OCExtrema_SequenceOfPOnCurv2d(Extrema_SequenceOfPOnCurv2d* nativeHandle) : OCTCollection_BaseSequence((OCDummy^)nullptr)

{
  this->nativeHandle = nativeHandle;
}

OCExtrema_SequenceOfPOnCurv2d::OCExtrema_SequenceOfPOnCurv2d() : OCTCollection_BaseSequence((OCDummy^)nullptr)

{
  nativeHandle = new Extrema_SequenceOfPOnCurv2d();
}

OCExtrema_SequenceOfPOnCurv2d^ OCExtrema_SequenceOfPOnCurv2d::Assign(OCNaroWrappers::OCExtrema_SequenceOfPOnCurv2d^ Other)
{
  Extrema_SequenceOfPOnCurv2d* tmp = new Extrema_SequenceOfPOnCurv2d();
  *tmp = ((Extrema_SequenceOfPOnCurv2d*)nativeHandle)->Assign(*((Extrema_SequenceOfPOnCurv2d*)Other->Handle));
  return gcnew OCExtrema_SequenceOfPOnCurv2d(tmp);
}

 void OCExtrema_SequenceOfPOnCurv2d::Append(OCNaroWrappers::OCExtrema_POnCurv2d^ T)
{
  ((Extrema_SequenceOfPOnCurv2d*)nativeHandle)->Append(*((Extrema_POnCurv2d*)T->Handle));
}

 void OCExtrema_SequenceOfPOnCurv2d::Append(OCNaroWrappers::OCExtrema_SequenceOfPOnCurv2d^ S)
{
  ((Extrema_SequenceOfPOnCurv2d*)nativeHandle)->Append(*((Extrema_SequenceOfPOnCurv2d*)S->Handle));
}

 void OCExtrema_SequenceOfPOnCurv2d::Prepend(OCNaroWrappers::OCExtrema_POnCurv2d^ T)
{
  ((Extrema_SequenceOfPOnCurv2d*)nativeHandle)->Prepend(*((Extrema_POnCurv2d*)T->Handle));
}

 void OCExtrema_SequenceOfPOnCurv2d::Prepend(OCNaroWrappers::OCExtrema_SequenceOfPOnCurv2d^ S)
{
  ((Extrema_SequenceOfPOnCurv2d*)nativeHandle)->Prepend(*((Extrema_SequenceOfPOnCurv2d*)S->Handle));
}

 void OCExtrema_SequenceOfPOnCurv2d::InsertBefore(Standard_Integer Index, OCNaroWrappers::OCExtrema_POnCurv2d^ T)
{
  ((Extrema_SequenceOfPOnCurv2d*)nativeHandle)->InsertBefore(Index, *((Extrema_POnCurv2d*)T->Handle));
}

 void OCExtrema_SequenceOfPOnCurv2d::InsertBefore(Standard_Integer Index, OCNaroWrappers::OCExtrema_SequenceOfPOnCurv2d^ S)
{
  ((Extrema_SequenceOfPOnCurv2d*)nativeHandle)->InsertBefore(Index, *((Extrema_SequenceOfPOnCurv2d*)S->Handle));
}

 void OCExtrema_SequenceOfPOnCurv2d::InsertAfter(Standard_Integer Index, OCNaroWrappers::OCExtrema_POnCurv2d^ T)
{
  ((Extrema_SequenceOfPOnCurv2d*)nativeHandle)->InsertAfter(Index, *((Extrema_POnCurv2d*)T->Handle));
}

 void OCExtrema_SequenceOfPOnCurv2d::InsertAfter(Standard_Integer Index, OCNaroWrappers::OCExtrema_SequenceOfPOnCurv2d^ S)
{
  ((Extrema_SequenceOfPOnCurv2d*)nativeHandle)->InsertAfter(Index, *((Extrema_SequenceOfPOnCurv2d*)S->Handle));
}

OCExtrema_POnCurv2d^ OCExtrema_SequenceOfPOnCurv2d::First()
{
  Extrema_POnCurv2d* tmp = new Extrema_POnCurv2d();
  *tmp = ((Extrema_SequenceOfPOnCurv2d*)nativeHandle)->First();
  return gcnew OCExtrema_POnCurv2d(tmp);
}

OCExtrema_POnCurv2d^ OCExtrema_SequenceOfPOnCurv2d::Last()
{
  Extrema_POnCurv2d* tmp = new Extrema_POnCurv2d();
  *tmp = ((Extrema_SequenceOfPOnCurv2d*)nativeHandle)->Last();
  return gcnew OCExtrema_POnCurv2d(tmp);
}

 void OCExtrema_SequenceOfPOnCurv2d::Split(Standard_Integer Index, OCNaroWrappers::OCExtrema_SequenceOfPOnCurv2d^ Sub)
{
  ((Extrema_SequenceOfPOnCurv2d*)nativeHandle)->Split(Index, *((Extrema_SequenceOfPOnCurv2d*)Sub->Handle));
}

OCExtrema_POnCurv2d^ OCExtrema_SequenceOfPOnCurv2d::Value(Standard_Integer Index)
{
  Extrema_POnCurv2d* tmp = new Extrema_POnCurv2d();
  *tmp = ((Extrema_SequenceOfPOnCurv2d*)nativeHandle)->Value(Index);
  return gcnew OCExtrema_POnCurv2d(tmp);
}

 void OCExtrema_SequenceOfPOnCurv2d::SetValue(Standard_Integer Index, OCNaroWrappers::OCExtrema_POnCurv2d^ I)
{
  ((Extrema_SequenceOfPOnCurv2d*)nativeHandle)->SetValue(Index, *((Extrema_POnCurv2d*)I->Handle));
}

OCExtrema_POnCurv2d^ OCExtrema_SequenceOfPOnCurv2d::ChangeValue(Standard_Integer Index)
{
  Extrema_POnCurv2d* tmp = new Extrema_POnCurv2d();
  *tmp = ((Extrema_SequenceOfPOnCurv2d*)nativeHandle)->ChangeValue(Index);
  return gcnew OCExtrema_POnCurv2d(tmp);
}

 void OCExtrema_SequenceOfPOnCurv2d::Remove(Standard_Integer Index)
{
  ((Extrema_SequenceOfPOnCurv2d*)nativeHandle)->Remove(Index);
}

 void OCExtrema_SequenceOfPOnCurv2d::Remove(Standard_Integer FromIndex, Standard_Integer ToIndex)
{
  ((Extrema_SequenceOfPOnCurv2d*)nativeHandle)->Remove(FromIndex, ToIndex);
}


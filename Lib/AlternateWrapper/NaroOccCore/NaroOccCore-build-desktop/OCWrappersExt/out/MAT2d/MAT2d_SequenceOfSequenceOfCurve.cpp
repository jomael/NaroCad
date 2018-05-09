// File generated by CPPExt (CPP file)
//

#include "MAT2d_SequenceOfSequenceOfCurve.h"
#include "../Converter.h"
#include "../TColGeom2d/TColGeom2d_SequenceOfCurve.h"
#include "MAT2d_SequenceNodeOfSequenceOfSequenceOfCurve.h"


using namespace OCNaroWrappers;

OCMAT2d_SequenceOfSequenceOfCurve::OCMAT2d_SequenceOfSequenceOfCurve(MAT2d_SequenceOfSequenceOfCurve* nativeHandle) : OCTCollection_BaseSequence((OCDummy^)nullptr)

{
  this->nativeHandle = nativeHandle;
}

OCMAT2d_SequenceOfSequenceOfCurve::OCMAT2d_SequenceOfSequenceOfCurve() : OCTCollection_BaseSequence((OCDummy^)nullptr)

{
  nativeHandle = new MAT2d_SequenceOfSequenceOfCurve();
}

OCMAT2d_SequenceOfSequenceOfCurve^ OCMAT2d_SequenceOfSequenceOfCurve::Assign(OCNaroWrappers::OCMAT2d_SequenceOfSequenceOfCurve^ Other)
{
  MAT2d_SequenceOfSequenceOfCurve* tmp = new MAT2d_SequenceOfSequenceOfCurve();
  *tmp = ((MAT2d_SequenceOfSequenceOfCurve*)nativeHandle)->Assign(*((MAT2d_SequenceOfSequenceOfCurve*)Other->Handle));
  return gcnew OCMAT2d_SequenceOfSequenceOfCurve(tmp);
}

 void OCMAT2d_SequenceOfSequenceOfCurve::Append(OCNaroWrappers::OCTColGeom2d_SequenceOfCurve^ T)
{
  ((MAT2d_SequenceOfSequenceOfCurve*)nativeHandle)->Append(*((TColGeom2d_SequenceOfCurve*)T->Handle));
}

 void OCMAT2d_SequenceOfSequenceOfCurve::Append(OCNaroWrappers::OCMAT2d_SequenceOfSequenceOfCurve^ S)
{
  ((MAT2d_SequenceOfSequenceOfCurve*)nativeHandle)->Append(*((MAT2d_SequenceOfSequenceOfCurve*)S->Handle));
}

 void OCMAT2d_SequenceOfSequenceOfCurve::Prepend(OCNaroWrappers::OCTColGeom2d_SequenceOfCurve^ T)
{
  ((MAT2d_SequenceOfSequenceOfCurve*)nativeHandle)->Prepend(*((TColGeom2d_SequenceOfCurve*)T->Handle));
}

 void OCMAT2d_SequenceOfSequenceOfCurve::Prepend(OCNaroWrappers::OCMAT2d_SequenceOfSequenceOfCurve^ S)
{
  ((MAT2d_SequenceOfSequenceOfCurve*)nativeHandle)->Prepend(*((MAT2d_SequenceOfSequenceOfCurve*)S->Handle));
}

 void OCMAT2d_SequenceOfSequenceOfCurve::InsertBefore(Standard_Integer Index, OCNaroWrappers::OCTColGeom2d_SequenceOfCurve^ T)
{
  ((MAT2d_SequenceOfSequenceOfCurve*)nativeHandle)->InsertBefore(Index, *((TColGeom2d_SequenceOfCurve*)T->Handle));
}

 void OCMAT2d_SequenceOfSequenceOfCurve::InsertBefore(Standard_Integer Index, OCNaroWrappers::OCMAT2d_SequenceOfSequenceOfCurve^ S)
{
  ((MAT2d_SequenceOfSequenceOfCurve*)nativeHandle)->InsertBefore(Index, *((MAT2d_SequenceOfSequenceOfCurve*)S->Handle));
}

 void OCMAT2d_SequenceOfSequenceOfCurve::InsertAfter(Standard_Integer Index, OCNaroWrappers::OCTColGeom2d_SequenceOfCurve^ T)
{
  ((MAT2d_SequenceOfSequenceOfCurve*)nativeHandle)->InsertAfter(Index, *((TColGeom2d_SequenceOfCurve*)T->Handle));
}

 void OCMAT2d_SequenceOfSequenceOfCurve::InsertAfter(Standard_Integer Index, OCNaroWrappers::OCMAT2d_SequenceOfSequenceOfCurve^ S)
{
  ((MAT2d_SequenceOfSequenceOfCurve*)nativeHandle)->InsertAfter(Index, *((MAT2d_SequenceOfSequenceOfCurve*)S->Handle));
}

OCTColGeom2d_SequenceOfCurve^ OCMAT2d_SequenceOfSequenceOfCurve::First()
{
  TColGeom2d_SequenceOfCurve* tmp = new TColGeom2d_SequenceOfCurve();
  *tmp = ((MAT2d_SequenceOfSequenceOfCurve*)nativeHandle)->First();
  return gcnew OCTColGeom2d_SequenceOfCurve(tmp);
}

OCTColGeom2d_SequenceOfCurve^ OCMAT2d_SequenceOfSequenceOfCurve::Last()
{
  TColGeom2d_SequenceOfCurve* tmp = new TColGeom2d_SequenceOfCurve();
  *tmp = ((MAT2d_SequenceOfSequenceOfCurve*)nativeHandle)->Last();
  return gcnew OCTColGeom2d_SequenceOfCurve(tmp);
}

 void OCMAT2d_SequenceOfSequenceOfCurve::Split(Standard_Integer Index, OCNaroWrappers::OCMAT2d_SequenceOfSequenceOfCurve^ Sub)
{
  ((MAT2d_SequenceOfSequenceOfCurve*)nativeHandle)->Split(Index, *((MAT2d_SequenceOfSequenceOfCurve*)Sub->Handle));
}

OCTColGeom2d_SequenceOfCurve^ OCMAT2d_SequenceOfSequenceOfCurve::Value(Standard_Integer Index)
{
  TColGeom2d_SequenceOfCurve* tmp = new TColGeom2d_SequenceOfCurve();
  *tmp = ((MAT2d_SequenceOfSequenceOfCurve*)nativeHandle)->Value(Index);
  return gcnew OCTColGeom2d_SequenceOfCurve(tmp);
}

 void OCMAT2d_SequenceOfSequenceOfCurve::SetValue(Standard_Integer Index, OCNaroWrappers::OCTColGeom2d_SequenceOfCurve^ I)
{
  ((MAT2d_SequenceOfSequenceOfCurve*)nativeHandle)->SetValue(Index, *((TColGeom2d_SequenceOfCurve*)I->Handle));
}

OCTColGeom2d_SequenceOfCurve^ OCMAT2d_SequenceOfSequenceOfCurve::ChangeValue(Standard_Integer Index)
{
  TColGeom2d_SequenceOfCurve* tmp = new TColGeom2d_SequenceOfCurve();
  *tmp = ((MAT2d_SequenceOfSequenceOfCurve*)nativeHandle)->ChangeValue(Index);
  return gcnew OCTColGeom2d_SequenceOfCurve(tmp);
}

 void OCMAT2d_SequenceOfSequenceOfCurve::Remove(Standard_Integer Index)
{
  ((MAT2d_SequenceOfSequenceOfCurve*)nativeHandle)->Remove(Index);
}

 void OCMAT2d_SequenceOfSequenceOfCurve::Remove(Standard_Integer FromIndex, Standard_Integer ToIndex)
{
  ((MAT2d_SequenceOfSequenceOfCurve*)nativeHandle)->Remove(FromIndex, ToIndex);
}



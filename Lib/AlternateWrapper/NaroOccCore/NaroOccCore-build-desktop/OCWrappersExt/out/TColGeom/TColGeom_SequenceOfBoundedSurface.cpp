// File generated by CPPExt (CPP file)
//

#include "TColGeom_SequenceOfBoundedSurface.h"
#include "../Converter.h"
#include "../Geom/Geom_BoundedSurface.h"
#include "TColGeom_SequenceNodeOfSequenceOfBoundedSurface.h"


using namespace OCNaroWrappers;

OCTColGeom_SequenceOfBoundedSurface::OCTColGeom_SequenceOfBoundedSurface(TColGeom_SequenceOfBoundedSurface* nativeHandle) : OCTCollection_BaseSequence((OCDummy^)nullptr)

{
  this->nativeHandle = nativeHandle;
}

OCTColGeom_SequenceOfBoundedSurface::OCTColGeom_SequenceOfBoundedSurface() : OCTCollection_BaseSequence((OCDummy^)nullptr)

{
  nativeHandle = new TColGeom_SequenceOfBoundedSurface();
}

OCTColGeom_SequenceOfBoundedSurface^ OCTColGeom_SequenceOfBoundedSurface::Assign(OCNaroWrappers::OCTColGeom_SequenceOfBoundedSurface^ Other)
{
  TColGeom_SequenceOfBoundedSurface* tmp = new TColGeom_SequenceOfBoundedSurface();
  *tmp = ((TColGeom_SequenceOfBoundedSurface*)nativeHandle)->Assign(*((TColGeom_SequenceOfBoundedSurface*)Other->Handle));
  return gcnew OCTColGeom_SequenceOfBoundedSurface(tmp);
}

 void OCTColGeom_SequenceOfBoundedSurface::Append(OCNaroWrappers::OCGeom_BoundedSurface^ T)
{
  ((TColGeom_SequenceOfBoundedSurface*)nativeHandle)->Append(*((Handle_Geom_BoundedSurface*)T->Handle));
}

 void OCTColGeom_SequenceOfBoundedSurface::Append(OCNaroWrappers::OCTColGeom_SequenceOfBoundedSurface^ S)
{
  ((TColGeom_SequenceOfBoundedSurface*)nativeHandle)->Append(*((TColGeom_SequenceOfBoundedSurface*)S->Handle));
}

 void OCTColGeom_SequenceOfBoundedSurface::Prepend(OCNaroWrappers::OCGeom_BoundedSurface^ T)
{
  ((TColGeom_SequenceOfBoundedSurface*)nativeHandle)->Prepend(*((Handle_Geom_BoundedSurface*)T->Handle));
}

 void OCTColGeom_SequenceOfBoundedSurface::Prepend(OCNaroWrappers::OCTColGeom_SequenceOfBoundedSurface^ S)
{
  ((TColGeom_SequenceOfBoundedSurface*)nativeHandle)->Prepend(*((TColGeom_SequenceOfBoundedSurface*)S->Handle));
}

 void OCTColGeom_SequenceOfBoundedSurface::InsertBefore(Standard_Integer Index, OCNaroWrappers::OCGeom_BoundedSurface^ T)
{
  ((TColGeom_SequenceOfBoundedSurface*)nativeHandle)->InsertBefore(Index, *((Handle_Geom_BoundedSurface*)T->Handle));
}

 void OCTColGeom_SequenceOfBoundedSurface::InsertBefore(Standard_Integer Index, OCNaroWrappers::OCTColGeom_SequenceOfBoundedSurface^ S)
{
  ((TColGeom_SequenceOfBoundedSurface*)nativeHandle)->InsertBefore(Index, *((TColGeom_SequenceOfBoundedSurface*)S->Handle));
}

 void OCTColGeom_SequenceOfBoundedSurface::InsertAfter(Standard_Integer Index, OCNaroWrappers::OCGeom_BoundedSurface^ T)
{
  ((TColGeom_SequenceOfBoundedSurface*)nativeHandle)->InsertAfter(Index, *((Handle_Geom_BoundedSurface*)T->Handle));
}

 void OCTColGeom_SequenceOfBoundedSurface::InsertAfter(Standard_Integer Index, OCNaroWrappers::OCTColGeom_SequenceOfBoundedSurface^ S)
{
  ((TColGeom_SequenceOfBoundedSurface*)nativeHandle)->InsertAfter(Index, *((TColGeom_SequenceOfBoundedSurface*)S->Handle));
}

OCGeom_BoundedSurface^ OCTColGeom_SequenceOfBoundedSurface::First()
{
  Handle(Geom_BoundedSurface) tmp = ((TColGeom_SequenceOfBoundedSurface*)nativeHandle)->First();
  return gcnew OCGeom_BoundedSurface(&tmp);
}

OCGeom_BoundedSurface^ OCTColGeom_SequenceOfBoundedSurface::Last()
{
  Handle(Geom_BoundedSurface) tmp = ((TColGeom_SequenceOfBoundedSurface*)nativeHandle)->Last();
  return gcnew OCGeom_BoundedSurface(&tmp);
}

 void OCTColGeom_SequenceOfBoundedSurface::Split(Standard_Integer Index, OCNaroWrappers::OCTColGeom_SequenceOfBoundedSurface^ Sub)
{
  ((TColGeom_SequenceOfBoundedSurface*)nativeHandle)->Split(Index, *((TColGeom_SequenceOfBoundedSurface*)Sub->Handle));
}

OCGeom_BoundedSurface^ OCTColGeom_SequenceOfBoundedSurface::Value(Standard_Integer Index)
{
  Handle(Geom_BoundedSurface) tmp = ((TColGeom_SequenceOfBoundedSurface*)nativeHandle)->Value(Index);
  return gcnew OCGeom_BoundedSurface(&tmp);
}

 void OCTColGeom_SequenceOfBoundedSurface::SetValue(Standard_Integer Index, OCNaroWrappers::OCGeom_BoundedSurface^ I)
{
  ((TColGeom_SequenceOfBoundedSurface*)nativeHandle)->SetValue(Index, *((Handle_Geom_BoundedSurface*)I->Handle));
}

OCGeom_BoundedSurface^ OCTColGeom_SequenceOfBoundedSurface::ChangeValue(Standard_Integer Index)
{
  Handle(Geom_BoundedSurface) tmp = ((TColGeom_SequenceOfBoundedSurface*)nativeHandle)->ChangeValue(Index);
  return gcnew OCGeom_BoundedSurface(&tmp);
}

 void OCTColGeom_SequenceOfBoundedSurface::Remove(Standard_Integer Index)
{
  ((TColGeom_SequenceOfBoundedSurface*)nativeHandle)->Remove(Index);
}

 void OCTColGeom_SequenceOfBoundedSurface::Remove(Standard_Integer FromIndex, Standard_Integer ToIndex)
{
  ((TColGeom_SequenceOfBoundedSurface*)nativeHandle)->Remove(FromIndex, ToIndex);
}



// File generated by CPPExt (CPP file)
//

#include "BRepSweep_SequenceOfShapesOfNumLinearRegularSweep.h"
#include "../Converter.h"
#include "../TopoDS/TopoDS_Shape.h"
#include "BRepSweep_SequenceNodeOfSequenceOfShapesOfNumLinearRegularSweep.h"


using namespace OCNaroWrappers;

OCBRepSweep_SequenceOfShapesOfNumLinearRegularSweep::OCBRepSweep_SequenceOfShapesOfNumLinearRegularSweep(BRepSweep_SequenceOfShapesOfNumLinearRegularSweep* nativeHandle) : OCTCollection_BaseSequence((OCDummy^)nullptr)

{
  this->nativeHandle = nativeHandle;
}

OCBRepSweep_SequenceOfShapesOfNumLinearRegularSweep::OCBRepSweep_SequenceOfShapesOfNumLinearRegularSweep() : OCTCollection_BaseSequence((OCDummy^)nullptr)

{
  nativeHandle = new BRepSweep_SequenceOfShapesOfNumLinearRegularSweep();
}

OCBRepSweep_SequenceOfShapesOfNumLinearRegularSweep^ OCBRepSweep_SequenceOfShapesOfNumLinearRegularSweep::Assign(OCNaroWrappers::OCBRepSweep_SequenceOfShapesOfNumLinearRegularSweep^ Other)
{
  BRepSweep_SequenceOfShapesOfNumLinearRegularSweep* tmp = new BRepSweep_SequenceOfShapesOfNumLinearRegularSweep();
  *tmp = ((BRepSweep_SequenceOfShapesOfNumLinearRegularSweep*)nativeHandle)->Assign(*((BRepSweep_SequenceOfShapesOfNumLinearRegularSweep*)Other->Handle));
  return gcnew OCBRepSweep_SequenceOfShapesOfNumLinearRegularSweep(tmp);
}

 void OCBRepSweep_SequenceOfShapesOfNumLinearRegularSweep::Append(OCNaroWrappers::OCTopoDS_Shape^ T)
{
  ((BRepSweep_SequenceOfShapesOfNumLinearRegularSweep*)nativeHandle)->Append(*((TopoDS_Shape*)T->Handle));
}

 void OCBRepSweep_SequenceOfShapesOfNumLinearRegularSweep::Append(OCNaroWrappers::OCBRepSweep_SequenceOfShapesOfNumLinearRegularSweep^ S)
{
  ((BRepSweep_SequenceOfShapesOfNumLinearRegularSweep*)nativeHandle)->Append(*((BRepSweep_SequenceOfShapesOfNumLinearRegularSweep*)S->Handle));
}

 void OCBRepSweep_SequenceOfShapesOfNumLinearRegularSweep::Prepend(OCNaroWrappers::OCTopoDS_Shape^ T)
{
  ((BRepSweep_SequenceOfShapesOfNumLinearRegularSweep*)nativeHandle)->Prepend(*((TopoDS_Shape*)T->Handle));
}

 void OCBRepSweep_SequenceOfShapesOfNumLinearRegularSweep::Prepend(OCNaroWrappers::OCBRepSweep_SequenceOfShapesOfNumLinearRegularSweep^ S)
{
  ((BRepSweep_SequenceOfShapesOfNumLinearRegularSweep*)nativeHandle)->Prepend(*((BRepSweep_SequenceOfShapesOfNumLinearRegularSweep*)S->Handle));
}

 void OCBRepSweep_SequenceOfShapesOfNumLinearRegularSweep::InsertBefore(Standard_Integer Index, OCNaroWrappers::OCTopoDS_Shape^ T)
{
  ((BRepSweep_SequenceOfShapesOfNumLinearRegularSweep*)nativeHandle)->InsertBefore(Index, *((TopoDS_Shape*)T->Handle));
}

 void OCBRepSweep_SequenceOfShapesOfNumLinearRegularSweep::InsertBefore(Standard_Integer Index, OCNaroWrappers::OCBRepSweep_SequenceOfShapesOfNumLinearRegularSweep^ S)
{
  ((BRepSweep_SequenceOfShapesOfNumLinearRegularSweep*)nativeHandle)->InsertBefore(Index, *((BRepSweep_SequenceOfShapesOfNumLinearRegularSweep*)S->Handle));
}

 void OCBRepSweep_SequenceOfShapesOfNumLinearRegularSweep::InsertAfter(Standard_Integer Index, OCNaroWrappers::OCTopoDS_Shape^ T)
{
  ((BRepSweep_SequenceOfShapesOfNumLinearRegularSweep*)nativeHandle)->InsertAfter(Index, *((TopoDS_Shape*)T->Handle));
}

 void OCBRepSweep_SequenceOfShapesOfNumLinearRegularSweep::InsertAfter(Standard_Integer Index, OCNaroWrappers::OCBRepSweep_SequenceOfShapesOfNumLinearRegularSweep^ S)
{
  ((BRepSweep_SequenceOfShapesOfNumLinearRegularSweep*)nativeHandle)->InsertAfter(Index, *((BRepSweep_SequenceOfShapesOfNumLinearRegularSweep*)S->Handle));
}

OCTopoDS_Shape^ OCBRepSweep_SequenceOfShapesOfNumLinearRegularSweep::First()
{
  TopoDS_Shape* tmp = new TopoDS_Shape();
  *tmp = ((BRepSweep_SequenceOfShapesOfNumLinearRegularSweep*)nativeHandle)->First();
  return gcnew OCTopoDS_Shape(tmp);
}

OCTopoDS_Shape^ OCBRepSweep_SequenceOfShapesOfNumLinearRegularSweep::Last()
{
  TopoDS_Shape* tmp = new TopoDS_Shape();
  *tmp = ((BRepSweep_SequenceOfShapesOfNumLinearRegularSweep*)nativeHandle)->Last();
  return gcnew OCTopoDS_Shape(tmp);
}

 void OCBRepSweep_SequenceOfShapesOfNumLinearRegularSweep::Split(Standard_Integer Index, OCNaroWrappers::OCBRepSweep_SequenceOfShapesOfNumLinearRegularSweep^ Sub)
{
  ((BRepSweep_SequenceOfShapesOfNumLinearRegularSweep*)nativeHandle)->Split(Index, *((BRepSweep_SequenceOfShapesOfNumLinearRegularSweep*)Sub->Handle));
}

OCTopoDS_Shape^ OCBRepSweep_SequenceOfShapesOfNumLinearRegularSweep::Value(Standard_Integer Index)
{
  TopoDS_Shape* tmp = new TopoDS_Shape();
  *tmp = ((BRepSweep_SequenceOfShapesOfNumLinearRegularSweep*)nativeHandle)->Value(Index);
  return gcnew OCTopoDS_Shape(tmp);
}

 void OCBRepSweep_SequenceOfShapesOfNumLinearRegularSweep::SetValue(Standard_Integer Index, OCNaroWrappers::OCTopoDS_Shape^ I)
{
  ((BRepSweep_SequenceOfShapesOfNumLinearRegularSweep*)nativeHandle)->SetValue(Index, *((TopoDS_Shape*)I->Handle));
}

OCTopoDS_Shape^ OCBRepSweep_SequenceOfShapesOfNumLinearRegularSweep::ChangeValue(Standard_Integer Index)
{
  TopoDS_Shape* tmp = new TopoDS_Shape();
  *tmp = ((BRepSweep_SequenceOfShapesOfNumLinearRegularSweep*)nativeHandle)->ChangeValue(Index);
  return gcnew OCTopoDS_Shape(tmp);
}

 void OCBRepSweep_SequenceOfShapesOfNumLinearRegularSweep::Remove(Standard_Integer Index)
{
  ((BRepSweep_SequenceOfShapesOfNumLinearRegularSweep*)nativeHandle)->Remove(Index);
}

 void OCBRepSweep_SequenceOfShapesOfNumLinearRegularSweep::Remove(Standard_Integer FromIndex, Standard_Integer ToIndex)
{
  ((BRepSweep_SequenceOfShapesOfNumLinearRegularSweep*)nativeHandle)->Remove(FromIndex, ToIndex);
}



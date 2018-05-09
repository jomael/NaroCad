// File generated by CPPExt (CPP file)
//

#include "BRepBlend_SequenceNodeOfSequenceOfPointOnRst.h"
#include "../Converter.h"
#include "BRepBlend_PointOnRst.h"
#include "BRepBlend_SequenceOfPointOnRst.h"


using namespace OCNaroWrappers;

OCBRepBlend_SequenceNodeOfSequenceOfPointOnRst::OCBRepBlend_SequenceNodeOfSequenceOfPointOnRst(Handle(BRepBlend_SequenceNodeOfSequenceOfPointOnRst)* nativeHandle) : OCTCollection_SeqNode((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_BRepBlend_SequenceNodeOfSequenceOfPointOnRst(*nativeHandle);
}

OCBRepBlend_SequenceNodeOfSequenceOfPointOnRst::OCBRepBlend_SequenceNodeOfSequenceOfPointOnRst(OCNaroWrappers::OCBRepBlend_PointOnRst^ I, TCollection_SeqNodePtr n, TCollection_SeqNodePtr p) : OCTCollection_SeqNode((OCDummy^)nullptr)

{
  nativeHandle = new Handle_BRepBlend_SequenceNodeOfSequenceOfPointOnRst(new BRepBlend_SequenceNodeOfSequenceOfPointOnRst(*((BRepBlend_PointOnRst*)I->Handle), n, p));
}

OCBRepBlend_PointOnRst^ OCBRepBlend_SequenceNodeOfSequenceOfPointOnRst::Value()
{
  BRepBlend_PointOnRst* tmp = new BRepBlend_PointOnRst();
  *tmp = (*((Handle_BRepBlend_SequenceNodeOfSequenceOfPointOnRst*)nativeHandle))->Value();
  return gcnew OCBRepBlend_PointOnRst(tmp);
}



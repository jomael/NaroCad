// File generated by CPPExt (CPP file)
//

#include "ShapeAnalysis_SequenceNodeOfSequenceOfFreeBounds.h"
#include "../Converter.h"
#include "ShapeAnalysis_FreeBoundData.h"
#include "ShapeAnalysis_SequenceOfFreeBounds.h"


using namespace OCNaroWrappers;

OCShapeAnalysis_SequenceNodeOfSequenceOfFreeBounds::OCShapeAnalysis_SequenceNodeOfSequenceOfFreeBounds(Handle(ShapeAnalysis_SequenceNodeOfSequenceOfFreeBounds)* nativeHandle) : OCTCollection_SeqNode((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_ShapeAnalysis_SequenceNodeOfSequenceOfFreeBounds(*nativeHandle);
}

OCShapeAnalysis_SequenceNodeOfSequenceOfFreeBounds::OCShapeAnalysis_SequenceNodeOfSequenceOfFreeBounds(OCNaroWrappers::OCShapeAnalysis_FreeBoundData^ I, TCollection_SeqNodePtr n, TCollection_SeqNodePtr p) : OCTCollection_SeqNode((OCDummy^)nullptr)

{
  nativeHandle = new Handle_ShapeAnalysis_SequenceNodeOfSequenceOfFreeBounds(new ShapeAnalysis_SequenceNodeOfSequenceOfFreeBounds(*((Handle_ShapeAnalysis_FreeBoundData*)I->Handle), n, p));
}

OCShapeAnalysis_FreeBoundData^ OCShapeAnalysis_SequenceNodeOfSequenceOfFreeBounds::Value()
{
  Handle(ShapeAnalysis_FreeBoundData) tmp = (*((Handle_ShapeAnalysis_SequenceNodeOfSequenceOfFreeBounds*)nativeHandle))->Value();
  return gcnew OCShapeAnalysis_FreeBoundData(&tmp);
}



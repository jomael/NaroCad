// File generated by CPPExt (CPP file)
//

#include "TColStd_SequenceNodeOfSequenceOfInteger.h"
#include "../Converter.h"
#include "TColStd_SequenceOfInteger.h"


using namespace OCNaroWrappers;

OCTColStd_SequenceNodeOfSequenceOfInteger::OCTColStd_SequenceNodeOfSequenceOfInteger(Handle(TColStd_SequenceNodeOfSequenceOfInteger)* nativeHandle) : OCTCollection_SeqNode((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_TColStd_SequenceNodeOfSequenceOfInteger(*nativeHandle);
}

OCTColStd_SequenceNodeOfSequenceOfInteger::OCTColStd_SequenceNodeOfSequenceOfInteger(Standard_Integer I, TCollection_SeqNodePtr n, TCollection_SeqNodePtr p) : OCTCollection_SeqNode((OCDummy^)nullptr)

{
  nativeHandle = new Handle_TColStd_SequenceNodeOfSequenceOfInteger(new TColStd_SequenceNodeOfSequenceOfInteger(I, n, p));
}

 Standard_Integer OCTColStd_SequenceNodeOfSequenceOfInteger::Value()
{
  return (*((Handle_TColStd_SequenceNodeOfSequenceOfInteger*)nativeHandle))->Value();
}


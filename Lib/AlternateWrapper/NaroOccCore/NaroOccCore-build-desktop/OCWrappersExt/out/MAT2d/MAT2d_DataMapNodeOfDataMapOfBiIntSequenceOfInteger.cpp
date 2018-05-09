// File generated by CPPExt (CPP file)
//

#include "MAT2d_DataMapNodeOfDataMapOfBiIntSequenceOfInteger.h"
#include "../Converter.h"
#include "MAT2d_BiInt.h"
#include "../TColStd/TColStd_SequenceOfInteger.h"
#include "MAT2d_MapBiIntHasher.h"
#include "MAT2d_DataMapOfBiIntSequenceOfInteger.h"
#include "MAT2d_DataMapIteratorOfDataMapOfBiIntSequenceOfInteger.h"


using namespace OCNaroWrappers;

OCMAT2d_DataMapNodeOfDataMapOfBiIntSequenceOfInteger::OCMAT2d_DataMapNodeOfDataMapOfBiIntSequenceOfInteger(Handle(MAT2d_DataMapNodeOfDataMapOfBiIntSequenceOfInteger)* nativeHandle) : OCTCollection_MapNode((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_MAT2d_DataMapNodeOfDataMapOfBiIntSequenceOfInteger(*nativeHandle);
}

OCMAT2d_DataMapNodeOfDataMapOfBiIntSequenceOfInteger::OCMAT2d_DataMapNodeOfDataMapOfBiIntSequenceOfInteger(OCNaroWrappers::OCMAT2d_BiInt^ K, OCNaroWrappers::OCTColStd_SequenceOfInteger^ I, TCollection_MapNodePtr n) : OCTCollection_MapNode((OCDummy^)nullptr)

{
  nativeHandle = new Handle_MAT2d_DataMapNodeOfDataMapOfBiIntSequenceOfInteger(new MAT2d_DataMapNodeOfDataMapOfBiIntSequenceOfInteger(*((MAT2d_BiInt*)K->Handle), *((TColStd_SequenceOfInteger*)I->Handle), n));
}

OCMAT2d_BiInt^ OCMAT2d_DataMapNodeOfDataMapOfBiIntSequenceOfInteger::Key()
{
  MAT2d_BiInt* tmp = new MAT2d_BiInt(0, 0);
  *tmp = (*((Handle_MAT2d_DataMapNodeOfDataMapOfBiIntSequenceOfInteger*)nativeHandle))->Key();
  return gcnew OCMAT2d_BiInt(tmp);
}

OCTColStd_SequenceOfInteger^ OCMAT2d_DataMapNodeOfDataMapOfBiIntSequenceOfInteger::Value()
{
  TColStd_SequenceOfInteger* tmp = new TColStd_SequenceOfInteger();
  *tmp = (*((Handle_MAT2d_DataMapNodeOfDataMapOfBiIntSequenceOfInteger*)nativeHandle))->Value();
  return gcnew OCTColStd_SequenceOfInteger(tmp);
}



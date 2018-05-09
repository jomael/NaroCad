// File generated by CPPExt (CPP file)
//

#include "Extrema_SequenceNodeOfSeqPOnCOfCCFOfECCOfExtCC.h"
#include "../Converter.h"
#include "Extrema_POnCurv.h"
#include "Extrema_SeqPOnCOfCCFOfECCOfExtCC.h"


using namespace OCNaroWrappers;

OCExtrema_SequenceNodeOfSeqPOnCOfCCFOfECCOfExtCC::OCExtrema_SequenceNodeOfSeqPOnCOfCCFOfECCOfExtCC(Handle(Extrema_SequenceNodeOfSeqPOnCOfCCFOfECCOfExtCC)* nativeHandle) : OCTCollection_SeqNode((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_Extrema_SequenceNodeOfSeqPOnCOfCCFOfECCOfExtCC(*nativeHandle);
}

OCExtrema_SequenceNodeOfSeqPOnCOfCCFOfECCOfExtCC::OCExtrema_SequenceNodeOfSeqPOnCOfCCFOfECCOfExtCC(OCNaroWrappers::OCExtrema_POnCurv^ I, TCollection_SeqNodePtr n, TCollection_SeqNodePtr p) : OCTCollection_SeqNode((OCDummy^)nullptr)

{
  nativeHandle = new Handle_Extrema_SequenceNodeOfSeqPOnCOfCCFOfECCOfExtCC(new Extrema_SequenceNodeOfSeqPOnCOfCCFOfECCOfExtCC(*((Extrema_POnCurv*)I->Handle), n, p));
}

OCExtrema_POnCurv^ OCExtrema_SequenceNodeOfSeqPOnCOfCCFOfECCOfExtCC::Value()
{
  Extrema_POnCurv* tmp = new Extrema_POnCurv();
  *tmp = (*((Handle_Extrema_SequenceNodeOfSeqPOnCOfCCFOfECCOfExtCC*)nativeHandle))->Value();
  return gcnew OCExtrema_POnCurv(tmp);
}



// File generated by CPPExt (CPP file)
//

#include "Extrema_SequenceNodeOfSeqPCOfPCFOfEPCOfELPCOfLocateExtPC2d.h"
#include "../Converter.h"
#include "Extrema_POnCurv2d.h"
#include "Extrema_SeqPCOfPCFOfEPCOfELPCOfLocateExtPC2d.h"


using namespace OCNaroWrappers;

OCExtrema_SequenceNodeOfSeqPCOfPCFOfEPCOfELPCOfLocateExtPC2d::OCExtrema_SequenceNodeOfSeqPCOfPCFOfEPCOfELPCOfLocateExtPC2d(Handle(Extrema_SequenceNodeOfSeqPCOfPCFOfEPCOfELPCOfLocateExtPC2d)* nativeHandle) : OCTCollection_SeqNode((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_Extrema_SequenceNodeOfSeqPCOfPCFOfEPCOfELPCOfLocateExtPC2d(*nativeHandle);
}

OCExtrema_SequenceNodeOfSeqPCOfPCFOfEPCOfELPCOfLocateExtPC2d::OCExtrema_SequenceNodeOfSeqPCOfPCFOfEPCOfELPCOfLocateExtPC2d(OCNaroWrappers::OCExtrema_POnCurv2d^ I, TCollection_SeqNodePtr n, TCollection_SeqNodePtr p) : OCTCollection_SeqNode((OCDummy^)nullptr)

{
  nativeHandle = new Handle_Extrema_SequenceNodeOfSeqPCOfPCFOfEPCOfELPCOfLocateExtPC2d(new Extrema_SequenceNodeOfSeqPCOfPCFOfEPCOfELPCOfLocateExtPC2d(*((Extrema_POnCurv2d*)I->Handle), n, p));
}

OCExtrema_POnCurv2d^ OCExtrema_SequenceNodeOfSeqPCOfPCFOfEPCOfELPCOfLocateExtPC2d::Value()
{
  Extrema_POnCurv2d* tmp = new Extrema_POnCurv2d();
  *tmp = (*((Handle_Extrema_SequenceNodeOfSeqPCOfPCFOfEPCOfELPCOfLocateExtPC2d*)nativeHandle))->Value();
  return gcnew OCExtrema_POnCurv2d(tmp);
}



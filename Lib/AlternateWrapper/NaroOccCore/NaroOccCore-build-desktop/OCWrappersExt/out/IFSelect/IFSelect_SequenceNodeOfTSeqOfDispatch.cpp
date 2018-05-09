// File generated by CPPExt (CPP file)
//

#include "IFSelect_SequenceNodeOfTSeqOfDispatch.h"
#include "../Converter.h"
#include "IFSelect_Dispatch.h"
#include "IFSelect_TSeqOfDispatch.h"


using namespace OCNaroWrappers;

OCIFSelect_SequenceNodeOfTSeqOfDispatch::OCIFSelect_SequenceNodeOfTSeqOfDispatch(Handle(IFSelect_SequenceNodeOfTSeqOfDispatch)* nativeHandle) : OCTCollection_SeqNode((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_IFSelect_SequenceNodeOfTSeqOfDispatch(*nativeHandle);
}

OCIFSelect_SequenceNodeOfTSeqOfDispatch::OCIFSelect_SequenceNodeOfTSeqOfDispatch(OCNaroWrappers::OCIFSelect_Dispatch^ I, TCollection_SeqNodePtr n, TCollection_SeqNodePtr p) : OCTCollection_SeqNode((OCDummy^)nullptr)

{
  nativeHandle = new Handle_IFSelect_SequenceNodeOfTSeqOfDispatch(new IFSelect_SequenceNodeOfTSeqOfDispatch(*((Handle_IFSelect_Dispatch*)I->Handle), n, p));
}

OCIFSelect_Dispatch^ OCIFSelect_SequenceNodeOfTSeqOfDispatch::Value()
{
  Handle(IFSelect_Dispatch) tmp = (*((Handle_IFSelect_SequenceNodeOfTSeqOfDispatch*)nativeHandle))->Value();
  return gcnew OCIFSelect_Dispatch(&tmp);
}



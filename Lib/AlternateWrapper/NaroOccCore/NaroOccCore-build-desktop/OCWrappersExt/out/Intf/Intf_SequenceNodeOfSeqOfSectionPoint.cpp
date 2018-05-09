// File generated by CPPExt (CPP file)
//

#include "Intf_SequenceNodeOfSeqOfSectionPoint.h"
#include "../Converter.h"
#include "Intf_SectionPoint.h"
#include "Intf_SeqOfSectionPoint.h"


using namespace OCNaroWrappers;

OCIntf_SequenceNodeOfSeqOfSectionPoint::OCIntf_SequenceNodeOfSeqOfSectionPoint(Handle(Intf_SequenceNodeOfSeqOfSectionPoint)* nativeHandle) : OCTCollection_SeqNode((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_Intf_SequenceNodeOfSeqOfSectionPoint(*nativeHandle);
}

OCIntf_SequenceNodeOfSeqOfSectionPoint::OCIntf_SequenceNodeOfSeqOfSectionPoint(OCNaroWrappers::OCIntf_SectionPoint^ I, TCollection_SeqNodePtr n, TCollection_SeqNodePtr p) : OCTCollection_SeqNode((OCDummy^)nullptr)

{
  nativeHandle = new Handle_Intf_SequenceNodeOfSeqOfSectionPoint(new Intf_SequenceNodeOfSeqOfSectionPoint(*((Intf_SectionPoint*)I->Handle), n, p));
}

OCIntf_SectionPoint^ OCIntf_SequenceNodeOfSeqOfSectionPoint::Value()
{
  Intf_SectionPoint* tmp = new Intf_SectionPoint();
  *tmp = (*((Handle_Intf_SequenceNodeOfSeqOfSectionPoint*)nativeHandle))->Value();
  return gcnew OCIntf_SectionPoint(tmp);
}



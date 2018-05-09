// File generated by CPPExt (CPP file)
//

#include "AdvApp2Var_SequenceNodeOfStrip.h"
#include "../Converter.h"
#include "AdvApp2Var_Iso.h"
#include "AdvApp2Var_Strip.h"


using namespace OCNaroWrappers;

OCAdvApp2Var_SequenceNodeOfStrip::OCAdvApp2Var_SequenceNodeOfStrip(Handle(AdvApp2Var_SequenceNodeOfStrip)* nativeHandle) : OCTCollection_SeqNode((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_AdvApp2Var_SequenceNodeOfStrip(*nativeHandle);
}

OCAdvApp2Var_SequenceNodeOfStrip::OCAdvApp2Var_SequenceNodeOfStrip(OCNaroWrappers::OCAdvApp2Var_Iso^ I, TCollection_SeqNodePtr n, TCollection_SeqNodePtr p) : OCTCollection_SeqNode((OCDummy^)nullptr)

{
  nativeHandle = new Handle_AdvApp2Var_SequenceNodeOfStrip(new AdvApp2Var_SequenceNodeOfStrip(*((AdvApp2Var_Iso*)I->Handle), n, p));
}

OCAdvApp2Var_Iso^ OCAdvApp2Var_SequenceNodeOfStrip::Value()
{
  AdvApp2Var_Iso* tmp = new AdvApp2Var_Iso();
  *tmp = (*((Handle_AdvApp2Var_SequenceNodeOfStrip*)nativeHandle))->Value();
  return gcnew OCAdvApp2Var_Iso(tmp);
}



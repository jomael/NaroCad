// File generated by CPPExt (CPP file)
//

#include "AIS_SequenceNodeOfSequenceOfDimension.h"
#include "../Converter.h"
#include "AIS_Relation.h"
#include "AIS_SequenceOfDimension.h"


using namespace OCNaroWrappers;

OCAIS_SequenceNodeOfSequenceOfDimension::OCAIS_SequenceNodeOfSequenceOfDimension(Handle(AIS_SequenceNodeOfSequenceOfDimension)* nativeHandle) : OCTCollection_SeqNode((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_AIS_SequenceNodeOfSequenceOfDimension(*nativeHandle);
}

OCAIS_SequenceNodeOfSequenceOfDimension::OCAIS_SequenceNodeOfSequenceOfDimension(OCNaroWrappers::OCAIS_Relation^ I, TCollection_SeqNodePtr n, TCollection_SeqNodePtr p) : OCTCollection_SeqNode((OCDummy^)nullptr)

{
  nativeHandle = new Handle_AIS_SequenceNodeOfSequenceOfDimension(new AIS_SequenceNodeOfSequenceOfDimension(*((Handle_AIS_Relation*)I->Handle), n, p));
}

OCAIS_Relation^ OCAIS_SequenceNodeOfSequenceOfDimension::Value()
{
  Handle(AIS_Relation) tmp = (*((Handle_AIS_SequenceNodeOfSequenceOfDimension*)nativeHandle))->Value();
  return gcnew OCAIS_Relation(&tmp);
}



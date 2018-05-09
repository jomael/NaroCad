// File generated by CPPExt (CPP file)
//

#include "AIS_SequenceOfInteractive.h"
#include "../Converter.h"
#include "AIS_InteractiveObject.h"
#include "AIS_SequenceNodeOfSequenceOfInteractive.h"


using namespace OCNaroWrappers;

OCAIS_SequenceOfInteractive::OCAIS_SequenceOfInteractive(AIS_SequenceOfInteractive* nativeHandle) : OCTCollection_BaseSequence((OCDummy^)nullptr)

{
  this->nativeHandle = nativeHandle;
}

OCAIS_SequenceOfInteractive::OCAIS_SequenceOfInteractive() : OCTCollection_BaseSequence((OCDummy^)nullptr)

{
  nativeHandle = new AIS_SequenceOfInteractive();
}

OCAIS_SequenceOfInteractive^ OCAIS_SequenceOfInteractive::Assign(OCNaroWrappers::OCAIS_SequenceOfInteractive^ Other)
{
  AIS_SequenceOfInteractive* tmp = new AIS_SequenceOfInteractive();
  *tmp = ((AIS_SequenceOfInteractive*)nativeHandle)->Assign(*((AIS_SequenceOfInteractive*)Other->Handle));
  return gcnew OCAIS_SequenceOfInteractive(tmp);
}

 void OCAIS_SequenceOfInteractive::Append(OCNaroWrappers::OCAIS_InteractiveObject^ T)
{
  ((AIS_SequenceOfInteractive*)nativeHandle)->Append(*((Handle_AIS_InteractiveObject*)T->Handle));
}

 void OCAIS_SequenceOfInteractive::Append(OCNaroWrappers::OCAIS_SequenceOfInteractive^ S)
{
  ((AIS_SequenceOfInteractive*)nativeHandle)->Append(*((AIS_SequenceOfInteractive*)S->Handle));
}

 void OCAIS_SequenceOfInteractive::Prepend(OCNaroWrappers::OCAIS_InteractiveObject^ T)
{
  ((AIS_SequenceOfInteractive*)nativeHandle)->Prepend(*((Handle_AIS_InteractiveObject*)T->Handle));
}

 void OCAIS_SequenceOfInteractive::Prepend(OCNaroWrappers::OCAIS_SequenceOfInteractive^ S)
{
  ((AIS_SequenceOfInteractive*)nativeHandle)->Prepend(*((AIS_SequenceOfInteractive*)S->Handle));
}

 void OCAIS_SequenceOfInteractive::InsertBefore(Standard_Integer Index, OCNaroWrappers::OCAIS_InteractiveObject^ T)
{
  ((AIS_SequenceOfInteractive*)nativeHandle)->InsertBefore(Index, *((Handle_AIS_InteractiveObject*)T->Handle));
}

 void OCAIS_SequenceOfInteractive::InsertBefore(Standard_Integer Index, OCNaroWrappers::OCAIS_SequenceOfInteractive^ S)
{
  ((AIS_SequenceOfInteractive*)nativeHandle)->InsertBefore(Index, *((AIS_SequenceOfInteractive*)S->Handle));
}

 void OCAIS_SequenceOfInteractive::InsertAfter(Standard_Integer Index, OCNaroWrappers::OCAIS_InteractiveObject^ T)
{
  ((AIS_SequenceOfInteractive*)nativeHandle)->InsertAfter(Index, *((Handle_AIS_InteractiveObject*)T->Handle));
}

 void OCAIS_SequenceOfInteractive::InsertAfter(Standard_Integer Index, OCNaroWrappers::OCAIS_SequenceOfInteractive^ S)
{
  ((AIS_SequenceOfInteractive*)nativeHandle)->InsertAfter(Index, *((AIS_SequenceOfInteractive*)S->Handle));
}

OCAIS_InteractiveObject^ OCAIS_SequenceOfInteractive::First()
{
  Handle(AIS_InteractiveObject) tmp = ((AIS_SequenceOfInteractive*)nativeHandle)->First();
  return gcnew OCAIS_InteractiveObject(&tmp);
}

OCAIS_InteractiveObject^ OCAIS_SequenceOfInteractive::Last()
{
  Handle(AIS_InteractiveObject) tmp = ((AIS_SequenceOfInteractive*)nativeHandle)->Last();
  return gcnew OCAIS_InteractiveObject(&tmp);
}

 void OCAIS_SequenceOfInteractive::Split(Standard_Integer Index, OCNaroWrappers::OCAIS_SequenceOfInteractive^ Sub)
{
  ((AIS_SequenceOfInteractive*)nativeHandle)->Split(Index, *((AIS_SequenceOfInteractive*)Sub->Handle));
}

OCAIS_InteractiveObject^ OCAIS_SequenceOfInteractive::Value(Standard_Integer Index)
{
  Handle(AIS_InteractiveObject) tmp = ((AIS_SequenceOfInteractive*)nativeHandle)->Value(Index);
  return gcnew OCAIS_InteractiveObject(&tmp);
}

 void OCAIS_SequenceOfInteractive::SetValue(Standard_Integer Index, OCNaroWrappers::OCAIS_InteractiveObject^ I)
{
  ((AIS_SequenceOfInteractive*)nativeHandle)->SetValue(Index, *((Handle_AIS_InteractiveObject*)I->Handle));
}

OCAIS_InteractiveObject^ OCAIS_SequenceOfInteractive::ChangeValue(Standard_Integer Index)
{
  Handle(AIS_InteractiveObject) tmp = ((AIS_SequenceOfInteractive*)nativeHandle)->ChangeValue(Index);
  return gcnew OCAIS_InteractiveObject(&tmp);
}

 void OCAIS_SequenceOfInteractive::Remove(Standard_Integer Index)
{
  ((AIS_SequenceOfInteractive*)nativeHandle)->Remove(Index);
}

 void OCAIS_SequenceOfInteractive::Remove(Standard_Integer FromIndex, Standard_Integer ToIndex)
{
  ((AIS_SequenceOfInteractive*)nativeHandle)->Remove(FromIndex, ToIndex);
}



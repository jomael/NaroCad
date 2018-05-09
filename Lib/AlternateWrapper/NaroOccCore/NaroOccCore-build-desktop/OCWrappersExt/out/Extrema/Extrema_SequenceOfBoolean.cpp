// File generated by CPPExt (CPP file)
//

#include "Extrema_SequenceOfBoolean.h"
#include "../Converter.h"
#include "Extrema_SequenceNodeOfSequenceOfBoolean.h"


using namespace OCNaroWrappers;

OCExtrema_SequenceOfBoolean::OCExtrema_SequenceOfBoolean(Extrema_SequenceOfBoolean* nativeHandle) : OCTCollection_BaseSequence((OCDummy^)nullptr)

{
  this->nativeHandle = nativeHandle;
}

OCExtrema_SequenceOfBoolean::OCExtrema_SequenceOfBoolean() : OCTCollection_BaseSequence((OCDummy^)nullptr)

{
  nativeHandle = new Extrema_SequenceOfBoolean();
}

OCExtrema_SequenceOfBoolean^ OCExtrema_SequenceOfBoolean::Assign(OCNaroWrappers::OCExtrema_SequenceOfBoolean^ Other)
{
  Extrema_SequenceOfBoolean* tmp = new Extrema_SequenceOfBoolean();
  *tmp = ((Extrema_SequenceOfBoolean*)nativeHandle)->Assign(*((Extrema_SequenceOfBoolean*)Other->Handle));
  return gcnew OCExtrema_SequenceOfBoolean(tmp);
}

 void OCExtrema_SequenceOfBoolean::Append(System::Boolean T)
{
  ((Extrema_SequenceOfBoolean*)nativeHandle)->Append(OCConverter::BooleanToStandardBoolean(T));
}

 void OCExtrema_SequenceOfBoolean::Append(OCNaroWrappers::OCExtrema_SequenceOfBoolean^ S)
{
  ((Extrema_SequenceOfBoolean*)nativeHandle)->Append(*((Extrema_SequenceOfBoolean*)S->Handle));
}

 void OCExtrema_SequenceOfBoolean::Prepend(System::Boolean T)
{
  ((Extrema_SequenceOfBoolean*)nativeHandle)->Prepend(OCConverter::BooleanToStandardBoolean(T));
}

 void OCExtrema_SequenceOfBoolean::Prepend(OCNaroWrappers::OCExtrema_SequenceOfBoolean^ S)
{
  ((Extrema_SequenceOfBoolean*)nativeHandle)->Prepend(*((Extrema_SequenceOfBoolean*)S->Handle));
}

 void OCExtrema_SequenceOfBoolean::InsertBefore(Standard_Integer Index, System::Boolean T)
{
  ((Extrema_SequenceOfBoolean*)nativeHandle)->InsertBefore(Index, OCConverter::BooleanToStandardBoolean(T));
}

 void OCExtrema_SequenceOfBoolean::InsertBefore(Standard_Integer Index, OCNaroWrappers::OCExtrema_SequenceOfBoolean^ S)
{
  ((Extrema_SequenceOfBoolean*)nativeHandle)->InsertBefore(Index, *((Extrema_SequenceOfBoolean*)S->Handle));
}

 void OCExtrema_SequenceOfBoolean::InsertAfter(Standard_Integer Index, System::Boolean T)
{
  ((Extrema_SequenceOfBoolean*)nativeHandle)->InsertAfter(Index, OCConverter::BooleanToStandardBoolean(T));
}

 void OCExtrema_SequenceOfBoolean::InsertAfter(Standard_Integer Index, OCNaroWrappers::OCExtrema_SequenceOfBoolean^ S)
{
  ((Extrema_SequenceOfBoolean*)nativeHandle)->InsertAfter(Index, *((Extrema_SequenceOfBoolean*)S->Handle));
}

 System::Boolean OCExtrema_SequenceOfBoolean::First()
{
  return OCConverter::StandardBooleanToBoolean(((Extrema_SequenceOfBoolean*)nativeHandle)->First());
}

 System::Boolean OCExtrema_SequenceOfBoolean::Last()
{
  return OCConverter::StandardBooleanToBoolean(((Extrema_SequenceOfBoolean*)nativeHandle)->Last());
}

 void OCExtrema_SequenceOfBoolean::Split(Standard_Integer Index, OCNaroWrappers::OCExtrema_SequenceOfBoolean^ Sub)
{
  ((Extrema_SequenceOfBoolean*)nativeHandle)->Split(Index, *((Extrema_SequenceOfBoolean*)Sub->Handle));
}

 System::Boolean OCExtrema_SequenceOfBoolean::Value(Standard_Integer Index)
{
  return OCConverter::StandardBooleanToBoolean(((Extrema_SequenceOfBoolean*)nativeHandle)->Value(Index));
}

 void OCExtrema_SequenceOfBoolean::SetValue(Standard_Integer Index, System::Boolean I)
{
  ((Extrema_SequenceOfBoolean*)nativeHandle)->SetValue(Index, OCConverter::BooleanToStandardBoolean(I));
}

 System::Boolean OCExtrema_SequenceOfBoolean::ChangeValue(Standard_Integer Index)
{
  return OCConverter::StandardBooleanToBoolean(((Extrema_SequenceOfBoolean*)nativeHandle)->ChangeValue(Index));
}

 void OCExtrema_SequenceOfBoolean::Remove(Standard_Integer Index)
{
  ((Extrema_SequenceOfBoolean*)nativeHandle)->Remove(Index);
}

 void OCExtrema_SequenceOfBoolean::Remove(Standard_Integer FromIndex, Standard_Integer ToIndex)
{
  ((Extrema_SequenceOfBoolean*)nativeHandle)->Remove(FromIndex, ToIndex);
}


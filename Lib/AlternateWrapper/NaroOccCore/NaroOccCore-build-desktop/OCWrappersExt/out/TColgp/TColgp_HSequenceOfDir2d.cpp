// File generated by CPPExt (CPP file)
//

#include "TColgp_HSequenceOfDir2d.h"
#include "../Converter.h"
#include "../gp/gp_Dir2d.h"
#include "TColgp_SequenceOfDir2d.h"


using namespace OCNaroWrappers;

OCTColgp_HSequenceOfDir2d::OCTColgp_HSequenceOfDir2d(Handle(TColgp_HSequenceOfDir2d)* nativeHandle) : OCMMgt_TShared((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_TColgp_HSequenceOfDir2d(*nativeHandle);
}

OCTColgp_HSequenceOfDir2d::OCTColgp_HSequenceOfDir2d() : OCMMgt_TShared((OCDummy^)nullptr)

{
  nativeHandle = new Handle_TColgp_HSequenceOfDir2d(new TColgp_HSequenceOfDir2d());
}

 System::Boolean OCTColgp_HSequenceOfDir2d::IsEmpty()
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_TColgp_HSequenceOfDir2d*)nativeHandle))->IsEmpty());
}

 Standard_Integer OCTColgp_HSequenceOfDir2d::Length()
{
  return (*((Handle_TColgp_HSequenceOfDir2d*)nativeHandle))->Length();
}

 void OCTColgp_HSequenceOfDir2d::Clear()
{
  (*((Handle_TColgp_HSequenceOfDir2d*)nativeHandle))->Clear();
}

 void OCTColgp_HSequenceOfDir2d::Append(OCNaroWrappers::OCgp_Dir2d^ anItem)
{
  (*((Handle_TColgp_HSequenceOfDir2d*)nativeHandle))->Append(*((gp_Dir2d*)anItem->Handle));
}

 void OCTColgp_HSequenceOfDir2d::Append(OCNaroWrappers::OCTColgp_HSequenceOfDir2d^ aSequence)
{
  (*((Handle_TColgp_HSequenceOfDir2d*)nativeHandle))->Append(*((Handle_TColgp_HSequenceOfDir2d*)aSequence->Handle));
}

 void OCTColgp_HSequenceOfDir2d::Prepend(OCNaroWrappers::OCgp_Dir2d^ anItem)
{
  (*((Handle_TColgp_HSequenceOfDir2d*)nativeHandle))->Prepend(*((gp_Dir2d*)anItem->Handle));
}

 void OCTColgp_HSequenceOfDir2d::Prepend(OCNaroWrappers::OCTColgp_HSequenceOfDir2d^ aSequence)
{
  (*((Handle_TColgp_HSequenceOfDir2d*)nativeHandle))->Prepend(*((Handle_TColgp_HSequenceOfDir2d*)aSequence->Handle));
}

 void OCTColgp_HSequenceOfDir2d::Reverse()
{
  (*((Handle_TColgp_HSequenceOfDir2d*)nativeHandle))->Reverse();
}

 void OCTColgp_HSequenceOfDir2d::InsertBefore(Standard_Integer anIndex, OCNaroWrappers::OCgp_Dir2d^ anItem)
{
  (*((Handle_TColgp_HSequenceOfDir2d*)nativeHandle))->InsertBefore(anIndex, *((gp_Dir2d*)anItem->Handle));
}

 void OCTColgp_HSequenceOfDir2d::InsertBefore(Standard_Integer anIndex, OCNaroWrappers::OCTColgp_HSequenceOfDir2d^ aSequence)
{
  (*((Handle_TColgp_HSequenceOfDir2d*)nativeHandle))->InsertBefore(anIndex, *((Handle_TColgp_HSequenceOfDir2d*)aSequence->Handle));
}

 void OCTColgp_HSequenceOfDir2d::InsertAfter(Standard_Integer anIndex, OCNaroWrappers::OCgp_Dir2d^ anItem)
{
  (*((Handle_TColgp_HSequenceOfDir2d*)nativeHandle))->InsertAfter(anIndex, *((gp_Dir2d*)anItem->Handle));
}

 void OCTColgp_HSequenceOfDir2d::InsertAfter(Standard_Integer anIndex, OCNaroWrappers::OCTColgp_HSequenceOfDir2d^ aSequence)
{
  (*((Handle_TColgp_HSequenceOfDir2d*)nativeHandle))->InsertAfter(anIndex, *((Handle_TColgp_HSequenceOfDir2d*)aSequence->Handle));
}

 void OCTColgp_HSequenceOfDir2d::Exchange(Standard_Integer anIndex, Standard_Integer anOtherIndex)
{
  (*((Handle_TColgp_HSequenceOfDir2d*)nativeHandle))->Exchange(anIndex, anOtherIndex);
}

OCTColgp_HSequenceOfDir2d^ OCTColgp_HSequenceOfDir2d::Split(Standard_Integer anIndex)
{
  Handle(TColgp_HSequenceOfDir2d) tmp = (*((Handle_TColgp_HSequenceOfDir2d*)nativeHandle))->Split(anIndex);
  return gcnew OCTColgp_HSequenceOfDir2d(&tmp);
}

 void OCTColgp_HSequenceOfDir2d::SetValue(Standard_Integer anIndex, OCNaroWrappers::OCgp_Dir2d^ anItem)
{
  (*((Handle_TColgp_HSequenceOfDir2d*)nativeHandle))->SetValue(anIndex, *((gp_Dir2d*)anItem->Handle));
}

OCgp_Dir2d^ OCTColgp_HSequenceOfDir2d::Value(Standard_Integer anIndex)
{
  gp_Dir2d* tmp = new gp_Dir2d();
  *tmp = (*((Handle_TColgp_HSequenceOfDir2d*)nativeHandle))->Value(anIndex);
  return gcnew OCgp_Dir2d(tmp);
}

OCgp_Dir2d^ OCTColgp_HSequenceOfDir2d::ChangeValue(Standard_Integer anIndex)
{
  gp_Dir2d* tmp = new gp_Dir2d();
  *tmp = (*((Handle_TColgp_HSequenceOfDir2d*)nativeHandle))->ChangeValue(anIndex);
  return gcnew OCgp_Dir2d(tmp);
}

 void OCTColgp_HSequenceOfDir2d::Remove(Standard_Integer anIndex)
{
  (*((Handle_TColgp_HSequenceOfDir2d*)nativeHandle))->Remove(anIndex);
}

 void OCTColgp_HSequenceOfDir2d::Remove(Standard_Integer fromIndex, Standard_Integer toIndex)
{
  (*((Handle_TColgp_HSequenceOfDir2d*)nativeHandle))->Remove(fromIndex, toIndex);
}

OCTColgp_SequenceOfDir2d^ OCTColgp_HSequenceOfDir2d::Sequence()
{
  TColgp_SequenceOfDir2d* tmp = new TColgp_SequenceOfDir2d();
  *tmp = (*((Handle_TColgp_HSequenceOfDir2d*)nativeHandle))->Sequence();
  return gcnew OCTColgp_SequenceOfDir2d(tmp);
}

OCTColgp_SequenceOfDir2d^ OCTColgp_HSequenceOfDir2d::ChangeSequence()
{
  TColgp_SequenceOfDir2d* tmp = new TColgp_SequenceOfDir2d();
  *tmp = (*((Handle_TColgp_HSequenceOfDir2d*)nativeHandle))->ChangeSequence();
  return gcnew OCTColgp_SequenceOfDir2d(tmp);
}

OCTColgp_HSequenceOfDir2d^ OCTColgp_HSequenceOfDir2d::ShallowCopy()
{
  Handle(TColgp_HSequenceOfDir2d) tmp = (*((Handle_TColgp_HSequenceOfDir2d*)nativeHandle))->ShallowCopy();
  return gcnew OCTColgp_HSequenceOfDir2d(&tmp);
}



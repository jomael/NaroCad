// File generated by CPPExt (CPP file)
//

#include "TColStd_Array1OfCharacter.h"
#include "../Converter.h"


using namespace OCNaroWrappers;

OCTColStd_Array1OfCharacter::OCTColStd_Array1OfCharacter(TColStd_Array1OfCharacter* nativeHandle) 
{
  this->nativeHandle = nativeHandle;
}

OCTColStd_Array1OfCharacter::OCTColStd_Array1OfCharacter(Standard_Integer Low, Standard_Integer Up) 
{
  nativeHandle = new TColStd_Array1OfCharacter(Low, Up);
}

OCTColStd_Array1OfCharacter::OCTColStd_Array1OfCharacter(Standard_Character Item, Standard_Integer Low, Standard_Integer Up) 
{
  nativeHandle = new TColStd_Array1OfCharacter(Item, Low, Up);
}

 void OCTColStd_Array1OfCharacter::Init(Standard_Character V)
{
  ((TColStd_Array1OfCharacter*)nativeHandle)->Init(V);
}

 System::Boolean OCTColStd_Array1OfCharacter::IsAllocated()
{
  return OCConverter::StandardBooleanToBoolean(((TColStd_Array1OfCharacter*)nativeHandle)->IsAllocated());
}

OCTColStd_Array1OfCharacter^ OCTColStd_Array1OfCharacter::Assign(OCNaroWrappers::OCTColStd_Array1OfCharacter^ Other)
{
  TColStd_Array1OfCharacter* tmp = new TColStd_Array1OfCharacter(0, 0);
  *tmp = ((TColStd_Array1OfCharacter*)nativeHandle)->Assign(*((TColStd_Array1OfCharacter*)Other->Handle));
  return gcnew OCTColStd_Array1OfCharacter(tmp);
}

 Standard_Integer OCTColStd_Array1OfCharacter::Length()
{
  return ((TColStd_Array1OfCharacter*)nativeHandle)->Length();
}

 Standard_Integer OCTColStd_Array1OfCharacter::Lower()
{
  return ((TColStd_Array1OfCharacter*)nativeHandle)->Lower();
}

 Standard_Integer OCTColStd_Array1OfCharacter::Upper()
{
  return ((TColStd_Array1OfCharacter*)nativeHandle)->Upper();
}

 void OCTColStd_Array1OfCharacter::SetValue(Standard_Integer Index, Standard_Character Value)
{
  ((TColStd_Array1OfCharacter*)nativeHandle)->SetValue(Index, Value);
}

 Standard_Character OCTColStd_Array1OfCharacter::Value(Standard_Integer Index)
{
  return ((TColStd_Array1OfCharacter*)nativeHandle)->Value(Index);
}

 Standard_Character OCTColStd_Array1OfCharacter::ChangeValue(Standard_Integer Index)
{
  return ((TColStd_Array1OfCharacter*)nativeHandle)->ChangeValue(Index);
}



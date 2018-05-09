// File generated by CPPExt (CPP file)
//

#include "TColgp_Array1OfXY.h"
#include "../Converter.h"
#include "../gp/gp_XY.h"


using namespace OCNaroWrappers;

OCTColgp_Array1OfXY::OCTColgp_Array1OfXY(TColgp_Array1OfXY* nativeHandle) 
{
  this->nativeHandle = nativeHandle;
}

OCTColgp_Array1OfXY::OCTColgp_Array1OfXY(Standard_Integer Low, Standard_Integer Up) 
{
  nativeHandle = new TColgp_Array1OfXY(Low, Up);
}

OCTColgp_Array1OfXY::OCTColgp_Array1OfXY(OCNaroWrappers::OCgp_XY^ Item, Standard_Integer Low, Standard_Integer Up) 
{
  nativeHandle = new TColgp_Array1OfXY(*((gp_XY*)Item->Handle), Low, Up);
}

 void OCTColgp_Array1OfXY::Init(OCNaroWrappers::OCgp_XY^ V)
{
  ((TColgp_Array1OfXY*)nativeHandle)->Init(*((gp_XY*)V->Handle));
}

 System::Boolean OCTColgp_Array1OfXY::IsAllocated()
{
  return OCConverter::StandardBooleanToBoolean(((TColgp_Array1OfXY*)nativeHandle)->IsAllocated());
}

OCTColgp_Array1OfXY^ OCTColgp_Array1OfXY::Assign(OCNaroWrappers::OCTColgp_Array1OfXY^ Other)
{
  TColgp_Array1OfXY* tmp = new TColgp_Array1OfXY(0, 0);
  *tmp = ((TColgp_Array1OfXY*)nativeHandle)->Assign(*((TColgp_Array1OfXY*)Other->Handle));
  return gcnew OCTColgp_Array1OfXY(tmp);
}

 Standard_Integer OCTColgp_Array1OfXY::Length()
{
  return ((TColgp_Array1OfXY*)nativeHandle)->Length();
}

 Standard_Integer OCTColgp_Array1OfXY::Lower()
{
  return ((TColgp_Array1OfXY*)nativeHandle)->Lower();
}

 Standard_Integer OCTColgp_Array1OfXY::Upper()
{
  return ((TColgp_Array1OfXY*)nativeHandle)->Upper();
}

 void OCTColgp_Array1OfXY::SetValue(Standard_Integer Index, OCNaroWrappers::OCgp_XY^ Value)
{
  ((TColgp_Array1OfXY*)nativeHandle)->SetValue(Index, *((gp_XY*)Value->Handle));
}

OCgp_XY^ OCTColgp_Array1OfXY::Value(Standard_Integer Index)
{
  gp_XY* tmp = new gp_XY();
  *tmp = ((TColgp_Array1OfXY*)nativeHandle)->Value(Index);
  return gcnew OCgp_XY(tmp);
}

OCgp_XY^ OCTColgp_Array1OfXY::ChangeValue(Standard_Integer Index)
{
  gp_XY* tmp = new gp_XY();
  *tmp = ((TColgp_Array1OfXY*)nativeHandle)->ChangeValue(Index);
  return gcnew OCgp_XY(tmp);
}



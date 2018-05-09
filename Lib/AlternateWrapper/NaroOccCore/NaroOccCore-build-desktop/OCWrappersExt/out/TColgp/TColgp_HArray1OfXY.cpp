// File generated by CPPExt (CPP file)
//

#include "TColgp_HArray1OfXY.h"
#include "../Converter.h"
#include "../gp/gp_XY.h"
#include "TColgp_Array1OfXY.h"


using namespace OCNaroWrappers;

OCTColgp_HArray1OfXY::OCTColgp_HArray1OfXY(Handle(TColgp_HArray1OfXY)* nativeHandle) : OCMMgt_TShared((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_TColgp_HArray1OfXY(*nativeHandle);
}

OCTColgp_HArray1OfXY::OCTColgp_HArray1OfXY(Standard_Integer Low, Standard_Integer Up) : OCMMgt_TShared((OCDummy^)nullptr)

{
  nativeHandle = new Handle_TColgp_HArray1OfXY(new TColgp_HArray1OfXY(Low, Up));
}

OCTColgp_HArray1OfXY::OCTColgp_HArray1OfXY(Standard_Integer Low, Standard_Integer Up, OCNaroWrappers::OCgp_XY^ V) : OCMMgt_TShared((OCDummy^)nullptr)

{
  nativeHandle = new Handle_TColgp_HArray1OfXY(new TColgp_HArray1OfXY(Low, Up, *((gp_XY*)V->Handle)));
}

 void OCTColgp_HArray1OfXY::Init(OCNaroWrappers::OCgp_XY^ V)
{
  (*((Handle_TColgp_HArray1OfXY*)nativeHandle))->Init(*((gp_XY*)V->Handle));
}

 Standard_Integer OCTColgp_HArray1OfXY::Length()
{
  return (*((Handle_TColgp_HArray1OfXY*)nativeHandle))->Length();
}

 Standard_Integer OCTColgp_HArray1OfXY::Lower()
{
  return (*((Handle_TColgp_HArray1OfXY*)nativeHandle))->Lower();
}

 Standard_Integer OCTColgp_HArray1OfXY::Upper()
{
  return (*((Handle_TColgp_HArray1OfXY*)nativeHandle))->Upper();
}

 void OCTColgp_HArray1OfXY::SetValue(Standard_Integer Index, OCNaroWrappers::OCgp_XY^ Value)
{
  (*((Handle_TColgp_HArray1OfXY*)nativeHandle))->SetValue(Index, *((gp_XY*)Value->Handle));
}

OCgp_XY^ OCTColgp_HArray1OfXY::Value(Standard_Integer Index)
{
  gp_XY* tmp = new gp_XY();
  *tmp = (*((Handle_TColgp_HArray1OfXY*)nativeHandle))->Value(Index);
  return gcnew OCgp_XY(tmp);
}

OCgp_XY^ OCTColgp_HArray1OfXY::ChangeValue(Standard_Integer Index)
{
  gp_XY* tmp = new gp_XY();
  *tmp = (*((Handle_TColgp_HArray1OfXY*)nativeHandle))->ChangeValue(Index);
  return gcnew OCgp_XY(tmp);
}

OCTColgp_Array1OfXY^ OCTColgp_HArray1OfXY::Array1()
{
  TColgp_Array1OfXY* tmp = new TColgp_Array1OfXY(0, 0);
  *tmp = (*((Handle_TColgp_HArray1OfXY*)nativeHandle))->Array1();
  return gcnew OCTColgp_Array1OfXY(tmp);
}

OCTColgp_Array1OfXY^ OCTColgp_HArray1OfXY::ChangeArray1()
{
  TColgp_Array1OfXY* tmp = new TColgp_Array1OfXY(0, 0);
  *tmp = (*((Handle_TColgp_HArray1OfXY*)nativeHandle))->ChangeArray1();
  return gcnew OCTColgp_Array1OfXY(tmp);
}



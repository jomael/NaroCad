// File generated by CPPExt (CPP file)
//

#include "PColStd_VArrayTNodeOfFieldOfHArray1OfInteger.h"
#include "../Converter.h"
#include "PColStd_FieldOfHArray1OfInteger.h"
#include "PColStd_VArrayNodeOfFieldOfHArray1OfInteger.h"


using namespace OCNaroWrappers;

OCPColStd_VArrayTNodeOfFieldOfHArray1OfInteger::OCPColStd_VArrayTNodeOfFieldOfHArray1OfInteger(PColStd_VArrayTNodeOfFieldOfHArray1OfInteger* nativeHandle) 
{
  this->nativeHandle = nativeHandle;
}

OCPColStd_VArrayTNodeOfFieldOfHArray1OfInteger::OCPColStd_VArrayTNodeOfFieldOfHArray1OfInteger() 
{
  nativeHandle = new PColStd_VArrayTNodeOfFieldOfHArray1OfInteger();
}

OCPColStd_VArrayTNodeOfFieldOfHArray1OfInteger::OCPColStd_VArrayTNodeOfFieldOfHArray1OfInteger(Standard_Integer aValue) 
{
  nativeHandle = new PColStd_VArrayTNodeOfFieldOfHArray1OfInteger(aValue);
}

 void OCPColStd_VArrayTNodeOfFieldOfHArray1OfInteger::SetValue(Standard_Integer aValue)
{
  ((PColStd_VArrayTNodeOfFieldOfHArray1OfInteger*)nativeHandle)->SetValue(aValue);
}

 Standard_Address OCPColStd_VArrayTNodeOfFieldOfHArray1OfInteger::Value()
{
  return ((PColStd_VArrayTNodeOfFieldOfHArray1OfInteger*)nativeHandle)->Value();
}



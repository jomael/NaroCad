// File generated by CPPExt (CPP file)
//

#include "PColStd_VArrayTNodeOfFieldOfHArray2OfPersistent.h"
#include "../Converter.h"
#include "../Standard/Standard_Persistent.h"
#include "PColStd_FieldOfHArray2OfPersistent.h"
#include "PColStd_VArrayNodeOfFieldOfHArray2OfPersistent.h"


using namespace OCNaroWrappers;

OCPColStd_VArrayTNodeOfFieldOfHArray2OfPersistent::OCPColStd_VArrayTNodeOfFieldOfHArray2OfPersistent(PColStd_VArrayTNodeOfFieldOfHArray2OfPersistent* nativeHandle) 
{
  this->nativeHandle = nativeHandle;
}

OCPColStd_VArrayTNodeOfFieldOfHArray2OfPersistent::OCPColStd_VArrayTNodeOfFieldOfHArray2OfPersistent() 
{
  nativeHandle = new PColStd_VArrayTNodeOfFieldOfHArray2OfPersistent();
}

OCPColStd_VArrayTNodeOfFieldOfHArray2OfPersistent::OCPColStd_VArrayTNodeOfFieldOfHArray2OfPersistent(OCNaroWrappers::OCStandard_Persistent^ aValue) 
{
  nativeHandle = new PColStd_VArrayTNodeOfFieldOfHArray2OfPersistent(*((Handle_Standard_Persistent*)aValue->Handle));
}

 void OCPColStd_VArrayTNodeOfFieldOfHArray2OfPersistent::SetValue(OCNaroWrappers::OCStandard_Persistent^ aValue)
{
  ((PColStd_VArrayTNodeOfFieldOfHArray2OfPersistent*)nativeHandle)->SetValue(*((Handle_Standard_Persistent*)aValue->Handle));
}

 Standard_Address OCPColStd_VArrayTNodeOfFieldOfHArray2OfPersistent::Value()
{
  return ((PColStd_VArrayTNodeOfFieldOfHArray2OfPersistent*)nativeHandle)->Value();
}



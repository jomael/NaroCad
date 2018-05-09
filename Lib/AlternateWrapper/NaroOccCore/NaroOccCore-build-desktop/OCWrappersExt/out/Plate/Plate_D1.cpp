// File generated by CPPExt (CPP file)
//

#include "Plate_D1.h"
#include "../Converter.h"
#include "Plate_GtoCConstraint.h"
#include "Plate_FreeGtoCConstraint.h"
#include "../gp/gp_XYZ.h"


using namespace OCNaroWrappers;

OCPlate_D1::OCPlate_D1(Plate_D1* nativeHandle) 
{
  this->nativeHandle = nativeHandle;
}

OCPlate_D1::OCPlate_D1(OCNaroWrappers::OCgp_XYZ^ du, OCNaroWrappers::OCgp_XYZ^ dv) 
{
  nativeHandle = new Plate_D1(*((gp_XYZ*)du->Handle), *((gp_XYZ*)dv->Handle));
}

OCPlate_D1::OCPlate_D1(OCNaroWrappers::OCPlate_D1^ ref) 
{
  nativeHandle = new Plate_D1(*((Plate_D1*)ref->Handle));
}

OCgp_XYZ^ OCPlate_D1::DU()
{
  gp_XYZ* tmp = new gp_XYZ();
  *tmp = ((Plate_D1*)nativeHandle)->DU();
  return gcnew OCgp_XYZ(tmp);
}

OCgp_XYZ^ OCPlate_D1::DV()
{
  gp_XYZ* tmp = new gp_XYZ();
  *tmp = ((Plate_D1*)nativeHandle)->DV();
  return gcnew OCgp_XYZ(tmp);
}



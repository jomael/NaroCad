// File generated by CPPExt (CPP file)
//

#include "GCE2d_MakeRotation.h"
#include "../Converter.h"
#include "../Geom2d/Geom2d_Transformation.h"
#include "../gp/gp_Pnt2d.h"


using namespace OCNaroWrappers;

OCGCE2d_MakeRotation::OCGCE2d_MakeRotation(GCE2d_MakeRotation* nativeHandle) 
{
  this->nativeHandle = nativeHandle;
}

OCGCE2d_MakeRotation::OCGCE2d_MakeRotation(OCNaroWrappers::OCgp_Pnt2d^ Point, Standard_Real Angle) 
{
  nativeHandle = new GCE2d_MakeRotation(*((gp_Pnt2d*)Point->Handle), Angle);
}

OCGeom2d_Transformation^ OCGCE2d_MakeRotation::Value()
{
  Handle(Geom2d_Transformation) tmp = ((GCE2d_MakeRotation*)nativeHandle)->Value();
  return gcnew OCGeom2d_Transformation(&tmp);
}

OCGeom2d_Transformation^ OCGCE2d_MakeRotation::Operator()
{
  Handle(Geom2d_Transformation) tmp = ((GCE2d_MakeRotation*)nativeHandle)->Operator();
  return gcnew OCGeom2d_Transformation(&tmp);
}



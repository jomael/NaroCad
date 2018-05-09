// File generated by CPPExt (CPP file)
//

#include "Geom2d_Curve.h"
#include "../Converter.h"
#include "../gp/gp_Trsf2d.h"
#include "../gp/gp_Pnt2d.h"
#include "../gp/gp_Vec2d.h"


using namespace OCNaroWrappers;

OCGeom2d_Curve::OCGeom2d_Curve(Handle(Geom2d_Curve)* nativeHandle) : OCGeom2d_Geometry((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_Geom2d_Curve(*nativeHandle);
}

 Standard_Real OCGeom2d_Curve::TransformedParameter(Standard_Real U, OCNaroWrappers::OCgp_Trsf2d^ T)
{
  return (*((Handle_Geom2d_Curve*)nativeHandle))->TransformedParameter(U, *((gp_Trsf2d*)T->Handle));
}

 Standard_Real OCGeom2d_Curve::ParametricTransformation(OCNaroWrappers::OCgp_Trsf2d^ T)
{
  return (*((Handle_Geom2d_Curve*)nativeHandle))->ParametricTransformation(*((gp_Trsf2d*)T->Handle));
}

OCGeom2d_Curve^ OCGeom2d_Curve::Reversed()
{
  Handle(Geom2d_Curve) tmp = (*((Handle_Geom2d_Curve*)nativeHandle))->Reversed();
  return gcnew OCGeom2d_Curve(&tmp);
}

 Standard_Real OCGeom2d_Curve::Period()
{
  return (*((Handle_Geom2d_Curve*)nativeHandle))->Period();
}

OCgp_Pnt2d^ OCGeom2d_Curve::Value(Standard_Real U)
{
  gp_Pnt2d* tmp = new gp_Pnt2d();
  *tmp = (*((Handle_Geom2d_Curve*)nativeHandle))->Value(U);
  return gcnew OCgp_Pnt2d(tmp);
}



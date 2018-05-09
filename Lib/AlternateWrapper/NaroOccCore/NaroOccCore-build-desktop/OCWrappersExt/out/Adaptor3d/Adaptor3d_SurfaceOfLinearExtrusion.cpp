// File generated by CPPExt (CPP file)
//

#include "Adaptor3d_SurfaceOfLinearExtrusion.h"
#include "../Converter.h"
#include "Adaptor3d_HCurve.h"
#include "../gp/gp_Dir.h"
#include "../TColStd/TColStd_Array1OfReal.h"
#include "Adaptor3d_HSurface.h"
#include "../gp/gp_Pnt.h"
#include "../gp/gp_Vec.h"
#include "../gp/gp_Pln.h"
#include "../gp/gp_Cylinder.h"
#include "../gp/gp_Cone.h"
#include "../gp/gp_Sphere.h"
#include "../gp/gp_Torus.h"
#include "../Geom/Geom_BezierSurface.h"
#include "../Geom/Geom_BSplineSurface.h"
#include "../gp/gp_Ax1.h"


using namespace OCNaroWrappers;

OCAdaptor3d_SurfaceOfLinearExtrusion::OCAdaptor3d_SurfaceOfLinearExtrusion(Adaptor3d_SurfaceOfLinearExtrusion* nativeHandle) : OCAdaptor3d_Surface((OCDummy^)nullptr)

{
  this->nativeHandle = nativeHandle;
}

OCAdaptor3d_SurfaceOfLinearExtrusion::OCAdaptor3d_SurfaceOfLinearExtrusion() : OCAdaptor3d_Surface((OCDummy^)nullptr)

{
  nativeHandle = new Adaptor3d_SurfaceOfLinearExtrusion();
}

OCAdaptor3d_SurfaceOfLinearExtrusion::OCAdaptor3d_SurfaceOfLinearExtrusion(OCNaroWrappers::OCAdaptor3d_HCurve^ C) : OCAdaptor3d_Surface((OCDummy^)nullptr)

{
  nativeHandle = new Adaptor3d_SurfaceOfLinearExtrusion(*((Handle_Adaptor3d_HCurve*)C->Handle));
}

OCAdaptor3d_SurfaceOfLinearExtrusion::OCAdaptor3d_SurfaceOfLinearExtrusion(OCNaroWrappers::OCAdaptor3d_HCurve^ C, OCNaroWrappers::OCgp_Dir^ V) : OCAdaptor3d_Surface((OCDummy^)nullptr)

{
  nativeHandle = new Adaptor3d_SurfaceOfLinearExtrusion(*((Handle_Adaptor3d_HCurve*)C->Handle), *((gp_Dir*)V->Handle));
}

 void OCAdaptor3d_SurfaceOfLinearExtrusion::Load(OCNaroWrappers::OCAdaptor3d_HCurve^ C)
{
  ((Adaptor3d_SurfaceOfLinearExtrusion*)nativeHandle)->Load(*((Handle_Adaptor3d_HCurve*)C->Handle));
}

 void OCAdaptor3d_SurfaceOfLinearExtrusion::Load(OCNaroWrappers::OCgp_Dir^ V)
{
  ((Adaptor3d_SurfaceOfLinearExtrusion*)nativeHandle)->Load(*((gp_Dir*)V->Handle));
}

 Standard_Real OCAdaptor3d_SurfaceOfLinearExtrusion::FirstUParameter()
{
  return ((Adaptor3d_SurfaceOfLinearExtrusion*)nativeHandle)->FirstUParameter();
}

 Standard_Real OCAdaptor3d_SurfaceOfLinearExtrusion::LastUParameter()
{
  return ((Adaptor3d_SurfaceOfLinearExtrusion*)nativeHandle)->LastUParameter();
}

 Standard_Real OCAdaptor3d_SurfaceOfLinearExtrusion::FirstVParameter()
{
  return ((Adaptor3d_SurfaceOfLinearExtrusion*)nativeHandle)->FirstVParameter();
}

 Standard_Real OCAdaptor3d_SurfaceOfLinearExtrusion::LastVParameter()
{
  return ((Adaptor3d_SurfaceOfLinearExtrusion*)nativeHandle)->LastVParameter();
}

 OCGeomAbs_Shape OCAdaptor3d_SurfaceOfLinearExtrusion::UContinuity()
{
  return (OCGeomAbs_Shape)(((Adaptor3d_SurfaceOfLinearExtrusion*)nativeHandle)->UContinuity());
}

 OCGeomAbs_Shape OCAdaptor3d_SurfaceOfLinearExtrusion::VContinuity()
{
  return (OCGeomAbs_Shape)(((Adaptor3d_SurfaceOfLinearExtrusion*)nativeHandle)->VContinuity());
}

 Standard_Integer OCAdaptor3d_SurfaceOfLinearExtrusion::NbUIntervals(OCGeomAbs_Shape S)
{
  return ((Adaptor3d_SurfaceOfLinearExtrusion*)nativeHandle)->NbUIntervals((GeomAbs_Shape)S);
}

 Standard_Integer OCAdaptor3d_SurfaceOfLinearExtrusion::NbVIntervals(OCGeomAbs_Shape S)
{
  return ((Adaptor3d_SurfaceOfLinearExtrusion*)nativeHandle)->NbVIntervals((GeomAbs_Shape)S);
}

 void OCAdaptor3d_SurfaceOfLinearExtrusion::UIntervals(OCNaroWrappers::OCTColStd_Array1OfReal^ T, OCGeomAbs_Shape S)
{
  ((Adaptor3d_SurfaceOfLinearExtrusion*)nativeHandle)->UIntervals(*((TColStd_Array1OfReal*)T->Handle), (GeomAbs_Shape)S);
}

 void OCAdaptor3d_SurfaceOfLinearExtrusion::VIntervals(OCNaroWrappers::OCTColStd_Array1OfReal^ T, OCGeomAbs_Shape S)
{
  ((Adaptor3d_SurfaceOfLinearExtrusion*)nativeHandle)->VIntervals(*((TColStd_Array1OfReal*)T->Handle), (GeomAbs_Shape)S);
}

OCAdaptor3d_HSurface^ OCAdaptor3d_SurfaceOfLinearExtrusion::UTrim(Standard_Real First, Standard_Real Last, Standard_Real Tol)
{
  Handle(Adaptor3d_HSurface) tmp = ((Adaptor3d_SurfaceOfLinearExtrusion*)nativeHandle)->UTrim(First, Last, Tol);
  return gcnew OCAdaptor3d_HSurface(&tmp);
}

OCAdaptor3d_HSurface^ OCAdaptor3d_SurfaceOfLinearExtrusion::VTrim(Standard_Real First, Standard_Real Last, Standard_Real Tol)
{
  Handle(Adaptor3d_HSurface) tmp = ((Adaptor3d_SurfaceOfLinearExtrusion*)nativeHandle)->VTrim(First, Last, Tol);
  return gcnew OCAdaptor3d_HSurface(&tmp);
}

 System::Boolean OCAdaptor3d_SurfaceOfLinearExtrusion::IsUClosed()
{
  return OCConverter::StandardBooleanToBoolean(((Adaptor3d_SurfaceOfLinearExtrusion*)nativeHandle)->IsUClosed());
}

 System::Boolean OCAdaptor3d_SurfaceOfLinearExtrusion::IsVClosed()
{
  return OCConverter::StandardBooleanToBoolean(((Adaptor3d_SurfaceOfLinearExtrusion*)nativeHandle)->IsVClosed());
}

 System::Boolean OCAdaptor3d_SurfaceOfLinearExtrusion::IsUPeriodic()
{
  return OCConverter::StandardBooleanToBoolean(((Adaptor3d_SurfaceOfLinearExtrusion*)nativeHandle)->IsUPeriodic());
}

 Standard_Real OCAdaptor3d_SurfaceOfLinearExtrusion::UPeriod()
{
  return ((Adaptor3d_SurfaceOfLinearExtrusion*)nativeHandle)->UPeriod();
}

 System::Boolean OCAdaptor3d_SurfaceOfLinearExtrusion::IsVPeriodic()
{
  return OCConverter::StandardBooleanToBoolean(((Adaptor3d_SurfaceOfLinearExtrusion*)nativeHandle)->IsVPeriodic());
}

 Standard_Real OCAdaptor3d_SurfaceOfLinearExtrusion::VPeriod()
{
  return ((Adaptor3d_SurfaceOfLinearExtrusion*)nativeHandle)->VPeriod();
}

OCgp_Pnt^ OCAdaptor3d_SurfaceOfLinearExtrusion::Value(Standard_Real U, Standard_Real V)
{
  gp_Pnt* tmp = new gp_Pnt();
  *tmp = ((Adaptor3d_SurfaceOfLinearExtrusion*)nativeHandle)->Value(U, V);
  return gcnew OCgp_Pnt(tmp);
}

 void OCAdaptor3d_SurfaceOfLinearExtrusion::D0(Standard_Real U, Standard_Real V, OCNaroWrappers::OCgp_Pnt^ P)
{
  ((Adaptor3d_SurfaceOfLinearExtrusion*)nativeHandle)->D0(U, V, *((gp_Pnt*)P->Handle));
}

 void OCAdaptor3d_SurfaceOfLinearExtrusion::D1(Standard_Real U, Standard_Real V, OCNaroWrappers::OCgp_Pnt^ P, OCNaroWrappers::OCgp_Vec^ D1U, OCNaroWrappers::OCgp_Vec^ D1V)
{
  ((Adaptor3d_SurfaceOfLinearExtrusion*)nativeHandle)->D1(U, V, *((gp_Pnt*)P->Handle), *((gp_Vec*)D1U->Handle), *((gp_Vec*)D1V->Handle));
}

 void OCAdaptor3d_SurfaceOfLinearExtrusion::D2(Standard_Real U, Standard_Real V, OCNaroWrappers::OCgp_Pnt^ P, OCNaroWrappers::OCgp_Vec^ D1U, OCNaroWrappers::OCgp_Vec^ D1V, OCNaroWrappers::OCgp_Vec^ D2U, OCNaroWrappers::OCgp_Vec^ D2V, OCNaroWrappers::OCgp_Vec^ D2UV)
{
  ((Adaptor3d_SurfaceOfLinearExtrusion*)nativeHandle)->D2(U, V, *((gp_Pnt*)P->Handle), *((gp_Vec*)D1U->Handle), *((gp_Vec*)D1V->Handle), *((gp_Vec*)D2U->Handle), *((gp_Vec*)D2V->Handle), *((gp_Vec*)D2UV->Handle));
}

 void OCAdaptor3d_SurfaceOfLinearExtrusion::D3(Standard_Real U, Standard_Real V, OCNaroWrappers::OCgp_Pnt^ P, OCNaroWrappers::OCgp_Vec^ D1U, OCNaroWrappers::OCgp_Vec^ D1V, OCNaroWrappers::OCgp_Vec^ D2U, OCNaroWrappers::OCgp_Vec^ D2V, OCNaroWrappers::OCgp_Vec^ D2UV, OCNaroWrappers::OCgp_Vec^ D3U, OCNaroWrappers::OCgp_Vec^ D3V, OCNaroWrappers::OCgp_Vec^ D3UUV, OCNaroWrappers::OCgp_Vec^ D3UVV)
{
  ((Adaptor3d_SurfaceOfLinearExtrusion*)nativeHandle)->D3(U, V, *((gp_Pnt*)P->Handle), *((gp_Vec*)D1U->Handle), *((gp_Vec*)D1V->Handle), *((gp_Vec*)D2U->Handle), *((gp_Vec*)D2V->Handle), *((gp_Vec*)D2UV->Handle), *((gp_Vec*)D3U->Handle), *((gp_Vec*)D3V->Handle), *((gp_Vec*)D3UUV->Handle), *((gp_Vec*)D3UVV->Handle));
}

OCgp_Vec^ OCAdaptor3d_SurfaceOfLinearExtrusion::DN(Standard_Real U, Standard_Real V, Standard_Integer Nu, Standard_Integer Nv)
{
  gp_Vec* tmp = new gp_Vec();
  *tmp = ((Adaptor3d_SurfaceOfLinearExtrusion*)nativeHandle)->DN(U, V, Nu, Nv);
  return gcnew OCgp_Vec(tmp);
}

 Standard_Real OCAdaptor3d_SurfaceOfLinearExtrusion::UResolution(Standard_Real R3d)
{
  return ((Adaptor3d_SurfaceOfLinearExtrusion*)nativeHandle)->UResolution(R3d);
}

 Standard_Real OCAdaptor3d_SurfaceOfLinearExtrusion::VResolution(Standard_Real R3d)
{
  return ((Adaptor3d_SurfaceOfLinearExtrusion*)nativeHandle)->VResolution(R3d);
}

 OCGeomAbs_SurfaceType OCAdaptor3d_SurfaceOfLinearExtrusion::GetType()
{
  return (OCGeomAbs_SurfaceType)(((Adaptor3d_SurfaceOfLinearExtrusion*)nativeHandle)->GetType());
}

OCgp_Pln^ OCAdaptor3d_SurfaceOfLinearExtrusion::Plane()
{
  gp_Pln* tmp = new gp_Pln();
  *tmp = ((Adaptor3d_SurfaceOfLinearExtrusion*)nativeHandle)->Plane();
  return gcnew OCgp_Pln(tmp);
}

OCgp_Cylinder^ OCAdaptor3d_SurfaceOfLinearExtrusion::Cylinder()
{
  gp_Cylinder* tmp = new gp_Cylinder();
  *tmp = ((Adaptor3d_SurfaceOfLinearExtrusion*)nativeHandle)->Cylinder();
  return gcnew OCgp_Cylinder(tmp);
}

OCgp_Cone^ OCAdaptor3d_SurfaceOfLinearExtrusion::Cone()
{
  gp_Cone* tmp = new gp_Cone();
  *tmp = ((Adaptor3d_SurfaceOfLinearExtrusion*)nativeHandle)->Cone();
  return gcnew OCgp_Cone(tmp);
}

OCgp_Sphere^ OCAdaptor3d_SurfaceOfLinearExtrusion::Sphere()
{
  gp_Sphere* tmp = new gp_Sphere();
  *tmp = ((Adaptor3d_SurfaceOfLinearExtrusion*)nativeHandle)->Sphere();
  return gcnew OCgp_Sphere(tmp);
}

OCgp_Torus^ OCAdaptor3d_SurfaceOfLinearExtrusion::Torus()
{
  gp_Torus* tmp = new gp_Torus();
  *tmp = ((Adaptor3d_SurfaceOfLinearExtrusion*)nativeHandle)->Torus();
  return gcnew OCgp_Torus(tmp);
}

 Standard_Integer OCAdaptor3d_SurfaceOfLinearExtrusion::UDegree()
{
  return ((Adaptor3d_SurfaceOfLinearExtrusion*)nativeHandle)->UDegree();
}

 Standard_Integer OCAdaptor3d_SurfaceOfLinearExtrusion::NbUPoles()
{
  return ((Adaptor3d_SurfaceOfLinearExtrusion*)nativeHandle)->NbUPoles();
}

 Standard_Integer OCAdaptor3d_SurfaceOfLinearExtrusion::VDegree()
{
  return ((Adaptor3d_SurfaceOfLinearExtrusion*)nativeHandle)->VDegree();
}

 Standard_Integer OCAdaptor3d_SurfaceOfLinearExtrusion::NbVPoles()
{
  return ((Adaptor3d_SurfaceOfLinearExtrusion*)nativeHandle)->NbVPoles();
}

 Standard_Integer OCAdaptor3d_SurfaceOfLinearExtrusion::NbUKnots()
{
  return ((Adaptor3d_SurfaceOfLinearExtrusion*)nativeHandle)->NbUKnots();
}

 Standard_Integer OCAdaptor3d_SurfaceOfLinearExtrusion::NbVKnots()
{
  return ((Adaptor3d_SurfaceOfLinearExtrusion*)nativeHandle)->NbVKnots();
}

 System::Boolean OCAdaptor3d_SurfaceOfLinearExtrusion::IsURational()
{
  return OCConverter::StandardBooleanToBoolean(((Adaptor3d_SurfaceOfLinearExtrusion*)nativeHandle)->IsURational());
}

 System::Boolean OCAdaptor3d_SurfaceOfLinearExtrusion::IsVRational()
{
  return OCConverter::StandardBooleanToBoolean(((Adaptor3d_SurfaceOfLinearExtrusion*)nativeHandle)->IsVRational());
}

OCGeom_BezierSurface^ OCAdaptor3d_SurfaceOfLinearExtrusion::Bezier()
{
  Handle(Geom_BezierSurface) tmp = ((Adaptor3d_SurfaceOfLinearExtrusion*)nativeHandle)->Bezier();
  return gcnew OCGeom_BezierSurface(&tmp);
}

OCGeom_BSplineSurface^ OCAdaptor3d_SurfaceOfLinearExtrusion::BSpline()
{
  Handle(Geom_BSplineSurface) tmp = ((Adaptor3d_SurfaceOfLinearExtrusion*)nativeHandle)->BSpline();
  return gcnew OCGeom_BSplineSurface(&tmp);
}

OCgp_Ax1^ OCAdaptor3d_SurfaceOfLinearExtrusion::AxeOfRevolution()
{
  gp_Ax1* tmp = new gp_Ax1();
  *tmp = ((Adaptor3d_SurfaceOfLinearExtrusion*)nativeHandle)->AxeOfRevolution();
  return gcnew OCgp_Ax1(tmp);
}

OCgp_Dir^ OCAdaptor3d_SurfaceOfLinearExtrusion::Direction()
{
  gp_Dir* tmp = new gp_Dir();
  *tmp = ((Adaptor3d_SurfaceOfLinearExtrusion*)nativeHandle)->Direction();
  return gcnew OCgp_Dir(tmp);
}

OCAdaptor3d_HCurve^ OCAdaptor3d_SurfaceOfLinearExtrusion::BasisCurve()
{
  Handle(Adaptor3d_HCurve) tmp = ((Adaptor3d_SurfaceOfLinearExtrusion*)nativeHandle)->BasisCurve();
  return gcnew OCAdaptor3d_HCurve(&tmp);
}


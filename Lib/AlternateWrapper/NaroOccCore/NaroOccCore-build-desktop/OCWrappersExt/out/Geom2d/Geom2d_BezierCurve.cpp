// File generated by CPPExt (CPP file)
//

#include "Geom2d_BezierCurve.h"
#include "../Converter.h"
#include "../TColgp/TColgp_HArray1OfPnt2d.h"
#include "../TColStd/TColStd_HArray1OfReal.h"
#include "../TColgp/TColgp_Array1OfPnt2d.h"
#include "../TColStd/TColStd_Array1OfReal.h"
#include "../gp/gp_Pnt2d.h"
#include "../gp/gp_Vec2d.h"
#include "../gp/gp_Trsf2d.h"
#include "Geom2d_Geometry.h"


using namespace OCNaroWrappers;

OCGeom2d_BezierCurve::OCGeom2d_BezierCurve(Handle(Geom2d_BezierCurve)* nativeHandle) : OCGeom2d_BoundedCurve((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_Geom2d_BezierCurve(*nativeHandle);
}

OCGeom2d_BezierCurve::OCGeom2d_BezierCurve(OCNaroWrappers::OCTColgp_Array1OfPnt2d^ CurvePoles) : OCGeom2d_BoundedCurve((OCDummy^)nullptr)

{
  nativeHandle = new Handle_Geom2d_BezierCurve(new Geom2d_BezierCurve(*((TColgp_Array1OfPnt2d*)CurvePoles->Handle)));
}

OCGeom2d_BezierCurve::OCGeom2d_BezierCurve(OCNaroWrappers::OCTColgp_Array1OfPnt2d^ CurvePoles, OCNaroWrappers::OCTColStd_Array1OfReal^ PoleWeights) : OCGeom2d_BoundedCurve((OCDummy^)nullptr)

{
  nativeHandle = new Handle_Geom2d_BezierCurve(new Geom2d_BezierCurve(*((TColgp_Array1OfPnt2d*)CurvePoles->Handle), *((TColStd_Array1OfReal*)PoleWeights->Handle)));
}

 void OCGeom2d_BezierCurve::Increase(Standard_Integer Degree)
{
  (*((Handle_Geom2d_BezierCurve*)nativeHandle))->Increase(Degree);
}

 void OCGeom2d_BezierCurve::InsertPoleAfter(Standard_Integer Index, OCNaroWrappers::OCgp_Pnt2d^ P, Standard_Real Weight)
{
  (*((Handle_Geom2d_BezierCurve*)nativeHandle))->InsertPoleAfter(Index, *((gp_Pnt2d*)P->Handle), Weight);
}

 void OCGeom2d_BezierCurve::InsertPoleBefore(Standard_Integer Index, OCNaroWrappers::OCgp_Pnt2d^ P, Standard_Real Weight)
{
  (*((Handle_Geom2d_BezierCurve*)nativeHandle))->InsertPoleBefore(Index, *((gp_Pnt2d*)P->Handle), Weight);
}

 void OCGeom2d_BezierCurve::RemovePole(Standard_Integer Index)
{
  (*((Handle_Geom2d_BezierCurve*)nativeHandle))->RemovePole(Index);
}

 void OCGeom2d_BezierCurve::Reverse()
{
  (*((Handle_Geom2d_BezierCurve*)nativeHandle))->Reverse();
}

 Standard_Real OCGeom2d_BezierCurve::ReversedParameter(Standard_Real U)
{
  return (*((Handle_Geom2d_BezierCurve*)nativeHandle))->ReversedParameter(U);
}

 void OCGeom2d_BezierCurve::Segment(Standard_Real U1, Standard_Real U2)
{
  (*((Handle_Geom2d_BezierCurve*)nativeHandle))->Segment(U1, U2);
}

 void OCGeom2d_BezierCurve::SetPole(Standard_Integer Index, OCNaroWrappers::OCgp_Pnt2d^ P)
{
  (*((Handle_Geom2d_BezierCurve*)nativeHandle))->SetPole(Index, *((gp_Pnt2d*)P->Handle));
}

 void OCGeom2d_BezierCurve::SetPole(Standard_Integer Index, OCNaroWrappers::OCgp_Pnt2d^ P, Standard_Real Weight)
{
  (*((Handle_Geom2d_BezierCurve*)nativeHandle))->SetPole(Index, *((gp_Pnt2d*)P->Handle), Weight);
}

 void OCGeom2d_BezierCurve::SetWeight(Standard_Integer Index, Standard_Real Weight)
{
  (*((Handle_Geom2d_BezierCurve*)nativeHandle))->SetWeight(Index, Weight);
}

 System::Boolean OCGeom2d_BezierCurve::IsClosed()
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_Geom2d_BezierCurve*)nativeHandle))->IsClosed());
}

 System::Boolean OCGeom2d_BezierCurve::IsCN(Standard_Integer N)
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_Geom2d_BezierCurve*)nativeHandle))->IsCN(N));
}

 System::Boolean OCGeom2d_BezierCurve::IsPeriodic()
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_Geom2d_BezierCurve*)nativeHandle))->IsPeriodic());
}

 System::Boolean OCGeom2d_BezierCurve::IsRational()
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_Geom2d_BezierCurve*)nativeHandle))->IsRational());
}

 OCGeomAbs_Shape OCGeom2d_BezierCurve::Continuity()
{
  return (OCGeomAbs_Shape)((*((Handle_Geom2d_BezierCurve*)nativeHandle))->Continuity());
}

 Standard_Integer OCGeom2d_BezierCurve::Degree()
{
  return (*((Handle_Geom2d_BezierCurve*)nativeHandle))->Degree();
}

 void OCGeom2d_BezierCurve::D0(Standard_Real U, OCNaroWrappers::OCgp_Pnt2d^ P)
{
  (*((Handle_Geom2d_BezierCurve*)nativeHandle))->D0(U, *((gp_Pnt2d*)P->Handle));
}

 void OCGeom2d_BezierCurve::D1(Standard_Real U, OCNaroWrappers::OCgp_Pnt2d^ P, OCNaroWrappers::OCgp_Vec2d^ V1)
{
  (*((Handle_Geom2d_BezierCurve*)nativeHandle))->D1(U, *((gp_Pnt2d*)P->Handle), *((gp_Vec2d*)V1->Handle));
}

 void OCGeom2d_BezierCurve::D2(Standard_Real U, OCNaroWrappers::OCgp_Pnt2d^ P, OCNaroWrappers::OCgp_Vec2d^ V1, OCNaroWrappers::OCgp_Vec2d^ V2)
{
  (*((Handle_Geom2d_BezierCurve*)nativeHandle))->D2(U, *((gp_Pnt2d*)P->Handle), *((gp_Vec2d*)V1->Handle), *((gp_Vec2d*)V2->Handle));
}

 void OCGeom2d_BezierCurve::D3(Standard_Real U, OCNaroWrappers::OCgp_Pnt2d^ P, OCNaroWrappers::OCgp_Vec2d^ V1, OCNaroWrappers::OCgp_Vec2d^ V2, OCNaroWrappers::OCgp_Vec2d^ V3)
{
  (*((Handle_Geom2d_BezierCurve*)nativeHandle))->D3(U, *((gp_Pnt2d*)P->Handle), *((gp_Vec2d*)V1->Handle), *((gp_Vec2d*)V2->Handle), *((gp_Vec2d*)V3->Handle));
}

OCgp_Vec2d^ OCGeom2d_BezierCurve::DN(Standard_Real U, Standard_Integer N)
{
  gp_Vec2d* tmp = new gp_Vec2d();
  *tmp = (*((Handle_Geom2d_BezierCurve*)nativeHandle))->DN(U, N);
  return gcnew OCgp_Vec2d(tmp);
}

OCgp_Pnt2d^ OCGeom2d_BezierCurve::EndPoint()
{
  gp_Pnt2d* tmp = new gp_Pnt2d();
  *tmp = (*((Handle_Geom2d_BezierCurve*)nativeHandle))->EndPoint();
  return gcnew OCgp_Pnt2d(tmp);
}

 Standard_Real OCGeom2d_BezierCurve::FirstParameter()
{
  return (*((Handle_Geom2d_BezierCurve*)nativeHandle))->FirstParameter();
}

 Standard_Real OCGeom2d_BezierCurve::LastParameter()
{
  return (*((Handle_Geom2d_BezierCurve*)nativeHandle))->LastParameter();
}

 Standard_Integer OCGeom2d_BezierCurve::NbPoles()
{
  return (*((Handle_Geom2d_BezierCurve*)nativeHandle))->NbPoles();
}

OCgp_Pnt2d^ OCGeom2d_BezierCurve::Pole(Standard_Integer Index)
{
  gp_Pnt2d* tmp = new gp_Pnt2d();
  *tmp = (*((Handle_Geom2d_BezierCurve*)nativeHandle))->Pole(Index);
  return gcnew OCgp_Pnt2d(tmp);
}

 void OCGeom2d_BezierCurve::Poles(OCNaroWrappers::OCTColgp_Array1OfPnt2d^ P)
{
  (*((Handle_Geom2d_BezierCurve*)nativeHandle))->Poles(*((TColgp_Array1OfPnt2d*)P->Handle));
}

OCgp_Pnt2d^ OCGeom2d_BezierCurve::StartPoint()
{
  gp_Pnt2d* tmp = new gp_Pnt2d();
  *tmp = (*((Handle_Geom2d_BezierCurve*)nativeHandle))->StartPoint();
  return gcnew OCgp_Pnt2d(tmp);
}

 Standard_Real OCGeom2d_BezierCurve::Weight(Standard_Integer Index)
{
  return (*((Handle_Geom2d_BezierCurve*)nativeHandle))->Weight(Index);
}

 void OCGeom2d_BezierCurve::Weights(OCNaroWrappers::OCTColStd_Array1OfReal^ W)
{
  (*((Handle_Geom2d_BezierCurve*)nativeHandle))->Weights(*((TColStd_Array1OfReal*)W->Handle));
}

 void OCGeom2d_BezierCurve::Transform(OCNaroWrappers::OCgp_Trsf2d^ T)
{
  (*((Handle_Geom2d_BezierCurve*)nativeHandle))->Transform(*((gp_Trsf2d*)T->Handle));
}

 Standard_Integer OCGeom2d_BezierCurve::MaxDegree()
{
  return Geom2d_BezierCurve::MaxDegree();
}

 void OCGeom2d_BezierCurve::Resolution(Standard_Real ToleranceUV, Standard_Real& UTolerance)
{
  (*((Handle_Geom2d_BezierCurve*)nativeHandle))->Resolution(ToleranceUV, UTolerance);
}

OCGeom2d_Geometry^ OCGeom2d_BezierCurve::Copy()
{
  Handle(Geom2d_Geometry) tmp = (*((Handle_Geom2d_BezierCurve*)nativeHandle))->Copy();
  return gcnew OCGeom2d_Geometry(&tmp);
}


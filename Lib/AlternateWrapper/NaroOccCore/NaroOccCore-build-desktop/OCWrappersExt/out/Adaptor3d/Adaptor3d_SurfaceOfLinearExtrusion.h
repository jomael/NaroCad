// File generated by CPPExt (MPV)
//
#ifndef _Adaptor3d_SurfaceOfLinearExtrusion_OCWrappers_HeaderFile
#define _Adaptor3d_SurfaceOfLinearExtrusion_OCWrappers_HeaderFile

// include native header
#include <Adaptor3d_SurfaceOfLinearExtrusion.hxx>
#include "../Converter.h"

#include "Adaptor3d_Surface.h"

#include "../gp/gp_Dir.h"
#include "Adaptor3d_Surface.h"
#include "../GeomAbs/GeomAbs_Shape.h"
#include "../GeomAbs/GeomAbs_SurfaceType.h"


namespace OCNaroWrappers
{

ref class OCAdaptor3d_HCurve;
ref class OCgp_Dir;
ref class OCTColStd_Array1OfReal;
ref class OCAdaptor3d_HSurface;
ref class OCgp_Pnt;
ref class OCgp_Vec;
ref class OCgp_Pln;
ref class OCgp_Cylinder;
ref class OCgp_Cone;
ref class OCgp_Sphere;
ref class OCgp_Torus;
ref class OCGeom_BezierSurface;
ref class OCGeom_BSplineSurface;
ref class OCgp_Ax1;


//! Generalised cylinder. This surface is obtained  by sweeping a  curve in  a given <br>
//!  direction. The parametrization range  for the parameter U is defined <br>
//!  with referenced the curve. <br>
//!  The parametrization range for the parameter V is ]-infinite,+infinite[ <br>
//!  The  position of  the   curve gives  the origin for    the <br>
//!  parameter V. <br>
//!  The continuity of the surface is CN in the V direction. <br>
public ref class OCAdaptor3d_SurfaceOfLinearExtrusion  : public OCAdaptor3d_Surface {

protected:
  // dummy constructor;
  OCAdaptor3d_SurfaceOfLinearExtrusion(OCDummy^) : OCAdaptor3d_Surface((OCDummy^)nullptr) {};

public:

// constructor from native
OCAdaptor3d_SurfaceOfLinearExtrusion(Adaptor3d_SurfaceOfLinearExtrusion* nativeHandle);

// Methods PUBLIC


OCAdaptor3d_SurfaceOfLinearExtrusion();

//! The Curve is loaded. <br>
OCAdaptor3d_SurfaceOfLinearExtrusion(OCNaroWrappers::OCAdaptor3d_HCurve^ C);

//! Thew Curve and the Direction are loaded. <br>
OCAdaptor3d_SurfaceOfLinearExtrusion(OCNaroWrappers::OCAdaptor3d_HCurve^ C, OCNaroWrappers::OCgp_Dir^ V);

//! Changes the Curve <br>
 /*instead*/  void Load(OCNaroWrappers::OCAdaptor3d_HCurve^ C) ;

//! Changes the Direction <br>
 /*instead*/  void Load(OCNaroWrappers::OCgp_Dir^ V) ;


virtual /*instead*/  Standard_Real FirstUParameter() override;


virtual /*instead*/  Standard_Real LastUParameter() override;


virtual /*instead*/  Standard_Real FirstVParameter() override;


virtual /*instead*/  Standard_Real LastVParameter() override;


virtual /*instead*/  OCGeomAbs_Shape UContinuity() override;

//! Return CN. <br>
virtual /*instead*/  OCGeomAbs_Shape VContinuity() override;

//! Returns the number of U intervals for  continuity <br>
//!          <S>. May be one if UContinuity(me) >= <S> <br>
virtual /*instead*/  Standard_Integer NbUIntervals(OCGeomAbs_Shape S) override;

//! Returns the number of V intervals for  continuity <br>
//!          <S>. May be one if VContinuity(me) >= <S> <br>
virtual /*instead*/  Standard_Integer NbVIntervals(OCGeomAbs_Shape S) override;

//! Returns the  intervals with the requested continuity <br>
//!          in the U direction. <br>
virtual /*instead*/  void UIntervals(OCNaroWrappers::OCTColStd_Array1OfReal^ T, OCGeomAbs_Shape S) override;

//! Returns the  intervals with the requested continuity <br>
//!          in the V direction. <br>
virtual /*instead*/  void VIntervals(OCNaroWrappers::OCTColStd_Array1OfReal^ T, OCGeomAbs_Shape S) override;

//! Returns    a  surface trimmed in the U direction <br>
//!           equivalent   of  <me>  between <br>
//!          parameters <First>  and <Last>. <Tol>  is used  to <br>
//!          test for 3d points confusion. <br>//! If <First> >= <Last> <br>
virtual /*instead*/  OCAdaptor3d_HSurface^ UTrim(Standard_Real First, Standard_Real Last, Standard_Real Tol) override;

//! Returns    a  surface trimmed in the V direction  between <br>
//!          parameters <First>  and <Last>. <Tol>  is used  to <br>
//!          test for 3d points confusion. <br>//! If <First> >= <Last> <br>
virtual /*instead*/  OCAdaptor3d_HSurface^ VTrim(Standard_Real First, Standard_Real Last, Standard_Real Tol) override;


virtual /*instead*/  System::Boolean IsUClosed() override;


virtual /*instead*/  System::Boolean IsVClosed() override;


virtual /*instead*/  System::Boolean IsUPeriodic() override;


virtual /*instead*/  Standard_Real UPeriod() override;


virtual /*instead*/  System::Boolean IsVPeriodic() override;


virtual /*instead*/  Standard_Real VPeriod() override;

//! Computes the point of parameters U,V on the surface. <br>
virtual /*instead*/  OCgp_Pnt^ Value(Standard_Real U, Standard_Real V) override;

//! Computes the point of parameters U,V on the surface. <br>
virtual /*instead*/  void D0(Standard_Real U, Standard_Real V, OCNaroWrappers::OCgp_Pnt^ P) override;

//! Computes the point  and the first derivatives on <br>
//!  the surface. <br>//! Raised   if  the continuity  of   the  current <br>
//!  intervals is not C1. <br>
virtual /*instead*/  void D1(Standard_Real U, Standard_Real V, OCNaroWrappers::OCgp_Pnt^ P, OCNaroWrappers::OCgp_Vec^ D1U, OCNaroWrappers::OCgp_Vec^ D1V) override;

//!  Computes   the point,  the  first  and  second <br>
//!  derivatives on the surface. <br>//! Raised  if   the   continuity   of the current <br>
//!  intervals is not C2. <br>
virtual /*instead*/  void D2(Standard_Real U, Standard_Real V, OCNaroWrappers::OCgp_Pnt^ P, OCNaroWrappers::OCgp_Vec^ D1U, OCNaroWrappers::OCgp_Vec^ D1V, OCNaroWrappers::OCgp_Vec^ D2U, OCNaroWrappers::OCgp_Vec^ D2V, OCNaroWrappers::OCgp_Vec^ D2UV) override;

//! Computes the point,  the first, second and third <br>
//!  derivatives on the surface. <br>//! Raised  if   the   continuity   of the current <br>
//!  intervals is not C3. <br>
virtual /*instead*/  void D3(Standard_Real U, Standard_Real V, OCNaroWrappers::OCgp_Pnt^ P, OCNaroWrappers::OCgp_Vec^ D1U, OCNaroWrappers::OCgp_Vec^ D1V, OCNaroWrappers::OCgp_Vec^ D2U, OCNaroWrappers::OCgp_Vec^ D2V, OCNaroWrappers::OCgp_Vec^ D2UV, OCNaroWrappers::OCgp_Vec^ D3U, OCNaroWrappers::OCgp_Vec^ D3V, OCNaroWrappers::OCgp_Vec^ D3UUV, OCNaroWrappers::OCgp_Vec^ D3UVV) override;

//!  Computes the derivative of order Nu in the direction U and Nv <br>
//!  in the direction V at the point P(U, V). <br>//! Raised if the current U  interval is not not CNu <br>
//!  and the current V interval is not CNv. <br>//! Raised if Nu + Nv < 1 or Nu < 0 or Nv < 0. <br>
virtual /*instead*/  OCgp_Vec^ DN(Standard_Real U, Standard_Real V, Standard_Integer Nu, Standard_Integer Nv) override;

//!  Returns the parametric U  resolution corresponding <br>
//!         to the real space resolution <R3d>. <br>
virtual /*instead*/  Standard_Real UResolution(Standard_Real R3d) override;

//!  Returns the parametric V  resolution corresponding <br>
//!         to the real space resolution <R3d>. <br>
virtual /*instead*/  Standard_Real VResolution(Standard_Real R3d) override;

//! Returns the type of the surface : Plane, Cylinder, <br>
//!          Cone,      Sphere,        Torus,    BezierSurface, <br>
//!          BSplineSurface,               SurfaceOfRevolution, <br>
//!          SurfaceOfExtrusion, OtherSurface <br>
virtual /*instead*/  OCGeomAbs_SurfaceType GetType() override;


virtual /*instead*/  OCgp_Pln^ Plane() override;


virtual /*instead*/  OCgp_Cylinder^ Cylinder() override;


virtual /*instead*/  OCgp_Cone^ Cone() override;


virtual /*instead*/  OCgp_Sphere^ Sphere() override;


virtual /*instead*/  OCgp_Torus^ Torus() override;


virtual /*instead*/  Standard_Integer UDegree() override;


virtual /*instead*/  Standard_Integer NbUPoles() override;


virtual /*instead*/  Standard_Integer VDegree() override;


virtual /*instead*/  Standard_Integer NbVPoles() override;


virtual /*instead*/  Standard_Integer NbUKnots() override;


virtual /*instead*/  Standard_Integer NbVKnots() override;


virtual /*instead*/  System::Boolean IsURational() override;


virtual /*instead*/  System::Boolean IsVRational() override;


virtual /*instead*/  OCGeom_BezierSurface^ Bezier() override;


virtual /*instead*/  OCGeom_BSplineSurface^ BSpline() override;


virtual /*instead*/  OCgp_Ax1^ AxeOfRevolution() override;


virtual /*instead*/  OCgp_Dir^ Direction() override;


virtual /*instead*/  OCAdaptor3d_HCurve^ BasisCurve() override;

~OCAdaptor3d_SurfaceOfLinearExtrusion()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif

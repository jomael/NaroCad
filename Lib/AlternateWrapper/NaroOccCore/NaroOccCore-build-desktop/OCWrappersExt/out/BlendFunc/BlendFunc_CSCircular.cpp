// File generated by CPPExt (CPP file)
//

#include "BlendFunc_CSCircular.h"
#include "../Converter.h"
#include "../Adaptor3d/Adaptor3d_HSurface.h"
#include "../Adaptor3d/Adaptor3d_HCurve.h"
#include "../Law/Law_Function.h"
#include "../math/math_Vector.h"
#include "../math/math_Matrix.h"
#include "../gp/gp_Pnt.h"
#include "../gp/gp_Pnt2d.h"
#include "../gp/gp_Vec.h"
#include "../gp/gp_Vec2d.h"
#include "../gp/gp_Circ.h"
#include "../Blend/Blend_Point.h"
#include "../TColgp/TColgp_Array1OfPnt.h"
#include "../TColgp/TColgp_Array1OfVec.h"
#include "../TColgp/TColgp_Array1OfPnt2d.h"
#include "../TColgp/TColgp_Array1OfVec2d.h"
#include "../TColStd/TColStd_Array1OfReal.h"
#include "../TColStd/TColStd_Array1OfInteger.h"


using namespace OCNaroWrappers;

OCBlendFunc_CSCircular::OCBlendFunc_CSCircular(BlendFunc_CSCircular* nativeHandle) : OCBlend_CSFunction((OCDummy^)nullptr)

{
  this->nativeHandle = nativeHandle;
}

OCBlendFunc_CSCircular::OCBlendFunc_CSCircular(OCNaroWrappers::OCAdaptor3d_HSurface^ S, OCNaroWrappers::OCAdaptor3d_HCurve^ C, OCNaroWrappers::OCAdaptor3d_HCurve^ CGuide, OCNaroWrappers::OCLaw_Function^ L) : OCBlend_CSFunction((OCDummy^)nullptr)

{
  nativeHandle = new BlendFunc_CSCircular(*((Handle_Adaptor3d_HSurface*)S->Handle), *((Handle_Adaptor3d_HCurve*)C->Handle), *((Handle_Adaptor3d_HCurve*)CGuide->Handle), *((Handle_Law_Function*)L->Handle));
}

 Standard_Integer OCBlendFunc_CSCircular::NbVariables()
{
  return ((BlendFunc_CSCircular*)nativeHandle)->NbVariables();
}

 Standard_Integer OCBlendFunc_CSCircular::NbEquations()
{
  return ((BlendFunc_CSCircular*)nativeHandle)->NbEquations();
}

 System::Boolean OCBlendFunc_CSCircular::Value(OCNaroWrappers::OCmath_Vector^ X, OCNaroWrappers::OCmath_Vector^ F)
{
  return OCConverter::StandardBooleanToBoolean(((BlendFunc_CSCircular*)nativeHandle)->Value(*((math_Vector*)X->Handle), *((math_Vector*)F->Handle)));
}

 System::Boolean OCBlendFunc_CSCircular::Derivatives(OCNaroWrappers::OCmath_Vector^ X, OCNaroWrappers::OCmath_Matrix^ D)
{
  return OCConverter::StandardBooleanToBoolean(((BlendFunc_CSCircular*)nativeHandle)->Derivatives(*((math_Vector*)X->Handle), *((math_Matrix*)D->Handle)));
}

 System::Boolean OCBlendFunc_CSCircular::Values(OCNaroWrappers::OCmath_Vector^ X, OCNaroWrappers::OCmath_Vector^ F, OCNaroWrappers::OCmath_Matrix^ D)
{
  return OCConverter::StandardBooleanToBoolean(((BlendFunc_CSCircular*)nativeHandle)->Values(*((math_Vector*)X->Handle), *((math_Vector*)F->Handle), *((math_Matrix*)D->Handle)));
}

 void OCBlendFunc_CSCircular::Set(Standard_Real Param)
{
  ((BlendFunc_CSCircular*)nativeHandle)->Set(Param);
}

 void OCBlendFunc_CSCircular::Set(Standard_Real First, Standard_Real Last)
{
  ((BlendFunc_CSCircular*)nativeHandle)->Set(First, Last);
}

 void OCBlendFunc_CSCircular::GetTolerance(OCNaroWrappers::OCmath_Vector^ Tolerance, Standard_Real Tol)
{
  ((BlendFunc_CSCircular*)nativeHandle)->GetTolerance(*((math_Vector*)Tolerance->Handle), Tol);
}

 void OCBlendFunc_CSCircular::GetBounds(OCNaroWrappers::OCmath_Vector^ InfBound, OCNaroWrappers::OCmath_Vector^ SupBound)
{
  ((BlendFunc_CSCircular*)nativeHandle)->GetBounds(*((math_Vector*)InfBound->Handle), *((math_Vector*)SupBound->Handle));
}

 System::Boolean OCBlendFunc_CSCircular::IsSolution(OCNaroWrappers::OCmath_Vector^ Sol, Standard_Real Tol)
{
  return OCConverter::StandardBooleanToBoolean(((BlendFunc_CSCircular*)nativeHandle)->IsSolution(*((math_Vector*)Sol->Handle), Tol));
}

OCgp_Pnt^ OCBlendFunc_CSCircular::PointOnS()
{
  gp_Pnt* tmp = new gp_Pnt();
  *tmp = ((BlendFunc_CSCircular*)nativeHandle)->PointOnS();
  return gcnew OCgp_Pnt(tmp);
}

OCgp_Pnt^ OCBlendFunc_CSCircular::PointOnC()
{
  gp_Pnt* tmp = new gp_Pnt();
  *tmp = ((BlendFunc_CSCircular*)nativeHandle)->PointOnC();
  return gcnew OCgp_Pnt(tmp);
}

OCgp_Pnt2d^ OCBlendFunc_CSCircular::Pnt2d()
{
  gp_Pnt2d* tmp = new gp_Pnt2d();
  *tmp = ((BlendFunc_CSCircular*)nativeHandle)->Pnt2d();
  return gcnew OCgp_Pnt2d(tmp);
}

 Standard_Real OCBlendFunc_CSCircular::ParameterOnC()
{
  return ((BlendFunc_CSCircular*)nativeHandle)->ParameterOnC();
}

 System::Boolean OCBlendFunc_CSCircular::IsTangencyPoint()
{
  return OCConverter::StandardBooleanToBoolean(((BlendFunc_CSCircular*)nativeHandle)->IsTangencyPoint());
}

OCgp_Vec^ OCBlendFunc_CSCircular::TangentOnS()
{
  gp_Vec* tmp = new gp_Vec();
  *tmp = ((BlendFunc_CSCircular*)nativeHandle)->TangentOnS();
  return gcnew OCgp_Vec(tmp);
}

OCgp_Vec2d^ OCBlendFunc_CSCircular::Tangent2d()
{
  gp_Vec2d* tmp = new gp_Vec2d();
  *tmp = ((BlendFunc_CSCircular*)nativeHandle)->Tangent2d();
  return gcnew OCgp_Vec2d(tmp);
}

OCgp_Vec^ OCBlendFunc_CSCircular::TangentOnC()
{
  gp_Vec* tmp = new gp_Vec();
  *tmp = ((BlendFunc_CSCircular*)nativeHandle)->TangentOnC();
  return gcnew OCgp_Vec(tmp);
}

 void OCBlendFunc_CSCircular::Tangent(Standard_Real U, Standard_Real V, OCNaroWrappers::OCgp_Vec^ TgS, OCNaroWrappers::OCgp_Vec^ NormS)
{
  ((BlendFunc_CSCircular*)nativeHandle)->Tangent(U, V, *((gp_Vec*)TgS->Handle), *((gp_Vec*)NormS->Handle));
}

 void OCBlendFunc_CSCircular::Set(Standard_Real Radius, Standard_Integer Choix)
{
  ((BlendFunc_CSCircular*)nativeHandle)->Set(Radius, Choix);
}

 void OCBlendFunc_CSCircular::Set(OCBlendFunc_SectionShape TypeSection)
{
  ((BlendFunc_CSCircular*)nativeHandle)->Set((BlendFunc_SectionShape)TypeSection);
}

 void OCBlendFunc_CSCircular::Section(Standard_Real Param, Standard_Real U, Standard_Real V, Standard_Real W, Standard_Real& Pdeb, Standard_Real& Pfin, OCNaroWrappers::OCgp_Circ^ C)
{
  ((BlendFunc_CSCircular*)nativeHandle)->Section(Param, U, V, W, Pdeb, Pfin, *((gp_Circ*)C->Handle));
}

 System::Boolean OCBlendFunc_CSCircular::Section(OCNaroWrappers::OCBlend_Point^ P, OCNaroWrappers::OCTColgp_Array1OfPnt^ Poles, OCNaroWrappers::OCTColgp_Array1OfVec^ DPoles, OCNaroWrappers::OCTColgp_Array1OfVec^ D2Poles, OCNaroWrappers::OCTColgp_Array1OfPnt2d^ Poles2d, OCNaroWrappers::OCTColgp_Array1OfVec2d^ DPoles2d, OCNaroWrappers::OCTColgp_Array1OfVec2d^ D2Poles2d, OCNaroWrappers::OCTColStd_Array1OfReal^ Weigths, OCNaroWrappers::OCTColStd_Array1OfReal^ DWeigths, OCNaroWrappers::OCTColStd_Array1OfReal^ D2Weigths)
{
  return OCConverter::StandardBooleanToBoolean(((BlendFunc_CSCircular*)nativeHandle)->Section(*((Blend_Point*)P->Handle), *((TColgp_Array1OfPnt*)Poles->Handle), *((TColgp_Array1OfVec*)DPoles->Handle), *((TColgp_Array1OfVec*)D2Poles->Handle), *((TColgp_Array1OfPnt2d*)Poles2d->Handle), *((TColgp_Array1OfVec2d*)DPoles2d->Handle), *((TColgp_Array1OfVec2d*)D2Poles2d->Handle), *((TColStd_Array1OfReal*)Weigths->Handle), *((TColStd_Array1OfReal*)DWeigths->Handle), *((TColStd_Array1OfReal*)D2Weigths->Handle)));
}

 System::Boolean OCBlendFunc_CSCircular::GetSection(Standard_Real Param, Standard_Real U, Standard_Real V, Standard_Real W, OCNaroWrappers::OCTColgp_Array1OfPnt^ tabP, OCNaroWrappers::OCTColgp_Array1OfVec^ tabV)
{
  return OCConverter::StandardBooleanToBoolean(((BlendFunc_CSCircular*)nativeHandle)->GetSection(Param, U, V, W, *((TColgp_Array1OfPnt*)tabP->Handle), *((TColgp_Array1OfVec*)tabV->Handle)));
}

 System::Boolean OCBlendFunc_CSCircular::IsRational()
{
  return OCConverter::StandardBooleanToBoolean(((BlendFunc_CSCircular*)nativeHandle)->IsRational());
}

 Standard_Real OCBlendFunc_CSCircular::GetSectionSize()
{
  return ((BlendFunc_CSCircular*)nativeHandle)->GetSectionSize();
}

 void OCBlendFunc_CSCircular::GetMinimalWeight(OCNaroWrappers::OCTColStd_Array1OfReal^ Weigths)
{
  ((BlendFunc_CSCircular*)nativeHandle)->GetMinimalWeight(*((TColStd_Array1OfReal*)Weigths->Handle));
}

 Standard_Integer OCBlendFunc_CSCircular::NbIntervals(OCGeomAbs_Shape S)
{
  return ((BlendFunc_CSCircular*)nativeHandle)->NbIntervals((GeomAbs_Shape)S);
}

 void OCBlendFunc_CSCircular::Intervals(OCNaroWrappers::OCTColStd_Array1OfReal^ T, OCGeomAbs_Shape S)
{
  ((BlendFunc_CSCircular*)nativeHandle)->Intervals(*((TColStd_Array1OfReal*)T->Handle), (GeomAbs_Shape)S);
}

 void OCBlendFunc_CSCircular::GetShape(Standard_Integer& NbPoles, Standard_Integer& NbKnots, Standard_Integer& Degree, Standard_Integer& NbPoles2d)
{
  ((BlendFunc_CSCircular*)nativeHandle)->GetShape(NbPoles, NbKnots, Degree, NbPoles2d);
}

 void OCBlendFunc_CSCircular::GetTolerance(Standard_Real BoundTol, Standard_Real SurfTol, Standard_Real AngleTol, OCNaroWrappers::OCmath_Vector^ Tol3d, OCNaroWrappers::OCmath_Vector^ Tol1D)
{
  ((BlendFunc_CSCircular*)nativeHandle)->GetTolerance(BoundTol, SurfTol, AngleTol, *((math_Vector*)Tol3d->Handle), *((math_Vector*)Tol1D->Handle));
}

 void OCBlendFunc_CSCircular::Knots(OCNaroWrappers::OCTColStd_Array1OfReal^ TKnots)
{
  ((BlendFunc_CSCircular*)nativeHandle)->Knots(*((TColStd_Array1OfReal*)TKnots->Handle));
}

 void OCBlendFunc_CSCircular::Mults(OCNaroWrappers::OCTColStd_Array1OfInteger^ TMults)
{
  ((BlendFunc_CSCircular*)nativeHandle)->Mults(*((TColStd_Array1OfInteger*)TMults->Handle));
}

 System::Boolean OCBlendFunc_CSCircular::Section(OCNaroWrappers::OCBlend_Point^ P, OCNaroWrappers::OCTColgp_Array1OfPnt^ Poles, OCNaroWrappers::OCTColgp_Array1OfVec^ DPoles, OCNaroWrappers::OCTColgp_Array1OfPnt2d^ Poles2d, OCNaroWrappers::OCTColgp_Array1OfVec2d^ DPoles2d, OCNaroWrappers::OCTColStd_Array1OfReal^ Weigths, OCNaroWrappers::OCTColStd_Array1OfReal^ DWeigths)
{
  return OCConverter::StandardBooleanToBoolean(((BlendFunc_CSCircular*)nativeHandle)->Section(*((Blend_Point*)P->Handle), *((TColgp_Array1OfPnt*)Poles->Handle), *((TColgp_Array1OfVec*)DPoles->Handle), *((TColgp_Array1OfPnt2d*)Poles2d->Handle), *((TColgp_Array1OfVec2d*)DPoles2d->Handle), *((TColStd_Array1OfReal*)Weigths->Handle), *((TColStd_Array1OfReal*)DWeigths->Handle)));
}

 void OCBlendFunc_CSCircular::Section(OCNaroWrappers::OCBlend_Point^ P, OCNaroWrappers::OCTColgp_Array1OfPnt^ Poles, OCNaroWrappers::OCTColgp_Array1OfPnt2d^ Poles2d, OCNaroWrappers::OCTColStd_Array1OfReal^ Weigths)
{
  ((BlendFunc_CSCircular*)nativeHandle)->Section(*((Blend_Point*)P->Handle), *((TColgp_Array1OfPnt*)Poles->Handle), *((TColgp_Array1OfPnt2d*)Poles2d->Handle), *((TColStd_Array1OfReal*)Weigths->Handle));
}

 void OCBlendFunc_CSCircular::Resolution(Standard_Integer IC2d, Standard_Real Tol, Standard_Real& TolU, Standard_Real& TolV)
{
  ((BlendFunc_CSCircular*)nativeHandle)->Resolution(IC2d, Tol, TolU, TolV);
}



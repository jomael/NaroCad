// File generated by CPPExt (CPP file)
//

#include "BlendFunc_Chamfer.h"
#include "../Converter.h"
#include "../Adaptor3d/Adaptor3d_HSurface.h"
#include "../Adaptor3d/Adaptor3d_HCurve.h"
#include "../math/math_Vector.h"
#include "../math/math_Matrix.h"
#include "../gp/gp_Pnt.h"
#include "../gp/gp_Vec.h"
#include "../gp/gp_Vec2d.h"
#include "../TColStd/TColStd_Array1OfReal.h"
#include "../TColStd/TColStd_Array1OfInteger.h"
#include "../gp/gp_Lin.h"
#include "../Blend/Blend_Point.h"
#include "../TColgp/TColgp_Array1OfPnt.h"
#include "../TColgp/TColgp_Array1OfVec.h"
#include "../TColgp/TColgp_Array1OfPnt2d.h"
#include "../TColgp/TColgp_Array1OfVec2d.h"


using namespace OCNaroWrappers;

OCBlendFunc_Chamfer::OCBlendFunc_Chamfer(BlendFunc_Chamfer* nativeHandle) : OCBlend_Function((OCDummy^)nullptr)

{
  this->nativeHandle = nativeHandle;
}

OCBlendFunc_Chamfer::OCBlendFunc_Chamfer(OCNaroWrappers::OCAdaptor3d_HSurface^ S1, OCNaroWrappers::OCAdaptor3d_HSurface^ S2, OCNaroWrappers::OCAdaptor3d_HCurve^ CG) : OCBlend_Function((OCDummy^)nullptr)

{
  nativeHandle = new BlendFunc_Chamfer(*((Handle_Adaptor3d_HSurface*)S1->Handle), *((Handle_Adaptor3d_HSurface*)S2->Handle), *((Handle_Adaptor3d_HCurve*)CG->Handle));
}

 Standard_Integer OCBlendFunc_Chamfer::NbEquations()
{
  return ((BlendFunc_Chamfer*)nativeHandle)->NbEquations();
}

 System::Boolean OCBlendFunc_Chamfer::Value(OCNaroWrappers::OCmath_Vector^ X, OCNaroWrappers::OCmath_Vector^ F)
{
  return OCConverter::StandardBooleanToBoolean(((BlendFunc_Chamfer*)nativeHandle)->Value(*((math_Vector*)X->Handle), *((math_Vector*)F->Handle)));
}

 System::Boolean OCBlendFunc_Chamfer::Derivatives(OCNaroWrappers::OCmath_Vector^ X, OCNaroWrappers::OCmath_Matrix^ D)
{
  return OCConverter::StandardBooleanToBoolean(((BlendFunc_Chamfer*)nativeHandle)->Derivatives(*((math_Vector*)X->Handle), *((math_Matrix*)D->Handle)));
}

 System::Boolean OCBlendFunc_Chamfer::Values(OCNaroWrappers::OCmath_Vector^ X, OCNaroWrappers::OCmath_Vector^ F, OCNaroWrappers::OCmath_Matrix^ D)
{
  return OCConverter::StandardBooleanToBoolean(((BlendFunc_Chamfer*)nativeHandle)->Values(*((math_Vector*)X->Handle), *((math_Vector*)F->Handle), *((math_Matrix*)D->Handle)));
}

 void OCBlendFunc_Chamfer::Set(Standard_Real Param)
{
  ((BlendFunc_Chamfer*)nativeHandle)->Set(Param);
}

 void OCBlendFunc_Chamfer::Set(Standard_Real First, Standard_Real Last)
{
  ((BlendFunc_Chamfer*)nativeHandle)->Set(First, Last);
}

 void OCBlendFunc_Chamfer::GetTolerance(OCNaroWrappers::OCmath_Vector^ Tolerance, Standard_Real Tol)
{
  ((BlendFunc_Chamfer*)nativeHandle)->GetTolerance(*((math_Vector*)Tolerance->Handle), Tol);
}

 void OCBlendFunc_Chamfer::GetBounds(OCNaroWrappers::OCmath_Vector^ InfBound, OCNaroWrappers::OCmath_Vector^ SupBound)
{
  ((BlendFunc_Chamfer*)nativeHandle)->GetBounds(*((math_Vector*)InfBound->Handle), *((math_Vector*)SupBound->Handle));
}

 System::Boolean OCBlendFunc_Chamfer::IsSolution(OCNaroWrappers::OCmath_Vector^ Sol, Standard_Real Tol)
{
  return OCConverter::StandardBooleanToBoolean(((BlendFunc_Chamfer*)nativeHandle)->IsSolution(*((math_Vector*)Sol->Handle), Tol));
}

 Standard_Real OCBlendFunc_Chamfer::GetMinimalDistance()
{
  return ((BlendFunc_Chamfer*)nativeHandle)->GetMinimalDistance();
}

OCgp_Pnt^ OCBlendFunc_Chamfer::PointOnS1()
{
  gp_Pnt* tmp = new gp_Pnt();
  *tmp = ((BlendFunc_Chamfer*)nativeHandle)->PointOnS1();
  return gcnew OCgp_Pnt(tmp);
}

OCgp_Pnt^ OCBlendFunc_Chamfer::PointOnS2()
{
  gp_Pnt* tmp = new gp_Pnt();
  *tmp = ((BlendFunc_Chamfer*)nativeHandle)->PointOnS2();
  return gcnew OCgp_Pnt(tmp);
}

 System::Boolean OCBlendFunc_Chamfer::IsTangencyPoint()
{
  return OCConverter::StandardBooleanToBoolean(((BlendFunc_Chamfer*)nativeHandle)->IsTangencyPoint());
}

OCgp_Vec^ OCBlendFunc_Chamfer::TangentOnS1()
{
  gp_Vec* tmp = new gp_Vec();
  *tmp = ((BlendFunc_Chamfer*)nativeHandle)->TangentOnS1();
  return gcnew OCgp_Vec(tmp);
}

OCgp_Vec2d^ OCBlendFunc_Chamfer::Tangent2dOnS1()
{
  gp_Vec2d* tmp = new gp_Vec2d();
  *tmp = ((BlendFunc_Chamfer*)nativeHandle)->Tangent2dOnS1();
  return gcnew OCgp_Vec2d(tmp);
}

OCgp_Vec^ OCBlendFunc_Chamfer::TangentOnS2()
{
  gp_Vec* tmp = new gp_Vec();
  *tmp = ((BlendFunc_Chamfer*)nativeHandle)->TangentOnS2();
  return gcnew OCgp_Vec(tmp);
}

OCgp_Vec2d^ OCBlendFunc_Chamfer::Tangent2dOnS2()
{
  gp_Vec2d* tmp = new gp_Vec2d();
  *tmp = ((BlendFunc_Chamfer*)nativeHandle)->Tangent2dOnS2();
  return gcnew OCgp_Vec2d(tmp);
}

 void OCBlendFunc_Chamfer::Tangent(Standard_Real U1, Standard_Real V1, Standard_Real U2, Standard_Real V2, OCNaroWrappers::OCgp_Vec^ TgFirst, OCNaroWrappers::OCgp_Vec^ TgLast, OCNaroWrappers::OCgp_Vec^ NormFirst, OCNaroWrappers::OCgp_Vec^ NormLast)
{
  ((BlendFunc_Chamfer*)nativeHandle)->Tangent(U1, V1, U2, V2, *((gp_Vec*)TgFirst->Handle), *((gp_Vec*)TgLast->Handle), *((gp_Vec*)NormFirst->Handle), *((gp_Vec*)NormLast->Handle));
}

 void OCBlendFunc_Chamfer::Set(Standard_Real Dist1, Standard_Real Dist2, Standard_Integer Choix)
{
  ((BlendFunc_Chamfer*)nativeHandle)->Set(Dist1, Dist2, Choix);
}

 System::Boolean OCBlendFunc_Chamfer::IsRational()
{
  return OCConverter::StandardBooleanToBoolean(((BlendFunc_Chamfer*)nativeHandle)->IsRational());
}

 Standard_Real OCBlendFunc_Chamfer::GetSectionSize()
{
  return ((BlendFunc_Chamfer*)nativeHandle)->GetSectionSize();
}

 void OCBlendFunc_Chamfer::GetMinimalWeight(OCNaroWrappers::OCTColStd_Array1OfReal^ Weigths)
{
  ((BlendFunc_Chamfer*)nativeHandle)->GetMinimalWeight(*((TColStd_Array1OfReal*)Weigths->Handle));
}

 Standard_Integer OCBlendFunc_Chamfer::NbIntervals(OCGeomAbs_Shape S)
{
  return ((BlendFunc_Chamfer*)nativeHandle)->NbIntervals((GeomAbs_Shape)S);
}

 void OCBlendFunc_Chamfer::Intervals(OCNaroWrappers::OCTColStd_Array1OfReal^ T, OCGeomAbs_Shape S)
{
  ((BlendFunc_Chamfer*)nativeHandle)->Intervals(*((TColStd_Array1OfReal*)T->Handle), (GeomAbs_Shape)S);
}

 void OCBlendFunc_Chamfer::GetShape(Standard_Integer& NbPoles, Standard_Integer& NbKnots, Standard_Integer& Degree, Standard_Integer& NbPoles2d)
{
  ((BlendFunc_Chamfer*)nativeHandle)->GetShape(NbPoles, NbKnots, Degree, NbPoles2d);
}

 void OCBlendFunc_Chamfer::GetTolerance(Standard_Real BoundTol, Standard_Real SurfTol, Standard_Real AngleTol, OCNaroWrappers::OCmath_Vector^ Tol3d, OCNaroWrappers::OCmath_Vector^ Tol1D)
{
  ((BlendFunc_Chamfer*)nativeHandle)->GetTolerance(BoundTol, SurfTol, AngleTol, *((math_Vector*)Tol3d->Handle), *((math_Vector*)Tol1D->Handle));
}

 void OCBlendFunc_Chamfer::Knots(OCNaroWrappers::OCTColStd_Array1OfReal^ TKnots)
{
  ((BlendFunc_Chamfer*)nativeHandle)->Knots(*((TColStd_Array1OfReal*)TKnots->Handle));
}

 void OCBlendFunc_Chamfer::Mults(OCNaroWrappers::OCTColStd_Array1OfInteger^ TMults)
{
  ((BlendFunc_Chamfer*)nativeHandle)->Mults(*((TColStd_Array1OfInteger*)TMults->Handle));
}

 void OCBlendFunc_Chamfer::Section(Standard_Real Param, Standard_Real U1, Standard_Real V1, Standard_Real U2, Standard_Real V2, Standard_Real& Pdeb, Standard_Real& Pfin, OCNaroWrappers::OCgp_Lin^ C)
{
  ((BlendFunc_Chamfer*)nativeHandle)->Section(Param, U1, V1, U2, V2, Pdeb, Pfin, *((gp_Lin*)C->Handle));
}

 System::Boolean OCBlendFunc_Chamfer::Section(OCNaroWrappers::OCBlend_Point^ P, OCNaroWrappers::OCTColgp_Array1OfPnt^ Poles, OCNaroWrappers::OCTColgp_Array1OfVec^ DPoles, OCNaroWrappers::OCTColgp_Array1OfVec^ D2Poles, OCNaroWrappers::OCTColgp_Array1OfPnt2d^ Poles2d, OCNaroWrappers::OCTColgp_Array1OfVec2d^ DPoles2d, OCNaroWrappers::OCTColgp_Array1OfVec2d^ D2Poles2d, OCNaroWrappers::OCTColStd_Array1OfReal^ Weigths, OCNaroWrappers::OCTColStd_Array1OfReal^ DWeigths, OCNaroWrappers::OCTColStd_Array1OfReal^ D2Weigths)
{
  return OCConverter::StandardBooleanToBoolean(((BlendFunc_Chamfer*)nativeHandle)->Section(*((Blend_Point*)P->Handle), *((TColgp_Array1OfPnt*)Poles->Handle), *((TColgp_Array1OfVec*)DPoles->Handle), *((TColgp_Array1OfVec*)D2Poles->Handle), *((TColgp_Array1OfPnt2d*)Poles2d->Handle), *((TColgp_Array1OfVec2d*)DPoles2d->Handle), *((TColgp_Array1OfVec2d*)D2Poles2d->Handle), *((TColStd_Array1OfReal*)Weigths->Handle), *((TColStd_Array1OfReal*)DWeigths->Handle), *((TColStd_Array1OfReal*)D2Weigths->Handle)));
}

 System::Boolean OCBlendFunc_Chamfer::Section(OCNaroWrappers::OCBlend_Point^ P, OCNaroWrappers::OCTColgp_Array1OfPnt^ Poles, OCNaroWrappers::OCTColgp_Array1OfVec^ DPoles, OCNaroWrappers::OCTColgp_Array1OfPnt2d^ Poles2d, OCNaroWrappers::OCTColgp_Array1OfVec2d^ DPoles2d, OCNaroWrappers::OCTColStd_Array1OfReal^ Weigths, OCNaroWrappers::OCTColStd_Array1OfReal^ DWeigths)
{
  return OCConverter::StandardBooleanToBoolean(((BlendFunc_Chamfer*)nativeHandle)->Section(*((Blend_Point*)P->Handle), *((TColgp_Array1OfPnt*)Poles->Handle), *((TColgp_Array1OfVec*)DPoles->Handle), *((TColgp_Array1OfPnt2d*)Poles2d->Handle), *((TColgp_Array1OfVec2d*)DPoles2d->Handle), *((TColStd_Array1OfReal*)Weigths->Handle), *((TColStd_Array1OfReal*)DWeigths->Handle)));
}

 void OCBlendFunc_Chamfer::Section(OCNaroWrappers::OCBlend_Point^ P, OCNaroWrappers::OCTColgp_Array1OfPnt^ Poles, OCNaroWrappers::OCTColgp_Array1OfPnt2d^ Poles2d, OCNaroWrappers::OCTColStd_Array1OfReal^ Weigths)
{
  ((BlendFunc_Chamfer*)nativeHandle)->Section(*((Blend_Point*)P->Handle), *((TColgp_Array1OfPnt*)Poles->Handle), *((TColgp_Array1OfPnt2d*)Poles2d->Handle), *((TColStd_Array1OfReal*)Weigths->Handle));
}

 void OCBlendFunc_Chamfer::Resolution(Standard_Integer IC2d, Standard_Real Tol, Standard_Real& TolU, Standard_Real& TolV)
{
  ((BlendFunc_Chamfer*)nativeHandle)->Resolution(IC2d, Tol, TolU, TolV);
}


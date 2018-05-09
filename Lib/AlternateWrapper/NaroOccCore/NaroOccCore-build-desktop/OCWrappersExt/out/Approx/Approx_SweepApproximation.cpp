// File generated by CPPExt (CPP file)
//

#include "Approx_SweepApproximation.h"
#include "../Converter.h"
#include "Approx_SweepFunction.h"
#include "../TColgp/TColgp_HArray2OfPnt.h"
#include "../TColStd/TColStd_HArray2OfReal.h"
#include "../TColStd/TColStd_HArray1OfReal.h"
#include "../TColStd/TColStd_HArray1OfInteger.h"
#include "Approx_HArray1OfGTrsf2d.h"
#include "../TColgp/TColgp_HArray1OfPnt.h"
#include "../TColgp/TColgp_HArray1OfPnt2d.h"
#include "../TColgp/TColgp_HArray1OfVec.h"
#include "../TColgp/TColgp_HArray1OfVec2d.h"
#include "../AdvApprox/AdvApprox_Cutting.h"
#include "../TColgp/TColgp_Array2OfPnt.h"
#include "../TColStd/TColStd_Array2OfReal.h"
#include "../TColStd/TColStd_Array1OfReal.h"
#include "../TColStd/TColStd_Array1OfInteger.h"
#include "../TColgp/TColgp_Array1OfPnt2d.h"


using namespace OCNaroWrappers;

OCApprox_SweepApproximation::OCApprox_SweepApproximation(Approx_SweepApproximation* nativeHandle) 
{
  this->nativeHandle = nativeHandle;
}

OCApprox_SweepApproximation::OCApprox_SweepApproximation(OCNaroWrappers::OCApprox_SweepFunction^ Func) 
{
  nativeHandle = new Approx_SweepApproximation(*((Handle_Approx_SweepFunction*)Func->Handle));
}

 void OCApprox_SweepApproximation::Perform(Standard_Real First, Standard_Real Last, Standard_Real Tol3d, Standard_Real BoundTol, Standard_Real Tol2d, Standard_Real TolAngular, OCGeomAbs_Shape Continuity, Standard_Integer Degmax, Standard_Integer Segmax)
{
  ((Approx_SweepApproximation*)nativeHandle)->Perform(First, Last, Tol3d, BoundTol, Tol2d, TolAngular, (GeomAbs_Shape)Continuity, Degmax, Segmax);
}

 Standard_Integer OCApprox_SweepApproximation::Eval(Standard_Real Parameter, Standard_Integer DerivativeRequest, Standard_Real First, Standard_Real Last, Standard_Real& Result)
{
  return ((Approx_SweepApproximation*)nativeHandle)->Eval(Parameter, DerivativeRequest, First, Last, Result);
}

 System::Boolean OCApprox_SweepApproximation::IsDone()
{
  return OCConverter::StandardBooleanToBoolean(((Approx_SweepApproximation*)nativeHandle)->IsDone());
}

 void OCApprox_SweepApproximation::SurfShape(Standard_Integer& UDegree, Standard_Integer& VDegree, Standard_Integer& NbUPoles, Standard_Integer& NbVPoles, Standard_Integer& NbUKnots, Standard_Integer& NbVKnots)
{
  ((Approx_SweepApproximation*)nativeHandle)->SurfShape(UDegree, VDegree, NbUPoles, NbVPoles, NbUKnots, NbVKnots);
}

 void OCApprox_SweepApproximation::Surface(OCNaroWrappers::OCTColgp_Array2OfPnt^ TPoles, OCNaroWrappers::OCTColStd_Array2OfReal^ TWeights, OCNaroWrappers::OCTColStd_Array1OfReal^ TUKnots, OCNaroWrappers::OCTColStd_Array1OfReal^ TVKnots, OCNaroWrappers::OCTColStd_Array1OfInteger^ TUMults, OCNaroWrappers::OCTColStd_Array1OfInteger^ TVMults)
{
  ((Approx_SweepApproximation*)nativeHandle)->Surface(*((TColgp_Array2OfPnt*)TPoles->Handle), *((TColStd_Array2OfReal*)TWeights->Handle), *((TColStd_Array1OfReal*)TUKnots->Handle), *((TColStd_Array1OfReal*)TVKnots->Handle), *((TColStd_Array1OfInteger*)TUMults->Handle), *((TColStd_Array1OfInteger*)TVMults->Handle));
}

 Standard_Integer OCApprox_SweepApproximation::UDegree()
{
  return ((Approx_SweepApproximation*)nativeHandle)->UDegree();
}

 Standard_Integer OCApprox_SweepApproximation::VDegree()
{
  return ((Approx_SweepApproximation*)nativeHandle)->VDegree();
}

OCTColgp_Array2OfPnt^ OCApprox_SweepApproximation::SurfPoles()
{
  TColgp_Array2OfPnt* tmp = new TColgp_Array2OfPnt(0, 0, 0, 0);
  *tmp = ((Approx_SweepApproximation*)nativeHandle)->SurfPoles();
  return gcnew OCTColgp_Array2OfPnt(tmp);
}

OCTColStd_Array2OfReal^ OCApprox_SweepApproximation::SurfWeights()
{
  TColStd_Array2OfReal* tmp = new TColStd_Array2OfReal(0, 0, 0, 0);
  *tmp = ((Approx_SweepApproximation*)nativeHandle)->SurfWeights();
  return gcnew OCTColStd_Array2OfReal(tmp);
}

OCTColStd_Array1OfReal^ OCApprox_SweepApproximation::SurfUKnots()
{
  TColStd_Array1OfReal* tmp = new TColStd_Array1OfReal(0, 0);
  *tmp = ((Approx_SweepApproximation*)nativeHandle)->SurfUKnots();
  return gcnew OCTColStd_Array1OfReal(tmp);
}

OCTColStd_Array1OfReal^ OCApprox_SweepApproximation::SurfVKnots()
{
  TColStd_Array1OfReal* tmp = new TColStd_Array1OfReal(0, 0);
  *tmp = ((Approx_SweepApproximation*)nativeHandle)->SurfVKnots();
  return gcnew OCTColStd_Array1OfReal(tmp);
}

OCTColStd_Array1OfInteger^ OCApprox_SweepApproximation::SurfUMults()
{
  TColStd_Array1OfInteger* tmp = new TColStd_Array1OfInteger(0, 0);
  *tmp = ((Approx_SweepApproximation*)nativeHandle)->SurfUMults();
  return gcnew OCTColStd_Array1OfInteger(tmp);
}

OCTColStd_Array1OfInteger^ OCApprox_SweepApproximation::SurfVMults()
{
  TColStd_Array1OfInteger* tmp = new TColStd_Array1OfInteger(0, 0);
  *tmp = ((Approx_SweepApproximation*)nativeHandle)->SurfVMults();
  return gcnew OCTColStd_Array1OfInteger(tmp);
}

 Standard_Real OCApprox_SweepApproximation::MaxErrorOnSurf()
{
  return ((Approx_SweepApproximation*)nativeHandle)->MaxErrorOnSurf();
}

 Standard_Real OCApprox_SweepApproximation::AverageErrorOnSurf()
{
  return ((Approx_SweepApproximation*)nativeHandle)->AverageErrorOnSurf();
}

 Standard_Integer OCApprox_SweepApproximation::NbCurves2d()
{
  return ((Approx_SweepApproximation*)nativeHandle)->NbCurves2d();
}

 void OCApprox_SweepApproximation::Curves2dShape(Standard_Integer& Degree, Standard_Integer& NbPoles, Standard_Integer& NbKnots)
{
  ((Approx_SweepApproximation*)nativeHandle)->Curves2dShape(Degree, NbPoles, NbKnots);
}

 void OCApprox_SweepApproximation::Curve2d(Standard_Integer Index, OCNaroWrappers::OCTColgp_Array1OfPnt2d^ TPoles, OCNaroWrappers::OCTColStd_Array1OfReal^ TKnots, OCNaroWrappers::OCTColStd_Array1OfInteger^ TMults)
{
  ((Approx_SweepApproximation*)nativeHandle)->Curve2d(Index, *((TColgp_Array1OfPnt2d*)TPoles->Handle), *((TColStd_Array1OfReal*)TKnots->Handle), *((TColStd_Array1OfInteger*)TMults->Handle));
}

 Standard_Integer OCApprox_SweepApproximation::Curves2dDegree()
{
  return ((Approx_SweepApproximation*)nativeHandle)->Curves2dDegree();
}

OCTColgp_Array1OfPnt2d^ OCApprox_SweepApproximation::Curve2dPoles(Standard_Integer Index)
{
  TColgp_Array1OfPnt2d* tmp = new TColgp_Array1OfPnt2d(0, 0);
  *tmp = ((Approx_SweepApproximation*)nativeHandle)->Curve2dPoles(Index);
  return gcnew OCTColgp_Array1OfPnt2d(tmp);
}

OCTColStd_Array1OfReal^ OCApprox_SweepApproximation::Curves2dKnots()
{
  TColStd_Array1OfReal* tmp = new TColStd_Array1OfReal(0, 0);
  *tmp = ((Approx_SweepApproximation*)nativeHandle)->Curves2dKnots();
  return gcnew OCTColStd_Array1OfReal(tmp);
}

OCTColStd_Array1OfInteger^ OCApprox_SweepApproximation::Curves2dMults()
{
  TColStd_Array1OfInteger* tmp = new TColStd_Array1OfInteger(0, 0);
  *tmp = ((Approx_SweepApproximation*)nativeHandle)->Curves2dMults();
  return gcnew OCTColStd_Array1OfInteger(tmp);
}

 Standard_Real OCApprox_SweepApproximation::Max2dError(Standard_Integer Index)
{
  return ((Approx_SweepApproximation*)nativeHandle)->Max2dError(Index);
}

 Standard_Real OCApprox_SweepApproximation::Average2dError(Standard_Integer Index)
{
  return ((Approx_SweepApproximation*)nativeHandle)->Average2dError(Index);
}

 Standard_Real OCApprox_SweepApproximation::TolCurveOnSurf(Standard_Integer Index)
{
  return ((Approx_SweepApproximation*)nativeHandle)->TolCurveOnSurf(Index);
}

 void OCApprox_SweepApproximation::Dump(Standard_OStream& o)
{
  ((Approx_SweepApproximation*)nativeHandle)->Dump(o);
}



// File generated by CPPExt (CPP file)
//

#include "Convert_CompBezierCurves2dToBSplineCurve2d.h"
#include "../Converter.h"
#include "../TColgp/TColgp_Array1OfPnt2d.h"
#include "../TColStd/TColStd_Array1OfReal.h"
#include "../TColStd/TColStd_Array1OfInteger.h"


using namespace OCNaroWrappers;

OCConvert_CompBezierCurves2dToBSplineCurve2d::OCConvert_CompBezierCurves2dToBSplineCurve2d(Convert_CompBezierCurves2dToBSplineCurve2d* nativeHandle) 
{
  this->nativeHandle = nativeHandle;
}

OCConvert_CompBezierCurves2dToBSplineCurve2d::OCConvert_CompBezierCurves2dToBSplineCurve2d(Standard_Real AngularTolerance) 
{
  nativeHandle = new Convert_CompBezierCurves2dToBSplineCurve2d(AngularTolerance);
}

 void OCConvert_CompBezierCurves2dToBSplineCurve2d::AddCurve(OCNaroWrappers::OCTColgp_Array1OfPnt2d^ Poles)
{
  ((Convert_CompBezierCurves2dToBSplineCurve2d*)nativeHandle)->AddCurve(*((TColgp_Array1OfPnt2d*)Poles->Handle));
}

 void OCConvert_CompBezierCurves2dToBSplineCurve2d::Perform()
{
  ((Convert_CompBezierCurves2dToBSplineCurve2d*)nativeHandle)->Perform();
}

 Standard_Integer OCConvert_CompBezierCurves2dToBSplineCurve2d::Degree()
{
  return ((Convert_CompBezierCurves2dToBSplineCurve2d*)nativeHandle)->Degree();
}

 Standard_Integer OCConvert_CompBezierCurves2dToBSplineCurve2d::NbPoles()
{
  return ((Convert_CompBezierCurves2dToBSplineCurve2d*)nativeHandle)->NbPoles();
}

 void OCConvert_CompBezierCurves2dToBSplineCurve2d::Poles(OCNaroWrappers::OCTColgp_Array1OfPnt2d^ Poles)
{
  ((Convert_CompBezierCurves2dToBSplineCurve2d*)nativeHandle)->Poles(*((TColgp_Array1OfPnt2d*)Poles->Handle));
}

 Standard_Integer OCConvert_CompBezierCurves2dToBSplineCurve2d::NbKnots()
{
  return ((Convert_CompBezierCurves2dToBSplineCurve2d*)nativeHandle)->NbKnots();
}

 void OCConvert_CompBezierCurves2dToBSplineCurve2d::KnotsAndMults(OCNaroWrappers::OCTColStd_Array1OfReal^ Knots, OCNaroWrappers::OCTColStd_Array1OfInteger^ Mults)
{
  ((Convert_CompBezierCurves2dToBSplineCurve2d*)nativeHandle)->KnotsAndMults(*((TColStd_Array1OfReal*)Knots->Handle), *((TColStd_Array1OfInteger*)Mults->Handle));
}



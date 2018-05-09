// File generated by CPPExt (CPP file)
//

#include "IntCurveSurface_ThePolygonOfHInter.h"
#include "../Converter.h"
#include "../TColStd/TColStd_HArray1OfReal.h"
#include "../Adaptor3d/Adaptor3d_HCurve.h"
#include "IntCurveSurface_TheHCurveTool.h"
#include "../TColStd/TColStd_Array1OfReal.h"
#include "../Bnd/Bnd_Box.h"
#include "../gp/gp_Pnt.h"


using namespace OCNaroWrappers;

OCIntCurveSurface_ThePolygonOfHInter::OCIntCurveSurface_ThePolygonOfHInter(IntCurveSurface_ThePolygonOfHInter* nativeHandle) 
{
  this->nativeHandle = nativeHandle;
}

OCIntCurveSurface_ThePolygonOfHInter::OCIntCurveSurface_ThePolygonOfHInter(OCNaroWrappers::OCAdaptor3d_HCurve^ Curve, Standard_Integer NbPnt) 
{
  nativeHandle = new IntCurveSurface_ThePolygonOfHInter(*((Handle_Adaptor3d_HCurve*)Curve->Handle), NbPnt);
}

OCIntCurveSurface_ThePolygonOfHInter::OCIntCurveSurface_ThePolygonOfHInter(OCNaroWrappers::OCAdaptor3d_HCurve^ Curve, Standard_Real U1, Standard_Real U2, Standard_Integer NbPnt) 
{
  nativeHandle = new IntCurveSurface_ThePolygonOfHInter(*((Handle_Adaptor3d_HCurve*)Curve->Handle), U1, U2, NbPnt);
}

OCIntCurveSurface_ThePolygonOfHInter::OCIntCurveSurface_ThePolygonOfHInter(OCNaroWrappers::OCAdaptor3d_HCurve^ Curve, OCNaroWrappers::OCTColStd_Array1OfReal^ Upars) 
{
  nativeHandle = new IntCurveSurface_ThePolygonOfHInter(*((Handle_Adaptor3d_HCurve*)Curve->Handle), *((TColStd_Array1OfReal*)Upars->Handle));
}

OCBnd_Box^ OCIntCurveSurface_ThePolygonOfHInter::Bounding()
{
  Bnd_Box* tmp = new Bnd_Box();
  *tmp = ((IntCurveSurface_ThePolygonOfHInter*)nativeHandle)->Bounding();
  return gcnew OCBnd_Box(tmp);
}

 Standard_Real OCIntCurveSurface_ThePolygonOfHInter::DeflectionOverEstimation()
{
  return ((IntCurveSurface_ThePolygonOfHInter*)nativeHandle)->DeflectionOverEstimation();
}

 void OCIntCurveSurface_ThePolygonOfHInter::SetDeflectionOverEstimation(Standard_Real x)
{
  ((IntCurveSurface_ThePolygonOfHInter*)nativeHandle)->SetDeflectionOverEstimation(x);
}

 void OCIntCurveSurface_ThePolygonOfHInter::Closed(System::Boolean clos)
{
  ((IntCurveSurface_ThePolygonOfHInter*)nativeHandle)->Closed(OCConverter::BooleanToStandardBoolean(clos));
}

 System::Boolean OCIntCurveSurface_ThePolygonOfHInter::Closed()
{
  return OCConverter::StandardBooleanToBoolean(((IntCurveSurface_ThePolygonOfHInter*)nativeHandle)->Closed());
}

 Standard_Integer OCIntCurveSurface_ThePolygonOfHInter::NbSegments()
{
  return ((IntCurveSurface_ThePolygonOfHInter*)nativeHandle)->NbSegments();
}

OCgp_Pnt^ OCIntCurveSurface_ThePolygonOfHInter::BeginOfSeg(Standard_Integer Index)
{
  gp_Pnt* tmp = new gp_Pnt();
  *tmp = ((IntCurveSurface_ThePolygonOfHInter*)nativeHandle)->BeginOfSeg(Index);
  return gcnew OCgp_Pnt(tmp);
}

OCgp_Pnt^ OCIntCurveSurface_ThePolygonOfHInter::EndOfSeg(Standard_Integer Index)
{
  gp_Pnt* tmp = new gp_Pnt();
  *tmp = ((IntCurveSurface_ThePolygonOfHInter*)nativeHandle)->EndOfSeg(Index);
  return gcnew OCgp_Pnt(tmp);
}

 Standard_Real OCIntCurveSurface_ThePolygonOfHInter::InfParameter()
{
  return ((IntCurveSurface_ThePolygonOfHInter*)nativeHandle)->InfParameter();
}

 Standard_Real OCIntCurveSurface_ThePolygonOfHInter::SupParameter()
{
  return ((IntCurveSurface_ThePolygonOfHInter*)nativeHandle)->SupParameter();
}

 Standard_Real OCIntCurveSurface_ThePolygonOfHInter::ApproxParamOnCurve(Standard_Integer Index, Standard_Real ParamOnLine)
{
  return ((IntCurveSurface_ThePolygonOfHInter*)nativeHandle)->ApproxParamOnCurve(Index, ParamOnLine);
}

 void OCIntCurveSurface_ThePolygonOfHInter::Dump()
{
  ((IntCurveSurface_ThePolygonOfHInter*)nativeHandle)->Dump();
}



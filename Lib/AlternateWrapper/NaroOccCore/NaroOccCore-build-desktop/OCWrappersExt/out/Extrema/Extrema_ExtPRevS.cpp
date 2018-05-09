// File generated by CPPExt (CPP file)
//

#include "Extrema_ExtPRevS.h"
#include "../Converter.h"
#include "../gp/gp_Pnt.h"
#include "../Adaptor3d/Adaptor3d_SurfaceOfRevolution.h"
#include "Extrema_POnSurf.h"


using namespace OCNaroWrappers;

OCExtrema_ExtPRevS::OCExtrema_ExtPRevS(Extrema_ExtPRevS* nativeHandle) 
{
  this->nativeHandle = nativeHandle;
}

OCExtrema_ExtPRevS::OCExtrema_ExtPRevS() 
{
  nativeHandle = new Extrema_ExtPRevS();
}

OCExtrema_ExtPRevS::OCExtrema_ExtPRevS(OCNaroWrappers::OCgp_Pnt^ P, OCNaroWrappers::OCAdaptor3d_SurfaceOfRevolution^ S, Standard_Real Umin, Standard_Real Usup, Standard_Real Vmin, Standard_Real Vsup, Standard_Real TolU, Standard_Real TolV) 
{
  nativeHandle = new Extrema_ExtPRevS(*((gp_Pnt*)P->Handle), *((Adaptor3d_SurfaceOfRevolution*)S->Handle), Umin, Usup, Vmin, Vsup, TolU, TolV);
}

OCExtrema_ExtPRevS::OCExtrema_ExtPRevS(OCNaroWrappers::OCgp_Pnt^ P, OCNaroWrappers::OCAdaptor3d_SurfaceOfRevolution^ S, Standard_Real TolU, Standard_Real TolV) 
{
  nativeHandle = new Extrema_ExtPRevS(*((gp_Pnt*)P->Handle), *((Adaptor3d_SurfaceOfRevolution*)S->Handle), TolU, TolV);
}

 void OCExtrema_ExtPRevS::Initialize(OCNaroWrappers::OCAdaptor3d_SurfaceOfRevolution^ S, Standard_Real Umin, Standard_Real Usup, Standard_Real Vmin, Standard_Real Vsup, Standard_Real TolU, Standard_Real TolV)
{
  ((Extrema_ExtPRevS*)nativeHandle)->Initialize(*((Adaptor3d_SurfaceOfRevolution*)S->Handle), Umin, Usup, Vmin, Vsup, TolU, TolV);
}

 void OCExtrema_ExtPRevS::Perform(OCNaroWrappers::OCgp_Pnt^ P)
{
  ((Extrema_ExtPRevS*)nativeHandle)->Perform(*((gp_Pnt*)P->Handle));
}

 System::Boolean OCExtrema_ExtPRevS::IsDone()
{
  return OCConverter::StandardBooleanToBoolean(((Extrema_ExtPRevS*)nativeHandle)->IsDone());
}

 Standard_Integer OCExtrema_ExtPRevS::NbExt()
{
  return ((Extrema_ExtPRevS*)nativeHandle)->NbExt();
}

 Standard_Real OCExtrema_ExtPRevS::SquareDistance(Standard_Integer N)
{
  return ((Extrema_ExtPRevS*)nativeHandle)->SquareDistance(N);
}

OCExtrema_POnSurf^ OCExtrema_ExtPRevS::Point(Standard_Integer N)
{
  Extrema_POnSurf* tmp = new Extrema_POnSurf();
  *tmp = ((Extrema_ExtPRevS*)nativeHandle)->Point(N);
  return gcnew OCExtrema_POnSurf(tmp);
}



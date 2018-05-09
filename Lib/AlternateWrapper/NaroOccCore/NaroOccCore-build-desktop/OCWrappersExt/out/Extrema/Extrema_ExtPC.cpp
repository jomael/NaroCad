// File generated by CPPExt (CPP file)
//

#include "Extrema_ExtPC.h"
#include "../Converter.h"
#include "../Adaptor3d/Adaptor3d_Curve.h"
#include "Extrema_CurveTool.h"
#include "Extrema_ExtPElC.h"
#include "../gp/gp_Pnt.h"
#include "../gp/gp_Vec.h"
#include "Extrema_POnCurv.h"
#include "Extrema_SequenceOfPOnCurv.h"
#include "Extrema_EPCOfExtPC.h"
#include "Extrema_PCFOfEPCOfExtPC.h"


using namespace OCNaroWrappers;

OCExtrema_ExtPC::OCExtrema_ExtPC(Extrema_ExtPC* nativeHandle) 
{
  this->nativeHandle = nativeHandle;
}

OCExtrema_ExtPC::OCExtrema_ExtPC() 
{
  nativeHandle = new Extrema_ExtPC();
}

OCExtrema_ExtPC::OCExtrema_ExtPC(OCNaroWrappers::OCgp_Pnt^ P, OCNaroWrappers::OCAdaptor3d_Curve^ C, Standard_Real Uinf, Standard_Real Usup, Standard_Real TolF) 
{
  nativeHandle = new Extrema_ExtPC(*((gp_Pnt*)P->Handle), *((Adaptor3d_Curve*)C->Handle), Uinf, Usup, TolF);
}

OCExtrema_ExtPC::OCExtrema_ExtPC(OCNaroWrappers::OCgp_Pnt^ P, OCNaroWrappers::OCAdaptor3d_Curve^ C, Standard_Real TolF) 
{
  nativeHandle = new Extrema_ExtPC(*((gp_Pnt*)P->Handle), *((Adaptor3d_Curve*)C->Handle), TolF);
}

 void OCExtrema_ExtPC::Initialize(OCNaroWrappers::OCAdaptor3d_Curve^ C, Standard_Real Uinf, Standard_Real Usup, Standard_Real TolF)
{
  ((Extrema_ExtPC*)nativeHandle)->Initialize(*((Adaptor3d_Curve*)C->Handle), Uinf, Usup, TolF);
}

 void OCExtrema_ExtPC::Perform(OCNaroWrappers::OCgp_Pnt^ P)
{
  ((Extrema_ExtPC*)nativeHandle)->Perform(*((gp_Pnt*)P->Handle));
}

 System::Boolean OCExtrema_ExtPC::IsDone()
{
  return OCConverter::StandardBooleanToBoolean(((Extrema_ExtPC*)nativeHandle)->IsDone());
}

 Standard_Real OCExtrema_ExtPC::SquareDistance(Standard_Integer N)
{
  return ((Extrema_ExtPC*)nativeHandle)->SquareDistance(N);
}

 Standard_Integer OCExtrema_ExtPC::NbExt()
{
  return ((Extrema_ExtPC*)nativeHandle)->NbExt();
}

 System::Boolean OCExtrema_ExtPC::IsMin(Standard_Integer N)
{
  return OCConverter::StandardBooleanToBoolean(((Extrema_ExtPC*)nativeHandle)->IsMin(N));
}

OCExtrema_POnCurv^ OCExtrema_ExtPC::Point(Standard_Integer N)
{
  Extrema_POnCurv* tmp = new Extrema_POnCurv();
  *tmp = ((Extrema_ExtPC*)nativeHandle)->Point(N);
  return gcnew OCExtrema_POnCurv(tmp);
}

 void OCExtrema_ExtPC::TrimmedSquareDistances(Standard_Real& dist1, Standard_Real& dist2, OCNaroWrappers::OCgp_Pnt^ P1, OCNaroWrappers::OCgp_Pnt^ P2)
{
  ((Extrema_ExtPC*)nativeHandle)->TrimmedSquareDistances(dist1, dist2, *((gp_Pnt*)P1->Handle), *((gp_Pnt*)P2->Handle));
}



// File generated by CPPExt (CPP file)
//

#include "Extrema_GenLocateExtSS.h"
#include "../Converter.h"
#include "../Adaptor3d/Adaptor3d_Surface.h"
#include "Extrema_POnSurf.h"


using namespace OCNaroWrappers;

OCExtrema_GenLocateExtSS::OCExtrema_GenLocateExtSS(Extrema_GenLocateExtSS* nativeHandle) 
{
  this->nativeHandle = nativeHandle;
}

OCExtrema_GenLocateExtSS::OCExtrema_GenLocateExtSS() 
{
  nativeHandle = new Extrema_GenLocateExtSS();
}

OCExtrema_GenLocateExtSS::OCExtrema_GenLocateExtSS(OCNaroWrappers::OCAdaptor3d_Surface^ S1, OCNaroWrappers::OCAdaptor3d_Surface^ S2, Standard_Real U1, Standard_Real V1, Standard_Real U2, Standard_Real V2, Standard_Real Tol1, Standard_Real Tol2) 
{
  nativeHandle = new Extrema_GenLocateExtSS(*((Adaptor3d_Surface*)S1->Handle), *((Adaptor3d_Surface*)S2->Handle), U1, V1, U2, V2, Tol1, Tol2);
}

 void OCExtrema_GenLocateExtSS::Perform(OCNaroWrappers::OCAdaptor3d_Surface^ S1, OCNaroWrappers::OCAdaptor3d_Surface^ S2, Standard_Real U1, Standard_Real V1, Standard_Real U2, Standard_Real V2, Standard_Real Tol1, Standard_Real Tol2)
{
  ((Extrema_GenLocateExtSS*)nativeHandle)->Perform(*((Adaptor3d_Surface*)S1->Handle), *((Adaptor3d_Surface*)S2->Handle), U1, V1, U2, V2, Tol1, Tol2);
}

 System::Boolean OCExtrema_GenLocateExtSS::IsDone()
{
  return OCConverter::StandardBooleanToBoolean(((Extrema_GenLocateExtSS*)nativeHandle)->IsDone());
}

 Standard_Real OCExtrema_GenLocateExtSS::SquareDistance()
{
  return ((Extrema_GenLocateExtSS*)nativeHandle)->SquareDistance();
}

OCExtrema_POnSurf^ OCExtrema_GenLocateExtSS::PointOnS1()
{
  Extrema_POnSurf* tmp = new Extrema_POnSurf();
  *tmp = ((Extrema_GenLocateExtSS*)nativeHandle)->PointOnS1();
  return gcnew OCExtrema_POnSurf(tmp);
}

OCExtrema_POnSurf^ OCExtrema_GenLocateExtSS::PointOnS2()
{
  Extrema_POnSurf* tmp = new Extrema_POnSurf();
  *tmp = ((Extrema_GenLocateExtSS*)nativeHandle)->PointOnS2();
  return gcnew OCExtrema_POnSurf(tmp);
}



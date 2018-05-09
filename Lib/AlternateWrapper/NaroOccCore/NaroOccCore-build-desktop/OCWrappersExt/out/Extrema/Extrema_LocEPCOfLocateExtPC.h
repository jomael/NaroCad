// File generated by CPPExt (MPV)
//
#ifndef _Extrema_LocEPCOfLocateExtPC_OCWrappers_HeaderFile
#define _Extrema_LocEPCOfLocateExtPC_OCWrappers_HeaderFile

// include native header
#include <Extrema_LocEPCOfLocateExtPC.hxx>
#include "../Converter.h"


#include "Extrema_PCLocFOfLocEPCOfLocateExtPC.h"


namespace OCNaroWrappers
{

ref class OCAdaptor3d_Curve;
ref class OCExtrema_CurveTool;
ref class OCExtrema_POnCurv;
ref class OCgp_Pnt;
ref class OCgp_Vec;
ref class OCExtrema_PCLocFOfLocEPCOfLocateExtPC;
ref class OCExtrema_SeqPCOfPCLocFOfLocEPCOfLocateExtPC;



public ref class OCExtrema_LocEPCOfLocateExtPC  {

protected:
  Extrema_LocEPCOfLocateExtPC* nativeHandle;
  OCExtrema_LocEPCOfLocateExtPC(OCDummy^) {};

public:
  property Extrema_LocEPCOfLocateExtPC* Handle
  {
    Extrema_LocEPCOfLocateExtPC* get()
    {
      return nativeHandle;
    }
  }


// constructor from native
OCExtrema_LocEPCOfLocateExtPC(Extrema_LocEPCOfLocateExtPC* nativeHandle);

// Methods PUBLIC


OCExtrema_LocEPCOfLocateExtPC();


OCExtrema_LocEPCOfLocateExtPC(OCNaroWrappers::OCgp_Pnt^ P, OCNaroWrappers::OCAdaptor3d_Curve^ C, Standard_Real U0, Standard_Real TolU);


OCExtrema_LocEPCOfLocateExtPC(OCNaroWrappers::OCgp_Pnt^ P, OCNaroWrappers::OCAdaptor3d_Curve^ C, Standard_Real U0, Standard_Real Umin, Standard_Real Usup, Standard_Real TolU);


 /*instead*/  void Initialize(OCNaroWrappers::OCAdaptor3d_Curve^ C, Standard_Real Umin, Standard_Real Usup, Standard_Real TolU) ;


 /*instead*/  void Perform(OCNaroWrappers::OCgp_Pnt^ P, Standard_Real U0) ;


 /*instead*/  System::Boolean IsDone() ;


 /*instead*/  Standard_Real SquareDistance() ;


 /*instead*/  System::Boolean IsMin() ;


 /*instead*/  OCExtrema_POnCurv^ Point() ;

~OCExtrema_LocEPCOfLocateExtPC()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif

// File generated by CPPExt (MPV)
//
#ifndef _Geom2dInt_TheLocateExtPCOfTheProjPCurOfGInter_OCWrappers_HeaderFile
#define _Geom2dInt_TheLocateExtPCOfTheProjPCurOfGInter_OCWrappers_HeaderFile

// include native header
#include <Geom2dInt_TheLocateExtPCOfTheProjPCurOfGInter.hxx>
#include "../Converter.h"


#include "Geom2dInt_PCLocFOfTheLocateExtPCOfTheProjPCurOfGInter.h"


namespace OCNaroWrappers
{

ref class OCAdaptor2d_Curve2d;
ref class OCGeom2dInt_Geom2dCurveTool;
ref class OCExtrema_POnCurv2d;
ref class OCgp_Pnt2d;
ref class OCgp_Vec2d;
ref class OCGeom2dInt_PCLocFOfTheLocateExtPCOfTheProjPCurOfGInter;
ref class OCGeom2dInt_SeqPCOfPCLocFOfTheLocateExtPCOfTheProjPCurOfGInter;



public ref class OCGeom2dInt_TheLocateExtPCOfTheProjPCurOfGInter  {

protected:
  Geom2dInt_TheLocateExtPCOfTheProjPCurOfGInter* nativeHandle;
  OCGeom2dInt_TheLocateExtPCOfTheProjPCurOfGInter(OCDummy^) {};

public:
  property Geom2dInt_TheLocateExtPCOfTheProjPCurOfGInter* Handle
  {
    Geom2dInt_TheLocateExtPCOfTheProjPCurOfGInter* get()
    {
      return nativeHandle;
    }
  }


// constructor from native
OCGeom2dInt_TheLocateExtPCOfTheProjPCurOfGInter(Geom2dInt_TheLocateExtPCOfTheProjPCurOfGInter* nativeHandle);

// Methods PUBLIC


OCGeom2dInt_TheLocateExtPCOfTheProjPCurOfGInter();


OCGeom2dInt_TheLocateExtPCOfTheProjPCurOfGInter(OCNaroWrappers::OCgp_Pnt2d^ P, OCNaroWrappers::OCAdaptor2d_Curve2d^ C, Standard_Real U0, Standard_Real TolU);


OCGeom2dInt_TheLocateExtPCOfTheProjPCurOfGInter(OCNaroWrappers::OCgp_Pnt2d^ P, OCNaroWrappers::OCAdaptor2d_Curve2d^ C, Standard_Real U0, Standard_Real Umin, Standard_Real Usup, Standard_Real TolU);


 /*instead*/  void Initialize(OCNaroWrappers::OCAdaptor2d_Curve2d^ C, Standard_Real Umin, Standard_Real Usup, Standard_Real TolU) ;


 /*instead*/  void Perform(OCNaroWrappers::OCgp_Pnt2d^ P, Standard_Real U0) ;


 /*instead*/  System::Boolean IsDone() ;


 /*instead*/  Standard_Real SquareDistance() ;


 /*instead*/  System::Boolean IsMin() ;


 /*instead*/  OCExtrema_POnCurv2d^ Point() ;

~OCGeom2dInt_TheLocateExtPCOfTheProjPCurOfGInter()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif

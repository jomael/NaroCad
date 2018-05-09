// File generated by CPPExt (MPV)
//
#ifndef _Extrema_GenLocateExtSS_OCWrappers_HeaderFile
#define _Extrema_GenLocateExtSS_OCWrappers_HeaderFile

// include native header
#include <Extrema_GenLocateExtSS.hxx>
#include "../Converter.h"


#include "Extrema_POnSurf.h"


namespace OCNaroWrappers
{

ref class OCAdaptor3d_Surface;
ref class OCExtrema_POnSurf;


//! With two close points it calculates the distance <br>
//!          between two surfaces. <br>
//!          This distance can be a minimum or a maximum. <br>
public ref class OCExtrema_GenLocateExtSS  {

protected:
  Extrema_GenLocateExtSS* nativeHandle;
  OCExtrema_GenLocateExtSS(OCDummy^) {};

public:
  property Extrema_GenLocateExtSS* Handle
  {
    Extrema_GenLocateExtSS* get()
    {
      return nativeHandle;
    }
  }


// constructor from native
OCExtrema_GenLocateExtSS(Extrema_GenLocateExtSS* nativeHandle);

// Methods PUBLIC


OCExtrema_GenLocateExtSS();

//! Calculates the distance with two close points. <br>
//!          The close points are defined by the parameter values <br>
//!          (U1,V1) for S1 and (U2,V2) for S2. <br>
//!          The function F(u1,v1,u2,v2)=distance(S1(u1,v1),S2(u2,v2)) <br>
//!          has an extremun when gradient(F)=0. The algorithm searchs <br>
//!          a zero near the close points. <br>
OCExtrema_GenLocateExtSS(OCNaroWrappers::OCAdaptor3d_Surface^ S1, OCNaroWrappers::OCAdaptor3d_Surface^ S2, Standard_Real U1, Standard_Real V1, Standard_Real U2, Standard_Real V2, Standard_Real Tol1, Standard_Real Tol2);


 /*instead*/  void Perform(OCNaroWrappers::OCAdaptor3d_Surface^ S1, OCNaroWrappers::OCAdaptor3d_Surface^ S2, Standard_Real U1, Standard_Real V1, Standard_Real U2, Standard_Real V2, Standard_Real Tol1, Standard_Real Tol2) ;

//! Returns True if the distance is found. <br>
 /*instead*/  System::Boolean IsDone() ;

//! Returns the value of the extremum square distance. <br>
 /*instead*/  Standard_Real SquareDistance() ;

//! Returns the point of the extremum distance on S1. <br>
 /*instead*/  OCExtrema_POnSurf^ PointOnS1() ;

//! Returns the point of the extremum distance on S2. <br>
 /*instead*/  OCExtrema_POnSurf^ PointOnS2() ;

~OCExtrema_GenLocateExtSS()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif

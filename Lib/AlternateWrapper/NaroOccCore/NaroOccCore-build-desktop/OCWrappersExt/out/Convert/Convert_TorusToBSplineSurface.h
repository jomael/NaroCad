// File generated by CPPExt (MPV)
//
#ifndef _Convert_TorusToBSplineSurface_OCWrappers_HeaderFile
#define _Convert_TorusToBSplineSurface_OCWrappers_HeaderFile

// include native header
#include <Convert_TorusToBSplineSurface.hxx>
#include "../Converter.h"

#include "Convert_ElementarySurfaceToBSplineSurface.h"

#include "Convert_ElementarySurfaceToBSplineSurface.h"


namespace OCNaroWrappers
{

ref class OCgp_Torus;



//!  This algorithm converts a bounded Torus into a rational <br>
//!  B-spline surface. The torus is a Torus from package gp. <br>
//!  The parametrization of the torus is : <br>
//!  P (U, V) = <br>
//!     Loc  +  MinorRadius * Sin(V) * Zdir + <br>
//!     (MajorRadius+MinorRadius*Cos(V)) *  (Cos(U)*Xdir + Sin(U)*Ydir) <br>
//!  where Loc is the center of the torus, Xdir, Ydir and Zdir are the <br>
//!  normalized directions of the local cartesian coordinate system of <br>
//!  the Torus. The parametrization range is U [0, 2PI], V [0, 2PI]. <br>
//! KeyWords : <br>
//!  Convert, Torus, BSplineSurface. <br>
public ref class OCConvert_TorusToBSplineSurface  : public OCConvert_ElementarySurfaceToBSplineSurface {

protected:
  // dummy constructor;
  OCConvert_TorusToBSplineSurface(OCDummy^) : OCConvert_ElementarySurfaceToBSplineSurface((OCDummy^)nullptr) {};

public:

// constructor from native
OCConvert_TorusToBSplineSurface(Convert_TorusToBSplineSurface* nativeHandle);

// Methods PUBLIC


//!  The equivalent B-spline surface as the same orientation as the <br>
//!  torus in the U and V parametric directions. <br>
//!  Raised if U1 = U2 or U1 = U2 + 2.0 * Pi <br>
//!  Raised if V1 = V2 or V1 = V2 + 2.0 * Pi <br>
OCConvert_TorusToBSplineSurface(OCNaroWrappers::OCgp_Torus^ T, Standard_Real U1, Standard_Real U2, Standard_Real V1, Standard_Real V2);


//!  The equivalent B-spline surface as the same orientation as the <br>
//!  torus in the U and V parametric directions. <br>
//!  Raised if Param1 = Param2 or Param1 = Param2 + 2.0 * Pi <br>
OCConvert_TorusToBSplineSurface(OCNaroWrappers::OCgp_Torus^ T, Standard_Real Param1, Standard_Real Param2, System::Boolean UTrim);


//!  The equivalent B-spline surface as the same orientation as the <br>
//!  torus in the U and V parametric directions. <br>
OCConvert_TorusToBSplineSurface(OCNaroWrappers::OCgp_Torus^ T);

~OCConvert_TorusToBSplineSurface()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif

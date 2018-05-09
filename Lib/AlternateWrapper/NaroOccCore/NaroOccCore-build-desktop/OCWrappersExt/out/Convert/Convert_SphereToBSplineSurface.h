// File generated by CPPExt (MPV)
//
#ifndef _Convert_SphereToBSplineSurface_OCWrappers_HeaderFile
#define _Convert_SphereToBSplineSurface_OCWrappers_HeaderFile

// include native header
#include <Convert_SphereToBSplineSurface.hxx>
#include "../Converter.h"

#include "Convert_ElementarySurfaceToBSplineSurface.h"

#include "Convert_ElementarySurfaceToBSplineSurface.h"


namespace OCNaroWrappers
{

ref class OCgp_Sphere;



//!  This algorithm converts a bounded Sphere into a rational <br>
//!  B-spline surface. The sphere is a Sphere from package gp. <br>
//!  The parametrization of the sphere is <br>
//!  P (U, V) = Loc  + Radius * Sin(V) * Zdir + <br>
//!             Radius * Cos(V) * (Cos(U)*Xdir + Sin(U)*Ydir) <br>
//!  where Loc is the center of the sphere Xdir, Ydir and Zdir are the <br>
//!  normalized directions of the local cartesian coordinate system of <br>
//!  the sphere. The parametrization range is U [0, 2PI] and <br>
//!  V [-PI/2, PI/2]. <br>
//! KeyWords : <br>
//!  Convert, Sphere, BSplineSurface. <br>
public ref class OCConvert_SphereToBSplineSurface  : public OCConvert_ElementarySurfaceToBSplineSurface {

protected:
  // dummy constructor;
  OCConvert_SphereToBSplineSurface(OCDummy^) : OCConvert_ElementarySurfaceToBSplineSurface((OCDummy^)nullptr) {};

public:

// constructor from native
OCConvert_SphereToBSplineSurface(Convert_SphereToBSplineSurface* nativeHandle);

// Methods PUBLIC


//!  The equivalent B-spline surface as the same orientation as the <br>
//!  sphere in the U and V parametric directions. <br>
//!  Raised if U1 = U2 or U1 = U2 + 2.0 * Pi <br>
//!  Raised if V1 = V2. <br>
OCConvert_SphereToBSplineSurface(OCNaroWrappers::OCgp_Sphere^ Sph, Standard_Real U1, Standard_Real U2, Standard_Real V1, Standard_Real V2);


//!  The equivalent B-spline surface as the same orientation <br>
//!  as the sphere in the U and V parametric directions. <br>
//!  Raised if UTrim = True and Param1 = Param2 or <br>
//!            Param1 = Param2 + 2.0 * Pi <br>
//!  Raised if UTrim = False and Param1 = Param2 <br>
OCConvert_SphereToBSplineSurface(OCNaroWrappers::OCgp_Sphere^ Sph, Standard_Real Param1, Standard_Real Param2, System::Boolean UTrim);


//!  The equivalent B-spline surface as the same orientation <br>
//!  as the sphere in the U and V parametric directions. <br>
OCConvert_SphereToBSplineSurface(OCNaroWrappers::OCgp_Sphere^ Sph);

~OCConvert_SphereToBSplineSurface()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
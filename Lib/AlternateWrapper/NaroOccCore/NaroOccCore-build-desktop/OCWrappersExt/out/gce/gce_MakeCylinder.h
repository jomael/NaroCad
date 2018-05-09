// File generated by CPPExt (MPV)
//
#ifndef _gce_MakeCylinder_OCWrappers_HeaderFile
#define _gce_MakeCylinder_OCWrappers_HeaderFile

// include native header
#include <gce_MakeCylinder.hxx>
#include "../Converter.h"

#include "gce_Root.h"

#include "../gp/gp_Cylinder.h"
#include "gce_Root.h"


namespace OCNaroWrappers
{

ref class OCgp_Ax2;
ref class OCgp_Cylinder;
ref class OCgp_Pnt;
ref class OCgp_Ax1;
ref class OCgp_Circ;


//! This class implements the following algorithms used <br>
//!           to create a Cylinder from gp. <br>
//!           * Create a Cylinder coaxial to another and passing <br>
//!             through a point. <br>
//!           * Create a Cylinder coaxial to another at a distance <br>
//!             <Dist>. <br>
//!           * Create a Cylinder with 3 points. <br>
//!           * Create a Cylinder by its axis and radius. <br>
//!           * Create a cylinder by its circular base. <br>
public ref class OCgce_MakeCylinder  : public OCgce_Root {

protected:
  // dummy constructor;
  OCgce_MakeCylinder(OCDummy^) : OCgce_Root((OCDummy^)nullptr) {};

public:

// constructor from native
OCgce_MakeCylinder(gce_MakeCylinder* nativeHandle);

// Methods PUBLIC

//!<A2> is the local cartesian coordinate system of <me>. <br>
//!           The status is "NegativeRadius" if R < 0.0 <br>
OCgce_MakeCylinder(OCNaroWrappers::OCgp_Ax2^ A2, Standard_Real Radius);

//! Makes a Cylinder from gp <TheCylinder> coaxial to another <br>
//!           Cylinder <Cylinder> and passing through a Pnt <Point>. <br>
OCgce_MakeCylinder(OCNaroWrappers::OCgp_Cylinder^ Cyl, OCNaroWrappers::OCgp_Pnt^ Point);

//! Makes a Cylinder from gp <TheCylinder> coaxial to another <br>
//!           Cylinder <Cylinder> at the distance <Dist> which can <br>
//!           be greater or lower than zero. <br>
//!           The radius of the result is the absolute value of the <br>
//!           radius of <Cyl> plus <Dist> <br>
OCgce_MakeCylinder(OCNaroWrappers::OCgp_Cylinder^ Cyl, Standard_Real Dist);

//! Makes a Cylinder from gp <TheCylinder> with 3 points <br>
//!           <P1>,<P2>,<P3>. <br>
//!           Its axis is <P1P2> and its radius is the distance <br>
//!           between <P3> and <P1P2> <br>
OCgce_MakeCylinder(OCNaroWrappers::OCgp_Pnt^ P1, OCNaroWrappers::OCgp_Pnt^ P2, OCNaroWrappers::OCgp_Pnt^ P3);

//! Makes a Cylinder by its axis <Axis> and radius <Radius>. <br>
OCgce_MakeCylinder(OCNaroWrappers::OCgp_Ax1^ Axis, Standard_Real Radius);

//! Makes a Cylinder by its circular base. <br>
//! Warning <br>
//! If an error occurs (that is, when IsDone returns <br>
//! false), the Status function returns: <br>
//! -   gce_NegativeRadius if: <br>
//!   -   Radius is less than 0.0, or <br>
//!   -   Dist is negative and has an absolute value <br>
//!    which is greater than the radius of Cyl; or <br>
//! -   gce_ConfusedPoints if points P1 and P2 are coincident. <br>
OCgce_MakeCylinder(OCNaroWrappers::OCgp_Circ^ Circ);

//! Returns the constructed cylinder. <br>
//! Exceptions StdFail_NotDone if no cylinder is constructed. <br>
 /*instead*/  OCgp_Cylinder^ Value() ;


 /*instead*/  OCgp_Cylinder^ Operator() ;

~OCgce_MakeCylinder()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif

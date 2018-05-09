// File generated by CPPExt (MPV)
//
#ifndef _BRepPrimAPI_MakeCone_OCWrappers_HeaderFile
#define _BRepPrimAPI_MakeCone_OCWrappers_HeaderFile

// include native header
#include <BRepPrimAPI_MakeCone.hxx>
#include "../Converter.h"

#include "BRepPrimAPI_MakeOneAxis.h"

#include "../BRepPrim/BRepPrim_Cone.h"
#include "BRepPrimAPI_MakeOneAxis.h"


namespace OCNaroWrappers
{

ref class OCgp_Ax2;
ref class OCBRepPrim_Cone;


//! Describes functions to build cones or portions of cones. <br>
//! A MakeCone object provides a framework for: <br>
//! -   defining the construction of a cone, <br>
//! -   implementing the construction algorithm, and <br>
//! -   consulting the result. <br>
public ref class OCBRepPrimAPI_MakeCone  : public OCBRepPrimAPI_MakeOneAxis {

protected:
  // dummy constructor;
  OCBRepPrimAPI_MakeCone(OCDummy^) : OCBRepPrimAPI_MakeOneAxis((OCDummy^)nullptr) {};

public:

// constructor from native
OCBRepPrimAPI_MakeCone(BRepPrimAPI_MakeCone* nativeHandle);

// Methods PUBLIC

//! Make a cone of height H radius R1 in the plane z = <br>
//!          0, R2 in the plane Z = H. R1 and R2 may be null. <br>
OCBRepPrimAPI_MakeCone(Standard_Real R1, Standard_Real R2, Standard_Real H);

//! Make a cone of height H radius R1 in the plane z = <br>
//!          0, R2 in the plane Z = H. R1 and R2 may be null. <br>
//!          Take a section of <angle> <br>
OCBRepPrimAPI_MakeCone(Standard_Real R1, Standard_Real R2, Standard_Real H, Standard_Real angle);

//! Make a cone of height H radius R1 in the plane z = <br>
//!          0, R2 in the plane Z = H. R1 and R2 may be null. <br>
OCBRepPrimAPI_MakeCone(OCNaroWrappers::OCgp_Ax2^ Axes, Standard_Real R1, Standard_Real R2, Standard_Real H);

//! Make a cone of height H radius R1 in the plane z = <br>
//!          0, R2 in the plane Z = H. R1 and R2 may be null. <br>
//!          Take a section of <angle> <br>//! Constructs a cone, or a portion of a cone, of height H, <br>
//! and radius R1 in the plane z = 0 and R2 in the plane <br>
//! z = H. The result is a sharp cone if R1 or R2 is equal to 0. <br>
//! The cone is constructed about the "Z Axis" of either: <br>
//! -   the global coordinate system, or <br>
//! -   the local coordinate system Axes. <br>
//! It is limited in these coordinate systems as follows: <br>
//! -   in the v parametric direction (the Z coordinate), by <br>
//!   the two parameter values 0 and H, <br>
//! -   and in the u parametric direction (defined by the <br>
//!   angle of rotation around the Z axis), in the case of a <br>
//!   portion of a cone, by the two parameter values 0 and <br>
//!   angle. Angle is given in radians. <br>
//! The resulting shape is composed of: <br>
//! -   a lateral conical face <br>
//! -   two planar faces in the planes z = 0 and z = H, <br>
//!   or only one planar face in one of these two planes if a <br>
//!   radius value is null (in the case of a complete cone, <br>
//!   these faces are circles), and <br>
//! -   and in the case of a portion of a cone, two planar <br>
//!   faces to close the shape. (either two parallelograms or <br>
//!   two triangles, in the planes u = 0 and u = angle). <br>
//! Exceptions <br>
//! Standard_DomainError if: <br>
//! -   H is less than or equal to Precision::Confusion(), or <br>
//! -   the half-angle at the apex of the cone, defined by <br>
//!   R1, R2 and H, is less than Precision::Confusion()/H, or greater than <br>
//!   (Pi/2)-Precision::Confusion()/H.f <br>
OCBRepPrimAPI_MakeCone(OCNaroWrappers::OCgp_Ax2^ Axes, Standard_Real R1, Standard_Real R2, Standard_Real H, Standard_Real angle);

//! Returns the algorithm. <br>
 /*instead*/  Standard_Address OneAxis() ;

//! Returns the algorithm. <br>
//! <br>
 /*instead*/  OCBRepPrim_Cone^ Cone() ;

~OCBRepPrimAPI_MakeCone()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif

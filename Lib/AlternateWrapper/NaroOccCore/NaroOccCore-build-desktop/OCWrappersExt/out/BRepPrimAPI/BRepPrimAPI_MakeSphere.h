// File generated by CPPExt (MPV)
//
#ifndef _BRepPrimAPI_MakeSphere_OCWrappers_HeaderFile
#define _BRepPrimAPI_MakeSphere_OCWrappers_HeaderFile

// include native header
#include <BRepPrimAPI_MakeSphere.hxx>
#include "../Converter.h"

#include "BRepPrimAPI_MakeOneAxis.h"

#include "../BRepPrim/BRepPrim_Sphere.h"
#include "BRepPrimAPI_MakeOneAxis.h"


namespace OCNaroWrappers
{

ref class OCgp_Pnt;
ref class OCgp_Ax2;
ref class OCBRepPrim_Sphere;


//! Describes functions to build spheres or portions of spheres. <br>
//! A MakeSphere object provides a framework for: <br>
//! -   defining the construction of a sphere, <br>
//! -   implementing the construction algorithm, and <br>
//! -   consulting the result. <br>
public ref class OCBRepPrimAPI_MakeSphere  : public OCBRepPrimAPI_MakeOneAxis {

protected:
  // dummy constructor;
  OCBRepPrimAPI_MakeSphere(OCDummy^) : OCBRepPrimAPI_MakeOneAxis((OCDummy^)nullptr) {};

public:

// constructor from native
OCBRepPrimAPI_MakeSphere(BRepPrimAPI_MakeSphere* nativeHandle);

// Methods PUBLIC

//! Make a sphere of radius R. <br>
OCBRepPrimAPI_MakeSphere(Standard_Real R);

//! Make a sphere of radius R. <br>
OCBRepPrimAPI_MakeSphere(Standard_Real R, Standard_Real angle);

//! Make a sphere of radius R. <br>
OCBRepPrimAPI_MakeSphere(Standard_Real R, Standard_Real angle1, Standard_Real angle2);

//! Make a sphere of radius R. <br>
OCBRepPrimAPI_MakeSphere(Standard_Real R, Standard_Real angle1, Standard_Real angle2, Standard_Real angle3);

//! Make a sphere of radius R. <br>
OCBRepPrimAPI_MakeSphere(OCNaroWrappers::OCgp_Pnt^ Center, Standard_Real R);

//! Make a sphere of radius R. <br>
OCBRepPrimAPI_MakeSphere(OCNaroWrappers::OCgp_Pnt^ Center, Standard_Real R, Standard_Real angle);

//! Make a sphere of radius R. <br>
OCBRepPrimAPI_MakeSphere(OCNaroWrappers::OCgp_Pnt^ Center, Standard_Real R, Standard_Real angle1, Standard_Real angle2);

//! Make a sphere of radius R. <br>
OCBRepPrimAPI_MakeSphere(OCNaroWrappers::OCgp_Pnt^ Center, Standard_Real R, Standard_Real angle1, Standard_Real angle2, Standard_Real angle3);

//! Make a sphere of radius R. <br>
OCBRepPrimAPI_MakeSphere(OCNaroWrappers::OCgp_Ax2^ Axis, Standard_Real R);

//! Make a sphere of radius R. <br>
OCBRepPrimAPI_MakeSphere(OCNaroWrappers::OCgp_Ax2^ Axis, Standard_Real R, Standard_Real angle);

//! Make a sphere of radius R. <br>
OCBRepPrimAPI_MakeSphere(OCNaroWrappers::OCgp_Ax2^ Axis, Standard_Real R, Standard_Real angle1, Standard_Real angle2);

//! Make a sphere of radius R. <br>//! For all algorithms The resulting shape is composed of <br>
//! -   a lateral spherical face, <br>
//! -   two planar faces parallel to the plane z = 0 if the <br>
//!   sphere is truncated in the v parametric direction, or <br>
//!   only one planar face if angle1 is equal to -p/2 or if <br>
//!     angle2 is equal to p/2 (these faces are circles in <br>
//!   case of a complete truncated sphere), <br>
//! -   and in case of a portion of sphere, two planar faces <br>
//!   to shut the shape.(in the planes u = 0 and u = angle). <br>
OCBRepPrimAPI_MakeSphere(OCNaroWrappers::OCgp_Ax2^ Axis, Standard_Real R, Standard_Real angle1, Standard_Real angle2, Standard_Real angle3);

//! Returns the algorithm. <br>
 /*instead*/  Standard_Address OneAxis() ;

//! Returns the algorithm. <br>
//! <br>
 /*instead*/  OCBRepPrim_Sphere^ Sphere() ;

~OCBRepPrimAPI_MakeSphere()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif

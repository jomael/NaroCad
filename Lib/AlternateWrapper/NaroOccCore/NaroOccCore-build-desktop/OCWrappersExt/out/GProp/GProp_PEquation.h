// File generated by CPPExt (MPV)
//
#ifndef _GProp_PEquation_OCWrappers_HeaderFile
#define _GProp_PEquation_OCWrappers_HeaderFile

// include native header
#include <GProp_PEquation.hxx>
#include "../Converter.h"


#include "GProp_EquaType.h"
#include "../gp/gp_Pnt.h"
#include "../gp/gp_Vec.h"


namespace OCNaroWrappers
{

ref class OCTColgp_Array1OfPnt;
ref class OCgp_Pln;
ref class OCgp_Lin;
ref class OCgp_Pnt;
ref class OCgp_Vec;


//! A framework to analyze a collection - or cloud <br>
//! - of points and to verify if they are coincident, <br>
//! collinear or coplanar within a given precision. If <br>
//! so, it also computes the mean point, the mean <br>
//! line or the mean plane of the points. If not, it <br>
//! computes the minimal box which includes all the points. <br>
public ref class OCGProp_PEquation  {

protected:
  GProp_PEquation* nativeHandle;
  OCGProp_PEquation(OCDummy^) {};

public:
  property GProp_PEquation* Handle
  {
    GProp_PEquation* get()
    {
      return nativeHandle;
    }
  }


// constructor from native
OCGProp_PEquation(GProp_PEquation* nativeHandle);

// Methods PUBLIC

//! Constructs a framework to analyze the <br>
//! collection of points Pnts and computes: <br>
//! -   the mean point if the points in question are <br>
//!   considered to be coincident within the precision Tol, or <br>
//! -   the mean line if they are considered to be <br>
//!   collinear within the precision Tol, or <br>
//! -   the mean plane if they are considered to be <br>
//!   coplanar within the precision Tol, or <br>
//! -   the minimal box which contains all the points. Use : <br>
//! -   the functions IsPoint, IsLinear, IsPlanar <br>
//!   and IsSpace to find the result of the analysis, and <br>
//! -   the function Point, Line, Plane or Box to <br>
//!   access the computed result. <br>
OCGProp_PEquation(OCNaroWrappers::OCTColgp_Array1OfPnt^ Pnts, Standard_Real Tol);

//! Returns true if, according to the given <br>
//! tolerance, the points analyzed by this framework are  coplanar. <br>
//! Use the function  Plane  to access the computed result. <br>
 /*instead*/  System::Boolean IsPlanar() ;

//!  Returns true if, according to the given <br>
//! tolerance, the points analyzed by this framework are  colinear. <br>
//! Use the function  Line  to access the computed result. <br>
 /*instead*/  System::Boolean IsLinear() ;

//!  Returns true if, according to the given <br>
//! tolerance, the points analyzed by this framework are  coincident. <br>
//!       Use the function  Point  to access the computed result. <br>
 /*instead*/  System::Boolean IsPoint() ;

//! Returns true if, according to the given <br>
//! tolerance value, the points analyzed by this <br>
//! framework are neither coincident, nor collinear, nor coplanar. <br>
//! Use the function Box to query the smallest box <br>
//! that includes the collection of points. <br>
 /*instead*/  System::Boolean IsSpace() ;

//! Returns the mean plane passing near all the <br>
//! points analyzed by this framework if, according <br>
//! to the given precision, the points are considered to be coplanar. <br>
//! Exceptions <br>
//! Standard_NoSuchObject if, according to the <br>
//! given precision value, the points analyzed by <br>
//! this framework are considered to be: <br>
//! -   coincident, or <br>
//! -   collinear, or <br>
//! -   not coplanar. <br>
 /*instead*/  OCgp_Pln^ Plane() ;

//! Returns the mean line passing near all the <br>
//! points analyzed by this framework if, according <br>
//! to the given precision value, the points are considered to be collinear. <br>
//! Exceptions <br>
//! Standard_NoSuchObject if, according to the <br>
//! given precision, the points analyzed by this <br>
//! framework are considered to be: <br>
//! -   coincident, or <br>
//! -   not collinear. <br>
 /*instead*/  OCgp_Lin^ Line() ;

//! Returns the mean point of all the points <br>
//! analyzed by this framework if, according to the <br>
//! given precision, the points are considered to be coincident. <br>
//! Exceptions <br>
//! Standard_NoSuchObject if, according to the <br>
//! given precision, the points analyzed by this <br>
//! framework are not considered to be coincident. <br>
 /*instead*/  OCgp_Pnt^ Point() ;

//! Returns the definition of the smallest box which <br>
//! contains all the points analyzed by this <br>
//! framework if, according to the given precision <br>
//! value, the points are considered to be neither <br>
//! coincident, nor collinear and nor coplanar. <br>
//! This box is centered on the barycenter P of the <br>
//! collection of points. Its sides are parallel to the <br>
//! three vectors V1, V2 and V3, the length of <br>
//! which is the length of the box in the corresponding direction. <br>
//! Note: Vectors V1, V2 and V3 are parallel to <br>
//! the three axes of principal inertia of the system <br>
//! composed of the collection of points where each point is of equal mass. <br>
//! Exceptions <br>
//! Standard_NoSuchObject if, according to the given precision, <br>
//! the points analyzed by this framework are considered to be coincident, collinear or coplanar. <br>
 /*instead*/  void Box(OCNaroWrappers::OCgp_Pnt^ P, OCNaroWrappers::OCgp_Vec^ V1, OCNaroWrappers::OCgp_Vec^ V2, OCNaroWrappers::OCgp_Vec^ V3) ;

~OCGProp_PEquation()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif

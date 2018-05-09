// File generated by CPPExt (MPV)
//
#ifndef _gp_Pnt2d_OCWrappers_HeaderFile
#define _gp_Pnt2d_OCWrappers_HeaderFile

// include native header
#include <gp_Pnt2d.hxx>
#include "../Converter.h"


#include "gp_XY.h"
#include "../Standard/Standard_Storable.h"


namespace OCNaroWrappers
{

ref class OCgp_XY;
ref class OCgp_Ax2d;
ref class OCgp_Trsf2d;
ref class OCgp_Vec2d;


//!  Defines  a non-persistent 2D cartesian point. <br>
public ref class OCgp_Pnt2d  {

protected:
  gp_Pnt2d* nativeHandle;
  OCgp_Pnt2d(OCDummy^) {};

public:
  property gp_Pnt2d* Handle
  {
    gp_Pnt2d* get()
    {
      return nativeHandle;
    }
  }


// constructor from native
OCgp_Pnt2d(gp_Pnt2d* nativeHandle);

// Methods PUBLIC

//! Creates a point with zero coordinates. <br>
OCgp_Pnt2d();

//! Creates a point with a doublet of coordinates. <br>
OCgp_Pnt2d(OCNaroWrappers::OCgp_XY^ Coord);


//!  Creates a  point with its 2 cartesian's coordinates : Xp, Yp. <br>
OCgp_Pnt2d(Standard_Real Xp, Standard_Real Yp);


//!  Assigns the value Xi to the coordinate that corresponds to Index: <br>
//!  Index = 1 => X is modified <br>
//!  Index = 2 => Y is modified <br>
//! Raises OutOfRange if Index != {1, 2}. <br>
 /*instead*/  void SetCoord(Standard_Integer Index, Standard_Real Xi) ;

//! For this point, assigns the values Xp and Yp to its two coordinates <br>
 /*instead*/  void SetCoord(Standard_Real Xp, Standard_Real Yp) ;

//! Assigns the given value to the X  coordinate of this point. <br>
 /*instead*/  void SetX(Standard_Real X) ;

//! Assigns the given value to the Y  coordinate of this point. <br>
 /*instead*/  void SetY(Standard_Real Y) ;

//! Assigns the two coordinates of Coord to this point. <br>
 /*instead*/  void SetXY(OCNaroWrappers::OCgp_XY^ Coord) ;


//!  Returns the coordinate of range Index : <br>
//!  Index = 1 => X is returned <br>
//!  Index = 2 => Y is returned <br>
//! Raises OutOfRange if Index != {1, 2}. <br>
 /*instead*/  Standard_Real Coord(Standard_Integer Index) ;

//! For this point returns its two coordinates as a number pair. <br>
 /*instead*/  void Coord(Standard_Real& Xp, Standard_Real& Yp) ;

//! For this point, returns its X  coordinate. <br>
 /*instead*/  Standard_Real X() ;

//! For this point, returns its Y coordinate. <br>
 /*instead*/  Standard_Real Y() ;

//! For this point, returns its two coordinates as a number pair. <br>
 /*instead*/  OCgp_XY^ XY() ;

//! For this point, returns its two coordinates as a number pair. <br>
 /*instead*/  OCgp_XY^ Coord() ;


//! Returns the coordinates of this point. <br>
//! Note: This syntax allows direct modification of the returned value. <br>
 /*instead*/  OCgp_XY^ ChangeCoord() ;

//! Comparison <br>
//!  Returns True if the distance between the two <br>
//!  points is lower or equal to LinearTolerance. <br>
 /*instead*/  System::Boolean IsEqual(OCNaroWrappers::OCgp_Pnt2d^ Other, Standard_Real LinearTolerance) ;

//! Computes the distance between two points. <br>
 /*instead*/  Standard_Real Distance(OCNaroWrappers::OCgp_Pnt2d^ Other) ;

//! Computes the square distance between two points. <br>
 /*instead*/  Standard_Real SquareDistance(OCNaroWrappers::OCgp_Pnt2d^ Other) ;


//!  Performs the symmetrical transformation of a point <br>
//!  with respect to the point P which is the center of <br>
//!  the  symmetry. <br>
 /*instead*/  void Mirror(OCNaroWrappers::OCgp_Pnt2d^ P) ;


//!  Performs the symmetrical transformation of a point <br>
//!  with respect to an axis placement which is the axis <br>
 /*instead*/  OCgp_Pnt2d^ Mirrored(OCNaroWrappers::OCgp_Pnt2d^ P) ;


 /*instead*/  void Mirror(OCNaroWrappers::OCgp_Ax2d^ A) ;


//!  Rotates a point. A1 is the axis of the rotation. <br>
//!  Ang is the angular value of the rotation in radians. <br>
 /*instead*/  OCgp_Pnt2d^ Mirrored(OCNaroWrappers::OCgp_Ax2d^ A) ;


 /*instead*/  void Rotate(OCNaroWrappers::OCgp_Pnt2d^ P, Standard_Real Ang) ;

//! Scales a point. S is the scaling value. <br>
 /*instead*/  OCgp_Pnt2d^ Rotated(OCNaroWrappers::OCgp_Pnt2d^ P, Standard_Real Ang) ;


 /*instead*/  void Scale(OCNaroWrappers::OCgp_Pnt2d^ P, Standard_Real S) ;

//! Transforms a point with the transformation T. <br>
 /*instead*/  OCgp_Pnt2d^ Scaled(OCNaroWrappers::OCgp_Pnt2d^ P, Standard_Real S) ;


 /*instead*/  void Transform(OCNaroWrappers::OCgp_Trsf2d^ T) ;


//!  Translates a point in the direction of the vector V. <br>
//!  The magnitude of the translation is the vector's magnitude. <br>
 /*instead*/  OCgp_Pnt2d^ Transformed(OCNaroWrappers::OCgp_Trsf2d^ T) ;


 /*instead*/  void Translate(OCNaroWrappers::OCgp_Vec2d^ V) ;


//!  Translates a point from the point P1 to the point P2. <br>
 /*instead*/  OCgp_Pnt2d^ Translated(OCNaroWrappers::OCgp_Vec2d^ V) ;


 /*instead*/  void Translate(OCNaroWrappers::OCgp_Pnt2d^ P1, OCNaroWrappers::OCgp_Pnt2d^ P2) ;


 /*instead*/  OCgp_Pnt2d^ Translated(OCNaroWrappers::OCgp_Pnt2d^ P1, OCNaroWrappers::OCgp_Pnt2d^ P2) ;

~OCgp_Pnt2d()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
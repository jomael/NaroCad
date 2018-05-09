// File generated by CPPExt (MPV)
//
#ifndef _IntCurve_ProjectOnPConicTool_OCWrappers_HeaderFile
#define _IntCurve_ProjectOnPConicTool_OCWrappers_HeaderFile

// include native header
#include <IntCurve_ProjectOnPConicTool.hxx>
#include "../Converter.h"




namespace OCNaroWrappers
{

ref class OCIntCurve_PConic;
ref class OCgp_Pnt2d;


//! This class provides a tool which computes the parameter <br>
//!          of a point near a parametric conic. <br>
public ref class OCIntCurve_ProjectOnPConicTool  {

protected:
  IntCurve_ProjectOnPConicTool* nativeHandle;
  OCIntCurve_ProjectOnPConicTool(OCDummy^) {};

public:
  property IntCurve_ProjectOnPConicTool* Handle
  {
    IntCurve_ProjectOnPConicTool* get()
    {
      return nativeHandle;
    }
  }


// constructor from native
OCIntCurve_ProjectOnPConicTool(IntCurve_ProjectOnPConicTool* nativeHandle);

// Methods PUBLIC

//!  Returns  the parameter V  of the  point   on the <br>
//!  parametric  curve corresponding to  the  Point  Pnt.   The <br>
//!  Correspondance between  Pnt  and the  point   P(V) on  the <br>
//!  parametric    curve  must  be  coherent with    the way of <br>
//!  determination  of the signed  distance between a point and <br>
//!  the implicit curve.  Tol is the tolerance on  the distance <br>
//!  between a point and the parametrised curve.  In that case, <br>
//!  no bounds are given.  The research  of the rigth parameter <br>
//!  has to  be  made  on the natural  parametric domain of the <br>
//!  curve. <br>
static /*instead*/  Standard_Real FindParameter(OCNaroWrappers::OCIntCurve_PConic^ C, OCNaroWrappers::OCgp_Pnt2d^ Pnt, Standard_Real Tol) ;

//!  Returns the  parameter  V of the   point  on the <br>
//!  parametric  curve corresponding  to  the   Point Pnt.  The <br>
//!  Correspondance  between Pnt and  the   point  P(V) on  the <br>
//!  parametric  curve  must  be  coherent   with the  way   of <br>
//!  determination of the  signed distance between  a point and <br>
//!  the implicit curve.  Tol  is the tolerance on the distance <br>
//!  between a point and the  parametrised curve.  LowParameter <br>
//!  and HighParameter give the  boundaries of the interval  in <br>
//!  wich the parameter  certainly  lies.  These parameters are <br>
//!  given to implement a  more efficient  algoritm. So,  it is <br>
//!  not necessary to check   that the returned value  verifies <br>
//!  LowParameter <= Value <= HighParameter. <br>
static /*instead*/  Standard_Real FindParameter(OCNaroWrappers::OCIntCurve_PConic^ C, OCNaroWrappers::OCgp_Pnt2d^ Pnt, Standard_Real LowParameter, Standard_Real HighParameter, Standard_Real Tol) ;

~OCIntCurve_ProjectOnPConicTool()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
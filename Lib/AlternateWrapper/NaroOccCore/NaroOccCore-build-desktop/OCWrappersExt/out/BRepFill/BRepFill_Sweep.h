// File generated by CPPExt (MPV)
//
#ifndef _BRepFill_Sweep_OCWrappers_HeaderFile
#define _BRepFill_Sweep_OCWrappers_HeaderFile

// include native header
#include <BRepFill_Sweep.hxx>
#include "../Converter.h"


#include "../GeomFill/GeomFill_ApproxStyle.h"
#include "../GeomAbs/GeomAbs_Shape.h"
#include "../TopoDS/TopoDS_Shape.h"
#include "../TopTools/TopTools_DataMapOfShapeShape.h"
#include "../TopTools/TopTools_ListOfShape.h"
#include "../TopoDS/TopoDS_Wire.h"
#include "BRepFill_TransitionStyle.h"


namespace OCNaroWrappers
{

ref class OCBRepFill_LocationLaw;
ref class OCBRepFill_SectionLaw;
ref class OCTopTools_HArray2OfShape;
ref class OCTopoDS_Wire;
ref class OCTopoDS_Shape;


//! Topological Sweep Algorithm <br>
public ref class OCBRepFill_Sweep  {

protected:
  BRepFill_Sweep* nativeHandle;
  OCBRepFill_Sweep(OCDummy^) {};

public:
  property BRepFill_Sweep* Handle
  {
    BRepFill_Sweep* get()
    {
      return nativeHandle;
    }
  }


// constructor from native
OCBRepFill_Sweep(BRepFill_Sweep* nativeHandle);

// Methods PUBLIC


OCBRepFill_Sweep(OCNaroWrappers::OCBRepFill_SectionLaw^ Section, OCNaroWrappers::OCBRepFill_LocationLaw^ Location, System::Boolean WithKPart);


 /*instead*/  void SetBounds(OCNaroWrappers::OCTopoDS_Wire^ FirstShape, OCNaroWrappers::OCTopoDS_Wire^ LastShape) ;

//! Set Approximation Tolerance <br>
//!    Tol3d : Tolerance to surface approximation <br>
//!    Tol2d : Tolerance used to perform curve approximation <br>
//!            Normaly the 2d curve are approximated with a <br>
//!            tolerance given by the resolution on support surfaces, <br>
//!            but if this tolerance is too large Tol2d is used. <br>
//!    TolAngular : Tolerance (in radian) to control the angle <br>
//!                 beetween tangents on the section law and <br>
//!                 tangent of iso-v on approximed surface <br>
 /*instead*/  void SetTolerance(Standard_Real Tol3d, Standard_Real BoundTol, Standard_Real Tol2d, Standard_Real TolAngular) ;

//! Tolerance  To controle Corner management. <br>
//! <br>
//!   If the discontinuity is lesser than <AngleMin> in radian The <br>
//!   Transition Performed will be alway "Modified" <br>
//! <br>
 /*instead*/  void SetAngularControl(Standard_Real AngleMin, Standard_Real AngleMax) ;

//! Build the Sweeep  Surface <br>
//!    Transition define Transition strategy <br>
//!    Approx define Approximation Strategy <br>
//!    - GeomFill_Section : The composed Function Location X Section <br>
//!                         is directly approximed. <br>
//!    - GeomFill_Location : The location law is approximed, and the <br>
//!                          SweepSurface is bulid algebric composition <br>
//!                          of approximed location law and section law <br>
//!                          This option is Ok, if Section.Surface() methode <br>
//!                          is effective. <br>
//!    Continuity : The continuity in v waiting on the surface <br>
//!    Degmax     : The maximum degree in v requiered on the surface <br>
//!    Segmax     : The maximum number of span in v requiered on <br>
//!                 the surface. <br>
 /*instead*/  void Build(OCBRepFill_TransitionStyle Transition, OCGeomFill_ApproxStyle Approx, OCGeomAbs_Shape Continuity, Standard_Integer Degmax, Standard_Integer Segmax) ;

//! Say if the Shape is Build. <br>
 /*instead*/  System::Boolean IsDone() ;

//! returns the Sweeping Shape <br>
 /*instead*/  OCTopoDS_Shape^ Shape() ;

//! Get the Approximation  error. <br>
 /*instead*/  Standard_Real ErrorOnSurface() ;


 /*instead*/  OCTopTools_HArray2OfShape^ SubShape() ;


 /*instead*/  OCTopTools_HArray2OfShape^ InterFaces() ;


 /*instead*/  OCTopTools_HArray2OfShape^ Sections() ;

~OCBRepFill_Sweep()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif

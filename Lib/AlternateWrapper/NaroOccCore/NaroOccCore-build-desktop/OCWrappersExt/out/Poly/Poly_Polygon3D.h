// File generated by CPPExt (Transient)
//
#ifndef _Poly_Polygon3D_OCWrappers_HeaderFile
#define _Poly_Polygon3D_OCWrappers_HeaderFile

// include the wrapped class
#include <Poly_Polygon3D.hxx>
#include "../Converter.h"

#include "../MMgt/MMgt_TShared.h"

#include "../TColgp/TColgp_Array1OfPnt.h"


namespace OCNaroWrappers
{

ref class OCTColStd_HArray1OfReal;
ref class OCTColgp_Array1OfPnt;
ref class OCTColStd_Array1OfReal;


//! This class Provides a polygon in 3D space. It is generally an approximate representation of a curve. <br>
//! A Polygon3D is defined by a table of nodes. Each node is <br>
//! a 3D point. If the polygon is closed, the point of closure is <br>
//! repeated at the end of the table of nodes. <br>
//! If the polygon is an approximate representation of a curve, <br>
//! you can associate with each of its nodes the value of the <br>
//! parameter of the corresponding point on the curve. <br>
public ref class OCPoly_Polygon3D : OCMMgt_TShared {

protected:
  // dummy constructor;
  OCPoly_Polygon3D(OCDummy^) : OCMMgt_TShared((OCDummy^)nullptr) {};

public:

// constructor from native
OCPoly_Polygon3D(Handle(Poly_Polygon3D)* nativeHandle);

// Methods PUBLIC

//! onstructs a 3D polygon defined by the table of points, Nodes. <br>
OCPoly_Polygon3D(OCNaroWrappers::OCTColgp_Array1OfPnt^ Nodes);

//! Constructs a 3D polygon defined by <br>
//! the table of points, Nodes, and the parallel table of <br>
//!  parameters, Parameters, where each value of the table <br>
//!  Parameters is the parameter of the corresponding point <br>
//!  on the curve approximated by the constructed polygon. <br>
//! Warning <br>
//! Both the Nodes and Parameters tables must have the <br>
//! same bounds. This property is not checked at construction time. <br>
OCPoly_Polygon3D(OCNaroWrappers::OCTColgp_Array1OfPnt^ Nodes, OCNaroWrappers::OCTColStd_Array1OfReal^ Parameters);

//! Returns the deflection of this polygon <br>
 /*instead*/  Standard_Real Deflection() ;

//! Sets the deflection of this polygon to D. See more on deflection in Poly_Polygon2D <br>
 /*instead*/  void Deflection(Standard_Real D) ;

//! Returns the number of nodes in this polygon. <br>
//! Note: If the polygon is closed, the point of closure is <br>
//! repeated at the end of its table of nodes. Thus, on a closed <br>
//! triangle the function NbNodes returns 4. <br>
 /*instead*/  Standard_Integer NbNodes() ;

//!  Returns the table of nodes for this polygon. <br>
 /*instead*/  OCTColgp_Array1OfPnt^ Nodes() ;

//! Returns the table of the parameters associated with each node in this polygon. <br>
//!  HasParameters function checks if   parameters are associated with the nodes of this polygon. <br>
 /*instead*/  System::Boolean HasParameters() ;

//! Returns true if parameters are associated with the nodes <br>
//! in this polygon. <br>
 /*instead*/  OCTColStd_Array1OfReal^ Parameters() ;

//! Returns the table of the parameters associated with each node in this polygon. <br>
//!        ChangeParameters function returnes the  array as shared. Therefore if the table is selected by <br>
//!   reference you can, by simply modifying it, directly modify <br>
//!   the data structure of this polygon. <br>
 /*instead*/  OCTColStd_Array1OfReal^ ChangeParameters() ;

~OCPoly_Polygon3D()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif

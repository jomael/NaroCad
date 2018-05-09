// File generated by CPPExt (MPV)
//
#ifndef _BRep_Tool_OCWrappers_HeaderFile
#define _BRep_Tool_OCWrappers_HeaderFile

// include native header
#include <BRep_Tool.hxx>
#include "../Converter.h"


#include "../GeomAbs/GeomAbs_Shape.h"


namespace OCNaroWrappers
{

ref class OCTopoDS_Shape;
ref class OCGeom_Surface;
ref class OCTopoDS_Face;
ref class OCTopLoc_Location;
ref class OCPoly_Triangulation;
ref class OCTopoDS_Edge;
ref class OCGeom_Curve;
ref class OCPoly_Polygon3D;
ref class OCGeom2d_Curve;
ref class OCPoly_Polygon2D;
ref class OCPoly_PolygonOnTriangulation;
ref class OCgp_Pnt2d;
ref class OCgp_Pnt;
ref class OCTopoDS_Vertex;


//! Provides class methods  to  access to the geometry <br>
//!          of BRep shapes. <br>
public ref class OCBRep_Tool  {

protected:
  BRep_Tool* nativeHandle;
  OCBRep_Tool(OCDummy^) {};

public:
  property BRep_Tool* Handle
  {
    BRep_Tool* get()
    {
      return nativeHandle;
    }
  }


// constructor from native
OCBRep_Tool(BRep_Tool* nativeHandle);

// Methods PUBLIC

//! Returns <True>  if S if flaged Closed, if S is a <br>
//!          Solid,Shell or Compound  returns <True> is S has no free boundaries. <br>
static /*instead*/  System::Boolean IsClosed(OCNaroWrappers::OCTopoDS_Shape^ S) ;

//! Returns the geometric surface of the face. Returns <br>
//!          in <L> the location for the surface. <br>
static /*instead*/  OCGeom_Surface^ Surface(OCNaroWrappers::OCTopoDS_Face^ F, OCNaroWrappers::OCTopLoc_Location^ L) ;

//! Returns the geometric  surface of the face. It can <br>
//!          be a copy if there is a Location. <br>
//! <br>
static /*instead*/  OCGeom_Surface^ Surface(OCNaroWrappers::OCTopoDS_Face^ F) ;

//! Returns  the Triangulation of  the  face. It  is a <br>
//!          null handle if there is no triangulation. <br>
//! <br>
static /*instead*/  OCPoly_Triangulation^ Triangulation(OCNaroWrappers::OCTopoDS_Face^ F, OCNaroWrappers::OCTopLoc_Location^ L) ;

//! Returns the tolerance of the face. <br>
static /*instead*/  Standard_Real Tolerance(OCNaroWrappers::OCTopoDS_Face^ F) ;

//! Returns the  NaturalRestriction  flag of the  face. <br>
static /*instead*/  System::Boolean NaturalRestriction(OCNaroWrappers::OCTopoDS_Face^ F) ;

//! Returns True if <E> is a 3d curve or a curve on <br>
//!          surface. <br>
static /*instead*/  System::Boolean IsGeometric(OCNaroWrappers::OCTopoDS_Edge^ E) ;

//! Returns the 3D curve  of the edge.  May be  a Null <br>
//!          handle. Returns in <L> the location for the curve. <br>
//!          In <First> and <Last> the parameter range. <br>
//! <br>
static /*instead*/  OCGeom_Curve^ Curve(OCNaroWrappers::OCTopoDS_Edge^ E, OCNaroWrappers::OCTopLoc_Location^ L, Standard_Real& First, Standard_Real& Last) ;

//! Returns the 3D curve  of the edge. May be a Null handle. <br>
//!          In <First> and <Last> the parameter range. <br>
//!          It can be a copy if there is a Location. <br>
static /*instead*/  OCGeom_Curve^ Curve(OCNaroWrappers::OCTopoDS_Edge^ E, Standard_Real& First, Standard_Real& Last) ;

//! Returns the 3D polygon of the edge. May be   a Null <br>
//!          handle. Returns in <L> the location for the polygon. <br>
//! <br>
static /*instead*/  OCPoly_Polygon3D^ Polygon3D(OCNaroWrappers::OCTopoDS_Edge^ E, OCNaroWrappers::OCTopLoc_Location^ L) ;

//! Returns the curve  associated to the  edge in  the <br>
//!          parametric  space of  the  face.  Returns   a NULL <br>
//!          handle  if this curve  does not exist.  Returns in <br>
//!          <First> and <Last> the parameter range. <br>
static /*instead*/  OCGeom2d_Curve^ CurveOnSurface(OCNaroWrappers::OCTopoDS_Edge^ E, OCNaroWrappers::OCTopoDS_Face^ F, Standard_Real& First, Standard_Real& Last) ;

//! Returns the  curve associated to   the edge in the <br>
//!          parametric  space of the   surface. Returns a NULL <br>
//!          handle  if this curve does  not exist.  Returns in <br>
//!          <First> and <Last> the parameter range. <br>
static /*instead*/  OCGeom2d_Curve^ CurveOnSurface(OCNaroWrappers::OCTopoDS_Edge^ E, OCNaroWrappers::OCGeom_Surface^ S, OCNaroWrappers::OCTopLoc_Location^ L, Standard_Real& First, Standard_Real& Last) ;

//! Returns in <C>, <S>, <L> a 2d curve, a surface and <br>
//!          a location for the edge <E>. <C> and <S>  are null <br>
//!          if the  edge has no curve on  surface.  Returns in <br>
//!          <First> and <Last> the parameter range. <br>
static /*instead*/  void CurveOnSurface(OCNaroWrappers::OCTopoDS_Edge^ E, OCNaroWrappers::OCGeom2d_Curve^ C, OCNaroWrappers::OCGeom_Surface^ S, OCNaroWrappers::OCTopLoc_Location^ L, Standard_Real& First, Standard_Real& Last) ;

//! Returns in <C>, <S>, <L> the 2d curve, the surface <br>
//!          and the location for the edge <E> of rank <Index>. <br>
//!          <C> and <S> are null if the index is out of range. <br>
//!          Returns in <First> and <Last> the parameter range. <br>
static /*instead*/  void CurveOnSurface(OCNaroWrappers::OCTopoDS_Edge^ E, OCNaroWrappers::OCGeom2d_Curve^ C, OCNaroWrappers::OCGeom_Surface^ S, OCNaroWrappers::OCTopLoc_Location^ L, Standard_Real& First, Standard_Real& Last, Standard_Integer Index) ;

//! Returns the polygon associated to the  edge in  the <br>
//!          parametric  space of  the  face.  Returns   a NULL <br>
//!          handle  if this polygon  does not exist. <br>
static /*instead*/  OCPoly_Polygon2D^ PolygonOnSurface(OCNaroWrappers::OCTopoDS_Edge^ E, OCNaroWrappers::OCTopoDS_Face^ F) ;

//! Returns the polygon associated to the  edge in  the <br>
//!          parametric  space of  the surface. Returns   a NULL <br>
//!          handle  if this polygon  does not exist. <br>
static /*instead*/  OCPoly_Polygon2D^ PolygonOnSurface(OCNaroWrappers::OCTopoDS_Edge^ E, OCNaroWrappers::OCGeom_Surface^ S, OCNaroWrappers::OCTopLoc_Location^ L) ;

//! Returns in <C>, <S>, <L> a 2d curve, a surface and <br>
//!          a location for the edge <E>. <C> and <S>  are null <br>
//!          if the  edge has no polygon on  surface. <br>
static /*instead*/  void PolygonOnSurface(OCNaroWrappers::OCTopoDS_Edge^ E, OCNaroWrappers::OCPoly_Polygon2D^ C, OCNaroWrappers::OCGeom_Surface^ S, OCNaroWrappers::OCTopLoc_Location^ L) ;

//! Returns in <C>, <S>, <L> the 2d curve, the surface <br>
//!          and the location for the edge <E> of rank <Index>. <br>
//!          <C> and <S> are null if the index is out of range. <br>
static /*instead*/  void PolygonOnSurface(OCNaroWrappers::OCTopoDS_Edge^ E, OCNaroWrappers::OCPoly_Polygon2D^ C, OCNaroWrappers::OCGeom_Surface^ S, OCNaroWrappers::OCTopLoc_Location^ L, Standard_Integer Index) ;

//! Returns the polygon associated to the  edge in  the <br>
//!          parametric  space of  the  face.  Returns   a NULL <br>
//!          handle  if this polygon  does not exist. <br>
static /*instead*/  OCPoly_PolygonOnTriangulation^ PolygonOnTriangulation(OCNaroWrappers::OCTopoDS_Edge^ E, OCNaroWrappers::OCPoly_Triangulation^ T, OCNaroWrappers::OCTopLoc_Location^ L) ;

//! Returns in <P>, <T>, <L> a polygon on triangulation, a <br>
//!          triangulation and a location for the edge <E>. <br>
//!          <P>  and  <T>  are null  if  the  edge has no <br>
//!          polygon on  triangulation. <br>
static /*instead*/  void PolygonOnTriangulation(OCNaroWrappers::OCTopoDS_Edge^ E, OCNaroWrappers::OCPoly_PolygonOnTriangulation^ P, OCNaroWrappers::OCPoly_Triangulation^ T, OCNaroWrappers::OCTopLoc_Location^ L) ;

//! Returns   in   <P>,  <T>,    <L> a     polygon  on <br>
//!          triangulation,   a triangulation  and a  location for <br>
//!          the edge <E> for the range index.  <C> and <S> are <br>
//!          null if the edge has no polygon on triangulation. <br>
static /*instead*/  void PolygonOnTriangulation(OCNaroWrappers::OCTopoDS_Edge^ E, OCNaroWrappers::OCPoly_PolygonOnTriangulation^ P, OCNaroWrappers::OCPoly_Triangulation^ T, OCNaroWrappers::OCTopLoc_Location^ L, Standard_Integer Index) ;

//! Returns  True  if  <E>  has  two  PCurves  in  the <br>
//!          parametric space of <F>. i.e.  <F>  is on a closed <br>
//!          surface and <E> is on the closing curve. <br>
//! <br>
static /*instead*/  System::Boolean IsClosed(OCNaroWrappers::OCTopoDS_Edge^ E, OCNaroWrappers::OCTopoDS_Face^ F) ;

//! Returns  True  if  <E>  has  two  PCurves  in  the <br>
//!          parametric space  of <S>.  i.e.   <S>  is a closed <br>
//!          surface and <E> is on the closing curve. <br>
//! <br>
static /*instead*/  System::Boolean IsClosed(OCNaroWrappers::OCTopoDS_Edge^ E, OCNaroWrappers::OCGeom_Surface^ S, OCNaroWrappers::OCTopLoc_Location^ L) ;

//! Returns  True  if <E> has two arrays of indices in <br>
//!          the triangulation <T>. <br>
static /*instead*/  System::Boolean IsClosed(OCNaroWrappers::OCTopoDS_Edge^ E, OCNaroWrappers::OCPoly_Triangulation^ T) ;

//! Returns the tolerance for <E>. <br>
static /*instead*/  Standard_Real Tolerance(OCNaroWrappers::OCTopoDS_Edge^ E) ;

//! Returns the SameParameter flag for the edge. <br>
static /*instead*/  System::Boolean SameParameter(OCNaroWrappers::OCTopoDS_Edge^ E) ;

//! Returns the SameRange flag for the edge. <br>
static /*instead*/  System::Boolean SameRange(OCNaroWrappers::OCTopoDS_Edge^ E) ;

//! Returns True  if the edge is degenerated. <br>
static /*instead*/  System::Boolean Degenerated(OCNaroWrappers::OCTopoDS_Edge^ E) ;

//! Gets the range of the 3d curve. <br>
static /*instead*/  void Range(OCNaroWrappers::OCTopoDS_Edge^ E, Standard_Real& First, Standard_Real& Last) ;

//! Gets the range  of the edge  on the pcurve on  the <br>
//!          surface. <br>
static /*instead*/  void Range(OCNaroWrappers::OCTopoDS_Edge^ E, OCNaroWrappers::OCGeom_Surface^ S, OCNaroWrappers::OCTopLoc_Location^ L, Standard_Real& First, Standard_Real& Last) ;

//! Gets the range of the edge on the pcurve on the face. <br>
static /*instead*/  void Range(OCNaroWrappers::OCTopoDS_Edge^ E, OCNaroWrappers::OCTopoDS_Face^ F, Standard_Real& First, Standard_Real& Last) ;

//! Gets the UV locations of the extremities of the edge. <br>
static /*instead*/  void UVPoints(OCNaroWrappers::OCTopoDS_Edge^ E, OCNaroWrappers::OCGeom_Surface^ S, OCNaroWrappers::OCTopLoc_Location^ L, OCNaroWrappers::OCgp_Pnt2d^ PFirst, OCNaroWrappers::OCgp_Pnt2d^ PLast) ;

//! Gets the UV locations of the extremities of the edge. <br>
static /*instead*/  void UVPoints(OCNaroWrappers::OCTopoDS_Edge^ E, OCNaroWrappers::OCTopoDS_Face^ F, OCNaroWrappers::OCgp_Pnt2d^ PFirst, OCNaroWrappers::OCgp_Pnt2d^ PLast) ;

//! Sets the UV locations of the extremities of the edge. <br>
static /*instead*/  void SetUVPoints(OCNaroWrappers::OCTopoDS_Edge^ E, OCNaroWrappers::OCGeom_Surface^ S, OCNaroWrappers::OCTopLoc_Location^ L, OCNaroWrappers::OCgp_Pnt2d^ PFirst, OCNaroWrappers::OCgp_Pnt2d^ PLast) ;

//! Sets the UV locations of the extremities of the edge. <br>
static /*instead*/  void SetUVPoints(OCNaroWrappers::OCTopoDS_Edge^ E, OCNaroWrappers::OCTopoDS_Face^ F, OCNaroWrappers::OCgp_Pnt2d^ PFirst, OCNaroWrappers::OCgp_Pnt2d^ PLast) ;

//! Returns True if the edge is on the surfaces of the <br>
//!          two faces. <br>
static /*instead*/  System::Boolean HasContinuity(OCNaroWrappers::OCTopoDS_Edge^ E, OCNaroWrappers::OCTopoDS_Face^ F1, OCNaroWrappers::OCTopoDS_Face^ F2) ;

//! Returns the continuity. <br>
static /*instead*/  OCGeomAbs_Shape Continuity(OCNaroWrappers::OCTopoDS_Edge^ E, OCNaroWrappers::OCTopoDS_Face^ F1, OCNaroWrappers::OCTopoDS_Face^ F2) ;

//! Returns True if the edge is on the surfaces. <br>
static /*instead*/  System::Boolean HasContinuity(OCNaroWrappers::OCTopoDS_Edge^ E, OCNaroWrappers::OCGeom_Surface^ S1, OCNaroWrappers::OCGeom_Surface^ S2, OCNaroWrappers::OCTopLoc_Location^ L1, OCNaroWrappers::OCTopLoc_Location^ L2) ;

//! Returns the continuity. <br>
static /*instead*/  OCGeomAbs_Shape Continuity(OCNaroWrappers::OCTopoDS_Edge^ E, OCNaroWrappers::OCGeom_Surface^ S1, OCNaroWrappers::OCGeom_Surface^ S2, OCNaroWrappers::OCTopLoc_Location^ L1, OCNaroWrappers::OCTopLoc_Location^ L2) ;

//! Returns the 3d point. <br>
static /*instead*/  OCgp_Pnt^ Pnt(OCNaroWrappers::OCTopoDS_Vertex^ V) ;

//! Returns the tolerance. <br>
static /*instead*/  Standard_Real Tolerance(OCNaroWrappers::OCTopoDS_Vertex^ V) ;

//! Returns the parameter of <V> on <E>. <br>
static /*instead*/  Standard_Real Parameter(OCNaroWrappers::OCTopoDS_Vertex^ V, OCNaroWrappers::OCTopoDS_Edge^ E) ;

//! Returns the  parameters  of   the  vertex   on the <br>
//!          pcurve of the edge on the face. <br>
static /*instead*/  Standard_Real Parameter(OCNaroWrappers::OCTopoDS_Vertex^ V, OCNaroWrappers::OCTopoDS_Edge^ E, OCNaroWrappers::OCTopoDS_Face^ F) ;

//! Returns the  parameters  of   the  vertex   on the <br>
//!          pcurve of the edge on the surface. <br>
static /*instead*/  Standard_Real Parameter(OCNaroWrappers::OCTopoDS_Vertex^ V, OCNaroWrappers::OCTopoDS_Edge^ E, OCNaroWrappers::OCGeom_Surface^ S, OCNaroWrappers::OCTopLoc_Location^ L) ;

//! Returns the parameters of the vertex on the face. <br>
static /*instead*/  OCgp_Pnt2d^ Parameters(OCNaroWrappers::OCTopoDS_Vertex^ V, OCNaroWrappers::OCTopoDS_Face^ F) ;

~OCBRep_Tool()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif

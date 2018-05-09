// File generated by CPPExt (MPV)
//
#ifndef _TopOpeBRepDS_DataStructure_OCWrappers_HeaderFile
#define _TopOpeBRepDS_DataStructure_OCWrappers_HeaderFile

// include native header
#include <TopOpeBRepDS_DataStructure.hxx>
#include "../Converter.h"


#include "TopOpeBRepDS_MapOfSurface.h"
#include "TopOpeBRepDS_MapOfCurve.h"
#include "TopOpeBRepDS_MapOfPoint.h"
#include "TopOpeBRepDS_MapOfShapeData.h"
#include "../TopTools/TopTools_IndexedMapOfShape.h"
#include "TopOpeBRepDS_ListOfInterference.h"
#include "../TopTools/TopTools_ListOfShape.h"
#include "../TopoDS/TopoDS_Shape.h"
#include "TopOpeBRepDS_Point.h"
#include "TopOpeBRepDS_Surface.h"
#include "TopOpeBRepDS_Curve.h"
#include "TopOpeBRepDS_ShapeSurface.h"
#include "TopOpeBRepDS_IndexedDataMapOfShapeWithState.h"
#include "TopOpeBRepDS_Config.h"


namespace OCNaroWrappers
{

ref class OCGeom_Surface;
ref class OCTopOpeBRepDS_SurfaceExplorer;
ref class OCTopOpeBRepDS_CurveExplorer;
ref class OCTopOpeBRepDS_PointExplorer;
ref class OCTopOpeBRepDS_Surface;
ref class OCTopOpeBRepDS_Curve;
ref class OCTopOpeBRepDS_Point;
ref class OCTopoDS_Shape;
ref class OCTopoDS_Edge;
ref class OCTopOpeBRepDS_ListOfInterference;
ref class OCTopTools_ListOfShape;
ref class OCTopOpeBRepDS_MapOfShapeData;
ref class OCTopOpeBRepDS_Interference;
ref class OCTopOpeBRepDS_ListIteratorOfListOfInterference;
ref class OCTopOpeBRepDS_IndexedDataMapOfShapeWithState;
ref class OCTopOpeBRepDS_ShapeWithState;
ref class OCTopTools_IndexedMapOfShape;


//! The DataStructure stores : <br>
//! <br>
//! New geometries : points, curves, and surfaces. <br>
//! Topological shapes : vertices, edges, faces. <br>
//! The new geometries and the topological shapes have interferences. <br>
//! <br>
public ref class OCTopOpeBRepDS_DataStructure  {

protected:
  TopOpeBRepDS_DataStructure* nativeHandle;
  OCTopOpeBRepDS_DataStructure(OCDummy^) {};

public:
  property TopOpeBRepDS_DataStructure* Handle
  {
    TopOpeBRepDS_DataStructure* get()
    {
      return nativeHandle;
    }
  }


// constructor from native
OCTopOpeBRepDS_DataStructure(TopOpeBRepDS_DataStructure* nativeHandle);

// Methods PUBLIC


OCTopOpeBRepDS_DataStructure();

//! reset the data structure <br>
 /*instead*/  void Init() ;

//! Insert a new surface. Returns the index. <br>
 /*instead*/  Standard_Integer AddSurface(OCNaroWrappers::OCTopOpeBRepDS_Surface^ S) ;


 /*instead*/  void RemoveSurface(Standard_Integer I) ;


 /*instead*/  System::Boolean KeepSurface(Standard_Integer I) ;


 /*instead*/  System::Boolean KeepSurface(OCNaroWrappers::OCTopOpeBRepDS_Surface^ S) ;


 /*instead*/  void ChangeKeepSurface(Standard_Integer I, System::Boolean FindKeep) ;


 /*instead*/  void ChangeKeepSurface(OCNaroWrappers::OCTopOpeBRepDS_Surface^ S, System::Boolean FindKeep) ;

//! Insert a new curve. Returns the index. <br>
 /*instead*/  Standard_Integer AddCurve(OCNaroWrappers::OCTopOpeBRepDS_Curve^ S) ;


 /*instead*/  void RemoveCurve(Standard_Integer I) ;


 /*instead*/  System::Boolean KeepCurve(Standard_Integer I) ;


 /*instead*/  System::Boolean KeepCurve(OCNaroWrappers::OCTopOpeBRepDS_Curve^ C) ;


 /*instead*/  void ChangeKeepCurve(Standard_Integer I, System::Boolean FindKeep) ;


 /*instead*/  void ChangeKeepCurve(OCNaroWrappers::OCTopOpeBRepDS_Curve^ C, System::Boolean FindKeep) ;

//! Insert a new point. Returns the index. <br>
 /*instead*/  Standard_Integer AddPoint(OCNaroWrappers::OCTopOpeBRepDS_Point^ PDS) ;

//! Insert a new point. Returns the index. <br>
 /*instead*/  Standard_Integer AddPointSS(OCNaroWrappers::OCTopOpeBRepDS_Point^ PDS, OCNaroWrappers::OCTopoDS_Shape^ S1, OCNaroWrappers::OCTopoDS_Shape^ S2) ;


 /*instead*/  void RemovePoint(Standard_Integer I) ;


 /*instead*/  System::Boolean KeepPoint(Standard_Integer I) ;


 /*instead*/  System::Boolean KeepPoint(OCNaroWrappers::OCTopOpeBRepDS_Point^ P) ;


 /*instead*/  void ChangeKeepPoint(Standard_Integer I, System::Boolean FindKeep) ;


 /*instead*/  void ChangeKeepPoint(OCNaroWrappers::OCTopOpeBRepDS_Point^ P, System::Boolean FindKeep) ;

//! Insert a shape S. Returns the index. <br>
 /*instead*/  Standard_Integer AddShape(OCNaroWrappers::OCTopoDS_Shape^ S) ;

//! Insert a shape S which ancestor is I = 1 or 2. Returns the index. <br>
 /*instead*/  Standard_Integer AddShape(OCNaroWrappers::OCTopoDS_Shape^ S, Standard_Integer I) ;


 /*instead*/  System::Boolean KeepShape(Standard_Integer I, System::Boolean FindKeep) ;


 /*instead*/  System::Boolean KeepShape(OCNaroWrappers::OCTopoDS_Shape^ S, System::Boolean FindKeep) ;


 /*instead*/  void ChangeKeepShape(Standard_Integer I, System::Boolean FindKeep) ;


 /*instead*/  void ChangeKeepShape(OCNaroWrappers::OCTopoDS_Shape^ S, System::Boolean FindKeep) ;


 /*instead*/  void InitSectionEdges() ;


 /*instead*/  Standard_Integer AddSectionEdge(OCNaroWrappers::OCTopoDS_Edge^ E) ;


 /*instead*/  OCTopOpeBRepDS_ListOfInterference^ SurfaceInterferences(Standard_Integer I) ;


 /*instead*/  OCTopOpeBRepDS_ListOfInterference^ ChangeSurfaceInterferences(Standard_Integer I) ;


 /*instead*/  OCTopOpeBRepDS_ListOfInterference^ CurveInterferences(Standard_Integer I) ;


 /*instead*/  OCTopOpeBRepDS_ListOfInterference^ ChangeCurveInterferences(Standard_Integer I) ;


 /*instead*/  OCTopOpeBRepDS_ListOfInterference^ PointInterferences(Standard_Integer I) ;


 /*instead*/  OCTopOpeBRepDS_ListOfInterference^ ChangePointInterferences(Standard_Integer I) ;


 /*instead*/  OCTopOpeBRepDS_ListOfInterference^ ShapeInterferences(OCNaroWrappers::OCTopoDS_Shape^ S, System::Boolean FindKeep) ;


 /*instead*/  OCTopOpeBRepDS_ListOfInterference^ ChangeShapeInterferences(OCNaroWrappers::OCTopoDS_Shape^ S) ;


 /*instead*/  OCTopOpeBRepDS_ListOfInterference^ ShapeInterferences(Standard_Integer I, System::Boolean FindKeep) ;


 /*instead*/  OCTopOpeBRepDS_ListOfInterference^ ChangeShapeInterferences(Standard_Integer I) ;


 /*instead*/  OCTopTools_ListOfShape^ ShapeSameDomain(OCNaroWrappers::OCTopoDS_Shape^ S) ;


 /*instead*/  OCTopTools_ListOfShape^ ChangeShapeSameDomain(OCNaroWrappers::OCTopoDS_Shape^ S) ;


 /*instead*/  OCTopTools_ListOfShape^ ShapeSameDomain(Standard_Integer I) ;


 /*instead*/  OCTopTools_ListOfShape^ ChangeShapeSameDomain(Standard_Integer I) ;


 /*instead*/  OCTopOpeBRepDS_MapOfShapeData^ ChangeShapes() ;


 /*instead*/  void AddShapeSameDomain(OCNaroWrappers::OCTopoDS_Shape^ S, OCNaroWrappers::OCTopoDS_Shape^ SSD) ;


 /*instead*/  void RemoveShapeSameDomain(OCNaroWrappers::OCTopoDS_Shape^ S, OCNaroWrappers::OCTopoDS_Shape^ SSD) ;


 /*instead*/  Standard_Integer SameDomainRef(Standard_Integer I) ;


 /*instead*/  Standard_Integer SameDomainRef(OCNaroWrappers::OCTopoDS_Shape^ S) ;


 /*instead*/  void SameDomainRef(Standard_Integer I, Standard_Integer Ref) ;


 /*instead*/  void SameDomainRef(OCNaroWrappers::OCTopoDS_Shape^ S, Standard_Integer Ref) ;


 /*instead*/  OCTopOpeBRepDS_Config SameDomainOri(Standard_Integer I) ;


 /*instead*/  OCTopOpeBRepDS_Config SameDomainOri(OCNaroWrappers::OCTopoDS_Shape^ S) ;


 /*instead*/  void SameDomainOri(Standard_Integer I, OCTopOpeBRepDS_Config Ori) ;


 /*instead*/  void SameDomainOri(OCNaroWrappers::OCTopoDS_Shape^ S, OCTopOpeBRepDS_Config Ori) ;


 /*instead*/  Standard_Integer SameDomainInd(Standard_Integer I) ;


 /*instead*/  Standard_Integer SameDomainInd(OCNaroWrappers::OCTopoDS_Shape^ S) ;


 /*instead*/  void SameDomainInd(Standard_Integer I, Standard_Integer Ind) ;


 /*instead*/  void SameDomainInd(OCNaroWrappers::OCTopoDS_Shape^ S, Standard_Integer Ind) ;


 /*instead*/  Standard_Integer AncestorRank(Standard_Integer I) ;


 /*instead*/  Standard_Integer AncestorRank(OCNaroWrappers::OCTopoDS_Shape^ S) ;


 /*instead*/  void AncestorRank(Standard_Integer I, Standard_Integer Ianc) ;


 /*instead*/  void AncestorRank(OCNaroWrappers::OCTopoDS_Shape^ S, Standard_Integer Ianc) ;


 /*instead*/  void AddShapeInterference(OCNaroWrappers::OCTopoDS_Shape^ S, OCNaroWrappers::OCTopOpeBRepDS_Interference^ I) ;


 /*instead*/  void RemoveShapeInterference(OCNaroWrappers::OCTopoDS_Shape^ S, OCNaroWrappers::OCTopOpeBRepDS_Interference^ I) ;


 /*instead*/  void FillShapesSameDomain(OCNaroWrappers::OCTopoDS_Shape^ S1, OCNaroWrappers::OCTopoDS_Shape^ S2, System::Boolean refFirst) ;


 /*instead*/  void FillShapesSameDomain(OCNaroWrappers::OCTopoDS_Shape^ S1, OCNaroWrappers::OCTopoDS_Shape^ S2, OCTopOpeBRepDS_Config c1, OCTopOpeBRepDS_Config c2, System::Boolean refFirst) ;


 /*instead*/  void UnfillShapesSameDomain(OCNaroWrappers::OCTopoDS_Shape^ S1, OCNaroWrappers::OCTopoDS_Shape^ S2) ;


 /*instead*/  Standard_Integer NbSurfaces() ;


 /*instead*/  Standard_Integer NbCurves() ;


 /*instead*/  void ChangeNbCurves(Standard_Integer N) ;


 /*instead*/  Standard_Integer NbPoints() ;


 /*instead*/  Standard_Integer NbShapes() ;


 /*instead*/  Standard_Integer NbSectionEdges() ;

//! Returns the surface of index <I>. <br>
 /*instead*/  OCTopOpeBRepDS_Surface^ Surface(Standard_Integer I) ;

//! Returns the surface of index <I>. <br>
 /*instead*/  OCTopOpeBRepDS_Surface^ ChangeSurface(Standard_Integer I) ;

//! Returns the Curve of index <I>. <br>
 /*instead*/  OCTopOpeBRepDS_Curve^ Curve(Standard_Integer I) ;

//! Returns the Curve of index <I>. <br>
 /*instead*/  OCTopOpeBRepDS_Curve^ ChangeCurve(Standard_Integer I) ;

//! Returns the point of index <I>. <br>
 /*instead*/  OCTopOpeBRepDS_Point^ Point(Standard_Integer I) ;

//! Returns the point of index <I>. <br>
 /*instead*/  OCTopOpeBRepDS_Point^ ChangePoint(Standard_Integer I) ;

//! returns the shape of index I stored in <br>
//!          the map myShapes, accessing a list of interference. <br>
 /*instead*/  OCTopoDS_Shape^ Shape(Standard_Integer I, System::Boolean FindKeep) ;

//! returns the index of shape <S> stored in <br>
//!          the map myShapes, accessing a list of interference. <br>
//!          returns 0 if <S> is not in the map. <br>
 /*instead*/  Standard_Integer Shape(OCNaroWrappers::OCTopoDS_Shape^ S, System::Boolean FindKeep) ;


 /*instead*/  OCTopoDS_Edge^ SectionEdge(Standard_Integer I, System::Boolean FindKeep) ;


 /*instead*/  Standard_Integer SectionEdge(OCNaroWrappers::OCTopoDS_Edge^ E, System::Boolean FindKeep) ;


 /*instead*/  System::Boolean IsSectionEdge(OCNaroWrappers::OCTopoDS_Edge^ E, System::Boolean FindKeep) ;

//! Returns True if <S> has new geometries, i.e : <br>
//! True si : <br>
//!     HasShape(S) True <br>
//!     S a une liste d'interferences non vide. <br>
//! S = SOLID, FACE, EDGE : true/false <br>
//! S = SHELL, WIRE, VERTEX : false. <br>
 /*instead*/  System::Boolean HasGeometry(OCNaroWrappers::OCTopoDS_Shape^ S) ;

//! Returns True if <S> est dans myShapes <br>
 /*instead*/  System::Boolean HasShape(OCNaroWrappers::OCTopoDS_Shape^ S, System::Boolean FindKeep) ;


 /*instead*/  void SetNewSurface(OCNaroWrappers::OCTopoDS_Shape^ F, OCNaroWrappers::OCGeom_Surface^ S) ;


 /*instead*/  System::Boolean HasNewSurface(OCNaroWrappers::OCTopoDS_Shape^ F) ;


 /*instead*/  OCGeom_Surface^ NewSurface(OCNaroWrappers::OCTopoDS_Shape^ F) ;


 /*instead*/  void Isfafa(System::Boolean isfafa) ;


 /*instead*/  System::Boolean Isfafa() ;


 /*instead*/  OCTopOpeBRepDS_IndexedDataMapOfShapeWithState^ ChangeMapOfShapeWithStateObj() ;


 /*instead*/  OCTopOpeBRepDS_IndexedDataMapOfShapeWithState^ ChangeMapOfShapeWithStateTool() ;


 /*instead*/  OCTopOpeBRepDS_IndexedDataMapOfShapeWithState^ ChangeMapOfShapeWithState(OCNaroWrappers::OCTopoDS_Shape^ aShape, System::Boolean& aFlag) ;


 /*instead*/  OCTopOpeBRepDS_ShapeWithState^ GetShapeWithState(OCNaroWrappers::OCTopoDS_Shape^ aShape) ;


 /*instead*/  OCTopTools_IndexedMapOfShape^ ChangeMapOfRejectedShapesObj() ;


 /*instead*/  OCTopTools_IndexedMapOfShape^ ChangeMapOfRejectedShapesTool() ;

~OCTopOpeBRepDS_DataStructure()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif

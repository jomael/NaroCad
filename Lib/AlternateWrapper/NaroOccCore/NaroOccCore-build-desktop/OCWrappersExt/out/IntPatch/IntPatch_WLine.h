// File generated by CPPExt (Transient)
//
#ifndef _IntPatch_WLine_OCWrappers_HeaderFile
#define _IntPatch_WLine_OCWrappers_HeaderFile

// include the wrapped class
#include <IntPatch_WLine.hxx>
#include "../Converter.h"

#include "IntPatch_Line.h"

#include "IntPatch_SequenceOfPoint.h"
#include "../Bnd/Bnd_Box2d.h"
#include "../Bnd/Bnd_Box.h"
#include "../IntSurf/IntSurf_TypeTrans.h"
#include "../IntSurf/IntSurf_Situation.h"


namespace OCNaroWrappers
{

ref class OCIntSurf_LineOn2S;
ref class OCAdaptor2d_HCurve2d;
ref class OCIntPatch_Point;
ref class OCIntSurf_PntOn2S;
ref class OCgp_Pnt2d;
ref class OCgp_Pnt;


//! Definition of set of points as a result of the intersection <br>
//!          between 2 parametrised patches. <br>
public ref class OCIntPatch_WLine : OCIntPatch_Line {

protected:
  // dummy constructor;
  OCIntPatch_WLine(OCDummy^) : OCIntPatch_Line((OCDummy^)nullptr) {};

public:

// constructor from native
OCIntPatch_WLine(Handle(IntPatch_WLine)* nativeHandle);

// Methods PUBLIC

//! Creates a WLine as an intersection when the <br>
//!          transitions are In or Out. <br>
OCIntPatch_WLine(OCNaroWrappers::OCIntSurf_LineOn2S^ Line, System::Boolean Tang, OCIntSurf_TypeTrans Trans1, OCIntSurf_TypeTrans Trans2);

//! Creates a WLine as an intersection when the <br>
//!          transitions are Touch. <br>
OCIntPatch_WLine(OCNaroWrappers::OCIntSurf_LineOn2S^ Line, System::Boolean Tang, OCIntSurf_Situation Situ1, OCIntSurf_Situation Situ2);

//! Creates a WLine as an intersection when the <br>
//!          transitions are Undecided. <br>
OCIntPatch_WLine(OCNaroWrappers::OCIntSurf_LineOn2S^ Line, System::Boolean Tang);

//! Adds a vertex in the list. <br>
 /*instead*/  void AddVertex(OCNaroWrappers::OCIntPatch_Point^ Pnt) ;

//! Set the Point of index <Index> in the LineOn2S <br>
 /*instead*/  void SetPoint(Standard_Integer Index, OCNaroWrappers::OCIntPatch_Point^ Pnt) ;

//! Replaces the element of range Index in the list <br>
//!          of points. <br>
//!          The exception OutOfRange is raised when <br>
//!          Index <= 0 or Index > NbVertex. <br>
 /*instead*/  void Replace(Standard_Integer Index, OCNaroWrappers::OCIntPatch_Point^ Pnt) ;


 /*instead*/  void SetFirstPoint(Standard_Integer IndFirst) ;


 /*instead*/  void SetLastPoint(Standard_Integer IndLast) ;

//! Returns the number of intersection points. <br>
 /*instead*/  Standard_Integer NbPnts() ;

//! Returns the intersection point of range Index. <br>
 /*instead*/  OCIntSurf_PntOn2S^ Point(Standard_Integer Index) ;

//! Returns True if the line has a known First point. <br>
//!          This point is given by the method FirstPoint(). <br>
 /*instead*/  System::Boolean HasFirstPoint() ;

//! Returns True if the line has a known Last point. <br>
//!          This point is given by the method LastPoint(). <br>
 /*instead*/  System::Boolean HasLastPoint() ;

//! Returns the Point corresponding to the FirstPoint. <br>
 /*instead*/  OCIntPatch_Point^ FirstPoint() ;

//! Returns the Point corresponding to the LastPoint. <br>
 /*instead*/  OCIntPatch_Point^ LastPoint() ;

//! Returns the Point corresponding to the FirstPoint. <br>
//!          Indfirst is the index of the first in the list <br>
//!          of vertices. <br>
 /*instead*/  OCIntPatch_Point^ FirstPoint(Standard_Integer& Indfirst) ;

//! Returns the Point corresponding to the LastPoint. <br>
//!          Indlast is the index of the last in the list <br>
//!          of vertices. <br>
 /*instead*/  OCIntPatch_Point^ LastPoint(Standard_Integer& Indlast) ;


 /*instead*/  Standard_Integer NbVertex() ;

//! Returns the vertex of range Index on the line. <br>
 /*instead*/  OCIntPatch_Point^ Vertex(Standard_Integer Index) ;

//! Set the parameters of all the vertex on the line. <br>
//!          if a vertex is already in the line, <br>
//!             its parameter is modified <br>
//!          else a new point in the line is inserted. <br>
 /*instead*/  void ComputeVertexParameters(Standard_Real Tol) ;


 /*instead*/  OCIntSurf_LineOn2S^ Curve() ;


 /*instead*/  System::Boolean IsOutSurf1Box(OCNaroWrappers::OCgp_Pnt2d^ P1) ;


 /*instead*/  System::Boolean IsOutSurf2Box(OCNaroWrappers::OCgp_Pnt2d^ P1) ;


 /*instead*/  System::Boolean IsOutBox(OCNaroWrappers::OCgp_Pnt^ P) ;


 /*instead*/  void SetPeriod(Standard_Real pu1, Standard_Real pv1, Standard_Real pu2, Standard_Real pv2) ;


 /*instead*/  Standard_Real U1Period() ;


 /*instead*/  Standard_Real V1Period() ;


 /*instead*/  Standard_Real U2Period() ;


 /*instead*/  Standard_Real V2Period() ;


 /*instead*/  void SetArcOnS1(OCNaroWrappers::OCAdaptor2d_HCurve2d^ A) ;


 /*instead*/  System::Boolean HasArcOnS1() ;


 /*instead*/  OCAdaptor2d_HCurve2d^ GetArcOnS1() ;


 /*instead*/  void SetArcOnS2(OCNaroWrappers::OCAdaptor2d_HCurve2d^ A) ;


 /*instead*/  System::Boolean HasArcOnS2() ;


 /*instead*/  OCAdaptor2d_HCurve2d^ GetArcOnS2() ;


 /*instead*/  void Dump() ;

~OCIntPatch_WLine()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif

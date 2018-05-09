// File generated by CPPExt (MPV)
//
#ifndef _IntPatch_PrmPrmIntersection_OCWrappers_HeaderFile
#define _IntPatch_PrmPrmIntersection_OCWrappers_HeaderFile

// include native header
#include <IntPatch_PrmPrmIntersection.hxx>
#include "../Converter.h"


#include "IntPatch_SequenceOfLine.h"


namespace OCNaroWrappers
{

ref class OCAdaptor3d_HSurface;
ref class OCIntPatch_Polyhedron;
ref class OCAdaptor3d_TopolTool;
ref class OCIntSurf_ListOfPntOn2S;
ref class OCIntPatch_Line;
ref class OCIntPatch_PrmPrmIntersection_T3Bits;
ref class OCIntSurf_LineOn2S;


//! Implementation  of   the Intersection      between two <br>
//!          bi-parametrised surfaces. <br>
//! <br>
//!          To  avoid  multiple constructions of  the approximated <br>
//!          polyhedron  of the    surfaces, the algorithm  can  be <br>
//!          called whith the  two  surfaces  and their  associated <br>
//!          polyhedron. <br>
//! <br>
public ref class OCIntPatch_PrmPrmIntersection  {

protected:
  IntPatch_PrmPrmIntersection* nativeHandle;
  OCIntPatch_PrmPrmIntersection(OCDummy^) {};

public:
  property IntPatch_PrmPrmIntersection* Handle
  {
    IntPatch_PrmPrmIntersection* get()
    {
      return nativeHandle;
    }
  }


// constructor from native
OCIntPatch_PrmPrmIntersection(IntPatch_PrmPrmIntersection* nativeHandle);

// Methods PUBLIC

//! Empty Constructor <br>
OCIntPatch_PrmPrmIntersection();

//! Performs the intersection between <Caro1>  and <br>
//!          <Caro2>.  Associated Polyhedrons <Polyhedron1> <br>
//!          and <Polyhedron2> are given. <br>
 /*instead*/  void Perform(OCNaroWrappers::OCAdaptor3d_HSurface^ Caro1, OCNaroWrappers::OCIntPatch_Polyhedron^ Polyhedron1, OCNaroWrappers::OCAdaptor3d_TopolTool^ Domain1, OCNaroWrappers::OCAdaptor3d_HSurface^ Caro2, OCNaroWrappers::OCIntPatch_Polyhedron^ Polyhedron2, OCNaroWrappers::OCAdaptor3d_TopolTool^ Domain2, Standard_Real TolTangency, Standard_Real Epsilon, Standard_Real Deflection, Standard_Real Increment) ;


 /*instead*/  void Perform(OCNaroWrappers::OCAdaptor3d_HSurface^ Caro1, OCNaroWrappers::OCIntPatch_Polyhedron^ Polyhedron1, OCNaroWrappers::OCAdaptor3d_TopolTool^ Domain1, Standard_Real TolTangency, Standard_Real Epsilon, Standard_Real Deflection, Standard_Real Increment) ;

//! Performs the intersection between <Caro1>  and <br>
//!          <Caro2>. The method computes the polyhedron on <br>
//!          each surface. <br>
 /*instead*/  void Perform(OCNaroWrappers::OCAdaptor3d_HSurface^ Caro1, OCNaroWrappers::OCAdaptor3d_TopolTool^ Domain1, OCNaroWrappers::OCAdaptor3d_HSurface^ Caro2, OCNaroWrappers::OCAdaptor3d_TopolTool^ Domain2, Standard_Real TolTangency, Standard_Real Epsilon, Standard_Real Deflection, Standard_Real Increment, System::Boolean ClearFlag) ;

//! Performs the intersection between <Caro1>  and <br>
//!          <Caro2>. The method computes the polyhedron on <br>
//!          each surface. <br>
 /*instead*/  void Perform(OCNaroWrappers::OCAdaptor3d_HSurface^ Caro1, OCNaroWrappers::OCAdaptor3d_TopolTool^ Domain1, OCNaroWrappers::OCAdaptor3d_HSurface^ Caro2, OCNaroWrappers::OCAdaptor3d_TopolTool^ Domain2, Standard_Real TolTangency, Standard_Real Epsilon, Standard_Real Deflection, Standard_Real Increment, OCNaroWrappers::OCIntSurf_ListOfPntOn2S^ ListOfPnts, System::Boolean RestrictLine) ;

//! Performs the intersection between <Caro1>  and <br>
//!          <Caro2>. The method computes the polyhedron on <br>
//!          each surface. <br>
 /*instead*/  void Perform(OCNaroWrappers::OCAdaptor3d_HSurface^ Caro1, OCNaroWrappers::OCAdaptor3d_TopolTool^ Domain1, OCNaroWrappers::OCAdaptor3d_HSurface^ Caro2, OCNaroWrappers::OCAdaptor3d_TopolTool^ Domain2, Standard_Real U1, Standard_Real V1, Standard_Real U2, Standard_Real V2, Standard_Real TolTangency, Standard_Real Epsilon, Standard_Real Deflection, Standard_Real Increment) ;

//! Performs the intersection between <Caro1>  and <br>
//!          <Caro2>. The method computes the polyhedron on <br>
//!          each surface. <br>
 /*instead*/  void Perform(OCNaroWrappers::OCAdaptor3d_HSurface^ Caro1, OCNaroWrappers::OCAdaptor3d_TopolTool^ Domain1, Standard_Real TolTangency, Standard_Real Epsilon, Standard_Real Deflection, Standard_Real Increment) ;

//! Performs  the intersection between <Caro1> and <br>
//!          <Caro2>. <br>
//! <br>
//!          The polyhedron which approximates     <Caro2>, <br>
//!          <Polyhedron2> is given. The other one is <br>
//!          computed. <br>
 /*instead*/  void Perform(OCNaroWrappers::OCAdaptor3d_HSurface^ Caro1, OCNaroWrappers::OCAdaptor3d_TopolTool^ Domain1, OCNaroWrappers::OCAdaptor3d_HSurface^ Caro2, OCNaroWrappers::OCIntPatch_Polyhedron^ Polyhedron2, OCNaroWrappers::OCAdaptor3d_TopolTool^ Domain2, Standard_Real TolTangency, Standard_Real Epsilon, Standard_Real Deflection, Standard_Real Increment) ;

//! Performs  the intersection between <Caro1> and <br>
//!          <Caro2>. <br>
//! <br>
//!          The polyhedron which approximates     <Caro1>, <br>
//!          <Polyhedron1> is given. The other one is <br>
//!          computed. <br>
 /*instead*/  void Perform(OCNaroWrappers::OCAdaptor3d_HSurface^ Caro1, OCNaroWrappers::OCIntPatch_Polyhedron^ Polyhedron1, OCNaroWrappers::OCAdaptor3d_TopolTool^ Domain1, OCNaroWrappers::OCAdaptor3d_HSurface^ Caro2, OCNaroWrappers::OCAdaptor3d_TopolTool^ Domain2, Standard_Real TolTangency, Standard_Real Epsilon, Standard_Real Deflection, Standard_Real Increment) ;

//! Returns true if the calculus was succesfull. <br>
 /*instead*/  System::Boolean IsDone() ;

//! Returns true if the is no intersection. <br>
 /*instead*/  System::Boolean IsEmpty() ;

//! Returns the number of intersection lines. <br>
 /*instead*/  Standard_Integer NbLines() ;

//! Returns the line of range Index. <br>
//!          An exception is raised if Index<=0 or Index>NbLine. <br>
 /*instead*/  OCIntPatch_Line^ Line(Standard_Integer Index) ;

//! Computes about <NbPoints>  Intersection Points  on <br>
//!          the Line <IndexLine> between  the Points of  Index <br>
//!          <LowPoint> and <HighPoint>. <br>
//! <br>
//!          All  the points  of the line  of index <IndexLine> <br>
//!          with an index  between <LowPoint>  and <HighPoint> <br>
//!          are in the returned  line. New Points are inserted <br>
//!          between existing points  if  those  points are not <br>
//!          too closed. <br>
//! <br>
//!          An exception is raised if Index<=0 or Index>NbLine. <br>
//!          or if IsDone returns False <br>
 /*instead*/  OCIntPatch_Line^ NewLine(OCNaroWrappers::OCAdaptor3d_HSurface^ Caro1, OCNaroWrappers::OCAdaptor3d_HSurface^ Caro2, Standard_Integer IndexLine, Standard_Integer LowPoint, Standard_Integer HighPoint, Standard_Integer NbPoints) ;


 /*instead*/  Standard_Integer GrilleInteger(Standard_Integer ix, Standard_Integer iy, Standard_Integer iz) ;


 /*instead*/  void IntegerGrille(Standard_Integer t, Standard_Integer& ix, Standard_Integer& iy, Standard_Integer& iz) ;


 /*instead*/  Standard_Integer DansGrille(Standard_Integer t) ;


 /*instead*/  Standard_Integer NbPointsGrille() ;


 /*instead*/  void RemplitLin(Standard_Integer x1, Standard_Integer y1, Standard_Integer z1, Standard_Integer x2, Standard_Integer y2, Standard_Integer z2, OCNaroWrappers::OCIntPatch_PrmPrmIntersection_T3Bits^ Map) ;


 /*instead*/  void RemplitTri(Standard_Integer x1, Standard_Integer y1, Standard_Integer z1, Standard_Integer x2, Standard_Integer y2, Standard_Integer z2, Standard_Integer x3, Standard_Integer y3, Standard_Integer z3, OCNaroWrappers::OCIntPatch_PrmPrmIntersection_T3Bits^ Map) ;


 /*instead*/  void Remplit(Standard_Integer a, Standard_Integer b, Standard_Integer c, OCNaroWrappers::OCIntPatch_PrmPrmIntersection_T3Bits^ Map) ;


 /*instead*/  Standard_Integer CodeReject(Standard_Real x1, Standard_Real y1, Standard_Real z1, Standard_Real x2, Standard_Real y2, Standard_Real z2, Standard_Real x3, Standard_Real y3, Standard_Real z3) ;


 /*instead*/  void PointDepart(OCNaroWrappers::OCIntSurf_LineOn2S^ LineOn2S, OCNaroWrappers::OCAdaptor3d_HSurface^ S1, Standard_Integer SU1, Standard_Integer SV1, OCNaroWrappers::OCAdaptor3d_HSurface^ S2, Standard_Integer SU2, Standard_Integer SV2) ;

~OCIntPatch_PrmPrmIntersection()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif

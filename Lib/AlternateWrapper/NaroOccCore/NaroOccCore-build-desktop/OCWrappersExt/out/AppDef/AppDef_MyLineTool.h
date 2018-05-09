// File generated by CPPExt (MPV)
//
#ifndef _AppDef_MyLineTool_OCWrappers_HeaderFile
#define _AppDef_MyLineTool_OCWrappers_HeaderFile

// include native header
#include <AppDef_MyLineTool.hxx>
#include "../Converter.h"


#include "../Approx/Approx_Status.h"


namespace OCNaroWrappers
{

ref class OCAppDef_MultiLine;
ref class OCTColgp_Array1OfPnt;
ref class OCTColgp_Array1OfPnt2d;
ref class OCTColgp_Array1OfVec;
ref class OCTColgp_Array1OfVec2d;



public ref class OCAppDef_MyLineTool  {

protected:
  AppDef_MyLineTool* nativeHandle;
  OCAppDef_MyLineTool(OCDummy^) {};

public:
  property AppDef_MyLineTool* Handle
  {
    AppDef_MyLineTool* get()
    {
      return nativeHandle;
    }
  }


// constructor from native
OCAppDef_MyLineTool(AppDef_MyLineTool* nativeHandle);

// Methods PUBLIC

//! Returns the first index of multipoints of the MultiLine. <br>
static /*instead*/  Standard_Integer FirstPoint(OCNaroWrappers::OCAppDef_MultiLine^ ML) ;

//! Returns the last index of multipoints of the MultiLine. <br>
static /*instead*/  Standard_Integer LastPoint(OCNaroWrappers::OCAppDef_MultiLine^ ML) ;

//! Returns the number of 2d points of a MultiLine. <br>
static /*instead*/  Standard_Integer NbP2d(OCNaroWrappers::OCAppDef_MultiLine^ ML) ;

//! Returns the number of 3d points of a MultiLine. <br>
static /*instead*/  Standard_Integer NbP3d(OCNaroWrappers::OCAppDef_MultiLine^ ML) ;

//! returns the 3d points of the multipoint <MPointIndex> <br>
//!          when only 3d points exist. <br>
static /*instead*/  void Value(OCNaroWrappers::OCAppDef_MultiLine^ ML, Standard_Integer MPointIndex, OCNaroWrappers::OCTColgp_Array1OfPnt^ tabPt) ;

//! returns the 2d points of the multipoint <MPointIndex> <br>
//!          when only 2d points exist. <br>
static /*instead*/  void Value(OCNaroWrappers::OCAppDef_MultiLine^ ML, Standard_Integer MPointIndex, OCNaroWrappers::OCTColgp_Array1OfPnt2d^ tabPt2d) ;

//! returns the 3d and 2d points of the multipoint <br>
//!          <MPointIndex>. <br>
static /*instead*/  void Value(OCNaroWrappers::OCAppDef_MultiLine^ ML, Standard_Integer MPointIndex, OCNaroWrappers::OCTColgp_Array1OfPnt^ tabPt, OCNaroWrappers::OCTColgp_Array1OfPnt2d^ tabPt2d) ;

//! returns the 3d points of the multipoint <MPointIndex> <br>
//!          when only 3d points exist. <br>
static /*instead*/  System::Boolean Tangency(OCNaroWrappers::OCAppDef_MultiLine^ ML, Standard_Integer MPointIndex, OCNaroWrappers::OCTColgp_Array1OfVec^ tabV) ;

//! returns the 2d tangency points of the multipoint <br>
//!          <MPointIndex> only when 2d points exist. <br>
static /*instead*/  System::Boolean Tangency(OCNaroWrappers::OCAppDef_MultiLine^ ML, Standard_Integer MPointIndex, OCNaroWrappers::OCTColgp_Array1OfVec2d^ tabV2d) ;

//! returns the 3d and 2d points of the multipoint <br>
//!          <MPointIndex>. <br>
static /*instead*/  System::Boolean Tangency(OCNaroWrappers::OCAppDef_MultiLine^ ML, Standard_Integer MPointIndex, OCNaroWrappers::OCTColgp_Array1OfVec^ tabV, OCNaroWrappers::OCTColgp_Array1OfVec2d^ tabV2d) ;

//! returns the 3d curvatures of the multipoint <MPointIndex> <br>
//!          when only 3d points exist. <br>
static /*instead*/  System::Boolean Curvature(OCNaroWrappers::OCAppDef_MultiLine^ ML, Standard_Integer MPointIndex, OCNaroWrappers::OCTColgp_Array1OfVec^ tabV) ;

//! returns the 2d curvatures of the multipoint <br>
//!          <MPointIndex> only when 2d points exist. <br>
static /*instead*/  System::Boolean Curvature(OCNaroWrappers::OCAppDef_MultiLine^ ML, Standard_Integer MPointIndex, OCNaroWrappers::OCTColgp_Array1OfVec2d^ tabV2d) ;

//! returns the 3d and 2d curvatures of the multipoint <br>
//!          <MPointIndex>. <br>
static /*instead*/  System::Boolean Curvature(OCNaroWrappers::OCAppDef_MultiLine^ ML, Standard_Integer MPointIndex, OCNaroWrappers::OCTColgp_Array1OfVec^ tabV, OCNaroWrappers::OCTColgp_Array1OfVec2d^ tabV2d) ;

//!  returns NoPointsAdded <br>
static /*instead*/  OCApprox_Status WhatStatus(OCNaroWrappers::OCAppDef_MultiLine^ ML, Standard_Integer I1, Standard_Integer I2) ;

//! Is never called in the algorithms. <br>
//!          Nothing is done. <br>
static /*instead*/  OCAppDef_MultiLine^ MakeMLBetween(OCNaroWrappers::OCAppDef_MultiLine^ ML, Standard_Integer I1, Standard_Integer I2, Standard_Integer NbPMin) ;

~OCAppDef_MyLineTool()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
// File generated by CPPExt (Transient)
//
#ifndef _GeomFill_DraftTrihedron_OCWrappers_HeaderFile
#define _GeomFill_DraftTrihedron_OCWrappers_HeaderFile

// include the wrapped class
#include <GeomFill_DraftTrihedron.hxx>
#include "../Converter.h"

#include "GeomFill_TrihedronLaw.h"

#include "../gp/gp_Vec.h"
#include "../GeomAbs/GeomAbs_Shape.h"


namespace OCNaroWrappers
{

ref class OCgp_Vec;
ref class OCGeomFill_TrihedronLaw;
ref class OCTColStd_Array1OfReal;



public ref class OCGeomFill_DraftTrihedron : OCGeomFill_TrihedronLaw {

protected:
  // dummy constructor;
  OCGeomFill_DraftTrihedron(OCDummy^) : OCGeomFill_TrihedronLaw((OCDummy^)nullptr) {};

public:

// constructor from native
OCGeomFill_DraftTrihedron(Handle(GeomFill_DraftTrihedron)* nativeHandle);

// Methods PUBLIC


OCGeomFill_DraftTrihedron(OCNaroWrappers::OCgp_Vec^ BiNormal, Standard_Real Angle);


 /*instead*/  void SetAngle(Standard_Real Angle) ;


virtual /*instead*/  OCGeomFill_TrihedronLaw^ Copy() ;

//! compute Triedrhon and derivative Trihedron on curve at <br>
//!          parameter <Param> <br>
//!  Warning : It used  only for C1 or C2 aproximation <br>
virtual /*instead*/  System::Boolean D0(Standard_Real Param, OCNaroWrappers::OCgp_Vec^ Tangent, OCNaroWrappers::OCgp_Vec^ Normal, OCNaroWrappers::OCgp_Vec^ BiNormal) ;

//! compute Trihedron on curve <br>
//!          first and seconde  derivatives. <br>
//!  Warning : It used only for C2 aproximation <br>
virtual /*instead*/  System::Boolean D1(Standard_Real Param, OCNaroWrappers::OCgp_Vec^ Tangent, OCNaroWrappers::OCgp_Vec^ DTangent, OCNaroWrappers::OCgp_Vec^ Normal, OCNaroWrappers::OCgp_Vec^ DNormal, OCNaroWrappers::OCgp_Vec^ BiNormal, OCNaroWrappers::OCgp_Vec^ DBiNormal) override;


virtual /*instead*/  System::Boolean D2(Standard_Real Param, OCNaroWrappers::OCgp_Vec^ Tangent, OCNaroWrappers::OCgp_Vec^ DTangent, OCNaroWrappers::OCgp_Vec^ D2Tangent, OCNaroWrappers::OCgp_Vec^ Normal, OCNaroWrappers::OCgp_Vec^ DNormal, OCNaroWrappers::OCgp_Vec^ D2Normal, OCNaroWrappers::OCgp_Vec^ BiNormal, OCNaroWrappers::OCgp_Vec^ DBiNormal, OCNaroWrappers::OCgp_Vec^ D2BiNormal) override;

//! Returns  the number  of  intervals for  continuity <br>
//!          <S>. <br>
//!          May be one if Continuity(me) >= <S> <br>
virtual /*instead*/  Standard_Integer NbIntervals(OCGeomAbs_Shape S) ;

//! Stores in <T> the  parameters bounding the intervals <br>
//!          of continuity <S>. <br>
//! <br>
//!          The array must provide  enough room to  accomodate <br>
//!          for the parameters. i.e. T.Length() > NbIntervals() <br>
virtual /*instead*/  void Intervals(OCNaroWrappers::OCTColStd_Array1OfReal^ T, OCGeomAbs_Shape S) ;

//! Get average value of Tangent(t) and Normal(t) it is usefull to <br>
//!          make fast approximation of rational  surfaces. <br>
virtual /*instead*/  void GetAverageLaw(OCNaroWrappers::OCgp_Vec^ ATangent, OCNaroWrappers::OCgp_Vec^ ANormal, OCNaroWrappers::OCgp_Vec^ ABiNormal) ;

//! Say if the law is Constant. <br>
virtual /*instead*/  System::Boolean IsConstant() override;

//! Return True. <br>
virtual /*instead*/  System::Boolean IsOnlyBy3dCurve() override;

~OCGeomFill_DraftTrihedron()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif

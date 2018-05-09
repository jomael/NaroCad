// File generated by CPPExt (Transient)
//
#ifndef _GeomFill_DegeneratedBound_OCWrappers_HeaderFile
#define _GeomFill_DegeneratedBound_OCWrappers_HeaderFile

// include the wrapped class
#include <GeomFill_DegeneratedBound.hxx>
#include "../Converter.h"

#include "GeomFill_Boundary.h"

#include "../gp/gp_Pnt.h"


namespace OCNaroWrappers
{

ref class OCgp_Pnt;
ref class OCgp_Vec;


//! Description of a degenerated boundary (a point). <br>
public ref class OCGeomFill_DegeneratedBound : OCGeomFill_Boundary {

protected:
  // dummy constructor;
  OCGeomFill_DegeneratedBound(OCDummy^) : OCGeomFill_Boundary((OCDummy^)nullptr) {};

public:

// constructor from native
OCGeomFill_DegeneratedBound(Handle(GeomFill_DegeneratedBound)* nativeHandle);

// Methods PUBLIC


OCGeomFill_DegeneratedBound(OCNaroWrappers::OCgp_Pnt^ Point, Standard_Real First, Standard_Real Last, Standard_Real Tol3d, Standard_Real Tolang);


 /*instead*/  OCgp_Pnt^ Value(Standard_Real U) ;


 /*instead*/  void D1(Standard_Real U, OCNaroWrappers::OCgp_Pnt^ P, OCNaroWrappers::OCgp_Vec^ V) ;


 /*instead*/  void Reparametrize(Standard_Real First, Standard_Real Last, System::Boolean HasDF, System::Boolean HasDL, Standard_Real DF, Standard_Real DL, System::Boolean Rev) ;


 /*instead*/  void Bounds(Standard_Real& First, Standard_Real& Last) ;


 /*instead*/  System::Boolean IsDegenerated() ;

~OCGeomFill_DegeneratedBound()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif

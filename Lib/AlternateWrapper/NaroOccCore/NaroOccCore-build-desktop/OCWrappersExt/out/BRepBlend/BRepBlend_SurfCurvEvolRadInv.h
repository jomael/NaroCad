// File generated by CPPExt (MPV)
//
#ifndef _BRepBlend_SurfCurvEvolRadInv_OCWrappers_HeaderFile
#define _BRepBlend_SurfCurvEvolRadInv_OCWrappers_HeaderFile

// include native header
#include <BRepBlend_SurfCurvEvolRadInv.hxx>
#include "../Converter.h"

#include "../Blend/Blend_SurfCurvFuncInv.h"

#include "../Blend/Blend_SurfCurvFuncInv.h"


namespace OCNaroWrappers
{

ref class OCAdaptor3d_HSurface;
ref class OCAdaptor3d_HCurve;
ref class OCAdaptor2d_HCurve2d;
ref class OCLaw_Function;
ref class OCmath_Vector;
ref class OCmath_Matrix;


//! Class     used   to   compute  a    solution   of  the <br>
//!          surfRstConstRad  problem  on a done restriction of the <br>
//!          surface. <br>
//!          The vector  <X> used in  Value, Values and Derivatives <br>
//!          methods  has   to  be the   vector  of  the parametric <br>
//!          coordinates  wguide, wcurv, wrst  where  wguide is the <br>
//!          parameter on the guide line, wcurv is the parameter on <br>
//!          the curve, wrst is the parameter on the restriction on <br>
//!          the surface. <br>
public ref class OCBRepBlend_SurfCurvEvolRadInv  : public OCBlend_SurfCurvFuncInv {

protected:
  // dummy constructor;
  OCBRepBlend_SurfCurvEvolRadInv(OCDummy^) : OCBlend_SurfCurvFuncInv((OCDummy^)nullptr) {};

public:

// constructor from native
OCBRepBlend_SurfCurvEvolRadInv(BRepBlend_SurfCurvEvolRadInv* nativeHandle);

// Methods PUBLIC


OCBRepBlend_SurfCurvEvolRadInv(OCNaroWrappers::OCAdaptor3d_HSurface^ S, OCNaroWrappers::OCAdaptor3d_HCurve^ C, OCNaroWrappers::OCAdaptor3d_HCurve^ Cg, OCNaroWrappers::OCLaw_Function^ Evol);


 /*instead*/  void Set(Standard_Integer Choix) ;

//! returns 3. <br>
 /*instead*/  Standard_Integer NbEquations() ;

//! computes the values <F> of the Functions for the <br>
//!          variable <X>. <br>
//!          Returns True if the computation was done successfully, <br>
//!          False otherwise. <br>
 /*instead*/  System::Boolean Value(OCNaroWrappers::OCmath_Vector^ X, OCNaroWrappers::OCmath_Vector^ F) ;

//! returns the values <D> of the derivatives for the <br>
//!          variable <X>. <br>
//!          Returns True if the computation was done successfully, <br>
//!          False otherwise. <br>
 /*instead*/  System::Boolean Derivatives(OCNaroWrappers::OCmath_Vector^ X, OCNaroWrappers::OCmath_Matrix^ D) ;

//! returns the values <F> of the functions and the derivatives <br>
//!          <D> for the variable <X>. <br>
//!          Returns True if the computation was done successfully, <br>
//!          False otherwise. <br>
 /*instead*/  System::Boolean Values(OCNaroWrappers::OCmath_Vector^ X, OCNaroWrappers::OCmath_Vector^ F, OCNaroWrappers::OCmath_Matrix^ D) ;

//! Set the restriction on which a solution has to be found. <br>
 /*instead*/  void Set(OCNaroWrappers::OCAdaptor2d_HCurve2d^ Rst) ;

//! Returns in the vector Tolerance the parametric tolerance <br>
//!          for each of the 3 variables; <br>
//!          Tol is the tolerance used in 3d space. <br>
 /*instead*/  void GetTolerance(OCNaroWrappers::OCmath_Vector^ Tolerance, Standard_Real Tol) ;

//! Returns in the vector InfBound the lowest values allowed <br>
//!          for each of the 3 variables. <br>
//!          Returns in the vector SupBound the greatest values allowed <br>
//!          for each of the 3 variables. <br>
 /*instead*/  void GetBounds(OCNaroWrappers::OCmath_Vector^ InfBound, OCNaroWrappers::OCmath_Vector^ SupBound) ;

//! Returns Standard_True if Sol is a zero of the function. <br>
//!          Tol is the tolerance used in 3d space. <br>
 /*instead*/  System::Boolean IsSolution(OCNaroWrappers::OCmath_Vector^ Sol, Standard_Real Tol) ;

~OCBRepBlend_SurfCurvEvolRadInv()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif

// File generated by CPPExt (MPV)
//
#ifndef _BlendFunc_EvolRadInv_OCWrappers_HeaderFile
#define _BlendFunc_EvolRadInv_OCWrappers_HeaderFile

// include native header
#include <BlendFunc_EvolRadInv.hxx>
#include "../Converter.h"

#include "../Blend/Blend_FuncInv.h"

#include "../Blend/Blend_FuncInv.h"


namespace OCNaroWrappers
{

ref class OCAdaptor3d_HSurface;
ref class OCAdaptor3d_HCurve;
ref class OCAdaptor2d_HCurve2d;
ref class OCLaw_Function;
ref class OCmath_Vector;
ref class OCmath_Matrix;



public ref class OCBlendFunc_EvolRadInv  : public OCBlend_FuncInv {

protected:
  // dummy constructor;
  OCBlendFunc_EvolRadInv(OCDummy^) : OCBlend_FuncInv((OCDummy^)nullptr) {};

public:

// constructor from native
OCBlendFunc_EvolRadInv(BlendFunc_EvolRadInv* nativeHandle);

// Methods PUBLIC


OCBlendFunc_EvolRadInv(OCNaroWrappers::OCAdaptor3d_HSurface^ S1, OCNaroWrappers::OCAdaptor3d_HSurface^ S2, OCNaroWrappers::OCAdaptor3d_HCurve^ C, OCNaroWrappers::OCLaw_Function^ Law);


 /*instead*/  void Set(System::Boolean OnFirst, OCNaroWrappers::OCAdaptor2d_HCurve2d^ COnSurf) ;


 /*instead*/  void GetTolerance(OCNaroWrappers::OCmath_Vector^ Tolerance, Standard_Real Tol) ;


 /*instead*/  void GetBounds(OCNaroWrappers::OCmath_Vector^ InfBound, OCNaroWrappers::OCmath_Vector^ SupBound) ;


 /*instead*/  System::Boolean IsSolution(OCNaroWrappers::OCmath_Vector^ Sol, Standard_Real Tol) ;

//! returns the number of equations of the function. <br>
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


 /*instead*/  void Set(Standard_Integer Choix) ;

~OCBlendFunc_EvolRadInv()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif

// File generated by CPPExt (MPV)
//
#ifndef _math_GaussSetIntegration_OCWrappers_HeaderFile
#define _math_GaussSetIntegration_OCWrappers_HeaderFile

// include native header
#include <math_GaussSetIntegration.hxx>
#include "../Converter.h"


#include "math_Vector.h"


namespace OCNaroWrappers
{

ref class OCmath_FunctionSet;
ref class OCmath_Vector;
ref class OCmath_IntegerVector;


//! -- This class implements the integration of a set of N <br>
//!              functions of M  variables variables between the <br>
//!              parameter bounds Lower[a..b] and Upper[a..b]. <br>
//!  Warning: - The case M>1 is not implemented. <br>
public ref class OCmath_GaussSetIntegration  {

protected:
  math_GaussSetIntegration* nativeHandle;
  OCmath_GaussSetIntegration(OCDummy^) {};

public:
  property math_GaussSetIntegration* Handle
  {
    math_GaussSetIntegration* get()
    {
      return nativeHandle;
    }
  }


// constructor from native
OCmath_GaussSetIntegration(math_GaussSetIntegration* nativeHandle);

// Methods PUBLIC


//! The Gauss-Legendre integration with Order = points of <br>
//! integration for each unknow, is done on the function F <br>
//! between the bounds Lower and Upper. <br>
OCmath_GaussSetIntegration(OCNaroWrappers::OCmath_FunctionSet^ F, OCNaroWrappers::OCmath_Vector^ Lower, OCNaroWrappers::OCmath_Vector^ Upper, OCNaroWrappers::OCmath_IntegerVector^ Order);

//! returns True if all has been correctly done. <br>
 /*instead*/  System::Boolean IsDone() ;

//! returns the value of the integral. <br>
 /*instead*/  OCmath_Vector^ Value() ;

//! Prints information on the current state of the object. <br>
 /*instead*/  void Dump(Standard_OStream& o) ;

~OCmath_GaussSetIntegration()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif

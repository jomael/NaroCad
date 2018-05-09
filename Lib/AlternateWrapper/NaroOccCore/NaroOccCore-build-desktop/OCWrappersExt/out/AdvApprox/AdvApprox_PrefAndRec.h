// File generated by CPPExt (MPV)
//
#ifndef _AdvApprox_PrefAndRec_OCWrappers_HeaderFile
#define _AdvApprox_PrefAndRec_OCWrappers_HeaderFile

// include native header
#include <AdvApprox_PrefAndRec.hxx>
#include "../Converter.h"

#include "AdvApprox_Cutting.h"

#include "../TColStd/TColStd_Array1OfReal.h"
#include "AdvApprox_Cutting.h"


namespace OCNaroWrappers
{

ref class OCTColStd_Array1OfReal;



//! inherits class Cutting; contains a list of preferential points (pi)i <br>
//! and a list of Recommended points used in cutting management. <br>
public ref class OCAdvApprox_PrefAndRec  : public OCAdvApprox_Cutting {

protected:
  // dummy constructor;
  OCAdvApprox_PrefAndRec(OCDummy^) : OCAdvApprox_Cutting((OCDummy^)nullptr) {};

public:

// constructor from native
OCAdvApprox_PrefAndRec(AdvApprox_PrefAndRec* nativeHandle);

// Methods PUBLIC


OCAdvApprox_PrefAndRec(OCNaroWrappers::OCTColStd_Array1OfReal^ RecomendedCut, OCNaroWrappers::OCTColStd_Array1OfReal^ PrefferedCut, Standard_Real Weight);


//!     cuting value is <br>
//!    - the recommended point nerest of (a+b)/2 <br>
//!      if pi is in ]a,b[ or else <br>
//!   -  the preferential point nearest of (a+b) / 2 <br>
//!     if pi is in ](r*a+b)/(r+1) , (a+r*b)/(r+1)[ where r = Weight <br>
//!   -  or (a+b)/2 else. <br>
virtual /*instead*/  System::Boolean Value(Standard_Real a, Standard_Real b, Standard_Real& cuttingvalue) ;

~OCAdvApprox_PrefAndRec()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif

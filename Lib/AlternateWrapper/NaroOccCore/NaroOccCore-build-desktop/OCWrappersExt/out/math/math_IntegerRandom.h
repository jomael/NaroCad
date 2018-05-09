// File generated by CPPExt (MPV)
//
#ifndef _math_IntegerRandom_OCWrappers_HeaderFile
#define _math_IntegerRandom_OCWrappers_HeaderFile

// include native header
#include <math_IntegerRandom.hxx>
#include "../Converter.h"




namespace OCNaroWrappers
{




//! This class implements an integer random number generator. <br>
public ref class OCmath_IntegerRandom  {

protected:
  math_IntegerRandom* nativeHandle;
  OCmath_IntegerRandom(OCDummy^) {};

public:
  property math_IntegerRandom* Handle
  {
    math_IntegerRandom* get()
    {
      return nativeHandle;
    }
  }


// constructor from native
OCmath_IntegerRandom(math_IntegerRandom* nativeHandle);

// Methods PUBLIC


//! creates a Integer random generator between the values Lower and Upper. <br>
OCmath_IntegerRandom(Standard_Integer Lower, Standard_Integer Upper);

//! reinitializes the random generator <br>
 /*instead*/  void Reset() ;

//! returns the next random number. <br>
 /*instead*/  Standard_Integer Next() ;

~OCmath_IntegerRandom()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif

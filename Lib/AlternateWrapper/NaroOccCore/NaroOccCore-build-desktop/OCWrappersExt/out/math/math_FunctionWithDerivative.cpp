// File generated by CPPExt (CPP file)
//

#include "math_FunctionWithDerivative.h"
#include "../Converter.h"


using namespace OCNaroWrappers;

OCmath_FunctionWithDerivative::OCmath_FunctionWithDerivative(math_FunctionWithDerivative* nativeHandle) : OCmath_Function((OCDummy^)nullptr)

{
  this->nativeHandle = nativeHandle;
}

 void OCmath_FunctionWithDerivative::Delete()
{
  ((math_FunctionWithDerivative*)nativeHandle)->Delete();
}



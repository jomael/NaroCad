// File generated by CPPExt (CPP file)
//

#include "Blend_FuncInv.h"
#include "../Converter.h"
#include "../math/math_Vector.h"
#include "../math/math_Matrix.h"
#include "../Adaptor2d/Adaptor2d_HCurve2d.h"


using namespace OCNaroWrappers;

OCBlend_FuncInv::OCBlend_FuncInv(Blend_FuncInv* nativeHandle) : OCmath_FunctionSetWithDerivatives((OCDummy^)nullptr)

{
  this->nativeHandle = nativeHandle;
}

 Standard_Integer OCBlend_FuncInv::NbVariables()
{
  return ((Blend_FuncInv*)nativeHandle)->NbVariables();
}


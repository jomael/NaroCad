// File generated by CPPExt (CPP file)
//

#include "Blend_SurfCurvFuncInv.h"
#include "../Converter.h"
#include "../math/math_Vector.h"
#include "../math/math_Matrix.h"
#include "../Adaptor2d/Adaptor2d_HCurve2d.h"


using namespace OCNaroWrappers;

OCBlend_SurfCurvFuncInv::OCBlend_SurfCurvFuncInv(Blend_SurfCurvFuncInv* nativeHandle) : OCmath_FunctionSetWithDerivatives((OCDummy^)nullptr)

{
  this->nativeHandle = nativeHandle;
}

 Standard_Integer OCBlend_SurfCurvFuncInv::NbVariables()
{
  return ((Blend_SurfCurvFuncInv*)nativeHandle)->NbVariables();
}


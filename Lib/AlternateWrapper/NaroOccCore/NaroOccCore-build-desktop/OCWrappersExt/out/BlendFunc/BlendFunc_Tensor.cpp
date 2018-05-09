// File generated by CPPExt (CPP file)
//

#include "BlendFunc_Tensor.h"
#include "../Converter.h"
#include "../math/math_Vector.h"
#include "../math/math_Matrix.h"


using namespace OCNaroWrappers;

OCBlendFunc_Tensor::OCBlendFunc_Tensor(BlendFunc_Tensor* nativeHandle) 
{
  this->nativeHandle = nativeHandle;
}

OCBlendFunc_Tensor::OCBlendFunc_Tensor(Standard_Integer NbRow, Standard_Integer NbCol, Standard_Integer NbMat) 
{
  nativeHandle = new BlendFunc_Tensor(NbRow, NbCol, NbMat);
}

 void OCBlendFunc_Tensor::Init(Standard_Real InitialValue)
{
  ((BlendFunc_Tensor*)nativeHandle)->Init(InitialValue);
}

 Standard_Real OCBlendFunc_Tensor::Value(Standard_Integer Row, Standard_Integer Col, Standard_Integer Mat)
{
  return ((BlendFunc_Tensor*)nativeHandle)->Value(Row, Col, Mat);
}

 Standard_Real OCBlendFunc_Tensor::ChangeValue(Standard_Integer Row, Standard_Integer Col, Standard_Integer Mat)
{
  return ((BlendFunc_Tensor*)nativeHandle)->ChangeValue(Row, Col, Mat);
}

 void OCBlendFunc_Tensor::Multiply(OCNaroWrappers::OCmath_Vector^ Right, OCNaroWrappers::OCmath_Matrix^ Product)
{
  ((BlendFunc_Tensor*)nativeHandle)->Multiply(*((math_Vector*)Right->Handle), *((math_Matrix*)Product->Handle));
}



// File generated by CPPExt (CPP file)
//

#include "IntTools_SurfaceRangeSample.h"
#include "../Converter.h"
#include "IntTools_CurveRangeSample.h"
#include "IntTools_Range.h"


using namespace OCNaroWrappers;

OCIntTools_SurfaceRangeSample::OCIntTools_SurfaceRangeSample(IntTools_SurfaceRangeSample* nativeHandle) 
{
  this->nativeHandle = nativeHandle;
}

OCIntTools_SurfaceRangeSample::OCIntTools_SurfaceRangeSample() 
{
  nativeHandle = new IntTools_SurfaceRangeSample();
}

OCIntTools_SurfaceRangeSample::OCIntTools_SurfaceRangeSample(Standard_Integer theIndexU, Standard_Integer theDepthU, Standard_Integer theIndexV, Standard_Integer theDepthV) 
{
  nativeHandle = new IntTools_SurfaceRangeSample(theIndexU, theDepthU, theIndexV, theDepthV);
}

OCIntTools_SurfaceRangeSample::OCIntTools_SurfaceRangeSample(OCNaroWrappers::OCIntTools_CurveRangeSample^ theRangeU, OCNaroWrappers::OCIntTools_CurveRangeSample^ theRangeV) 
{
  nativeHandle = new IntTools_SurfaceRangeSample(*((IntTools_CurveRangeSample*)theRangeU->Handle), *((IntTools_CurveRangeSample*)theRangeV->Handle));
}

OCIntTools_SurfaceRangeSample::OCIntTools_SurfaceRangeSample(OCNaroWrappers::OCIntTools_SurfaceRangeSample^ Other) 
{
  nativeHandle = new IntTools_SurfaceRangeSample(*((IntTools_SurfaceRangeSample*)Other->Handle));
}

OCIntTools_SurfaceRangeSample^ OCIntTools_SurfaceRangeSample::Assign(OCNaroWrappers::OCIntTools_SurfaceRangeSample^ Other)
{
  IntTools_SurfaceRangeSample* tmp = new IntTools_SurfaceRangeSample();
  *tmp = ((IntTools_SurfaceRangeSample*)nativeHandle)->Assign(*((IntTools_SurfaceRangeSample*)Other->Handle));
  return gcnew OCIntTools_SurfaceRangeSample(tmp);
}

 void OCIntTools_SurfaceRangeSample::SetRanges(OCNaroWrappers::OCIntTools_CurveRangeSample^ theRangeU, OCNaroWrappers::OCIntTools_CurveRangeSample^ theRangeV)
{
  ((IntTools_SurfaceRangeSample*)nativeHandle)->SetRanges(*((IntTools_CurveRangeSample*)theRangeU->Handle), *((IntTools_CurveRangeSample*)theRangeV->Handle));
}

 void OCIntTools_SurfaceRangeSample::GetRanges(OCNaroWrappers::OCIntTools_CurveRangeSample^ theRangeU, OCNaroWrappers::OCIntTools_CurveRangeSample^ theRangeV)
{
  ((IntTools_SurfaceRangeSample*)nativeHandle)->GetRanges(*((IntTools_CurveRangeSample*)theRangeU->Handle), *((IntTools_CurveRangeSample*)theRangeV->Handle));
}

 void OCIntTools_SurfaceRangeSample::SetIndexes(Standard_Integer theIndexU, Standard_Integer theIndexV)
{
  ((IntTools_SurfaceRangeSample*)nativeHandle)->SetIndexes(theIndexU, theIndexV);
}

 void OCIntTools_SurfaceRangeSample::GetIndexes(Standard_Integer& theIndexU, Standard_Integer& theIndexV)
{
  ((IntTools_SurfaceRangeSample*)nativeHandle)->GetIndexes(theIndexU, theIndexV);
}

 void OCIntTools_SurfaceRangeSample::GetDepths(Standard_Integer& theDepthU, Standard_Integer& theDepthV)
{
  ((IntTools_SurfaceRangeSample*)nativeHandle)->GetDepths(theDepthU, theDepthV);
}

 void OCIntTools_SurfaceRangeSample::SetSampleRangeU(OCNaroWrappers::OCIntTools_CurveRangeSample^ theRangeSampleU)
{
  ((IntTools_SurfaceRangeSample*)nativeHandle)->SetSampleRangeU(*((IntTools_CurveRangeSample*)theRangeSampleU->Handle));
}

OCIntTools_CurveRangeSample^ OCIntTools_SurfaceRangeSample::GetSampleRangeU()
{
  IntTools_CurveRangeSample* tmp = new IntTools_CurveRangeSample();
  *tmp = ((IntTools_SurfaceRangeSample*)nativeHandle)->GetSampleRangeU();
  return gcnew OCIntTools_CurveRangeSample(tmp);
}

 void OCIntTools_SurfaceRangeSample::SetSampleRangeV(OCNaroWrappers::OCIntTools_CurveRangeSample^ theRangeSampleV)
{
  ((IntTools_SurfaceRangeSample*)nativeHandle)->SetSampleRangeV(*((IntTools_CurveRangeSample*)theRangeSampleV->Handle));
}

OCIntTools_CurveRangeSample^ OCIntTools_SurfaceRangeSample::GetSampleRangeV()
{
  IntTools_CurveRangeSample* tmp = new IntTools_CurveRangeSample();
  *tmp = ((IntTools_SurfaceRangeSample*)nativeHandle)->GetSampleRangeV();
  return gcnew OCIntTools_CurveRangeSample(tmp);
}

 void OCIntTools_SurfaceRangeSample::SetIndexU(Standard_Integer theIndexU)
{
  ((IntTools_SurfaceRangeSample*)nativeHandle)->SetIndexU(theIndexU);
}

 Standard_Integer OCIntTools_SurfaceRangeSample::GetIndexU()
{
  return ((IntTools_SurfaceRangeSample*)nativeHandle)->GetIndexU();
}

 void OCIntTools_SurfaceRangeSample::SetIndexV(Standard_Integer theIndexV)
{
  ((IntTools_SurfaceRangeSample*)nativeHandle)->SetIndexV(theIndexV);
}

 Standard_Integer OCIntTools_SurfaceRangeSample::GetIndexV()
{
  return ((IntTools_SurfaceRangeSample*)nativeHandle)->GetIndexV();
}

 void OCIntTools_SurfaceRangeSample::SetDepthU(Standard_Integer theDepthU)
{
  ((IntTools_SurfaceRangeSample*)nativeHandle)->SetDepthU(theDepthU);
}

 Standard_Integer OCIntTools_SurfaceRangeSample::GetDepthU()
{
  return ((IntTools_SurfaceRangeSample*)nativeHandle)->GetDepthU();
}

 void OCIntTools_SurfaceRangeSample::SetDepthV(Standard_Integer theDepthV)
{
  ((IntTools_SurfaceRangeSample*)nativeHandle)->SetDepthV(theDepthV);
}

 Standard_Integer OCIntTools_SurfaceRangeSample::GetDepthV()
{
  return ((IntTools_SurfaceRangeSample*)nativeHandle)->GetDepthV();
}

OCIntTools_Range^ OCIntTools_SurfaceRangeSample::GetRangeU(Standard_Real theFirstU, Standard_Real theLastU, Standard_Integer theNbSampleU)
{
  IntTools_Range* tmp = new IntTools_Range();
  *tmp = ((IntTools_SurfaceRangeSample*)nativeHandle)->GetRangeU(theFirstU, theLastU, theNbSampleU);
  return gcnew OCIntTools_Range(tmp);
}

OCIntTools_Range^ OCIntTools_SurfaceRangeSample::GetRangeV(Standard_Real theFirstV, Standard_Real theLastV, Standard_Integer theNbSampleV)
{
  IntTools_Range* tmp = new IntTools_Range();
  *tmp = ((IntTools_SurfaceRangeSample*)nativeHandle)->GetRangeV(theFirstV, theLastV, theNbSampleV);
  return gcnew OCIntTools_Range(tmp);
}

 System::Boolean OCIntTools_SurfaceRangeSample::IsEqual(OCNaroWrappers::OCIntTools_SurfaceRangeSample^ Other)
{
  return OCConverter::StandardBooleanToBoolean(((IntTools_SurfaceRangeSample*)nativeHandle)->IsEqual(*((IntTools_SurfaceRangeSample*)Other->Handle)));
}

 Standard_Integer OCIntTools_SurfaceRangeSample::GetRangeIndexUDeeper(Standard_Integer theNbSampleU)
{
  return ((IntTools_SurfaceRangeSample*)nativeHandle)->GetRangeIndexUDeeper(theNbSampleU);
}

 Standard_Integer OCIntTools_SurfaceRangeSample::GetRangeIndexVDeeper(Standard_Integer theNbSampleV)
{
  return ((IntTools_SurfaceRangeSample*)nativeHandle)->GetRangeIndexVDeeper(theNbSampleV);
}


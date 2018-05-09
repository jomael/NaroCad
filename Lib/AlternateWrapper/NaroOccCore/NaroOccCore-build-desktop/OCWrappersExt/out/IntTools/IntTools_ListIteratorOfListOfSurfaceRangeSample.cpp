// File generated by CPPExt (CPP file)
//

#include "IntTools_ListIteratorOfListOfSurfaceRangeSample.h"
#include "../Converter.h"
#include "IntTools_ListOfSurfaceRangeSample.h"
#include "IntTools_SurfaceRangeSample.h"
#include "IntTools_ListNodeOfListOfSurfaceRangeSample.h"


using namespace OCNaroWrappers;

OCIntTools_ListIteratorOfListOfSurfaceRangeSample::OCIntTools_ListIteratorOfListOfSurfaceRangeSample(IntTools_ListIteratorOfListOfSurfaceRangeSample* nativeHandle) 
{
  this->nativeHandle = nativeHandle;
}

OCIntTools_ListIteratorOfListOfSurfaceRangeSample::OCIntTools_ListIteratorOfListOfSurfaceRangeSample() 
{
  nativeHandle = new IntTools_ListIteratorOfListOfSurfaceRangeSample();
}

OCIntTools_ListIteratorOfListOfSurfaceRangeSample::OCIntTools_ListIteratorOfListOfSurfaceRangeSample(OCNaroWrappers::OCIntTools_ListOfSurfaceRangeSample^ L) 
{
  nativeHandle = new IntTools_ListIteratorOfListOfSurfaceRangeSample(*((IntTools_ListOfSurfaceRangeSample*)L->Handle));
}

 void OCIntTools_ListIteratorOfListOfSurfaceRangeSample::Initialize(OCNaroWrappers::OCIntTools_ListOfSurfaceRangeSample^ L)
{
  ((IntTools_ListIteratorOfListOfSurfaceRangeSample*)nativeHandle)->Initialize(*((IntTools_ListOfSurfaceRangeSample*)L->Handle));
}

 System::Boolean OCIntTools_ListIteratorOfListOfSurfaceRangeSample::More()
{
  return OCConverter::StandardBooleanToBoolean(((IntTools_ListIteratorOfListOfSurfaceRangeSample*)nativeHandle)->More());
}

 void OCIntTools_ListIteratorOfListOfSurfaceRangeSample::Next()
{
  ((IntTools_ListIteratorOfListOfSurfaceRangeSample*)nativeHandle)->Next();
}

OCIntTools_SurfaceRangeSample^ OCIntTools_ListIteratorOfListOfSurfaceRangeSample::Value()
{
  IntTools_SurfaceRangeSample* tmp = new IntTools_SurfaceRangeSample();
  *tmp = ((IntTools_ListIteratorOfListOfSurfaceRangeSample*)nativeHandle)->Value();
  return gcnew OCIntTools_SurfaceRangeSample(tmp);
}



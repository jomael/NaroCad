// File generated by CPPExt (CPP file)
//

#include "TopOpeBRepDS_HArray1OfDataMapOfIntegerListOfInterference.h"
#include "../Converter.h"
#include "TopOpeBRepDS_DataMapOfIntegerListOfInterference.h"
#include "TopOpeBRepDS_Array1OfDataMapOfIntegerListOfInterference.h"


using namespace OCNaroWrappers;

OCTopOpeBRepDS_HArray1OfDataMapOfIntegerListOfInterference::OCTopOpeBRepDS_HArray1OfDataMapOfIntegerListOfInterference(Handle(TopOpeBRepDS_HArray1OfDataMapOfIntegerListOfInterference)* nativeHandle) : OCMMgt_TShared((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_TopOpeBRepDS_HArray1OfDataMapOfIntegerListOfInterference(*nativeHandle);
}

OCTopOpeBRepDS_HArray1OfDataMapOfIntegerListOfInterference::OCTopOpeBRepDS_HArray1OfDataMapOfIntegerListOfInterference(Standard_Integer Low, Standard_Integer Up) : OCMMgt_TShared((OCDummy^)nullptr)

{
  nativeHandle = new Handle_TopOpeBRepDS_HArray1OfDataMapOfIntegerListOfInterference(new TopOpeBRepDS_HArray1OfDataMapOfIntegerListOfInterference(Low, Up));
}

OCTopOpeBRepDS_HArray1OfDataMapOfIntegerListOfInterference::OCTopOpeBRepDS_HArray1OfDataMapOfIntegerListOfInterference(Standard_Integer Low, Standard_Integer Up, OCNaroWrappers::OCTopOpeBRepDS_DataMapOfIntegerListOfInterference^ V) : OCMMgt_TShared((OCDummy^)nullptr)

{
  nativeHandle = new Handle_TopOpeBRepDS_HArray1OfDataMapOfIntegerListOfInterference(new TopOpeBRepDS_HArray1OfDataMapOfIntegerListOfInterference(Low, Up, *((TopOpeBRepDS_DataMapOfIntegerListOfInterference*)V->Handle)));
}

 void OCTopOpeBRepDS_HArray1OfDataMapOfIntegerListOfInterference::Init(OCNaroWrappers::OCTopOpeBRepDS_DataMapOfIntegerListOfInterference^ V)
{
  (*((Handle_TopOpeBRepDS_HArray1OfDataMapOfIntegerListOfInterference*)nativeHandle))->Init(*((TopOpeBRepDS_DataMapOfIntegerListOfInterference*)V->Handle));
}

 Standard_Integer OCTopOpeBRepDS_HArray1OfDataMapOfIntegerListOfInterference::Length()
{
  return (*((Handle_TopOpeBRepDS_HArray1OfDataMapOfIntegerListOfInterference*)nativeHandle))->Length();
}

 Standard_Integer OCTopOpeBRepDS_HArray1OfDataMapOfIntegerListOfInterference::Lower()
{
  return (*((Handle_TopOpeBRepDS_HArray1OfDataMapOfIntegerListOfInterference*)nativeHandle))->Lower();
}

 Standard_Integer OCTopOpeBRepDS_HArray1OfDataMapOfIntegerListOfInterference::Upper()
{
  return (*((Handle_TopOpeBRepDS_HArray1OfDataMapOfIntegerListOfInterference*)nativeHandle))->Upper();
}

 void OCTopOpeBRepDS_HArray1OfDataMapOfIntegerListOfInterference::SetValue(Standard_Integer Index, OCNaroWrappers::OCTopOpeBRepDS_DataMapOfIntegerListOfInterference^ Value)
{
  (*((Handle_TopOpeBRepDS_HArray1OfDataMapOfIntegerListOfInterference*)nativeHandle))->SetValue(Index, *((TopOpeBRepDS_DataMapOfIntegerListOfInterference*)Value->Handle));
}

OCTopOpeBRepDS_DataMapOfIntegerListOfInterference^ OCTopOpeBRepDS_HArray1OfDataMapOfIntegerListOfInterference::Value(Standard_Integer Index)
{
  TopOpeBRepDS_DataMapOfIntegerListOfInterference* tmp = new TopOpeBRepDS_DataMapOfIntegerListOfInterference(0);
  *tmp = (*((Handle_TopOpeBRepDS_HArray1OfDataMapOfIntegerListOfInterference*)nativeHandle))->Value(Index);
  return gcnew OCTopOpeBRepDS_DataMapOfIntegerListOfInterference(tmp);
}

OCTopOpeBRepDS_DataMapOfIntegerListOfInterference^ OCTopOpeBRepDS_HArray1OfDataMapOfIntegerListOfInterference::ChangeValue(Standard_Integer Index)
{
  TopOpeBRepDS_DataMapOfIntegerListOfInterference* tmp = new TopOpeBRepDS_DataMapOfIntegerListOfInterference(0);
  *tmp = (*((Handle_TopOpeBRepDS_HArray1OfDataMapOfIntegerListOfInterference*)nativeHandle))->ChangeValue(Index);
  return gcnew OCTopOpeBRepDS_DataMapOfIntegerListOfInterference(tmp);
}

OCTopOpeBRepDS_Array1OfDataMapOfIntegerListOfInterference^ OCTopOpeBRepDS_HArray1OfDataMapOfIntegerListOfInterference::Array1()
{
  TopOpeBRepDS_Array1OfDataMapOfIntegerListOfInterference* tmp = new TopOpeBRepDS_Array1OfDataMapOfIntegerListOfInterference(0, 0);
  *tmp = (*((Handle_TopOpeBRepDS_HArray1OfDataMapOfIntegerListOfInterference*)nativeHandle))->Array1();
  return gcnew OCTopOpeBRepDS_Array1OfDataMapOfIntegerListOfInterference(tmp);
}

OCTopOpeBRepDS_Array1OfDataMapOfIntegerListOfInterference^ OCTopOpeBRepDS_HArray1OfDataMapOfIntegerListOfInterference::ChangeArray1()
{
  TopOpeBRepDS_Array1OfDataMapOfIntegerListOfInterference* tmp = new TopOpeBRepDS_Array1OfDataMapOfIntegerListOfInterference(0, 0);
  *tmp = (*((Handle_TopOpeBRepDS_HArray1OfDataMapOfIntegerListOfInterference*)nativeHandle))->ChangeArray1();
  return gcnew OCTopOpeBRepDS_Array1OfDataMapOfIntegerListOfInterference(tmp);
}



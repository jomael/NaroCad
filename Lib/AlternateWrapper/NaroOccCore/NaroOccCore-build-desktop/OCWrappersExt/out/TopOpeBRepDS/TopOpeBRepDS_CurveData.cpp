// File generated by CPPExt (CPP file)
//

#include "TopOpeBRepDS_CurveData.h"
#include "../Converter.h"
#include "TopOpeBRepDS_DataStructure.h"
#include "TopOpeBRepDS_Curve.h"


using namespace OCNaroWrappers;

OCTopOpeBRepDS_CurveData::OCTopOpeBRepDS_CurveData(TopOpeBRepDS_CurveData* nativeHandle) : OCTopOpeBRepDS_GeometryData((OCDummy^)nullptr)

{
  this->nativeHandle = nativeHandle;
}

OCTopOpeBRepDS_CurveData::OCTopOpeBRepDS_CurveData() : OCTopOpeBRepDS_GeometryData((OCDummy^)nullptr)

{
  nativeHandle = new TopOpeBRepDS_CurveData();
}

OCTopOpeBRepDS_CurveData::OCTopOpeBRepDS_CurveData(OCNaroWrappers::OCTopOpeBRepDS_Curve^ C) : OCTopOpeBRepDS_GeometryData((OCDummy^)nullptr)

{
  nativeHandle = new TopOpeBRepDS_CurveData(*((TopOpeBRepDS_Curve*)C->Handle));
}



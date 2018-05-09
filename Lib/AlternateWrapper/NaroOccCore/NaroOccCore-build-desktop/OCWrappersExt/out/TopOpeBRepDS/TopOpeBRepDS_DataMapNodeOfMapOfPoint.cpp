// File generated by CPPExt (CPP file)
//

#include "TopOpeBRepDS_DataMapNodeOfMapOfPoint.h"
#include "../Converter.h"
#include "TopOpeBRepDS_PointData.h"
#include "../TColStd/TColStd_MapIntegerHasher.h"
#include "TopOpeBRepDS_MapOfPoint.h"
#include "TopOpeBRepDS_DataMapIteratorOfMapOfPoint.h"


using namespace OCNaroWrappers;

OCTopOpeBRepDS_DataMapNodeOfMapOfPoint::OCTopOpeBRepDS_DataMapNodeOfMapOfPoint(Handle(TopOpeBRepDS_DataMapNodeOfMapOfPoint)* nativeHandle) : OCTCollection_MapNode((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_TopOpeBRepDS_DataMapNodeOfMapOfPoint(*nativeHandle);
}

OCTopOpeBRepDS_DataMapNodeOfMapOfPoint::OCTopOpeBRepDS_DataMapNodeOfMapOfPoint(Standard_Integer K, OCNaroWrappers::OCTopOpeBRepDS_PointData^ I, TCollection_MapNodePtr n) : OCTCollection_MapNode((OCDummy^)nullptr)

{
  nativeHandle = new Handle_TopOpeBRepDS_DataMapNodeOfMapOfPoint(new TopOpeBRepDS_DataMapNodeOfMapOfPoint(K, *((TopOpeBRepDS_PointData*)I->Handle), n));
}

 Standard_Integer OCTopOpeBRepDS_DataMapNodeOfMapOfPoint::Key()
{
  return (*((Handle_TopOpeBRepDS_DataMapNodeOfMapOfPoint*)nativeHandle))->Key();
}

OCTopOpeBRepDS_PointData^ OCTopOpeBRepDS_DataMapNodeOfMapOfPoint::Value()
{
  TopOpeBRepDS_PointData* tmp = new TopOpeBRepDS_PointData();
  *tmp = (*((Handle_TopOpeBRepDS_DataMapNodeOfMapOfPoint*)nativeHandle))->Value();
  return gcnew OCTopOpeBRepDS_PointData(tmp);
}



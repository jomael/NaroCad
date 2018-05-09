// File generated by CPPExt (CPP file)
//

#include "TopOpeBRepBuild_DataMapNodeOfDataMapOfShapeReal.h"
#include "../Converter.h"
#include "../TopoDS/TopoDS_Shape.h"
#include "../TopTools/TopTools_ShapeMapHasher.h"
#include "TopOpeBRepBuild_DataMapOfShapeReal.h"
#include "TopOpeBRepBuild_DataMapIteratorOfDataMapOfShapeReal.h"


using namespace OCNaroWrappers;

OCTopOpeBRepBuild_DataMapNodeOfDataMapOfShapeReal::OCTopOpeBRepBuild_DataMapNodeOfDataMapOfShapeReal(Handle(TopOpeBRepBuild_DataMapNodeOfDataMapOfShapeReal)* nativeHandle) : OCTCollection_MapNode((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_TopOpeBRepBuild_DataMapNodeOfDataMapOfShapeReal(*nativeHandle);
}

OCTopOpeBRepBuild_DataMapNodeOfDataMapOfShapeReal::OCTopOpeBRepBuild_DataMapNodeOfDataMapOfShapeReal(OCNaroWrappers::OCTopoDS_Shape^ K, Standard_Real I, TCollection_MapNodePtr n) : OCTCollection_MapNode((OCDummy^)nullptr)

{
  nativeHandle = new Handle_TopOpeBRepBuild_DataMapNodeOfDataMapOfShapeReal(new TopOpeBRepBuild_DataMapNodeOfDataMapOfShapeReal(*((TopoDS_Shape*)K->Handle), I, n));
}

OCTopoDS_Shape^ OCTopOpeBRepBuild_DataMapNodeOfDataMapOfShapeReal::Key()
{
  TopoDS_Shape* tmp = new TopoDS_Shape();
  *tmp = (*((Handle_TopOpeBRepBuild_DataMapNodeOfDataMapOfShapeReal*)nativeHandle))->Key();
  return gcnew OCTopoDS_Shape(tmp);
}

 Standard_Real OCTopOpeBRepBuild_DataMapNodeOfDataMapOfShapeReal::Value()
{
  return (*((Handle_TopOpeBRepBuild_DataMapNodeOfDataMapOfShapeReal*)nativeHandle))->Value();
}



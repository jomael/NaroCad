// File generated by CPPExt (CPP file)
//

#include "TopTools_DataMapNodeOfDataMapOfOrientedShapeShape.h"
#include "../Converter.h"
#include "../TopoDS/TopoDS_Shape.h"
#include "TopTools_OrientedShapeMapHasher.h"
#include "TopTools_DataMapOfOrientedShapeShape.h"
#include "TopTools_DataMapIteratorOfDataMapOfOrientedShapeShape.h"


using namespace OCNaroWrappers;

OCTopTools_DataMapNodeOfDataMapOfOrientedShapeShape::OCTopTools_DataMapNodeOfDataMapOfOrientedShapeShape(Handle(TopTools_DataMapNodeOfDataMapOfOrientedShapeShape)* nativeHandle) : OCTCollection_MapNode((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_TopTools_DataMapNodeOfDataMapOfOrientedShapeShape(*nativeHandle);
}

OCTopTools_DataMapNodeOfDataMapOfOrientedShapeShape::OCTopTools_DataMapNodeOfDataMapOfOrientedShapeShape(OCNaroWrappers::OCTopoDS_Shape^ K, OCNaroWrappers::OCTopoDS_Shape^ I, TCollection_MapNodePtr n) : OCTCollection_MapNode((OCDummy^)nullptr)

{
  nativeHandle = new Handle_TopTools_DataMapNodeOfDataMapOfOrientedShapeShape(new TopTools_DataMapNodeOfDataMapOfOrientedShapeShape(*((TopoDS_Shape*)K->Handle), *((TopoDS_Shape*)I->Handle), n));
}

OCTopoDS_Shape^ OCTopTools_DataMapNodeOfDataMapOfOrientedShapeShape::Key()
{
  TopoDS_Shape* tmp = new TopoDS_Shape();
  *tmp = (*((Handle_TopTools_DataMapNodeOfDataMapOfOrientedShapeShape*)nativeHandle))->Key();
  return gcnew OCTopoDS_Shape(tmp);
}

OCTopoDS_Shape^ OCTopTools_DataMapNodeOfDataMapOfOrientedShapeShape::Value()
{
  TopoDS_Shape* tmp = new TopoDS_Shape();
  *tmp = (*((Handle_TopTools_DataMapNodeOfDataMapOfOrientedShapeShape*)nativeHandle))->Value();
  return gcnew OCTopoDS_Shape(tmp);
}



// File generated by CPPExt (CPP file)
//

#include "TopOpeBRepTool_DataMapNodeOfDataMapOfShapeReal.h"
#include "../Converter.h"
#include "../TopoDS/TopoDS_Shape.h"
#include "../TopTools/TopTools_ShapeMapHasher.h"
#include "TopOpeBRepTool_DataMapOfShapeReal.h"
#include "TopOpeBRepTool_DataMapIteratorOfDataMapOfShapeReal.h"


using namespace OCNaroWrappers;

OCTopOpeBRepTool_DataMapNodeOfDataMapOfShapeReal::OCTopOpeBRepTool_DataMapNodeOfDataMapOfShapeReal(Handle(TopOpeBRepTool_DataMapNodeOfDataMapOfShapeReal)* nativeHandle) : OCTCollection_MapNode((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_TopOpeBRepTool_DataMapNodeOfDataMapOfShapeReal(*nativeHandle);
}

OCTopOpeBRepTool_DataMapNodeOfDataMapOfShapeReal::OCTopOpeBRepTool_DataMapNodeOfDataMapOfShapeReal(OCNaroWrappers::OCTopoDS_Shape^ K, Standard_Real I, TCollection_MapNodePtr n) : OCTCollection_MapNode((OCDummy^)nullptr)

{
  nativeHandle = new Handle_TopOpeBRepTool_DataMapNodeOfDataMapOfShapeReal(new TopOpeBRepTool_DataMapNodeOfDataMapOfShapeReal(*((TopoDS_Shape*)K->Handle), I, n));
}

OCTopoDS_Shape^ OCTopOpeBRepTool_DataMapNodeOfDataMapOfShapeReal::Key()
{
  TopoDS_Shape* tmp = new TopoDS_Shape();
  *tmp = (*((Handle_TopOpeBRepTool_DataMapNodeOfDataMapOfShapeReal*)nativeHandle))->Key();
  return gcnew OCTopoDS_Shape(tmp);
}

 Standard_Real OCTopOpeBRepTool_DataMapNodeOfDataMapOfShapeReal::Value()
{
  return (*((Handle_TopOpeBRepTool_DataMapNodeOfDataMapOfShapeReal*)nativeHandle))->Value();
}



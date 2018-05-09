// File generated by CPPExt (CPP file)
//

#include "BRepMesh_DataMapNodeOfDataMapOfShapePairOfPolygon.h"
#include "../Converter.h"
#include "../TopoDS/TopoDS_Shape.h"
#include "BRepMesh_PairOfPolygon.h"
#include "../TopTools/TopTools_ShapeMapHasher.h"
#include "BRepMesh_DataMapOfShapePairOfPolygon.h"
#include "BRepMesh_DataMapIteratorOfDataMapOfShapePairOfPolygon.h"


using namespace OCNaroWrappers;

OCBRepMesh_DataMapNodeOfDataMapOfShapePairOfPolygon::OCBRepMesh_DataMapNodeOfDataMapOfShapePairOfPolygon(Handle(BRepMesh_DataMapNodeOfDataMapOfShapePairOfPolygon)* nativeHandle) : OCTCollection_MapNode((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_BRepMesh_DataMapNodeOfDataMapOfShapePairOfPolygon(*nativeHandle);
}

OCBRepMesh_DataMapNodeOfDataMapOfShapePairOfPolygon::OCBRepMesh_DataMapNodeOfDataMapOfShapePairOfPolygon(OCNaroWrappers::OCTopoDS_Shape^ K, OCNaroWrappers::OCBRepMesh_PairOfPolygon^ I, TCollection_MapNodePtr n) : OCTCollection_MapNode((OCDummy^)nullptr)

{
  nativeHandle = new Handle_BRepMesh_DataMapNodeOfDataMapOfShapePairOfPolygon(new BRepMesh_DataMapNodeOfDataMapOfShapePairOfPolygon(*((TopoDS_Shape*)K->Handle), *((BRepMesh_PairOfPolygon*)I->Handle), n));
}

OCTopoDS_Shape^ OCBRepMesh_DataMapNodeOfDataMapOfShapePairOfPolygon::Key()
{
  TopoDS_Shape* tmp = new TopoDS_Shape();
  *tmp = (*((Handle_BRepMesh_DataMapNodeOfDataMapOfShapePairOfPolygon*)nativeHandle))->Key();
  return gcnew OCTopoDS_Shape(tmp);
}

OCBRepMesh_PairOfPolygon^ OCBRepMesh_DataMapNodeOfDataMapOfShapePairOfPolygon::Value()
{
  BRepMesh_PairOfPolygon* tmp = new BRepMesh_PairOfPolygon();
  *tmp = (*((Handle_BRepMesh_DataMapNodeOfDataMapOfShapePairOfPolygon*)nativeHandle))->Value();
  return gcnew OCBRepMesh_PairOfPolygon(tmp);
}



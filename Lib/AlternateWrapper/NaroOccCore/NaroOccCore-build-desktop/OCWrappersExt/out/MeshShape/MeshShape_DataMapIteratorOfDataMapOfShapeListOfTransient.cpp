// File generated by CPPExt (CPP file)
//

#include "MeshShape_DataMapIteratorOfDataMapOfShapeListOfTransient.h"
#include "../Converter.h"
#include "../TopoDS/TopoDS_Shape.h"
#include "../TColStd/TColStd_ListOfTransient.h"
#include "../TopTools/TopTools_ShapeMapHasher.h"
#include "MeshShape_DataMapOfShapeListOfTransient.h"
#include "MeshShape_DataMapNodeOfDataMapOfShapeListOfTransient.h"


using namespace OCNaroWrappers;

OCMeshShape_DataMapIteratorOfDataMapOfShapeListOfTransient::OCMeshShape_DataMapIteratorOfDataMapOfShapeListOfTransient(MeshShape_DataMapIteratorOfDataMapOfShapeListOfTransient* nativeHandle) : OCTCollection_BasicMapIterator((OCDummy^)nullptr)

{
  this->nativeHandle = nativeHandle;
}

OCMeshShape_DataMapIteratorOfDataMapOfShapeListOfTransient::OCMeshShape_DataMapIteratorOfDataMapOfShapeListOfTransient() : OCTCollection_BasicMapIterator((OCDummy^)nullptr)

{
  nativeHandle = new MeshShape_DataMapIteratorOfDataMapOfShapeListOfTransient();
}

OCMeshShape_DataMapIteratorOfDataMapOfShapeListOfTransient::OCMeshShape_DataMapIteratorOfDataMapOfShapeListOfTransient(OCNaroWrappers::OCMeshShape_DataMapOfShapeListOfTransient^ aMap) : OCTCollection_BasicMapIterator((OCDummy^)nullptr)

{
  nativeHandle = new MeshShape_DataMapIteratorOfDataMapOfShapeListOfTransient(*((MeshShape_DataMapOfShapeListOfTransient*)aMap->Handle));
}

 void OCMeshShape_DataMapIteratorOfDataMapOfShapeListOfTransient::Initialize(OCNaroWrappers::OCMeshShape_DataMapOfShapeListOfTransient^ aMap)
{
  ((MeshShape_DataMapIteratorOfDataMapOfShapeListOfTransient*)nativeHandle)->Initialize(*((MeshShape_DataMapOfShapeListOfTransient*)aMap->Handle));
}

OCTopoDS_Shape^ OCMeshShape_DataMapIteratorOfDataMapOfShapeListOfTransient::Key()
{
  TopoDS_Shape* tmp = new TopoDS_Shape();
  *tmp = ((MeshShape_DataMapIteratorOfDataMapOfShapeListOfTransient*)nativeHandle)->Key();
  return gcnew OCTopoDS_Shape(tmp);
}

OCTColStd_ListOfTransient^ OCMeshShape_DataMapIteratorOfDataMapOfShapeListOfTransient::Value()
{
  TColStd_ListOfTransient* tmp = new TColStd_ListOfTransient();
  *tmp = ((MeshShape_DataMapIteratorOfDataMapOfShapeListOfTransient*)nativeHandle)->Value();
  return gcnew OCTColStd_ListOfTransient(tmp);
}



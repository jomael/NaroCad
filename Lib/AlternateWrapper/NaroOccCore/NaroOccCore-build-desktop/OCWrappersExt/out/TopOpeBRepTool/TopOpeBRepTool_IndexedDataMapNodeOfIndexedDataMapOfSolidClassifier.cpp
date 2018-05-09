// File generated by CPPExt (CPP file)
//

#include "TopOpeBRepTool_IndexedDataMapNodeOfIndexedDataMapOfSolidClassifier.h"
#include "../Converter.h"
#include "../TopoDS/TopoDS_Shape.h"
#include "../BRepClass3d/BRepClass3d_SolidClassifier.h"
#include "../TopTools/TopTools_ShapeMapHasher.h"
#include "TopOpeBRepTool_IndexedDataMapOfSolidClassifier.h"


using namespace OCNaroWrappers;

OCTopOpeBRepTool_IndexedDataMapNodeOfIndexedDataMapOfSolidClassifier::OCTopOpeBRepTool_IndexedDataMapNodeOfIndexedDataMapOfSolidClassifier(Handle(TopOpeBRepTool_IndexedDataMapNodeOfIndexedDataMapOfSolidClassifier)* nativeHandle) : OCTCollection_MapNode((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_TopOpeBRepTool_IndexedDataMapNodeOfIndexedDataMapOfSolidClassifier(*nativeHandle);
}

OCTopOpeBRepTool_IndexedDataMapNodeOfIndexedDataMapOfSolidClassifier::OCTopOpeBRepTool_IndexedDataMapNodeOfIndexedDataMapOfSolidClassifier(OCNaroWrappers::OCTopoDS_Shape^ K1, Standard_Integer K2, OCNaroWrappers::OCBRepClass3d_SolidClassifier^ I, TCollection_MapNodePtr n1, TCollection_MapNodePtr n2) : OCTCollection_MapNode((OCDummy^)nullptr)

{
  nativeHandle = new Handle_TopOpeBRepTool_IndexedDataMapNodeOfIndexedDataMapOfSolidClassifier(new TopOpeBRepTool_IndexedDataMapNodeOfIndexedDataMapOfSolidClassifier(*((TopoDS_Shape*)K1->Handle), K2, *((BRepClass3d_SolidClassifier*)I->Handle), n1, n2));
}

OCTopoDS_Shape^ OCTopOpeBRepTool_IndexedDataMapNodeOfIndexedDataMapOfSolidClassifier::Key1()
{
  TopoDS_Shape* tmp = new TopoDS_Shape();
  *tmp = (*((Handle_TopOpeBRepTool_IndexedDataMapNodeOfIndexedDataMapOfSolidClassifier*)nativeHandle))->Key1();
  return gcnew OCTopoDS_Shape(tmp);
}

 Standard_Integer OCTopOpeBRepTool_IndexedDataMapNodeOfIndexedDataMapOfSolidClassifier::Key2()
{
  return (*((Handle_TopOpeBRepTool_IndexedDataMapNodeOfIndexedDataMapOfSolidClassifier*)nativeHandle))->Key2();
}

 TCollection_MapNodePtr& OCTopOpeBRepTool_IndexedDataMapNodeOfIndexedDataMapOfSolidClassifier::Next2()
{
  return (*((Handle_TopOpeBRepTool_IndexedDataMapNodeOfIndexedDataMapOfSolidClassifier*)nativeHandle))->Next2();
}

OCBRepClass3d_SolidClassifier^ OCTopOpeBRepTool_IndexedDataMapNodeOfIndexedDataMapOfSolidClassifier::Value()
{
  BRepClass3d_SolidClassifier* tmp = new BRepClass3d_SolidClassifier();
  *tmp = (*((Handle_TopOpeBRepTool_IndexedDataMapNodeOfIndexedDataMapOfSolidClassifier*)nativeHandle))->Value();
  return gcnew OCBRepClass3d_SolidClassifier(tmp);
}



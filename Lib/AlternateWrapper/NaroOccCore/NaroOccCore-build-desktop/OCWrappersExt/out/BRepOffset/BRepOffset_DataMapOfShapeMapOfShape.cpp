// File generated by CPPExt (CPP file)
//

#include "BRepOffset_DataMapOfShapeMapOfShape.h"
#include "../Converter.h"
#include "../TopoDS/TopoDS_Shape.h"
#include "../TopTools/TopTools_MapOfShape.h"
#include "../TopTools/TopTools_ShapeMapHasher.h"
#include "BRepOffset_DataMapNodeOfDataMapOfShapeMapOfShape.h"
#include "BRepOffset_DataMapIteratorOfDataMapOfShapeMapOfShape.h"


using namespace OCNaroWrappers;

OCBRepOffset_DataMapOfShapeMapOfShape::OCBRepOffset_DataMapOfShapeMapOfShape(BRepOffset_DataMapOfShapeMapOfShape* nativeHandle) : OCTCollection_BasicMap((OCDummy^)nullptr)

{
  this->nativeHandle = nativeHandle;
}

OCBRepOffset_DataMapOfShapeMapOfShape::OCBRepOffset_DataMapOfShapeMapOfShape(Standard_Integer NbBuckets) : OCTCollection_BasicMap((OCDummy^)nullptr)

{
  nativeHandle = new BRepOffset_DataMapOfShapeMapOfShape(NbBuckets);
}

OCBRepOffset_DataMapOfShapeMapOfShape^ OCBRepOffset_DataMapOfShapeMapOfShape::Assign(OCNaroWrappers::OCBRepOffset_DataMapOfShapeMapOfShape^ Other)
{
  BRepOffset_DataMapOfShapeMapOfShape* tmp = new BRepOffset_DataMapOfShapeMapOfShape(0);
  *tmp = ((BRepOffset_DataMapOfShapeMapOfShape*)nativeHandle)->Assign(*((BRepOffset_DataMapOfShapeMapOfShape*)Other->Handle));
  return gcnew OCBRepOffset_DataMapOfShapeMapOfShape(tmp);
}

 void OCBRepOffset_DataMapOfShapeMapOfShape::ReSize(Standard_Integer NbBuckets)
{
  ((BRepOffset_DataMapOfShapeMapOfShape*)nativeHandle)->ReSize(NbBuckets);
}

 System::Boolean OCBRepOffset_DataMapOfShapeMapOfShape::Bind(OCNaroWrappers::OCTopoDS_Shape^ K, OCNaroWrappers::OCTopTools_MapOfShape^ I)
{
  return OCConverter::StandardBooleanToBoolean(((BRepOffset_DataMapOfShapeMapOfShape*)nativeHandle)->Bind(*((TopoDS_Shape*)K->Handle), *((TopTools_MapOfShape*)I->Handle)));
}

 System::Boolean OCBRepOffset_DataMapOfShapeMapOfShape::IsBound(OCNaroWrappers::OCTopoDS_Shape^ K)
{
  return OCConverter::StandardBooleanToBoolean(((BRepOffset_DataMapOfShapeMapOfShape*)nativeHandle)->IsBound(*((TopoDS_Shape*)K->Handle)));
}

 System::Boolean OCBRepOffset_DataMapOfShapeMapOfShape::UnBind(OCNaroWrappers::OCTopoDS_Shape^ K)
{
  return OCConverter::StandardBooleanToBoolean(((BRepOffset_DataMapOfShapeMapOfShape*)nativeHandle)->UnBind(*((TopoDS_Shape*)K->Handle)));
}

OCTopTools_MapOfShape^ OCBRepOffset_DataMapOfShapeMapOfShape::Find(OCNaroWrappers::OCTopoDS_Shape^ K)
{
  TopTools_MapOfShape* tmp = new TopTools_MapOfShape(0);
  *tmp = ((BRepOffset_DataMapOfShapeMapOfShape*)nativeHandle)->Find(*((TopoDS_Shape*)K->Handle));
  return gcnew OCTopTools_MapOfShape(tmp);
}

OCTopTools_MapOfShape^ OCBRepOffset_DataMapOfShapeMapOfShape::ChangeFind(OCNaroWrappers::OCTopoDS_Shape^ K)
{
  TopTools_MapOfShape* tmp = new TopTools_MapOfShape(0);
  *tmp = ((BRepOffset_DataMapOfShapeMapOfShape*)nativeHandle)->ChangeFind(*((TopoDS_Shape*)K->Handle));
  return gcnew OCTopTools_MapOfShape(tmp);
}

 Standard_Address OCBRepOffset_DataMapOfShapeMapOfShape::Find1(OCNaroWrappers::OCTopoDS_Shape^ K)
{
  return ((BRepOffset_DataMapOfShapeMapOfShape*)nativeHandle)->Find1(*((TopoDS_Shape*)K->Handle));
}

 Standard_Address OCBRepOffset_DataMapOfShapeMapOfShape::ChangeFind1(OCNaroWrappers::OCTopoDS_Shape^ K)
{
  return ((BRepOffset_DataMapOfShapeMapOfShape*)nativeHandle)->ChangeFind1(*((TopoDS_Shape*)K->Handle));
}



// File generated by CPPExt (CPP file)
//

#include "TopTools_IndexedDataMapOfShapeAddress.h"
#include "../Converter.h"
#include "../TopoDS/TopoDS_Shape.h"
#include "TopTools_ShapeMapHasher.h"
#include "TopTools_IndexedDataMapNodeOfIndexedDataMapOfShapeAddress.h"


using namespace OCNaroWrappers;

OCTopTools_IndexedDataMapOfShapeAddress::OCTopTools_IndexedDataMapOfShapeAddress(TopTools_IndexedDataMapOfShapeAddress* nativeHandle) : OCTCollection_BasicMap((OCDummy^)nullptr)

{
  this->nativeHandle = nativeHandle;
}

OCTopTools_IndexedDataMapOfShapeAddress::OCTopTools_IndexedDataMapOfShapeAddress(Standard_Integer NbBuckets) : OCTCollection_BasicMap((OCDummy^)nullptr)

{
  nativeHandle = new TopTools_IndexedDataMapOfShapeAddress(NbBuckets);
}

OCTopTools_IndexedDataMapOfShapeAddress^ OCTopTools_IndexedDataMapOfShapeAddress::Assign(OCNaroWrappers::OCTopTools_IndexedDataMapOfShapeAddress^ Other)
{
  TopTools_IndexedDataMapOfShapeAddress* tmp = new TopTools_IndexedDataMapOfShapeAddress(0);
  *tmp = ((TopTools_IndexedDataMapOfShapeAddress*)nativeHandle)->Assign(*((TopTools_IndexedDataMapOfShapeAddress*)Other->Handle));
  return gcnew OCTopTools_IndexedDataMapOfShapeAddress(tmp);
}

 void OCTopTools_IndexedDataMapOfShapeAddress::ReSize(Standard_Integer NbBuckets)
{
  ((TopTools_IndexedDataMapOfShapeAddress*)nativeHandle)->ReSize(NbBuckets);
}

 Standard_Integer OCTopTools_IndexedDataMapOfShapeAddress::Add(OCNaroWrappers::OCTopoDS_Shape^ K, Standard_Address I)
{
  return ((TopTools_IndexedDataMapOfShapeAddress*)nativeHandle)->Add(*((TopoDS_Shape*)K->Handle), I);
}

 void OCTopTools_IndexedDataMapOfShapeAddress::Substitute(Standard_Integer I, OCNaroWrappers::OCTopoDS_Shape^ K, Standard_Address T)
{
  ((TopTools_IndexedDataMapOfShapeAddress*)nativeHandle)->Substitute(I, *((TopoDS_Shape*)K->Handle), T);
}

 void OCTopTools_IndexedDataMapOfShapeAddress::RemoveLast()
{
  ((TopTools_IndexedDataMapOfShapeAddress*)nativeHandle)->RemoveLast();
}

 System::Boolean OCTopTools_IndexedDataMapOfShapeAddress::Contains(OCNaroWrappers::OCTopoDS_Shape^ K)
{
  return OCConverter::StandardBooleanToBoolean(((TopTools_IndexedDataMapOfShapeAddress*)nativeHandle)->Contains(*((TopoDS_Shape*)K->Handle)));
}

OCTopoDS_Shape^ OCTopTools_IndexedDataMapOfShapeAddress::FindKey(Standard_Integer I)
{
  TopoDS_Shape* tmp = new TopoDS_Shape();
  *tmp = ((TopTools_IndexedDataMapOfShapeAddress*)nativeHandle)->FindKey(I);
  return gcnew OCTopoDS_Shape(tmp);
}

 Standard_Address OCTopTools_IndexedDataMapOfShapeAddress::FindFromIndex(Standard_Integer I)
{
  return ((TopTools_IndexedDataMapOfShapeAddress*)nativeHandle)->FindFromIndex(I);
}

 Standard_Address OCTopTools_IndexedDataMapOfShapeAddress::ChangeFromIndex(Standard_Integer I)
{
  return ((TopTools_IndexedDataMapOfShapeAddress*)nativeHandle)->ChangeFromIndex(I);
}

 Standard_Integer OCTopTools_IndexedDataMapOfShapeAddress::FindIndex(OCNaroWrappers::OCTopoDS_Shape^ K)
{
  return ((TopTools_IndexedDataMapOfShapeAddress*)nativeHandle)->FindIndex(*((TopoDS_Shape*)K->Handle));
}

 Standard_Address OCTopTools_IndexedDataMapOfShapeAddress::FindFromKey(OCNaroWrappers::OCTopoDS_Shape^ K)
{
  return ((TopTools_IndexedDataMapOfShapeAddress*)nativeHandle)->FindFromKey(*((TopoDS_Shape*)K->Handle));
}

 Standard_Address OCTopTools_IndexedDataMapOfShapeAddress::ChangeFromKey(OCNaroWrappers::OCTopoDS_Shape^ K)
{
  return ((TopTools_IndexedDataMapOfShapeAddress*)nativeHandle)->ChangeFromKey(*((TopoDS_Shape*)K->Handle));
}

 Standard_Address OCTopTools_IndexedDataMapOfShapeAddress::FindFromKey1(OCNaroWrappers::OCTopoDS_Shape^ K)
{
  return ((TopTools_IndexedDataMapOfShapeAddress*)nativeHandle)->FindFromKey1(*((TopoDS_Shape*)K->Handle));
}

 Standard_Address OCTopTools_IndexedDataMapOfShapeAddress::ChangeFromKey1(OCNaroWrappers::OCTopoDS_Shape^ K)
{
  return ((TopTools_IndexedDataMapOfShapeAddress*)nativeHandle)->ChangeFromKey1(*((TopoDS_Shape*)K->Handle));
}



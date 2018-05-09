// File generated by CPPExt (CPP file)
//

#include "BRepMesh_Triangle.h"
#include "../Converter.h"


using namespace OCNaroWrappers;

OCBRepMesh_Triangle::OCBRepMesh_Triangle(BRepMesh_Triangle* nativeHandle) 
{
  this->nativeHandle = nativeHandle;
}

OCBRepMesh_Triangle::OCBRepMesh_Triangle() 
{
  nativeHandle = new BRepMesh_Triangle();
}

OCBRepMesh_Triangle::OCBRepMesh_Triangle(Standard_Integer e1, Standard_Integer e2, Standard_Integer e3, System::Boolean o1, System::Boolean o2, System::Boolean o3, OCBRepMesh_DegreeOfFreedom canMove) 
{
  nativeHandle = new BRepMesh_Triangle(e1, e2, e3, OCConverter::BooleanToStandardBoolean(o1), OCConverter::BooleanToStandardBoolean(o2), OCConverter::BooleanToStandardBoolean(o3), (BRepMesh_DegreeOfFreedom)canMove);
}

 void OCBRepMesh_Triangle::Initialize(Standard_Integer e1, Standard_Integer e2, Standard_Integer e3, System::Boolean o1, System::Boolean o2, System::Boolean o3, OCBRepMesh_DegreeOfFreedom canMove)
{
  ((BRepMesh_Triangle*)nativeHandle)->Initialize(e1, e2, e3, OCConverter::BooleanToStandardBoolean(o1), OCConverter::BooleanToStandardBoolean(o2), OCConverter::BooleanToStandardBoolean(o3), (BRepMesh_DegreeOfFreedom)canMove);
}

 void OCBRepMesh_Triangle::Edges(Standard_Integer& e1, Standard_Integer& e2, Standard_Integer& e3, System::Boolean& o1, System::Boolean& o2, System::Boolean& o3)
{
  ((BRepMesh_Triangle*)nativeHandle)->Edges(e1, e2, e3, (Standard_Boolean&)(o1), (Standard_Boolean&)(o2), (Standard_Boolean&)(o3));
}

 OCBRepMesh_DegreeOfFreedom OCBRepMesh_Triangle::Movability()
{
  return (OCBRepMesh_DegreeOfFreedom)(((BRepMesh_Triangle*)nativeHandle)->Movability());
}

 void OCBRepMesh_Triangle::SetMovability(OCBRepMesh_DegreeOfFreedom Move)
{
  ((BRepMesh_Triangle*)nativeHandle)->SetMovability((BRepMesh_DegreeOfFreedom)Move);
}

 Standard_Integer OCBRepMesh_Triangle::HashCode(Standard_Integer Upper)
{
  return ((BRepMesh_Triangle*)nativeHandle)->HashCode(Upper);
}

 System::Boolean OCBRepMesh_Triangle::IsEqual(OCNaroWrappers::OCBRepMesh_Triangle^ Other)
{
  return OCConverter::StandardBooleanToBoolean(((BRepMesh_Triangle*)nativeHandle)->IsEqual(*((BRepMesh_Triangle*)Other->Handle)));
}



// File generated by CPPExt (CPP file)
//

#include "BOPTools_VSInterference.h"
#include "../Converter.h"


using namespace OCNaroWrappers;

OCBOPTools_VSInterference::OCBOPTools_VSInterference(BOPTools_VSInterference* nativeHandle) : OCBOPTools_ShapeShapeInterference((OCDummy^)nullptr)

{
  this->nativeHandle = nativeHandle;
}

OCBOPTools_VSInterference::OCBOPTools_VSInterference() : OCBOPTools_ShapeShapeInterference((OCDummy^)nullptr)

{
  nativeHandle = new BOPTools_VSInterference();
}

OCBOPTools_VSInterference::OCBOPTools_VSInterference(Standard_Integer anIndex1, Standard_Integer anIndex2, Standard_Real U, Standard_Real V) : OCBOPTools_ShapeShapeInterference((OCDummy^)nullptr)

{
  nativeHandle = new BOPTools_VSInterference(anIndex1, anIndex2, U, V);
}

 void OCBOPTools_VSInterference::SetUV(Standard_Real U, Standard_Real V)
{
  ((BOPTools_VSInterference*)nativeHandle)->SetUV(U, V);
}

 void OCBOPTools_VSInterference::UV(Standard_Real& U, Standard_Real& V)
{
  ((BOPTools_VSInterference*)nativeHandle)->UV(U, V);
}


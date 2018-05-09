// File generated by CPPExt (CPP file)
//

#include "BRepOffsetAPI_MakeThickSolid.h"
#include "../Converter.h"
#include "../TopoDS/TopoDS_Shape.h"
#include "../TopTools/TopTools_ListOfShape.h"


using namespace OCNaroWrappers;

OCBRepOffsetAPI_MakeThickSolid::OCBRepOffsetAPI_MakeThickSolid(BRepOffsetAPI_MakeThickSolid* nativeHandle) : OCBRepOffsetAPI_MakeOffsetShape((OCDummy^)nullptr)

{
  this->nativeHandle = nativeHandle;
}

OCBRepOffsetAPI_MakeThickSolid::OCBRepOffsetAPI_MakeThickSolid() : OCBRepOffsetAPI_MakeOffsetShape((OCDummy^)nullptr)

{
  nativeHandle = new BRepOffsetAPI_MakeThickSolid();
}

OCBRepOffsetAPI_MakeThickSolid::OCBRepOffsetAPI_MakeThickSolid(OCNaroWrappers::OCTopoDS_Shape^ S, OCNaroWrappers::OCTopTools_ListOfShape^ ClosingFaces, Standard_Real Offset, Standard_Real Tol, OCBRepOffset_Mode Mode, System::Boolean Intersection, System::Boolean SelfInter, OCGeomAbs_JoinType Join) : OCBRepOffsetAPI_MakeOffsetShape((OCDummy^)nullptr)

{
  nativeHandle = new BRepOffsetAPI_MakeThickSolid(*((TopoDS_Shape*)S->Handle), *((TopTools_ListOfShape*)ClosingFaces->Handle), Offset, Tol, (BRepOffset_Mode)Mode, OCConverter::BooleanToStandardBoolean(Intersection), OCConverter::BooleanToStandardBoolean(SelfInter), (GeomAbs_JoinType)Join);
}

 void OCBRepOffsetAPI_MakeThickSolid::Build()
{
  ((BRepOffsetAPI_MakeThickSolid*)nativeHandle)->Build();
}

OCTopTools_ListOfShape^ OCBRepOffsetAPI_MakeThickSolid::Modified(OCNaroWrappers::OCTopoDS_Shape^ S)
{
  TopTools_ListOfShape* tmp = new TopTools_ListOfShape();
  *tmp = ((BRepOffsetAPI_MakeThickSolid*)nativeHandle)->Modified(*((TopoDS_Shape*)S->Handle));
  return gcnew OCTopTools_ListOfShape(tmp);
}



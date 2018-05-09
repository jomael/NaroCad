// File generated by CPPExt (CPP file)
//

#include "TopOpeBRepTool_HBoxTool.h"
#include "../Converter.h"
#include "../TopoDS/TopoDS_Shape.h"
#include "../Bnd/Bnd_Box.h"
#include "TopOpeBRepTool_IndexedDataMapOfShapeBox.h"


using namespace OCNaroWrappers;

OCTopOpeBRepTool_HBoxTool::OCTopOpeBRepTool_HBoxTool(Handle(TopOpeBRepTool_HBoxTool)* nativeHandle) : OCMMgt_TShared((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_TopOpeBRepTool_HBoxTool(*nativeHandle);
}

OCTopOpeBRepTool_HBoxTool::OCTopOpeBRepTool_HBoxTool() : OCMMgt_TShared((OCDummy^)nullptr)

{
  nativeHandle = new Handle_TopOpeBRepTool_HBoxTool(new TopOpeBRepTool_HBoxTool());
}

 void OCTopOpeBRepTool_HBoxTool::Clear()
{
  (*((Handle_TopOpeBRepTool_HBoxTool*)nativeHandle))->Clear();
}

 void OCTopOpeBRepTool_HBoxTool::AddBoxes(OCNaroWrappers::OCTopoDS_Shape^ S, OCTopAbs_ShapeEnum TS, OCTopAbs_ShapeEnum TA)
{
  (*((Handle_TopOpeBRepTool_HBoxTool*)nativeHandle))->AddBoxes(*((TopoDS_Shape*)S->Handle), (TopAbs_ShapeEnum)TS, (TopAbs_ShapeEnum)TA);
}

 void OCTopOpeBRepTool_HBoxTool::AddBox(OCNaroWrappers::OCTopoDS_Shape^ S)
{
  (*((Handle_TopOpeBRepTool_HBoxTool*)nativeHandle))->AddBox(*((TopoDS_Shape*)S->Handle));
}

 void OCTopOpeBRepTool_HBoxTool::ComputeBox(OCNaroWrappers::OCTopoDS_Shape^ S, OCNaroWrappers::OCBnd_Box^ B)
{
  TopOpeBRepTool_HBoxTool::ComputeBox(*((TopoDS_Shape*)S->Handle), *((Bnd_Box*)B->Handle));
}

 void OCTopOpeBRepTool_HBoxTool::ComputeBoxOnVertices(OCNaroWrappers::OCTopoDS_Shape^ S, OCNaroWrappers::OCBnd_Box^ B)
{
  TopOpeBRepTool_HBoxTool::ComputeBoxOnVertices(*((TopoDS_Shape*)S->Handle), *((Bnd_Box*)B->Handle));
}

 void OCTopOpeBRepTool_HBoxTool::DumpB(OCNaroWrappers::OCBnd_Box^ B)
{
  TopOpeBRepTool_HBoxTool::DumpB(*((Bnd_Box*)B->Handle));
}

OCBnd_Box^ OCTopOpeBRepTool_HBoxTool::Box(OCNaroWrappers::OCTopoDS_Shape^ S)
{
  Bnd_Box* tmp = new Bnd_Box();
  *tmp = (*((Handle_TopOpeBRepTool_HBoxTool*)nativeHandle))->Box(*((TopoDS_Shape*)S->Handle));
  return gcnew OCBnd_Box(tmp);
}

OCBnd_Box^ OCTopOpeBRepTool_HBoxTool::Box(Standard_Integer I)
{
  Bnd_Box* tmp = new Bnd_Box();
  *tmp = (*((Handle_TopOpeBRepTool_HBoxTool*)nativeHandle))->Box(I);
  return gcnew OCBnd_Box(tmp);
}

 System::Boolean OCTopOpeBRepTool_HBoxTool::HasBox(OCNaroWrappers::OCTopoDS_Shape^ S)
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_TopOpeBRepTool_HBoxTool*)nativeHandle))->HasBox(*((TopoDS_Shape*)S->Handle)));
}

OCTopoDS_Shape^ OCTopOpeBRepTool_HBoxTool::Shape(Standard_Integer I)
{
  TopoDS_Shape* tmp = new TopoDS_Shape();
  *tmp = (*((Handle_TopOpeBRepTool_HBoxTool*)nativeHandle))->Shape(I);
  return gcnew OCTopoDS_Shape(tmp);
}

 Standard_Integer OCTopOpeBRepTool_HBoxTool::Index(OCNaroWrappers::OCTopoDS_Shape^ S)
{
  return (*((Handle_TopOpeBRepTool_HBoxTool*)nativeHandle))->Index(*((TopoDS_Shape*)S->Handle));
}

 Standard_Integer OCTopOpeBRepTool_HBoxTool::Extent()
{
  return (*((Handle_TopOpeBRepTool_HBoxTool*)nativeHandle))->Extent();
}

OCTopOpeBRepTool_IndexedDataMapOfShapeBox^ OCTopOpeBRepTool_HBoxTool::ChangeIMS()
{
  TopOpeBRepTool_IndexedDataMapOfShapeBox* tmp = new TopOpeBRepTool_IndexedDataMapOfShapeBox(0);
  *tmp = (*((Handle_TopOpeBRepTool_HBoxTool*)nativeHandle))->ChangeIMS();
  return gcnew OCTopOpeBRepTool_IndexedDataMapOfShapeBox(tmp);
}

OCTopOpeBRepTool_IndexedDataMapOfShapeBox^ OCTopOpeBRepTool_HBoxTool::IMS()
{
  TopOpeBRepTool_IndexedDataMapOfShapeBox* tmp = new TopOpeBRepTool_IndexedDataMapOfShapeBox(0);
  *tmp = (*((Handle_TopOpeBRepTool_HBoxTool*)nativeHandle))->IMS();
  return gcnew OCTopOpeBRepTool_IndexedDataMapOfShapeBox(tmp);
}



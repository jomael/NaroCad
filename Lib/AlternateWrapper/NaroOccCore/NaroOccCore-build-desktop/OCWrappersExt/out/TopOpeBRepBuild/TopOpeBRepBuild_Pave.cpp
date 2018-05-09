// File generated by CPPExt (CPP file)
//

#include "TopOpeBRepBuild_Pave.h"
#include "../Converter.h"
#include "../TopoDS/TopoDS_Shape.h"


using namespace OCNaroWrappers;

OCTopOpeBRepBuild_Pave::OCTopOpeBRepBuild_Pave(Handle(TopOpeBRepBuild_Pave)* nativeHandle) : OCTopOpeBRepBuild_Loop((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_TopOpeBRepBuild_Pave(*nativeHandle);
}

OCTopOpeBRepBuild_Pave::OCTopOpeBRepBuild_Pave(OCNaroWrappers::OCTopoDS_Shape^ V, Standard_Real P, System::Boolean bound) : OCTopOpeBRepBuild_Loop((OCDummy^)nullptr)

{
  nativeHandle = new Handle_TopOpeBRepBuild_Pave(new TopOpeBRepBuild_Pave(*((TopoDS_Shape*)V->Handle), P, OCConverter::BooleanToStandardBoolean(bound)));
}

 void OCTopOpeBRepBuild_Pave::HasSameDomain(System::Boolean b)
{
  (*((Handle_TopOpeBRepBuild_Pave*)nativeHandle))->HasSameDomain(OCConverter::BooleanToStandardBoolean(b));
}

 void OCTopOpeBRepBuild_Pave::SameDomain(OCNaroWrappers::OCTopoDS_Shape^ VSD)
{
  (*((Handle_TopOpeBRepBuild_Pave*)nativeHandle))->SameDomain(*((TopoDS_Shape*)VSD->Handle));
}

 System::Boolean OCTopOpeBRepBuild_Pave::HasSameDomain()
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_TopOpeBRepBuild_Pave*)nativeHandle))->HasSameDomain());
}

OCTopoDS_Shape^ OCTopOpeBRepBuild_Pave::SameDomain()
{
  TopoDS_Shape* tmp = new TopoDS_Shape();
  *tmp = (*((Handle_TopOpeBRepBuild_Pave*)nativeHandle))->SameDomain();
  return gcnew OCTopoDS_Shape(tmp);
}

OCTopoDS_Shape^ OCTopOpeBRepBuild_Pave::Vertex()
{
  TopoDS_Shape* tmp = new TopoDS_Shape();
  *tmp = (*((Handle_TopOpeBRepBuild_Pave*)nativeHandle))->Vertex();
  return gcnew OCTopoDS_Shape(tmp);
}

OCTopoDS_Shape^ OCTopOpeBRepBuild_Pave::ChangeVertex()
{
  TopoDS_Shape* tmp = new TopoDS_Shape();
  *tmp = (*((Handle_TopOpeBRepBuild_Pave*)nativeHandle))->ChangeVertex();
  return gcnew OCTopoDS_Shape(tmp);
}

 Standard_Real OCTopOpeBRepBuild_Pave::Parameter()
{
  return (*((Handle_TopOpeBRepBuild_Pave*)nativeHandle))->Parameter();
}

 void OCTopOpeBRepBuild_Pave::Parameter(Standard_Real Par)
{
  (*((Handle_TopOpeBRepBuild_Pave*)nativeHandle))->Parameter(Par);
}

 OCTopOpeBRepDS_Kind OCTopOpeBRepBuild_Pave::InterferenceType()
{
  return (OCTopOpeBRepDS_Kind)((*((Handle_TopOpeBRepBuild_Pave*)nativeHandle))->InterferenceType());
}

 System::Boolean OCTopOpeBRepBuild_Pave::IsShape()
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_TopOpeBRepBuild_Pave*)nativeHandle))->IsShape());
}

OCTopoDS_Shape^ OCTopOpeBRepBuild_Pave::Shape()
{
  TopoDS_Shape* tmp = new TopoDS_Shape();
  *tmp = (*((Handle_TopOpeBRepBuild_Pave*)nativeHandle))->Shape();
  return gcnew OCTopoDS_Shape(tmp);
}

 void OCTopOpeBRepBuild_Pave::Dump()
{
  (*((Handle_TopOpeBRepBuild_Pave*)nativeHandle))->Dump();
}



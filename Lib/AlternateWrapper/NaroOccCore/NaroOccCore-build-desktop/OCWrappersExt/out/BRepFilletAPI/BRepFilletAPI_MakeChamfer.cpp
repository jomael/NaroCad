// File generated by CPPExt (CPP file)
//

#include "BRepFilletAPI_MakeChamfer.h"
#include "../Converter.h"
#include "../TopoDS/TopoDS_Shape.h"
#include "../TopoDS/TopoDS_Edge.h"
#include "../TopoDS/TopoDS_Face.h"
#include "../TopoDS/TopoDS_Vertex.h"
#include "../TopOpeBRepBuild/TopOpeBRepBuild_HBuilder.h"
#include "../TopTools/TopTools_ListOfShape.h"
#include "../ChFiDS/ChFiDS_SecHArray1.h"


using namespace OCNaroWrappers;

OCBRepFilletAPI_MakeChamfer::OCBRepFilletAPI_MakeChamfer(BRepFilletAPI_MakeChamfer* nativeHandle) : OCBRepFilletAPI_LocalOperation((OCDummy^)nullptr)

{
  this->nativeHandle = nativeHandle;
}

OCBRepFilletAPI_MakeChamfer::OCBRepFilletAPI_MakeChamfer(OCNaroWrappers::OCTopoDS_Shape^ S) : OCBRepFilletAPI_LocalOperation((OCDummy^)nullptr)

{
  nativeHandle = new BRepFilletAPI_MakeChamfer(*((TopoDS_Shape*)S->Handle));
}

 void OCBRepFilletAPI_MakeChamfer::Add(OCNaroWrappers::OCTopoDS_Edge^ E)
{
  ((BRepFilletAPI_MakeChamfer*)nativeHandle)->Add(*((TopoDS_Edge*)E->Handle));
}

 void OCBRepFilletAPI_MakeChamfer::Add(Standard_Real Dis, OCNaroWrappers::OCTopoDS_Edge^ E, OCNaroWrappers::OCTopoDS_Face^ F)
{
  ((BRepFilletAPI_MakeChamfer*)nativeHandle)->Add(Dis, *((TopoDS_Edge*)E->Handle), *((TopoDS_Face*)F->Handle));
}

 void OCBRepFilletAPI_MakeChamfer::SetDist(Standard_Real Dis, Standard_Integer IC, OCNaroWrappers::OCTopoDS_Face^ F)
{
  ((BRepFilletAPI_MakeChamfer*)nativeHandle)->SetDist(Dis, IC, *((TopoDS_Face*)F->Handle));
}

 void OCBRepFilletAPI_MakeChamfer::GetDist(Standard_Integer IC, Standard_Real& Dis)
{
  ((BRepFilletAPI_MakeChamfer*)nativeHandle)->GetDist(IC, Dis);
}

 void OCBRepFilletAPI_MakeChamfer::Add(Standard_Real Dis1, Standard_Real Dis2, OCNaroWrappers::OCTopoDS_Edge^ E, OCNaroWrappers::OCTopoDS_Face^ F)
{
  ((BRepFilletAPI_MakeChamfer*)nativeHandle)->Add(Dis1, Dis2, *((TopoDS_Edge*)E->Handle), *((TopoDS_Face*)F->Handle));
}

 void OCBRepFilletAPI_MakeChamfer::SetDists(Standard_Real Dis1, Standard_Real Dis2, Standard_Integer IC, OCNaroWrappers::OCTopoDS_Face^ F)
{
  ((BRepFilletAPI_MakeChamfer*)nativeHandle)->SetDists(Dis1, Dis2, IC, *((TopoDS_Face*)F->Handle));
}

 void OCBRepFilletAPI_MakeChamfer::Dists(Standard_Integer IC, Standard_Real& Dis1, Standard_Real& Dis2)
{
  ((BRepFilletAPI_MakeChamfer*)nativeHandle)->Dists(IC, Dis1, Dis2);
}

 void OCBRepFilletAPI_MakeChamfer::AddDA(Standard_Real Dis, Standard_Real Angle, OCNaroWrappers::OCTopoDS_Edge^ E, OCNaroWrappers::OCTopoDS_Face^ F)
{
  ((BRepFilletAPI_MakeChamfer*)nativeHandle)->AddDA(Dis, Angle, *((TopoDS_Edge*)E->Handle), *((TopoDS_Face*)F->Handle));
}

 void OCBRepFilletAPI_MakeChamfer::SetDistAngle(Standard_Real Dis, Standard_Real Angle, Standard_Integer IC, OCNaroWrappers::OCTopoDS_Face^ F)
{
  ((BRepFilletAPI_MakeChamfer*)nativeHandle)->SetDistAngle(Dis, Angle, IC, *((TopoDS_Face*)F->Handle));
}

 void OCBRepFilletAPI_MakeChamfer::GetDistAngle(Standard_Integer IC, Standard_Real& Dis, Standard_Real& Angle, System::Boolean& DisOnFace1)
{
  ((BRepFilletAPI_MakeChamfer*)nativeHandle)->GetDistAngle(IC, Dis, Angle, (Standard_Boolean&)(DisOnFace1));
}

 System::Boolean OCBRepFilletAPI_MakeChamfer::IsSymetric(Standard_Integer IC)
{
  return OCConverter::StandardBooleanToBoolean(((BRepFilletAPI_MakeChamfer*)nativeHandle)->IsSymetric(IC));
}

 System::Boolean OCBRepFilletAPI_MakeChamfer::IsTwoDistances(Standard_Integer IC)
{
  return OCConverter::StandardBooleanToBoolean(((BRepFilletAPI_MakeChamfer*)nativeHandle)->IsTwoDistances(IC));
}

 System::Boolean OCBRepFilletAPI_MakeChamfer::IsDistanceAngle(Standard_Integer IC)
{
  return OCConverter::StandardBooleanToBoolean(((BRepFilletAPI_MakeChamfer*)nativeHandle)->IsDistanceAngle(IC));
}

 void OCBRepFilletAPI_MakeChamfer::ResetContour(Standard_Integer IC)
{
  ((BRepFilletAPI_MakeChamfer*)nativeHandle)->ResetContour(IC);
}

 Standard_Integer OCBRepFilletAPI_MakeChamfer::NbContours()
{
  return ((BRepFilletAPI_MakeChamfer*)nativeHandle)->NbContours();
}

 Standard_Integer OCBRepFilletAPI_MakeChamfer::Contour(OCNaroWrappers::OCTopoDS_Edge^ E)
{
  return ((BRepFilletAPI_MakeChamfer*)nativeHandle)->Contour(*((TopoDS_Edge*)E->Handle));
}

 Standard_Integer OCBRepFilletAPI_MakeChamfer::NbEdges(Standard_Integer I)
{
  return ((BRepFilletAPI_MakeChamfer*)nativeHandle)->NbEdges(I);
}

OCTopoDS_Edge^ OCBRepFilletAPI_MakeChamfer::Edge(Standard_Integer I, Standard_Integer J)
{
  TopoDS_Edge* tmp = new TopoDS_Edge();
  *tmp = ((BRepFilletAPI_MakeChamfer*)nativeHandle)->Edge(I, J);
  return gcnew OCTopoDS_Edge(tmp);
}

 void OCBRepFilletAPI_MakeChamfer::Remove(OCNaroWrappers::OCTopoDS_Edge^ E)
{
  ((BRepFilletAPI_MakeChamfer*)nativeHandle)->Remove(*((TopoDS_Edge*)E->Handle));
}

 Standard_Real OCBRepFilletAPI_MakeChamfer::Length(Standard_Integer IC)
{
  return ((BRepFilletAPI_MakeChamfer*)nativeHandle)->Length(IC);
}

OCTopoDS_Vertex^ OCBRepFilletAPI_MakeChamfer::FirstVertex(Standard_Integer IC)
{
  TopoDS_Vertex* tmp = new TopoDS_Vertex();
  *tmp = ((BRepFilletAPI_MakeChamfer*)nativeHandle)->FirstVertex(IC);
  return gcnew OCTopoDS_Vertex(tmp);
}

OCTopoDS_Vertex^ OCBRepFilletAPI_MakeChamfer::LastVertex(Standard_Integer IC)
{
  TopoDS_Vertex* tmp = new TopoDS_Vertex();
  *tmp = ((BRepFilletAPI_MakeChamfer*)nativeHandle)->LastVertex(IC);
  return gcnew OCTopoDS_Vertex(tmp);
}

 Standard_Real OCBRepFilletAPI_MakeChamfer::Abscissa(Standard_Integer IC, OCNaroWrappers::OCTopoDS_Vertex^ V)
{
  return ((BRepFilletAPI_MakeChamfer*)nativeHandle)->Abscissa(IC, *((TopoDS_Vertex*)V->Handle));
}

 Standard_Real OCBRepFilletAPI_MakeChamfer::RelativeAbscissa(Standard_Integer IC, OCNaroWrappers::OCTopoDS_Vertex^ V)
{
  return ((BRepFilletAPI_MakeChamfer*)nativeHandle)->RelativeAbscissa(IC, *((TopoDS_Vertex*)V->Handle));
}

 System::Boolean OCBRepFilletAPI_MakeChamfer::ClosedAndTangent(Standard_Integer IC)
{
  return OCConverter::StandardBooleanToBoolean(((BRepFilletAPI_MakeChamfer*)nativeHandle)->ClosedAndTangent(IC));
}

 System::Boolean OCBRepFilletAPI_MakeChamfer::Closed(Standard_Integer IC)
{
  return OCConverter::StandardBooleanToBoolean(((BRepFilletAPI_MakeChamfer*)nativeHandle)->Closed(IC));
}

 void OCBRepFilletAPI_MakeChamfer::Build()
{
  ((BRepFilletAPI_MakeChamfer*)nativeHandle)->Build();
}

 void OCBRepFilletAPI_MakeChamfer::Reset()
{
  ((BRepFilletAPI_MakeChamfer*)nativeHandle)->Reset();
}

OCTopOpeBRepBuild_HBuilder^ OCBRepFilletAPI_MakeChamfer::Builder()
{
  Handle(TopOpeBRepBuild_HBuilder) tmp = ((BRepFilletAPI_MakeChamfer*)nativeHandle)->Builder();
  return gcnew OCTopOpeBRepBuild_HBuilder(&tmp);
}

OCTopTools_ListOfShape^ OCBRepFilletAPI_MakeChamfer::Generated(OCNaroWrappers::OCTopoDS_Shape^ EorV)
{
  TopTools_ListOfShape* tmp = new TopTools_ListOfShape();
  *tmp = ((BRepFilletAPI_MakeChamfer*)nativeHandle)->Generated(*((TopoDS_Shape*)EorV->Handle));
  return gcnew OCTopTools_ListOfShape(tmp);
}

OCTopTools_ListOfShape^ OCBRepFilletAPI_MakeChamfer::Modified(OCNaroWrappers::OCTopoDS_Shape^ F)
{
  TopTools_ListOfShape* tmp = new TopTools_ListOfShape();
  *tmp = ((BRepFilletAPI_MakeChamfer*)nativeHandle)->Modified(*((TopoDS_Shape*)F->Handle));
  return gcnew OCTopTools_ListOfShape(tmp);
}

 System::Boolean OCBRepFilletAPI_MakeChamfer::IsDeleted(OCNaroWrappers::OCTopoDS_Shape^ F)
{
  return OCConverter::StandardBooleanToBoolean(((BRepFilletAPI_MakeChamfer*)nativeHandle)->IsDeleted(*((TopoDS_Shape*)F->Handle)));
}

 void OCBRepFilletAPI_MakeChamfer::Simulate(Standard_Integer IC)
{
  ((BRepFilletAPI_MakeChamfer*)nativeHandle)->Simulate(IC);
}

 Standard_Integer OCBRepFilletAPI_MakeChamfer::NbSurf(Standard_Integer IC)
{
  return ((BRepFilletAPI_MakeChamfer*)nativeHandle)->NbSurf(IC);
}

OCChFiDS_SecHArray1^ OCBRepFilletAPI_MakeChamfer::Sect(Standard_Integer IC, Standard_Integer IS)
{
  Handle(ChFiDS_SecHArray1) tmp = ((BRepFilletAPI_MakeChamfer*)nativeHandle)->Sect(IC, IS);
  return gcnew OCChFiDS_SecHArray1(&tmp);
}



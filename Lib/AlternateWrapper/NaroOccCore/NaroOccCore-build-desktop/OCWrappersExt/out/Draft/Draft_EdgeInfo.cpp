// File generated by CPPExt (CPP file)
//

#include "Draft_EdgeInfo.h"
#include "../Converter.h"
#include "../Geom/Geom_Curve.h"
#include "../Geom2d/Geom2d_Curve.h"
#include "../TopoDS/TopoDS_Face.h"
#include "../gp/gp_Pnt.h"


using namespace OCNaroWrappers;

OCDraft_EdgeInfo::OCDraft_EdgeInfo(Draft_EdgeInfo* nativeHandle) 
{
  this->nativeHandle = nativeHandle;
}

OCDraft_EdgeInfo::OCDraft_EdgeInfo() 
{
  nativeHandle = new Draft_EdgeInfo();
}

OCDraft_EdgeInfo::OCDraft_EdgeInfo(System::Boolean HasNewGeometry) 
{
  nativeHandle = new Draft_EdgeInfo(OCConverter::BooleanToStandardBoolean(HasNewGeometry));
}

 void OCDraft_EdgeInfo::Add(OCNaroWrappers::OCTopoDS_Face^ F)
{
  ((Draft_EdgeInfo*)nativeHandle)->Add(*((TopoDS_Face*)F->Handle));
}

 void OCDraft_EdgeInfo::RootFace(OCNaroWrappers::OCTopoDS_Face^ F)
{
  ((Draft_EdgeInfo*)nativeHandle)->RootFace(*((TopoDS_Face*)F->Handle));
}

 void OCDraft_EdgeInfo::Tangent(OCNaroWrappers::OCgp_Pnt^ P)
{
  ((Draft_EdgeInfo*)nativeHandle)->Tangent(*((gp_Pnt*)P->Handle));
}

 System::Boolean OCDraft_EdgeInfo::IsTangent(OCNaroWrappers::OCgp_Pnt^ P)
{
  return OCConverter::StandardBooleanToBoolean(((Draft_EdgeInfo*)nativeHandle)->IsTangent(*((gp_Pnt*)P->Handle)));
}

 System::Boolean OCDraft_EdgeInfo::NewGeometry()
{
  return OCConverter::StandardBooleanToBoolean(((Draft_EdgeInfo*)nativeHandle)->NewGeometry());
}

 void OCDraft_EdgeInfo::SetNewGeometry(System::Boolean NewGeom)
{
  ((Draft_EdgeInfo*)nativeHandle)->SetNewGeometry(OCConverter::BooleanToStandardBoolean(NewGeom));
}

OCGeom_Curve^ OCDraft_EdgeInfo::Geometry()
{
  Handle(Geom_Curve) tmp = ((Draft_EdgeInfo*)nativeHandle)->Geometry();
  return gcnew OCGeom_Curve(&tmp);
}

OCTopoDS_Face^ OCDraft_EdgeInfo::FirstFace()
{
  TopoDS_Face* tmp = new TopoDS_Face();
  *tmp = ((Draft_EdgeInfo*)nativeHandle)->FirstFace();
  return gcnew OCTopoDS_Face(tmp);
}

OCTopoDS_Face^ OCDraft_EdgeInfo::SecondFace()
{
  TopoDS_Face* tmp = new TopoDS_Face();
  *tmp = ((Draft_EdgeInfo*)nativeHandle)->SecondFace();
  return gcnew OCTopoDS_Face(tmp);
}

OCGeom2d_Curve^ OCDraft_EdgeInfo::FirstPC()
{
  Handle(Geom2d_Curve) tmp = ((Draft_EdgeInfo*)nativeHandle)->FirstPC();
  return gcnew OCGeom2d_Curve(&tmp);
}

OCGeom2d_Curve^ OCDraft_EdgeInfo::SecondPC()
{
  Handle(Geom2d_Curve) tmp = ((Draft_EdgeInfo*)nativeHandle)->SecondPC();
  return gcnew OCGeom2d_Curve(&tmp);
}

OCGeom_Curve^ OCDraft_EdgeInfo::ChangeGeometry()
{
  Handle(Geom_Curve) tmp = ((Draft_EdgeInfo*)nativeHandle)->ChangeGeometry();
  return gcnew OCGeom_Curve(&tmp);
}

OCGeom2d_Curve^ OCDraft_EdgeInfo::ChangeFirstPC()
{
  Handle(Geom2d_Curve) tmp = ((Draft_EdgeInfo*)nativeHandle)->ChangeFirstPC();
  return gcnew OCGeom2d_Curve(&tmp);
}

OCGeom2d_Curve^ OCDraft_EdgeInfo::ChangeSecondPC()
{
  Handle(Geom2d_Curve) tmp = ((Draft_EdgeInfo*)nativeHandle)->ChangeSecondPC();
  return gcnew OCGeom2d_Curve(&tmp);
}

OCTopoDS_Face^ OCDraft_EdgeInfo::RootFace()
{
  TopoDS_Face* tmp = new TopoDS_Face();
  *tmp = ((Draft_EdgeInfo*)nativeHandle)->RootFace();
  return gcnew OCTopoDS_Face(tmp);
}

 void OCDraft_EdgeInfo::Tolerance(Standard_Real tol)
{
  ((Draft_EdgeInfo*)nativeHandle)->Tolerance(tol);
}

 Standard_Real OCDraft_EdgeInfo::Tolerance()
{
  return ((Draft_EdgeInfo*)nativeHandle)->Tolerance();
}



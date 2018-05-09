// File generated by CPPExt (CPP file)
//

#include "BRepPrimAPI_MakeBox.h"
#include "../Converter.h"
#include "../gp/gp_Pnt.h"
#include "../gp/gp_Ax2.h"
#include "../BRepPrim/BRepPrim_Wedge.h"
#include "../TopoDS/TopoDS_Shell.h"
#include "../TopoDS/TopoDS_Solid.h"
#include "../TopoDS/TopoDS_Face.h"


using namespace OCNaroWrappers;

OCBRepPrimAPI_MakeBox::OCBRepPrimAPI_MakeBox(BRepPrimAPI_MakeBox* nativeHandle) : OCBRepBuilderAPI_MakeShape((OCDummy^)nullptr)

{
  this->nativeHandle = nativeHandle;
}

OCBRepPrimAPI_MakeBox::OCBRepPrimAPI_MakeBox(Standard_Real dx, Standard_Real dy, Standard_Real dz) : OCBRepBuilderAPI_MakeShape((OCDummy^)nullptr)

{
  nativeHandle = new BRepPrimAPI_MakeBox(dx, dy, dz);
}

OCBRepPrimAPI_MakeBox::OCBRepPrimAPI_MakeBox(OCNaroWrappers::OCgp_Pnt^ P, Standard_Real dx, Standard_Real dy, Standard_Real dz) : OCBRepBuilderAPI_MakeShape((OCDummy^)nullptr)

{
  nativeHandle = new BRepPrimAPI_MakeBox(*((gp_Pnt*)P->Handle), dx, dy, dz);
}

OCBRepPrimAPI_MakeBox::OCBRepPrimAPI_MakeBox(OCNaroWrappers::OCgp_Pnt^ P1, OCNaroWrappers::OCgp_Pnt^ P2) : OCBRepBuilderAPI_MakeShape((OCDummy^)nullptr)

{
  nativeHandle = new BRepPrimAPI_MakeBox(*((gp_Pnt*)P1->Handle), *((gp_Pnt*)P2->Handle));
}

OCBRepPrimAPI_MakeBox::OCBRepPrimAPI_MakeBox(OCNaroWrappers::OCgp_Ax2^ Axes, Standard_Real dx, Standard_Real dy, Standard_Real dz) : OCBRepBuilderAPI_MakeShape((OCDummy^)nullptr)

{
  nativeHandle = new BRepPrimAPI_MakeBox(*((gp_Ax2*)Axes->Handle), dx, dy, dz);
}

OCBRepPrim_Wedge^ OCBRepPrimAPI_MakeBox::Wedge()
{
  BRepPrim_Wedge* tmp = new BRepPrim_Wedge(123abc, 0, 0, 0);
  *tmp = ((BRepPrimAPI_MakeBox*)nativeHandle)->Wedge();
  return gcnew OCBRepPrim_Wedge(tmp);
}

 void OCBRepPrimAPI_MakeBox::Build()
{
  ((BRepPrimAPI_MakeBox*)nativeHandle)->Build();
}

OCTopoDS_Shell^ OCBRepPrimAPI_MakeBox::Shell()
{
  TopoDS_Shell* tmp = new TopoDS_Shell();
  *tmp = ((BRepPrimAPI_MakeBox*)nativeHandle)->Shell();
  return gcnew OCTopoDS_Shell(tmp);
}

OCTopoDS_Solid^ OCBRepPrimAPI_MakeBox::Solid()
{
  TopoDS_Solid* tmp = new TopoDS_Solid();
  *tmp = ((BRepPrimAPI_MakeBox*)nativeHandle)->Solid();
  return gcnew OCTopoDS_Solid(tmp);
}

OCTopoDS_Face^ OCBRepPrimAPI_MakeBox::BottomFace()
{
  TopoDS_Face* tmp = new TopoDS_Face();
  *tmp = ((BRepPrimAPI_MakeBox*)nativeHandle)->BottomFace();
  return gcnew OCTopoDS_Face(tmp);
}

OCTopoDS_Face^ OCBRepPrimAPI_MakeBox::BackFace()
{
  TopoDS_Face* tmp = new TopoDS_Face();
  *tmp = ((BRepPrimAPI_MakeBox*)nativeHandle)->BackFace();
  return gcnew OCTopoDS_Face(tmp);
}

OCTopoDS_Face^ OCBRepPrimAPI_MakeBox::FrontFace()
{
  TopoDS_Face* tmp = new TopoDS_Face();
  *tmp = ((BRepPrimAPI_MakeBox*)nativeHandle)->FrontFace();
  return gcnew OCTopoDS_Face(tmp);
}

OCTopoDS_Face^ OCBRepPrimAPI_MakeBox::LeftFace()
{
  TopoDS_Face* tmp = new TopoDS_Face();
  *tmp = ((BRepPrimAPI_MakeBox*)nativeHandle)->LeftFace();
  return gcnew OCTopoDS_Face(tmp);
}

OCTopoDS_Face^ OCBRepPrimAPI_MakeBox::RightFace()
{
  TopoDS_Face* tmp = new TopoDS_Face();
  *tmp = ((BRepPrimAPI_MakeBox*)nativeHandle)->RightFace();
  return gcnew OCTopoDS_Face(tmp);
}

OCTopoDS_Face^ OCBRepPrimAPI_MakeBox::TopFace()
{
  TopoDS_Face* tmp = new TopoDS_Face();
  *tmp = ((BRepPrimAPI_MakeBox*)nativeHandle)->TopFace();
  return gcnew OCTopoDS_Face(tmp);
}



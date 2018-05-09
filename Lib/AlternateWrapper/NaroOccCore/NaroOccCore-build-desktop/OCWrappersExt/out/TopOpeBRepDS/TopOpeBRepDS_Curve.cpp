// File generated by CPPExt (CPP file)
//

#include "TopOpeBRepDS_Curve.h"
#include "../Converter.h"
#include "../Geom/Geom_Curve.h"
#include "TopOpeBRepDS_Interference.h"
#include "../TopoDS/TopoDS_Shape.h"
#include "../Geom2d/Geom2d_Curve.h"


using namespace OCNaroWrappers;

OCTopOpeBRepDS_Curve::OCTopOpeBRepDS_Curve(TopOpeBRepDS_Curve* nativeHandle) 
{
  this->nativeHandle = nativeHandle;
}

OCTopOpeBRepDS_Curve::OCTopOpeBRepDS_Curve() 
{
  nativeHandle = new TopOpeBRepDS_Curve();
}

OCTopOpeBRepDS_Curve::OCTopOpeBRepDS_Curve(OCNaroWrappers::OCGeom_Curve^ P, Standard_Real T, System::Boolean IsWalk) 
{
  nativeHandle = new TopOpeBRepDS_Curve(*((Handle_Geom_Curve*)P->Handle), T, OCConverter::BooleanToStandardBoolean(IsWalk));
}

 void OCTopOpeBRepDS_Curve::DefineCurve(OCNaroWrappers::OCGeom_Curve^ P, Standard_Real T, System::Boolean IsWalk)
{
  ((TopOpeBRepDS_Curve*)nativeHandle)->DefineCurve(*((Handle_Geom_Curve*)P->Handle), T, OCConverter::BooleanToStandardBoolean(IsWalk));
}

 void OCTopOpeBRepDS_Curve::Tolerance(Standard_Real tol)
{
  ((TopOpeBRepDS_Curve*)nativeHandle)->Tolerance(tol);
}

 void OCTopOpeBRepDS_Curve::SetSCI(OCNaroWrappers::OCTopOpeBRepDS_Interference^ I1, OCNaroWrappers::OCTopOpeBRepDS_Interference^ I2)
{
  ((TopOpeBRepDS_Curve*)nativeHandle)->SetSCI(*((Handle_TopOpeBRepDS_Interference*)I1->Handle), *((Handle_TopOpeBRepDS_Interference*)I2->Handle));
}

OCTopOpeBRepDS_Interference^ OCTopOpeBRepDS_Curve::GetSCI1()
{
  Handle(TopOpeBRepDS_Interference) tmp = ((TopOpeBRepDS_Curve*)nativeHandle)->GetSCI1();
  return gcnew OCTopOpeBRepDS_Interference(&tmp);
}

OCTopOpeBRepDS_Interference^ OCTopOpeBRepDS_Curve::GetSCI2()
{
  Handle(TopOpeBRepDS_Interference) tmp = ((TopOpeBRepDS_Curve*)nativeHandle)->GetSCI2();
  return gcnew OCTopOpeBRepDS_Interference(&tmp);
}

 void OCTopOpeBRepDS_Curve::GetSCI(OCNaroWrappers::OCTopOpeBRepDS_Interference^ I1, OCNaroWrappers::OCTopOpeBRepDS_Interference^ I2)
{
  ((TopOpeBRepDS_Curve*)nativeHandle)->GetSCI(*((Handle_TopOpeBRepDS_Interference*)I1->Handle), *((Handle_TopOpeBRepDS_Interference*)I2->Handle));
}

 void OCTopOpeBRepDS_Curve::SetShapes(OCNaroWrappers::OCTopoDS_Shape^ S1, OCNaroWrappers::OCTopoDS_Shape^ S2)
{
  ((TopOpeBRepDS_Curve*)nativeHandle)->SetShapes(*((TopoDS_Shape*)S1->Handle), *((TopoDS_Shape*)S2->Handle));
}

 void OCTopOpeBRepDS_Curve::GetShapes(OCNaroWrappers::OCTopoDS_Shape^ S1, OCNaroWrappers::OCTopoDS_Shape^ S2)
{
  ((TopOpeBRepDS_Curve*)nativeHandle)->GetShapes(*((TopoDS_Shape*)S1->Handle), *((TopoDS_Shape*)S2->Handle));
}

OCTopoDS_Shape^ OCTopOpeBRepDS_Curve::Shape1()
{
  TopoDS_Shape* tmp = new TopoDS_Shape();
  *tmp = ((TopOpeBRepDS_Curve*)nativeHandle)->Shape1();
  return gcnew OCTopoDS_Shape(tmp);
}

OCTopoDS_Shape^ OCTopOpeBRepDS_Curve::ChangeShape1()
{
  TopoDS_Shape* tmp = new TopoDS_Shape();
  *tmp = ((TopOpeBRepDS_Curve*)nativeHandle)->ChangeShape1();
  return gcnew OCTopoDS_Shape(tmp);
}

OCTopoDS_Shape^ OCTopOpeBRepDS_Curve::Shape2()
{
  TopoDS_Shape* tmp = new TopoDS_Shape();
  *tmp = ((TopOpeBRepDS_Curve*)nativeHandle)->Shape2();
  return gcnew OCTopoDS_Shape(tmp);
}

OCTopoDS_Shape^ OCTopOpeBRepDS_Curve::ChangeShape2()
{
  TopoDS_Shape* tmp = new TopoDS_Shape();
  *tmp = ((TopOpeBRepDS_Curve*)nativeHandle)->ChangeShape2();
  return gcnew OCTopoDS_Shape(tmp);
}

OCGeom_Curve^ OCTopOpeBRepDS_Curve::Curve()
{
  Handle(Geom_Curve) tmp = ((TopOpeBRepDS_Curve*)nativeHandle)->Curve();
  return gcnew OCGeom_Curve(&tmp);
}

 void OCTopOpeBRepDS_Curve::SetRange(Standard_Real First, Standard_Real Last)
{
  ((TopOpeBRepDS_Curve*)nativeHandle)->SetRange(First, Last);
}

 System::Boolean OCTopOpeBRepDS_Curve::Range(Standard_Real& First, Standard_Real& Last)
{
  return OCConverter::StandardBooleanToBoolean(((TopOpeBRepDS_Curve*)nativeHandle)->Range(First, Last));
}

 Standard_Real OCTopOpeBRepDS_Curve::Tolerance()
{
  return ((TopOpeBRepDS_Curve*)nativeHandle)->Tolerance();
}

OCGeom_Curve^ OCTopOpeBRepDS_Curve::ChangeCurve()
{
  Handle(Geom_Curve) tmp = ((TopOpeBRepDS_Curve*)nativeHandle)->ChangeCurve();
  return gcnew OCGeom_Curve(&tmp);
}

 void OCTopOpeBRepDS_Curve::Curve(OCNaroWrappers::OCGeom_Curve^ C3D, Standard_Real Tol)
{
  ((TopOpeBRepDS_Curve*)nativeHandle)->Curve(*((Handle_Geom_Curve*)C3D->Handle), Tol);
}

OCGeom2d_Curve^ OCTopOpeBRepDS_Curve::Curve1()
{
  Handle(Geom2d_Curve) tmp = ((TopOpeBRepDS_Curve*)nativeHandle)->Curve1();
  return gcnew OCGeom2d_Curve(&tmp);
}

 void OCTopOpeBRepDS_Curve::Curve1(OCNaroWrappers::OCGeom2d_Curve^ PC1)
{
  ((TopOpeBRepDS_Curve*)nativeHandle)->Curve1(*((Handle_Geom2d_Curve*)PC1->Handle));
}

OCGeom2d_Curve^ OCTopOpeBRepDS_Curve::Curve2()
{
  Handle(Geom2d_Curve) tmp = ((TopOpeBRepDS_Curve*)nativeHandle)->Curve2();
  return gcnew OCGeom2d_Curve(&tmp);
}

 void OCTopOpeBRepDS_Curve::Curve2(OCNaroWrappers::OCGeom2d_Curve^ PC2)
{
  ((TopOpeBRepDS_Curve*)nativeHandle)->Curve2(*((Handle_Geom2d_Curve*)PC2->Handle));
}

 System::Boolean OCTopOpeBRepDS_Curve::IsWalk()
{
  return OCConverter::StandardBooleanToBoolean(((TopOpeBRepDS_Curve*)nativeHandle)->IsWalk());
}

 void OCTopOpeBRepDS_Curve::ChangeIsWalk(System::Boolean B)
{
  ((TopOpeBRepDS_Curve*)nativeHandle)->ChangeIsWalk(OCConverter::BooleanToStandardBoolean(B));
}

 System::Boolean OCTopOpeBRepDS_Curve::Keep()
{
  return OCConverter::StandardBooleanToBoolean(((TopOpeBRepDS_Curve*)nativeHandle)->Keep());
}

 void OCTopOpeBRepDS_Curve::ChangeKeep(System::Boolean B)
{
  ((TopOpeBRepDS_Curve*)nativeHandle)->ChangeKeep(OCConverter::BooleanToStandardBoolean(B));
}

 Standard_Integer OCTopOpeBRepDS_Curve::Mother()
{
  return ((TopOpeBRepDS_Curve*)nativeHandle)->Mother();
}

 void OCTopOpeBRepDS_Curve::ChangeMother(Standard_Integer I)
{
  ((TopOpeBRepDS_Curve*)nativeHandle)->ChangeMother(I);
}

 Standard_Integer OCTopOpeBRepDS_Curve::DSIndex()
{
  return ((TopOpeBRepDS_Curve*)nativeHandle)->DSIndex();
}

 void OCTopOpeBRepDS_Curve::ChangeDSIndex(Standard_Integer I)
{
  ((TopOpeBRepDS_Curve*)nativeHandle)->ChangeDSIndex(I);
}

 Standard_OStream& OCTopOpeBRepDS_Curve::Dump(Standard_OStream& OS, Standard_Integer index, System::Boolean compact)
{
  return ((TopOpeBRepDS_Curve*)nativeHandle)->Dump(OS, index, OCConverter::BooleanToStandardBoolean(compact));
}



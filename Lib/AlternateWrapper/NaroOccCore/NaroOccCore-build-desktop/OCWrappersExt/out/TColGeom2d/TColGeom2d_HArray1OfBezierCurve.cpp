// File generated by CPPExt (CPP file)
//

#include "TColGeom2d_HArray1OfBezierCurve.h"
#include "../Converter.h"
#include "../Geom2d/Geom2d_BezierCurve.h"
#include "TColGeom2d_Array1OfBezierCurve.h"


using namespace OCNaroWrappers;

OCTColGeom2d_HArray1OfBezierCurve::OCTColGeom2d_HArray1OfBezierCurve(Handle(TColGeom2d_HArray1OfBezierCurve)* nativeHandle) : OCMMgt_TShared((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_TColGeom2d_HArray1OfBezierCurve(*nativeHandle);
}

OCTColGeom2d_HArray1OfBezierCurve::OCTColGeom2d_HArray1OfBezierCurve(Standard_Integer Low, Standard_Integer Up) : OCMMgt_TShared((OCDummy^)nullptr)

{
  nativeHandle = new Handle_TColGeom2d_HArray1OfBezierCurve(new TColGeom2d_HArray1OfBezierCurve(Low, Up));
}

OCTColGeom2d_HArray1OfBezierCurve::OCTColGeom2d_HArray1OfBezierCurve(Standard_Integer Low, Standard_Integer Up, OCNaroWrappers::OCGeom2d_BezierCurve^ V) : OCMMgt_TShared((OCDummy^)nullptr)

{
  nativeHandle = new Handle_TColGeom2d_HArray1OfBezierCurve(new TColGeom2d_HArray1OfBezierCurve(Low, Up, *((Handle_Geom2d_BezierCurve*)V->Handle)));
}

 void OCTColGeom2d_HArray1OfBezierCurve::Init(OCNaroWrappers::OCGeom2d_BezierCurve^ V)
{
  (*((Handle_TColGeom2d_HArray1OfBezierCurve*)nativeHandle))->Init(*((Handle_Geom2d_BezierCurve*)V->Handle));
}

 Standard_Integer OCTColGeom2d_HArray1OfBezierCurve::Length()
{
  return (*((Handle_TColGeom2d_HArray1OfBezierCurve*)nativeHandle))->Length();
}

 Standard_Integer OCTColGeom2d_HArray1OfBezierCurve::Lower()
{
  return (*((Handle_TColGeom2d_HArray1OfBezierCurve*)nativeHandle))->Lower();
}

 Standard_Integer OCTColGeom2d_HArray1OfBezierCurve::Upper()
{
  return (*((Handle_TColGeom2d_HArray1OfBezierCurve*)nativeHandle))->Upper();
}

 void OCTColGeom2d_HArray1OfBezierCurve::SetValue(Standard_Integer Index, OCNaroWrappers::OCGeom2d_BezierCurve^ Value)
{
  (*((Handle_TColGeom2d_HArray1OfBezierCurve*)nativeHandle))->SetValue(Index, *((Handle_Geom2d_BezierCurve*)Value->Handle));
}

OCGeom2d_BezierCurve^ OCTColGeom2d_HArray1OfBezierCurve::Value(Standard_Integer Index)
{
  Handle(Geom2d_BezierCurve) tmp = (*((Handle_TColGeom2d_HArray1OfBezierCurve*)nativeHandle))->Value(Index);
  return gcnew OCGeom2d_BezierCurve(&tmp);
}

OCGeom2d_BezierCurve^ OCTColGeom2d_HArray1OfBezierCurve::ChangeValue(Standard_Integer Index)
{
  Handle(Geom2d_BezierCurve) tmp = (*((Handle_TColGeom2d_HArray1OfBezierCurve*)nativeHandle))->ChangeValue(Index);
  return gcnew OCGeom2d_BezierCurve(&tmp);
}

OCTColGeom2d_Array1OfBezierCurve^ OCTColGeom2d_HArray1OfBezierCurve::Array1()
{
  TColGeom2d_Array1OfBezierCurve* tmp = new TColGeom2d_Array1OfBezierCurve(0, 0);
  *tmp = (*((Handle_TColGeom2d_HArray1OfBezierCurve*)nativeHandle))->Array1();
  return gcnew OCTColGeom2d_Array1OfBezierCurve(tmp);
}

OCTColGeom2d_Array1OfBezierCurve^ OCTColGeom2d_HArray1OfBezierCurve::ChangeArray1()
{
  TColGeom2d_Array1OfBezierCurve* tmp = new TColGeom2d_Array1OfBezierCurve(0, 0);
  *tmp = (*((Handle_TColGeom2d_HArray1OfBezierCurve*)nativeHandle))->ChangeArray1();
  return gcnew OCTColGeom2d_Array1OfBezierCurve(tmp);
}



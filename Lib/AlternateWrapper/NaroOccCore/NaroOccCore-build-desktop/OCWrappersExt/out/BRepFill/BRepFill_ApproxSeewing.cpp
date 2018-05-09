// File generated by CPPExt (CPP file)
//

#include "BRepFill_ApproxSeewing.h"
#include "../Converter.h"
#include "../Geom/Geom_Curve.h"
#include "../Geom2d/Geom2d_Curve.h"
#include "BRepFill_MultiLine.h"


using namespace OCNaroWrappers;

OCBRepFill_ApproxSeewing::OCBRepFill_ApproxSeewing(BRepFill_ApproxSeewing* nativeHandle) 
{
  this->nativeHandle = nativeHandle;
}

OCBRepFill_ApproxSeewing::OCBRepFill_ApproxSeewing() 
{
  nativeHandle = new BRepFill_ApproxSeewing();
}

OCBRepFill_ApproxSeewing::OCBRepFill_ApproxSeewing(OCNaroWrappers::OCBRepFill_MultiLine^ ML) 
{
  nativeHandle = new BRepFill_ApproxSeewing(*((BRepFill_MultiLine*)ML->Handle));
}

 void OCBRepFill_ApproxSeewing::Perform(OCNaroWrappers::OCBRepFill_MultiLine^ ML)
{
  ((BRepFill_ApproxSeewing*)nativeHandle)->Perform(*((BRepFill_MultiLine*)ML->Handle));
}

 System::Boolean OCBRepFill_ApproxSeewing::IsDone()
{
  return OCConverter::StandardBooleanToBoolean(((BRepFill_ApproxSeewing*)nativeHandle)->IsDone());
}

OCGeom_Curve^ OCBRepFill_ApproxSeewing::Curve()
{
  Handle(Geom_Curve) tmp = ((BRepFill_ApproxSeewing*)nativeHandle)->Curve();
  return gcnew OCGeom_Curve(&tmp);
}

OCGeom2d_Curve^ OCBRepFill_ApproxSeewing::CurveOnF1()
{
  Handle(Geom2d_Curve) tmp = ((BRepFill_ApproxSeewing*)nativeHandle)->CurveOnF1();
  return gcnew OCGeom2d_Curve(&tmp);
}

OCGeom2d_Curve^ OCBRepFill_ApproxSeewing::CurveOnF2()
{
  Handle(Geom2d_Curve) tmp = ((BRepFill_ApproxSeewing*)nativeHandle)->CurveOnF2();
  return gcnew OCGeom2d_Curve(&tmp);
}



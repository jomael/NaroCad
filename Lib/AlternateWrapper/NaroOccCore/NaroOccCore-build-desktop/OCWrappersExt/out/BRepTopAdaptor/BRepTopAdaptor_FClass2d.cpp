// File generated by CPPExt (CPP file)
//

#include "BRepTopAdaptor_FClass2d.h"
#include "../Converter.h"
#include "../TopoDS/TopoDS_Face.h"
#include "../gp/gp_Pnt2d.h"


using namespace OCNaroWrappers;

OCBRepTopAdaptor_FClass2d::OCBRepTopAdaptor_FClass2d(BRepTopAdaptor_FClass2d* nativeHandle) 
{
  this->nativeHandle = nativeHandle;
}

OCBRepTopAdaptor_FClass2d::OCBRepTopAdaptor_FClass2d(OCNaroWrappers::OCTopoDS_Face^ F, Standard_Real Tol) 
{
  nativeHandle = new BRepTopAdaptor_FClass2d(*((TopoDS_Face*)F->Handle), Tol);
}

 OCTopAbs_State OCBRepTopAdaptor_FClass2d::PerformInfinitePoint()
{
  return (OCTopAbs_State)(((BRepTopAdaptor_FClass2d*)nativeHandle)->PerformInfinitePoint());
}

 OCTopAbs_State OCBRepTopAdaptor_FClass2d::Perform(OCNaroWrappers::OCgp_Pnt2d^ Puv, System::Boolean RecadreOnPeriodic)
{
  return (OCTopAbs_State)(((BRepTopAdaptor_FClass2d*)nativeHandle)->Perform(*((gp_Pnt2d*)Puv->Handle), OCConverter::BooleanToStandardBoolean(RecadreOnPeriodic)));
}

OCBRepTopAdaptor_FClass2d^ OCBRepTopAdaptor_FClass2d::Copy(OCNaroWrappers::OCBRepTopAdaptor_FClass2d^ Other)
{
  BRepTopAdaptor_FClass2d* tmp = new BRepTopAdaptor_FClass2d(123abc, 0);
  *tmp = ((BRepTopAdaptor_FClass2d*)nativeHandle)->Copy(*((BRepTopAdaptor_FClass2d*)Other->Handle));
  return gcnew OCBRepTopAdaptor_FClass2d(tmp);
}

 OCTopAbs_State OCBRepTopAdaptor_FClass2d::TestOnRestriction(OCNaroWrappers::OCgp_Pnt2d^ Puv, Standard_Real Tol, System::Boolean RecadreOnPeriodic)
{
  return (OCTopAbs_State)(((BRepTopAdaptor_FClass2d*)nativeHandle)->TestOnRestriction(*((gp_Pnt2d*)Puv->Handle), Tol, OCConverter::BooleanToStandardBoolean(RecadreOnPeriodic)));
}



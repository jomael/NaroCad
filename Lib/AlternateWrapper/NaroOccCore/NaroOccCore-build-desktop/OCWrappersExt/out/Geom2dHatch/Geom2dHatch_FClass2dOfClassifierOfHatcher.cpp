// File generated by CPPExt (CPP file)
//

#include "Geom2dHatch_FClass2dOfClassifierOfHatcher.h"
#include "../Converter.h"
#include "../Geom2dAdaptor/Geom2dAdaptor_Curve.h"
#include "Geom2dHatch_Intersector.h"
#include "../gp/gp_Lin2d.h"


using namespace OCNaroWrappers;

OCGeom2dHatch_FClass2dOfClassifierOfHatcher::OCGeom2dHatch_FClass2dOfClassifierOfHatcher(Geom2dHatch_FClass2dOfClassifierOfHatcher* nativeHandle) 
{
  this->nativeHandle = nativeHandle;
}

OCGeom2dHatch_FClass2dOfClassifierOfHatcher::OCGeom2dHatch_FClass2dOfClassifierOfHatcher() 
{
  nativeHandle = new Geom2dHatch_FClass2dOfClassifierOfHatcher();
}

 void OCGeom2dHatch_FClass2dOfClassifierOfHatcher::Reset(OCNaroWrappers::OCgp_Lin2d^ L, Standard_Real P, Standard_Real Tol)
{
  ((Geom2dHatch_FClass2dOfClassifierOfHatcher*)nativeHandle)->Reset(*((gp_Lin2d*)L->Handle), P, Tol);
}

 void OCGeom2dHatch_FClass2dOfClassifierOfHatcher::Compare(OCNaroWrappers::OCGeom2dAdaptor_Curve^ E, OCTopAbs_Orientation Or)
{
  ((Geom2dHatch_FClass2dOfClassifierOfHatcher*)nativeHandle)->Compare(*((Geom2dAdaptor_Curve*)E->Handle), (TopAbs_Orientation)Or);
}

 Standard_Real OCGeom2dHatch_FClass2dOfClassifierOfHatcher::Parameter()
{
  return ((Geom2dHatch_FClass2dOfClassifierOfHatcher*)nativeHandle)->Parameter();
}

OCGeom2dHatch_Intersector^ OCGeom2dHatch_FClass2dOfClassifierOfHatcher::Intersector()
{
  Geom2dHatch_Intersector* tmp = new Geom2dHatch_Intersector(0, 0);
  *tmp = ((Geom2dHatch_FClass2dOfClassifierOfHatcher*)nativeHandle)->Intersector();
  return gcnew OCGeom2dHatch_Intersector(tmp);
}

 Standard_Integer OCGeom2dHatch_FClass2dOfClassifierOfHatcher::ClosestIntersection()
{
  return ((Geom2dHatch_FClass2dOfClassifierOfHatcher*)nativeHandle)->ClosestIntersection();
}

 OCTopAbs_State OCGeom2dHatch_FClass2dOfClassifierOfHatcher::State()
{
  return (OCTopAbs_State)(((Geom2dHatch_FClass2dOfClassifierOfHatcher*)nativeHandle)->State());
}

 System::Boolean OCGeom2dHatch_FClass2dOfClassifierOfHatcher::IsHeadOrEnd()
{
  return OCConverter::StandardBooleanToBoolean(((Geom2dHatch_FClass2dOfClassifierOfHatcher*)nativeHandle)->IsHeadOrEnd());
}



// File generated by CPPExt (CPP file)
//

#include "Sweep_NumShape.h"
#include "../Converter.h"


using namespace OCNaroWrappers;

OCSweep_NumShape::OCSweep_NumShape(Sweep_NumShape* nativeHandle) 
{
  this->nativeHandle = nativeHandle;
}

OCSweep_NumShape::OCSweep_NumShape() 
{
  nativeHandle = new Sweep_NumShape();
}

OCSweep_NumShape::OCSweep_NumShape(Standard_Integer Index, OCTopAbs_ShapeEnum Type, System::Boolean Closed, System::Boolean BegInf, System::Boolean EndInf) 
{
  nativeHandle = new Sweep_NumShape(Index, (TopAbs_ShapeEnum)Type, OCConverter::BooleanToStandardBoolean(Closed), OCConverter::BooleanToStandardBoolean(BegInf), OCConverter::BooleanToStandardBoolean(EndInf));
}

 void OCSweep_NumShape::Init(Standard_Integer Index, OCTopAbs_ShapeEnum Type, System::Boolean Closed, System::Boolean BegInf, System::Boolean EndInf)
{
  ((Sweep_NumShape*)nativeHandle)->Init(Index, (TopAbs_ShapeEnum)Type, OCConverter::BooleanToStandardBoolean(Closed), OCConverter::BooleanToStandardBoolean(BegInf), OCConverter::BooleanToStandardBoolean(EndInf));
}

 Standard_Integer OCSweep_NumShape::Index()
{
  return ((Sweep_NumShape*)nativeHandle)->Index();
}

 OCTopAbs_ShapeEnum OCSweep_NumShape::Type()
{
  return (OCTopAbs_ShapeEnum)(((Sweep_NumShape*)nativeHandle)->Type());
}

 System::Boolean OCSweep_NumShape::Closed()
{
  return OCConverter::StandardBooleanToBoolean(((Sweep_NumShape*)nativeHandle)->Closed());
}

 System::Boolean OCSweep_NumShape::BegInfinite()
{
  return OCConverter::StandardBooleanToBoolean(((Sweep_NumShape*)nativeHandle)->BegInfinite());
}

 System::Boolean OCSweep_NumShape::EndInfinite()
{
  return OCConverter::StandardBooleanToBoolean(((Sweep_NumShape*)nativeHandle)->EndInfinite());
}

 OCTopAbs_Orientation OCSweep_NumShape::Orientation()
{
  return (OCTopAbs_Orientation)(((Sweep_NumShape*)nativeHandle)->Orientation());
}



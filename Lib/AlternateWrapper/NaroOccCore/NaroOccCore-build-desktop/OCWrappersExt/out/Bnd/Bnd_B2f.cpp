// File generated by CPPExt (CPP file)
//

#include "Bnd_B2f.h"
#include "../Converter.h"
#include "../gp/gp_XY.h"
#include "../gp/gp_Pnt2d.h"
#include "../gp/gp_Trsf2d.h"
#include "../gp/gp_Ax2d.h"


using namespace OCNaroWrappers;

OCBnd_B2f::OCBnd_B2f(Bnd_B2f* nativeHandle) 
{
  this->nativeHandle = nativeHandle;
}

OCBnd_B2f::OCBnd_B2f() 
{
  nativeHandle = new Bnd_B2f();
}

OCBnd_B2f::OCBnd_B2f(OCNaroWrappers::OCgp_XY^ theCenter, OCNaroWrappers::OCgp_XY^ theHSize) 
{
  nativeHandle = new Bnd_B2f(*((gp_XY*)theCenter->Handle), *((gp_XY*)theHSize->Handle));
}

 System::Boolean OCBnd_B2f::IsVoid()
{
  return OCConverter::StandardBooleanToBoolean(((Bnd_B2f*)nativeHandle)->IsVoid());
}

 void OCBnd_B2f::Clear()
{
  ((Bnd_B2f*)nativeHandle)->Clear();
}

 void OCBnd_B2f::Add(OCNaroWrappers::OCgp_XY^ thePnt)
{
  ((Bnd_B2f*)nativeHandle)->Add(*((gp_XY*)thePnt->Handle));
}

 void OCBnd_B2f::Add(OCNaroWrappers::OCgp_Pnt2d^ thePnt)
{
  ((Bnd_B2f*)nativeHandle)->Add(*((gp_Pnt2d*)thePnt->Handle));
}

 void OCBnd_B2f::Add(OCNaroWrappers::OCBnd_B2f^ theBox)
{
  ((Bnd_B2f*)nativeHandle)->Add(*((Bnd_B2f*)theBox->Handle));
}

OCgp_XY^ OCBnd_B2f::CornerMin()
{
  gp_XY* tmp = new gp_XY();
  *tmp = ((Bnd_B2f*)nativeHandle)->CornerMin();
  return gcnew OCgp_XY(tmp);
}

OCgp_XY^ OCBnd_B2f::CornerMax()
{
  gp_XY* tmp = new gp_XY();
  *tmp = ((Bnd_B2f*)nativeHandle)->CornerMax();
  return gcnew OCgp_XY(tmp);
}

 Standard_Real OCBnd_B2f::SquareExtent()
{
  return ((Bnd_B2f*)nativeHandle)->SquareExtent();
}

 void OCBnd_B2f::Enlarge(Standard_Real theDiff)
{
  ((Bnd_B2f*)nativeHandle)->Enlarge(theDiff);
}

 System::Boolean OCBnd_B2f::Limit(OCNaroWrappers::OCBnd_B2f^ theOtherBox)
{
  return OCConverter::StandardBooleanToBoolean(((Bnd_B2f*)nativeHandle)->Limit(*((Bnd_B2f*)theOtherBox->Handle)));
}

OCBnd_B2f^ OCBnd_B2f::Transformed(OCNaroWrappers::OCgp_Trsf2d^ theTrsf)
{
  Bnd_B2f* tmp = new Bnd_B2f();
  *tmp = ((Bnd_B2f*)nativeHandle)->Transformed(*((gp_Trsf2d*)theTrsf->Handle));
  return gcnew OCBnd_B2f(tmp);
}

 System::Boolean OCBnd_B2f::IsOut(OCNaroWrappers::OCgp_XY^ thePnt)
{
  return OCConverter::StandardBooleanToBoolean(((Bnd_B2f*)nativeHandle)->IsOut(*((gp_XY*)thePnt->Handle)));
}

 System::Boolean OCBnd_B2f::IsOut(OCNaroWrappers::OCgp_XY^ theCenter, Standard_Real theRadius, System::Boolean isCircleHollow)
{
  return OCConverter::StandardBooleanToBoolean(((Bnd_B2f*)nativeHandle)->IsOut(*((gp_XY*)theCenter->Handle), theRadius, OCConverter::BooleanToStandardBoolean(isCircleHollow)));
}

 System::Boolean OCBnd_B2f::IsOut(OCNaroWrappers::OCBnd_B2f^ theOtherBox)
{
  return OCConverter::StandardBooleanToBoolean(((Bnd_B2f*)nativeHandle)->IsOut(*((Bnd_B2f*)theOtherBox->Handle)));
}

 System::Boolean OCBnd_B2f::IsOut(OCNaroWrappers::OCBnd_B2f^ theOtherBox, OCNaroWrappers::OCgp_Trsf2d^ theTrsf)
{
  return OCConverter::StandardBooleanToBoolean(((Bnd_B2f*)nativeHandle)->IsOut(*((Bnd_B2f*)theOtherBox->Handle), *((gp_Trsf2d*)theTrsf->Handle)));
}

 System::Boolean OCBnd_B2f::IsOut(OCNaroWrappers::OCgp_Ax2d^ theLine)
{
  return OCConverter::StandardBooleanToBoolean(((Bnd_B2f*)nativeHandle)->IsOut(*((gp_Ax2d*)theLine->Handle)));
}

 System::Boolean OCBnd_B2f::IsOut(OCNaroWrappers::OCgp_XY^ theP0, OCNaroWrappers::OCgp_XY^ theP1)
{
  return OCConverter::StandardBooleanToBoolean(((Bnd_B2f*)nativeHandle)->IsOut(*((gp_XY*)theP0->Handle), *((gp_XY*)theP1->Handle)));
}

 System::Boolean OCBnd_B2f::IsIn(OCNaroWrappers::OCBnd_B2f^ theBox)
{
  return OCConverter::StandardBooleanToBoolean(((Bnd_B2f*)nativeHandle)->IsIn(*((Bnd_B2f*)theBox->Handle)));
}

 System::Boolean OCBnd_B2f::IsIn(OCNaroWrappers::OCBnd_B2f^ theBox, OCNaroWrappers::OCgp_Trsf2d^ theTrsf)
{
  return OCConverter::StandardBooleanToBoolean(((Bnd_B2f*)nativeHandle)->IsIn(*((Bnd_B2f*)theBox->Handle), *((gp_Trsf2d*)theTrsf->Handle)));
}

 void OCBnd_B2f::SetCenter(OCNaroWrappers::OCgp_XY^ theCenter)
{
  ((Bnd_B2f*)nativeHandle)->SetCenter(*((gp_XY*)theCenter->Handle));
}

 void OCBnd_B2f::SetHSize(OCNaroWrappers::OCgp_XY^ theHSize)
{
  ((Bnd_B2f*)nativeHandle)->SetHSize(*((gp_XY*)theHSize->Handle));
}



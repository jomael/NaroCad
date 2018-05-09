// File generated by CPPExt (CPP file)
//

#include "IntCurve_PConicTool.h"
#include "../Converter.h"
#include "IntCurve_PConic.h"
#include "../gp/gp_Pnt2d.h"
#include "../gp/gp_Vec2d.h"


using namespace OCNaroWrappers;

OCIntCurve_PConicTool::OCIntCurve_PConicTool(IntCurve_PConicTool* nativeHandle) 
{
  this->nativeHandle = nativeHandle;
}

 Standard_Real OCIntCurve_PConicTool::EpsX(OCNaroWrappers::OCIntCurve_PConic^ C)
{
  return IntCurve_PConicTool::EpsX(*((IntCurve_PConic*)C->Handle));
}

 Standard_Integer OCIntCurve_PConicTool::NbSamples(OCNaroWrappers::OCIntCurve_PConic^ C)
{
  return IntCurve_PConicTool::NbSamples(*((IntCurve_PConic*)C->Handle));
}

 Standard_Integer OCIntCurve_PConicTool::NbSamples(OCNaroWrappers::OCIntCurve_PConic^ C, Standard_Real U0, Standard_Real U1)
{
  return IntCurve_PConicTool::NbSamples(*((IntCurve_PConic*)C->Handle), U0, U1);
}

OCgp_Pnt2d^ OCIntCurve_PConicTool::Value(OCNaroWrappers::OCIntCurve_PConic^ C, Standard_Real X)
{
  gp_Pnt2d* tmp = new gp_Pnt2d();
  *tmp = IntCurve_PConicTool::Value(*((IntCurve_PConic*)C->Handle), X);
  return gcnew OCgp_Pnt2d(tmp);
}

 void OCIntCurve_PConicTool::D1(OCNaroWrappers::OCIntCurve_PConic^ C, Standard_Real U, OCNaroWrappers::OCgp_Pnt2d^ P, OCNaroWrappers::OCgp_Vec2d^ T)
{
  IntCurve_PConicTool::D1(*((IntCurve_PConic*)C->Handle), U, *((gp_Pnt2d*)P->Handle), *((gp_Vec2d*)T->Handle));
}

 void OCIntCurve_PConicTool::D2(OCNaroWrappers::OCIntCurve_PConic^ C, Standard_Real U, OCNaroWrappers::OCgp_Pnt2d^ P, OCNaroWrappers::OCgp_Vec2d^ T, OCNaroWrappers::OCgp_Vec2d^ N)
{
  IntCurve_PConicTool::D2(*((IntCurve_PConic*)C->Handle), U, *((gp_Pnt2d*)P->Handle), *((gp_Vec2d*)T->Handle), *((gp_Vec2d*)N->Handle));
}



// File generated by CPPExt (CPP file)
//

#include "Prs2d_Tolerance.h"
#include "../Converter.h"
#include "Prs2d_ToleranceFrame.h"
#include "../Graphic2d/Graphic2d_GraphicObject.h"
#include "../Graphic2d/Graphic2d_Drawer.h"


using namespace OCNaroWrappers;

OCPrs2d_Tolerance::OCPrs2d_Tolerance(Handle(Prs2d_Tolerance)* nativeHandle) : OCGraphic2d_Line((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_Prs2d_Tolerance(*nativeHandle);
}

OCPrs2d_Tolerance::OCPrs2d_Tolerance(OCNaroWrappers::OCGraphic2d_GraphicObject^ aGO, Standard_Real aX, Standard_Real aY, Standard_Real aLength, Standard_Real anAngle) : OCGraphic2d_Line((OCDummy^)nullptr)

{}

 void OCPrs2d_Tolerance::SetCoord(Standard_Real aX, Standard_Real aY)
{
  (*((Handle_Prs2d_Tolerance*)nativeHandle))->SetCoord(aX, aY);
}

 void OCPrs2d_Tolerance::SetSize(Standard_Real aLen)
{
  (*((Handle_Prs2d_Tolerance*)nativeHandle))->SetSize(aLen);
}



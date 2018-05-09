// File generated by CPPExt (CPP file)
//

#include "Prs2d_ToleranceFrame.h"
#include "../Converter.h"
#include "Prs2d_Tolerance.h"
#include "../Graphic2d/Graphic2d_GraphicObject.h"
#include "../Graphic2d/Graphic2d_Drawer.h"
#include "../TColgp/TColgp_HArray1OfPnt2d.h"
#include "../TCollection/TCollection_ExtendedString.h"


using namespace OCNaroWrappers;

OCPrs2d_ToleranceFrame::OCPrs2d_ToleranceFrame(Handle(Prs2d_ToleranceFrame)* nativeHandle) : OCGraphic2d_Line((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_Prs2d_ToleranceFrame(*nativeHandle);
}

OCPrs2d_ToleranceFrame::OCPrs2d_ToleranceFrame(OCNaroWrappers::OCGraphic2d_GraphicObject^ aGO, Quantity_Length aX, Quantity_Length aY, Quantity_Length aHeight, OCPrs2d_TypeOfTolerance aTolType, System::String^ aTolTxt, System::String^ aTxt1, System::String^ aTxt2, Standard_Real anAngle, Standard_Real aScale) : OCGraphic2d_Line((OCDummy^)nullptr)

{
  nativeHandle = new Handle_Prs2d_ToleranceFrame(new Prs2d_ToleranceFrame(*((Handle_Graphic2d_GraphicObject*)aGO->Handle), aX, aY, aHeight, (Prs2d_TypeOfTolerance)aTolType, OCConverter::StringToStandardCString(aTolTxt), OCConverter::StringToStandardCString(aTxt1), OCConverter::StringToStandardCString(aTxt2), anAngle, aScale));
}

 void OCPrs2d_ToleranceFrame::SetHeight(Standard_Real aHSize)
{
  (*((Handle_Prs2d_ToleranceFrame*)nativeHandle))->SetHeight(aHSize);
}

 Standard_Real OCPrs2d_ToleranceFrame::Height()
{
  return (*((Handle_Prs2d_ToleranceFrame*)nativeHandle))->Height();
}

 void OCPrs2d_ToleranceFrame::Save(Aspect_FStream& aFStream)
{
  (*((Handle_Prs2d_ToleranceFrame*)nativeHandle))->Save(aFStream);
}

OCTColgp_HArray1OfPnt2d^ OCPrs2d_ToleranceFrame::ArrayOfPnt2d()
{
  Handle(TColgp_HArray1OfPnt2d) tmp = (*((Handle_Prs2d_ToleranceFrame*)nativeHandle))->ArrayOfPnt2d();
  return gcnew OCTColgp_HArray1OfPnt2d(&tmp);
}

 void OCPrs2d_ToleranceFrame::SetTolText(System::String^ aText)
{
  (*((Handle_Prs2d_ToleranceFrame*)nativeHandle))->SetTolText(OCConverter::StringToStandardCString(aText));
}

 void OCPrs2d_ToleranceFrame::SetText1(System::String^ aText)
{
  (*((Handle_Prs2d_ToleranceFrame*)nativeHandle))->SetText1(OCConverter::StringToStandardCString(aText));
}

 void OCPrs2d_ToleranceFrame::SetText2(System::String^ aText)
{
  (*((Handle_Prs2d_ToleranceFrame*)nativeHandle))->SetText2(OCConverter::StringToStandardCString(aText));
}

OCTCollection_ExtendedString^ OCPrs2d_ToleranceFrame::TolText()
{
  TCollection_ExtendedString* tmp = new TCollection_ExtendedString();
  *tmp = (*((Handle_Prs2d_ToleranceFrame*)nativeHandle))->TolText();
  return gcnew OCTCollection_ExtendedString(tmp);
}

OCTCollection_ExtendedString^ OCPrs2d_ToleranceFrame::Text1()
{
  TCollection_ExtendedString* tmp = new TCollection_ExtendedString();
  *tmp = (*((Handle_Prs2d_ToleranceFrame*)nativeHandle))->Text1();
  return gcnew OCTCollection_ExtendedString(tmp);
}

OCTCollection_ExtendedString^ OCPrs2d_ToleranceFrame::Text2()
{
  TCollection_ExtendedString* tmp = new TCollection_ExtendedString();
  *tmp = (*((Handle_Prs2d_ToleranceFrame*)nativeHandle))->Text2();
  return gcnew OCTCollection_ExtendedString(tmp);
}

 Standard_Real OCPrs2d_ToleranceFrame::TextScale()
{
  return (*((Handle_Prs2d_ToleranceFrame*)nativeHandle))->TextScale();
}



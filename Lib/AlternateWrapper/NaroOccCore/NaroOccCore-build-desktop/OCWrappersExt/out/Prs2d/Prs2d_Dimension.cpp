// File generated by CPPExt (CPP file)
//

#include "Prs2d_Dimension.h"
#include "../Converter.h"
#include "../Graphic2d/Graphic2d_GraphicObject.h"
#include "../TCollection/TCollection_ExtendedString.h"
#include "../TColgp/TColgp_HArray1OfPnt2d.h"


using namespace OCNaroWrappers;

OCPrs2d_Dimension::OCPrs2d_Dimension(Handle(Prs2d_Dimension)* nativeHandle) : OCGraphic2d_Line((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_Prs2d_Dimension(*nativeHandle);
}

OCPrs2d_Dimension::OCPrs2d_Dimension(OCNaroWrappers::OCGraphic2d_GraphicObject^ aGO, OCNaroWrappers::OCTCollection_ExtendedString^ aText, Standard_Real aTxtScale, Standard_Real anArrAngle, Standard_Real anArrLength, OCPrs2d_TypeOfArrow anArrType, OCPrs2d_ArrowSide anArrow, System::Boolean IsRevArrow) : OCGraphic2d_Line((OCDummy^)nullptr)

{}

 void OCPrs2d_Dimension::SetText(OCNaroWrappers::OCTCollection_ExtendedString^ aText)
{
  (*((Handle_Prs2d_Dimension*)nativeHandle))->SetText(*((TCollection_ExtendedString*)aText->Handle));
}

 void OCPrs2d_Dimension::SetTextScale(Standard_Real aTS)
{
  (*((Handle_Prs2d_Dimension*)nativeHandle))->SetTextScale(aTS);
}

 void OCPrs2d_Dimension::SetTextFont(Standard_Integer aTF)
{
  (*((Handle_Prs2d_Dimension*)nativeHandle))->SetTextFont(aTF);
}

 void OCPrs2d_Dimension::SetFontOfSymb(Standard_Integer aFS)
{
  (*((Handle_Prs2d_Dimension*)nativeHandle))->SetFontOfSymb(aFS);
}

 void OCPrs2d_Dimension::SetArrowType(OCPrs2d_TypeOfArrow anArrT)
{
  (*((Handle_Prs2d_Dimension*)nativeHandle))->SetArrowType((Prs2d_TypeOfArrow)anArrT);
}

 void OCPrs2d_Dimension::SetArrowSides(OCPrs2d_ArrowSide anArrS)
{
  (*((Handle_Prs2d_Dimension*)nativeHandle))->SetArrowSides((Prs2d_ArrowSide)anArrS);
}

 void OCPrs2d_Dimension::DrawSymbol(System::Boolean isDraw)
{
  (*((Handle_Prs2d_Dimension*)nativeHandle))->DrawSymbol(OCConverter::BooleanToStandardBoolean(isDraw));
}

 void OCPrs2d_Dimension::SetSymbolCode(Standard_Integer aCode)
{
  (*((Handle_Prs2d_Dimension*)nativeHandle))->SetSymbolCode(aCode);
}

 void OCPrs2d_Dimension::SetTextAbsPos(Standard_Real Xp, Standard_Real Yp)
{
  (*((Handle_Prs2d_Dimension*)nativeHandle))->SetTextAbsPos(Xp, Yp);
}

 void OCPrs2d_Dimension::SetTextAbsAngle(Standard_Real Ap)
{
  (*((Handle_Prs2d_Dimension*)nativeHandle))->SetTextAbsAngle(Ap);
}

 void OCPrs2d_Dimension::SetTextRelPos(Standard_Real Xp, Standard_Real Yp)
{
  (*((Handle_Prs2d_Dimension*)nativeHandle))->SetTextRelPos(Xp, Yp);
}

 void OCPrs2d_Dimension::SetTextRelAngle(Standard_Real Ap)
{
  (*((Handle_Prs2d_Dimension*)nativeHandle))->SetTextRelAngle(Ap);
}

OCTCollection_ExtendedString^ OCPrs2d_Dimension::Text()
{
  TCollection_ExtendedString* tmp = new TCollection_ExtendedString();
  *tmp = (*((Handle_Prs2d_Dimension*)nativeHandle))->Text();
  return gcnew OCTCollection_ExtendedString(tmp);
}

 Standard_Real OCPrs2d_Dimension::TextAbsX()
{
  return (*((Handle_Prs2d_Dimension*)nativeHandle))->TextAbsX();
}

 Standard_Real OCPrs2d_Dimension::TextAbsY()
{
  return (*((Handle_Prs2d_Dimension*)nativeHandle))->TextAbsY();
}

 Standard_Real OCPrs2d_Dimension::TextAbsAngle()
{
  return (*((Handle_Prs2d_Dimension*)nativeHandle))->TextAbsAngle();
}

 Standard_Real OCPrs2d_Dimension::TextRelH()
{
  return (*((Handle_Prs2d_Dimension*)nativeHandle))->TextRelH();
}

 Standard_Real OCPrs2d_Dimension::TextRelV()
{
  return (*((Handle_Prs2d_Dimension*)nativeHandle))->TextRelV();
}

 Standard_Real OCPrs2d_Dimension::TextRelAngle()
{
  return (*((Handle_Prs2d_Dimension*)nativeHandle))->TextRelAngle();
}

 Standard_Real OCPrs2d_Dimension::TextScale()
{
  return (*((Handle_Prs2d_Dimension*)nativeHandle))->TextScale();
}

 Standard_Integer OCPrs2d_Dimension::TextFont()
{
  return (*((Handle_Prs2d_Dimension*)nativeHandle))->TextFont();
}

 Standard_Integer OCPrs2d_Dimension::FontOfSymb()
{
  return (*((Handle_Prs2d_Dimension*)nativeHandle))->FontOfSymb();
}

 OCPrs2d_TypeOfArrow OCPrs2d_Dimension::ArrowType()
{
  return (OCPrs2d_TypeOfArrow)((*((Handle_Prs2d_Dimension*)nativeHandle))->ArrowType());
}

 OCPrs2d_ArrowSide OCPrs2d_Dimension::ArrowSides()
{
  return (OCPrs2d_ArrowSide)((*((Handle_Prs2d_Dimension*)nativeHandle))->ArrowSides());
}

 Standard_Real OCPrs2d_Dimension::ArrowAngle()
{
  return (*((Handle_Prs2d_Dimension*)nativeHandle))->ArrowAngle();
}

 Standard_Real OCPrs2d_Dimension::ArrowLength()
{
  return (*((Handle_Prs2d_Dimension*)nativeHandle))->ArrowLength();
}

 System::Boolean OCPrs2d_Dimension::ArrowIsReversed()
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_Prs2d_Dimension*)nativeHandle))->ArrowIsReversed());
}

 System::Boolean OCPrs2d_Dimension::IsDrawSymbol()
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_Prs2d_Dimension*)nativeHandle))->IsDrawSymbol());
}

 Standard_Integer OCPrs2d_Dimension::SymbolCode()
{
  return (*((Handle_Prs2d_Dimension*)nativeHandle))->SymbolCode();
}

OCTColgp_HArray1OfPnt2d^ OCPrs2d_Dimension::ArrayOfFirstArrowPnt()
{
  Handle(TColgp_HArray1OfPnt2d) tmp = (*((Handle_Prs2d_Dimension*)nativeHandle))->ArrayOfFirstArrowPnt();
  return gcnew OCTColgp_HArray1OfPnt2d(&tmp);
}

OCTColgp_HArray1OfPnt2d^ OCPrs2d_Dimension::ArrayOfSecondArrowPnt()
{
  Handle(TColgp_HArray1OfPnt2d) tmp = (*((Handle_Prs2d_Dimension*)nativeHandle))->ArrayOfSecondArrowPnt();
  return gcnew OCTColgp_HArray1OfPnt2d(&tmp);
}



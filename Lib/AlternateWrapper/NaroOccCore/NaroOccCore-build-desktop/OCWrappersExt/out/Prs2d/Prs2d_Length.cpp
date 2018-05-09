// File generated by CPPExt (CPP file)
//

#include "Prs2d_Length.h"
#include "../Converter.h"
#include "../Graphic2d/Graphic2d_GraphicObject.h"
#include "../gp/gp_Pnt2d.h"
#include "../TCollection/TCollection_ExtendedString.h"
#include "../gp/gp_Lin2d.h"
#include "../Graphic2d/Graphic2d_Drawer.h"


using namespace OCNaroWrappers;

OCPrs2d_Length::OCPrs2d_Length(Handle(Prs2d_Length)* nativeHandle) : OCPrs2d_Dimension((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_Prs2d_Length(*nativeHandle);
}

OCPrs2d_Length::OCPrs2d_Length(OCNaroWrappers::OCGraphic2d_GraphicObject^ aGraphicObject, OCNaroWrappers::OCgp_Pnt2d^ anAttachPnt1, OCNaroWrappers::OCgp_Pnt2d^ anAttachPnt2, OCNaroWrappers::OCTCollection_ExtendedString^ aText, Standard_Real aTxtScale, Standard_Real aLength, OCPrs2d_TypeOfDist aTypeDist, Standard_Real anArrAngle, Standard_Real anArrLength, OCPrs2d_TypeOfArrow anArrType, OCPrs2d_ArrowSide anArrow, System::Boolean IsReverseArrow) : OCPrs2d_Dimension((OCDummy^)nullptr)

{
  nativeHandle = new Handle_Prs2d_Length(new Prs2d_Length(*((Handle_Graphic2d_GraphicObject*)aGraphicObject->Handle), *((gp_Pnt2d*)anAttachPnt1->Handle), *((gp_Pnt2d*)anAttachPnt2->Handle), *((TCollection_ExtendedString*)aText->Handle), aTxtScale, aLength, (Prs2d_TypeOfDist)aTypeDist, anArrAngle, anArrLength, (Prs2d_TypeOfArrow)anArrType, (Prs2d_ArrowSide)anArrow, OCConverter::BooleanToStandardBoolean(IsReverseArrow)));
}

OCPrs2d_Length::OCPrs2d_Length(OCNaroWrappers::OCGraphic2d_GraphicObject^ aGraphicObject, OCNaroWrappers::OCgp_Pnt2d^ anAttachPnt, OCNaroWrappers::OCgp_Lin2d^ anAttachLin, OCNaroWrappers::OCTCollection_ExtendedString^ aText, Standard_Real aTxtScale, Standard_Real aLenAttachLin, Standard_Real anArrAngle, Standard_Real anArrLength, OCPrs2d_TypeOfArrow anArrType, OCPrs2d_ArrowSide anArrow, System::Boolean IsReverseArrow) : OCPrs2d_Dimension((OCDummy^)nullptr)

{
  nativeHandle = new Handle_Prs2d_Length(new Prs2d_Length(*((Handle_Graphic2d_GraphicObject*)aGraphicObject->Handle), *((gp_Pnt2d*)anAttachPnt->Handle), *((gp_Lin2d*)anAttachLin->Handle), *((TCollection_ExtendedString*)aText->Handle), aTxtScale, aLenAttachLin, anArrAngle, anArrLength, (Prs2d_TypeOfArrow)anArrType, (Prs2d_ArrowSide)anArrow, OCConverter::BooleanToStandardBoolean(IsReverseArrow)));
}

OCPrs2d_Length::OCPrs2d_Length(OCNaroWrappers::OCGraphic2d_GraphicObject^ aGraphicObject, OCNaroWrappers::OCgp_Lin2d^ anAttachLin1, OCNaroWrappers::OCgp_Lin2d^ anAttachLin2, OCNaroWrappers::OCTCollection_ExtendedString^ aText, Standard_Real aTxtScale, Standard_Real aLenAttachLin, Standard_Real anArrAngle, Standard_Real anArrLength, OCPrs2d_TypeOfArrow anArrType, OCPrs2d_ArrowSide anArrow, System::Boolean IsReverseArrow) : OCPrs2d_Dimension((OCDummy^)nullptr)

{
  nativeHandle = new Handle_Prs2d_Length(new Prs2d_Length(*((Handle_Graphic2d_GraphicObject*)aGraphicObject->Handle), *((gp_Lin2d*)anAttachLin1->Handle), *((gp_Lin2d*)anAttachLin2->Handle), *((TCollection_ExtendedString*)aText->Handle), aTxtScale, aLenAttachLin, anArrAngle, anArrLength, (Prs2d_TypeOfArrow)anArrType, (Prs2d_ArrowSide)anArrow, OCConverter::BooleanToStandardBoolean(IsReverseArrow)));
}

 void OCPrs2d_Length::SetAttachLinLength(Standard_Real aLength)
{
  (*((Handle_Prs2d_Length*)nativeHandle))->SetAttachLinLength(aLength);
}

 void OCPrs2d_Length::Save(Aspect_FStream& aFStream)
{
  (*((Handle_Prs2d_Length*)nativeHandle))->Save(aFStream);
}

 void OCPrs2d_Length::LineCoord(OCNaroWrappers::OCgp_Pnt2d^ aFirstPnt, OCNaroWrappers::OCgp_Pnt2d^ aSecondPnt)
{
  (*((Handle_Prs2d_Length*)nativeHandle))->LineCoord(*((gp_Pnt2d*)aFirstPnt->Handle), *((gp_Pnt2d*)aSecondPnt->Handle));
}

 void OCPrs2d_Length::CallOutCoord(OCNaroWrappers::OCgp_Pnt2d^ aFirstPnt, OCNaroWrappers::OCgp_Pnt2d^ aSecondPnt)
{
  (*((Handle_Prs2d_Length*)nativeHandle))->CallOutCoord(*((gp_Pnt2d*)aFirstPnt->Handle), *((gp_Pnt2d*)aSecondPnt->Handle));
}

 OCPrs2d_TypeOfDist OCPrs2d_Length::TypeOfDist()
{
  return (OCPrs2d_TypeOfDist)((*((Handle_Prs2d_Length*)nativeHandle))->TypeOfDist());
}


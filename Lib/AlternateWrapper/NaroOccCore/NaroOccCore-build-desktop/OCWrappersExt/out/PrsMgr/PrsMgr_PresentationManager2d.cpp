// File generated by CPPExt (CPP file)
//

#include "PrsMgr_PresentationManager2d.h"
#include "../Converter.h"
#include "../Graphic2d/Graphic2d_View.h"
#include "../Graphic2d/Graphic2d_DisplayList.h"
#include "../Graphic2d/Graphic2d_TransientManager.h"
#include "PrsMgr_PresentableObject.h"
#include "../Graphic2d/Graphic2d_GraphicObject.h"
#include "../Viewer/Viewer_View.h"
#include "../Graphic2d/Graphic2d_Buffer.h"
#include "PrsMgr_Presentation2d.h"
#include "PrsMgr_Presentation.h"


using namespace OCNaroWrappers;

OCPrsMgr_PresentationManager2d::OCPrsMgr_PresentationManager2d(Handle(PrsMgr_PresentationManager2d)* nativeHandle) : OCPrsMgr_PresentationManager((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_PrsMgr_PresentationManager2d(*nativeHandle);
}

OCPrsMgr_PresentationManager2d::OCPrsMgr_PresentationManager2d(OCNaroWrappers::OCGraphic2d_View^ aStructureManager) : OCPrsMgr_PresentationManager((OCDummy^)nullptr)

{
  nativeHandle = new Handle_PrsMgr_PresentationManager2d(new PrsMgr_PresentationManager2d(*((Handle_Graphic2d_View*)aStructureManager->Handle)));
}

 System::Boolean OCPrsMgr_PresentationManager2d::Is3D()
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_PrsMgr_PresentationManager2d*)nativeHandle))->Is3D());
}

 void OCPrsMgr_PresentationManager2d::ColorHighlight(OCNaroWrappers::OCPrsMgr_PresentableObject^ aPresentableObject, Standard_Integer anIndex, Standard_Integer aMode)
{
  (*((Handle_PrsMgr_PresentationManager2d*)nativeHandle))->ColorHighlight(*((Handle_PrsMgr_PresentableObject*)aPresentableObject->Handle), anIndex, aMode);
}

 void OCPrsMgr_PresentationManager2d::EnablePlot(OCNaroWrappers::OCPrsMgr_PresentableObject^ aPresentableObject, Standard_Integer aMode)
{
  (*((Handle_PrsMgr_PresentationManager2d*)nativeHandle))->EnablePlot(*((Handle_PrsMgr_PresentableObject*)aPresentableObject->Handle), aMode);
}

 void OCPrsMgr_PresentationManager2d::DisablePlot(OCNaroWrappers::OCPrsMgr_PresentableObject^ aPresentableObject, Standard_Integer aMode)
{
  (*((Handle_PrsMgr_PresentationManager2d*)nativeHandle))->DisablePlot(*((Handle_PrsMgr_PresentableObject*)aPresentableObject->Handle), aMode);
}

 System::Boolean OCPrsMgr_PresentationManager2d::IsPlottable(OCNaroWrappers::OCPrsMgr_PresentableObject^ aPresentableObject, Standard_Integer aMode)
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_PrsMgr_PresentationManager2d*)nativeHandle))->IsPlottable(*((Handle_PrsMgr_PresentableObject*)aPresentableObject->Handle), aMode));
}

 void OCPrsMgr_PresentationManager2d::SetOffset(OCNaroWrappers::OCPrsMgr_PresentableObject^ aPresentableObject, Standard_Integer anOffset, Standard_Integer aMode)
{
  (*((Handle_PrsMgr_PresentationManager2d*)nativeHandle))->SetOffset(*((Handle_PrsMgr_PresentableObject*)aPresentableObject->Handle), anOffset, aMode);
}

 Standard_Integer OCPrsMgr_PresentationManager2d::Offset(OCNaroWrappers::OCPrsMgr_PresentableObject^ aPresentableObject, Standard_Integer aMode)
{
  return (*((Handle_PrsMgr_PresentationManager2d*)nativeHandle))->Offset(*((Handle_PrsMgr_PresentableObject*)aPresentableObject->Handle), aMode);
}

 void OCPrsMgr_PresentationManager2d::InitMinMax()
{
  (*((Handle_PrsMgr_PresentationManager2d*)nativeHandle))->InitMinMax();
}

 void OCPrsMgr_PresentationManager2d::AddMinMax(OCNaroWrappers::OCPrsMgr_PresentableObject^ aPresentableObject, Standard_Integer aMode)
{
  (*((Handle_PrsMgr_PresentationManager2d*)nativeHandle))->AddMinMax(*((Handle_PrsMgr_PresentableObject*)aPresentableObject->Handle), aMode);
}

 void OCPrsMgr_PresentationManager2d::MinMax(Standard_Real& MinX, Standard_Real& MaxX, Standard_Real& MinY, Standard_Real& MaxY)
{
  (*((Handle_PrsMgr_PresentationManager2d*)nativeHandle))->MinMax(MinX, MaxX, MinY, MaxY);
}

 void OCPrsMgr_PresentationManager2d::SetHighlightColor(Standard_Integer anIndex)
{
  (*((Handle_PrsMgr_PresentationManager2d*)nativeHandle))->SetHighlightColor(anIndex);
}

OCGraphic2d_View^ OCPrsMgr_PresentationManager2d::StructureManager()
{
  Handle(Graphic2d_View) tmp = (*((Handle_PrsMgr_PresentationManager2d*)nativeHandle))->StructureManager();
  return gcnew OCGraphic2d_View(&tmp);
}

 void OCPrsMgr_PresentationManager2d::BeginDraw()
{
  (*((Handle_PrsMgr_PresentationManager2d*)nativeHandle))->BeginDraw();
}

 void OCPrsMgr_PresentationManager2d::AddToImmediateList(OCNaroWrappers::OCGraphic2d_GraphicObject^ aGO)
{
  (*((Handle_PrsMgr_PresentationManager2d*)nativeHandle))->AddToImmediateList(*((Handle_Graphic2d_GraphicObject*)aGO->Handle));
}

 void OCPrsMgr_PresentationManager2d::EndDraw(OCNaroWrappers::OCViewer_View^ aView, System::Boolean DoubleBuffer)
{
  (*((Handle_PrsMgr_PresentationManager2d*)nativeHandle))->EndDraw(*((Handle_Viewer_View*)aView->Handle), OCConverter::BooleanToStandardBoolean(DoubleBuffer));
}

 void OCPrsMgr_PresentationManager2d::Dump(OCNaroWrappers::OCGraphic2d_Buffer^ aBuffer, OCNaroWrappers::OCPrsMgr_PresentableObject^ aPresentableObject, Standard_Integer aMode)
{
  (*((Handle_PrsMgr_PresentationManager2d*)nativeHandle))->Dump(*((Handle_Graphic2d_Buffer*)aBuffer->Handle), *((Handle_PrsMgr_PresentableObject*)aPresentableObject->Handle), aMode);
}

OCPrsMgr_Presentation2d^ OCPrsMgr_PresentationManager2d::CastPresentation(OCNaroWrappers::OCPrsMgr_PresentableObject^ aPresentableObject, Standard_Integer aMode)
{
  Handle(PrsMgr_Presentation2d) tmp = (*((Handle_PrsMgr_PresentationManager2d*)nativeHandle))->CastPresentation(*((Handle_PrsMgr_PresentableObject*)aPresentableObject->Handle), aMode);
  return gcnew OCPrsMgr_Presentation2d(&tmp);
}

OCPrsMgr_Presentation^ OCPrsMgr_PresentationManager2d::newPresentation(OCNaroWrappers::OCPrsMgr_PresentableObject^ aPresentableObject)
{
  Handle(PrsMgr_Presentation) tmp = (*((Handle_PrsMgr_PresentationManager2d*)nativeHandle))->newPresentation(*((Handle_PrsMgr_PresentableObject*)aPresentableObject->Handle));
  return gcnew OCPrsMgr_Presentation(&tmp);
}



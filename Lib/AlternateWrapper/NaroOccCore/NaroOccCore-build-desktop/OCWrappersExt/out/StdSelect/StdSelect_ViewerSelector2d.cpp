// File generated by CPPExt (CPP file)
//

#include "StdSelect_ViewerSelector2d.h"
#include "../Converter.h"
#include "../Select2D/Select2D_Projector.h"
#include "../Graphic2d/Graphic2d_GraphicObject.h"
#include "../SelectMgr/SelectMgr_Selection.h"
#include "../V2d/V2d_View.h"


using namespace OCNaroWrappers;

OCStdSelect_ViewerSelector2d::OCStdSelect_ViewerSelector2d(Handle(StdSelect_ViewerSelector2d)* nativeHandle) : OCSelectMgr_ViewerSelector((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_StdSelect_ViewerSelector2d(*nativeHandle);
}

OCStdSelect_ViewerSelector2d::OCStdSelect_ViewerSelector2d() : OCSelectMgr_ViewerSelector((OCDummy^)nullptr)

{
  nativeHandle = new Handle_StdSelect_ViewerSelector2d(new StdSelect_ViewerSelector2d());
}

OCStdSelect_ViewerSelector2d::OCStdSelect_ViewerSelector2d(OCNaroWrappers::OCSelect2D_Projector^ aProjector) : OCSelectMgr_ViewerSelector((OCDummy^)nullptr)

{
  nativeHandle = new Handle_StdSelect_ViewerSelector2d(new StdSelect_ViewerSelector2d(*((Handle_Select2D_Projector*)aProjector->Handle)));
}

 void OCStdSelect_ViewerSelector2d::Set(Standard_Integer aSensitivity)
{
  (*((Handle_StdSelect_ViewerSelector2d*)nativeHandle))->Set(aSensitivity);
}

 void OCStdSelect_ViewerSelector2d::Set(OCNaroWrappers::OCSelect2D_Projector^ aProjector)
{
  (*((Handle_StdSelect_ViewerSelector2d*)nativeHandle))->Set(*((Handle_Select2D_Projector*)aProjector->Handle));
}

 void OCStdSelect_ViewerSelector2d::Convert(OCNaroWrappers::OCSelectMgr_Selection^ aSelection)
{
  (*((Handle_StdSelect_ViewerSelector2d*)nativeHandle))->Convert(*((Handle_SelectMgr_Selection*)aSelection->Handle));
}

 void OCStdSelect_ViewerSelector2d::Pick(Standard_Integer XPix, Standard_Integer YPix, OCNaroWrappers::OCV2d_View^ aView)
{
  (*((Handle_StdSelect_ViewerSelector2d*)nativeHandle))->Pick(XPix, YPix, *((Handle_V2d_View*)aView->Handle));
}

 void OCStdSelect_ViewerSelector2d::Pick(Standard_Integer XPMin, Standard_Integer YPMin, Standard_Integer XPMax, Standard_Integer YPMax, OCNaroWrappers::OCV2d_View^ aView)
{
  (*((Handle_StdSelect_ViewerSelector2d*)nativeHandle))->Pick(XPMin, YPMin, XPMax, YPMax, *((Handle_V2d_View*)aView->Handle));
}

OCSelect2D_Projector^ OCStdSelect_ViewerSelector2d::Projector()
{
  Handle(Select2D_Projector) tmp = (*((Handle_StdSelect_ViewerSelector2d*)nativeHandle))->Projector();
  return gcnew OCSelect2D_Projector(&tmp);
}

 void OCStdSelect_ViewerSelector2d::DisplayAreas(OCNaroWrappers::OCV2d_View^ aView)
{
  (*((Handle_StdSelect_ViewerSelector2d*)nativeHandle))->DisplayAreas(*((Handle_V2d_View*)aView->Handle));
}

 void OCStdSelect_ViewerSelector2d::ClearAreas()
{
  (*((Handle_StdSelect_ViewerSelector2d*)nativeHandle))->ClearAreas();
}



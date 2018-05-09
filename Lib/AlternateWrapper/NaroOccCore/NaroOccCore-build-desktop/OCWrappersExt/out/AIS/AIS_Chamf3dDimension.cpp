// File generated by CPPExt (CPP file)
//

#include "AIS_Chamf3dDimension.h"
#include "../Converter.h"
#include "../TopoDS/TopoDS_Shape.h"
#include "../TCollection/TCollection_ExtendedString.h"
#include "../gp/gp_Pnt.h"
#include "../PrsMgr/PrsMgr_PresentationManager3d.h"
#include "../Prs3d/Prs3d_Presentation.h"
#include "../Prs3d/Prs3d_Projector.h"
#include "../PrsMgr/PrsMgr_PresentationManager2d.h"
#include "../Graphic2d/Graphic2d_GraphicObject.h"
#include "../Geom/Geom_Transformation.h"
#include "../SelectMgr/SelectMgr_Selection.h"


using namespace OCNaroWrappers;

OCAIS_Chamf3dDimension::OCAIS_Chamf3dDimension(Handle(AIS_Chamf3dDimension)* nativeHandle) : OCAIS_Relation((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_AIS_Chamf3dDimension(*nativeHandle);
}

OCAIS_Chamf3dDimension::OCAIS_Chamf3dDimension(OCNaroWrappers::OCTopoDS_Shape^ aFShape, Standard_Real aVal, OCNaroWrappers::OCTCollection_ExtendedString^ aText) : OCAIS_Relation((OCDummy^)nullptr)

{
  nativeHandle = new Handle_AIS_Chamf3dDimension(new AIS_Chamf3dDimension(*((TopoDS_Shape*)aFShape->Handle), aVal, *((TCollection_ExtendedString*)aText->Handle)));
}

OCAIS_Chamf3dDimension::OCAIS_Chamf3dDimension(OCNaroWrappers::OCTopoDS_Shape^ aFShape, Standard_Real aVal, OCNaroWrappers::OCTCollection_ExtendedString^ aText, OCNaroWrappers::OCgp_Pnt^ aPosition, OCDsgPrs_ArrowSide aSymbolPrs, Standard_Real anArrowSize) : OCAIS_Relation((OCDummy^)nullptr)

{
  nativeHandle = new Handle_AIS_Chamf3dDimension(new AIS_Chamf3dDimension(*((TopoDS_Shape*)aFShape->Handle), aVal, *((TCollection_ExtendedString*)aText->Handle), *((gp_Pnt*)aPosition->Handle), (DsgPrs_ArrowSide)aSymbolPrs, anArrowSize));
}

 OCAIS_KindOfDimension OCAIS_Chamf3dDimension::KindOfDimension()
{
  return (OCAIS_KindOfDimension)((*((Handle_AIS_Chamf3dDimension*)nativeHandle))->KindOfDimension());
}

 System::Boolean OCAIS_Chamf3dDimension::IsMovable()
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_AIS_Chamf3dDimension*)nativeHandle))->IsMovable());
}

 void OCAIS_Chamf3dDimension::Compute(OCNaroWrappers::OCPrs3d_Projector^ aProjector, OCNaroWrappers::OCGeom_Transformation^ aTrsf, OCNaroWrappers::OCPrs3d_Presentation^ aPresentation)
{
  (*((Handle_AIS_Chamf3dDimension*)nativeHandle))->Compute(*((Handle_Prs3d_Projector*)aProjector->Handle), *((Handle_Geom_Transformation*)aTrsf->Handle), *((Handle_Prs3d_Presentation*)aPresentation->Handle));
}


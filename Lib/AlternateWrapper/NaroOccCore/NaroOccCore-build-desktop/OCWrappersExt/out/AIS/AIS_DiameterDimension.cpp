// File generated by CPPExt (CPP file)
//

#include "AIS_DiameterDimension.h"
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
#include "../Geom/Geom_Surface.h"


using namespace OCNaroWrappers;

OCAIS_DiameterDimension::OCAIS_DiameterDimension(Handle(AIS_DiameterDimension)* nativeHandle) : OCAIS_Relation((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_AIS_DiameterDimension(*nativeHandle);
}

OCAIS_DiameterDimension::OCAIS_DiameterDimension(OCNaroWrappers::OCTopoDS_Shape^ aShape, Standard_Real aVal, OCNaroWrappers::OCTCollection_ExtendedString^ aText) : OCAIS_Relation((OCDummy^)nullptr)

{
  nativeHandle = new Handle_AIS_DiameterDimension(new AIS_DiameterDimension(*((TopoDS_Shape*)aShape->Handle), aVal, *((TCollection_ExtendedString*)aText->Handle)));
}

OCAIS_DiameterDimension::OCAIS_DiameterDimension(OCNaroWrappers::OCTopoDS_Shape^ aShape, Standard_Real aVal, OCNaroWrappers::OCTCollection_ExtendedString^ aText, OCNaroWrappers::OCgp_Pnt^ aPosition, OCDsgPrs_ArrowSide aSymbolPrs, System::Boolean aDiamSymbol, Standard_Real anArrowSize) : OCAIS_Relation((OCDummy^)nullptr)

{
  nativeHandle = new Handle_AIS_DiameterDimension(new AIS_DiameterDimension(*((TopoDS_Shape*)aShape->Handle), aVal, *((TCollection_ExtendedString*)aText->Handle), *((gp_Pnt*)aPosition->Handle), (DsgPrs_ArrowSide)aSymbolPrs, OCConverter::BooleanToStandardBoolean(aDiamSymbol), anArrowSize));
}

 OCAIS_KindOfDimension OCAIS_DiameterDimension::KindOfDimension()
{
  return (OCAIS_KindOfDimension)((*((Handle_AIS_DiameterDimension*)nativeHandle))->KindOfDimension());
}

 System::Boolean OCAIS_DiameterDimension::IsMovable()
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_AIS_DiameterDimension*)nativeHandle))->IsMovable());
}

 System::Boolean OCAIS_DiameterDimension::DiamSymbol()
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_AIS_DiameterDimension*)nativeHandle))->DiamSymbol());
}

 void OCAIS_DiameterDimension::SetDiamSymbol(System::Boolean aDiamSymbol)
{
  (*((Handle_AIS_DiameterDimension*)nativeHandle))->SetDiamSymbol(OCConverter::BooleanToStandardBoolean(aDiamSymbol));
}

 void OCAIS_DiameterDimension::Compute(OCNaroWrappers::OCPrs3d_Projector^ aProjector, OCNaroWrappers::OCGeom_Transformation^ aTrsf, OCNaroWrappers::OCPrs3d_Presentation^ aPresentation)
{
  (*((Handle_AIS_DiameterDimension*)nativeHandle))->Compute(*((Handle_Prs3d_Projector*)aProjector->Handle), *((Handle_Geom_Transformation*)aTrsf->Handle), *((Handle_Prs3d_Presentation*)aPresentation->Handle));
}



// File generated by CPPExt (CPP file)
//

#include "AIS_AttributeFilter.h"
#include "../Converter.h"
#include "../SelectMgr/SelectMgr_EntityOwner.h"


using namespace OCNaroWrappers;

OCAIS_AttributeFilter::OCAIS_AttributeFilter(Handle(AIS_AttributeFilter)* nativeHandle) : OCSelectMgr_Filter((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_AIS_AttributeFilter(*nativeHandle);
}

OCAIS_AttributeFilter::OCAIS_AttributeFilter() : OCSelectMgr_Filter((OCDummy^)nullptr)

{
  nativeHandle = new Handle_AIS_AttributeFilter(new AIS_AttributeFilter());
}

OCAIS_AttributeFilter::OCAIS_AttributeFilter(OCQuantity_NameOfColor aCol) : OCSelectMgr_Filter((OCDummy^)nullptr)

{
  nativeHandle = new Handle_AIS_AttributeFilter(new AIS_AttributeFilter((Quantity_NameOfColor)aCol));
}

OCAIS_AttributeFilter::OCAIS_AttributeFilter(Standard_Real aWidth) : OCSelectMgr_Filter((OCDummy^)nullptr)

{
  nativeHandle = new Handle_AIS_AttributeFilter(new AIS_AttributeFilter(aWidth));
}

 System::Boolean OCAIS_AttributeFilter::HasColor()
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_AIS_AttributeFilter*)nativeHandle))->HasColor());
}

 System::Boolean OCAIS_AttributeFilter::HasWidth()
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_AIS_AttributeFilter*)nativeHandle))->HasWidth());
}

 void OCAIS_AttributeFilter::SetColor(OCQuantity_NameOfColor aCol)
{
  (*((Handle_AIS_AttributeFilter*)nativeHandle))->SetColor((Quantity_NameOfColor)aCol);
}

 void OCAIS_AttributeFilter::SetWidth(Standard_Real aWidth)
{
  (*((Handle_AIS_AttributeFilter*)nativeHandle))->SetWidth(aWidth);
}

 void OCAIS_AttributeFilter::UnsetColor()
{
  (*((Handle_AIS_AttributeFilter*)nativeHandle))->UnsetColor();
}

 void OCAIS_AttributeFilter::UnsetWidth()
{
  (*((Handle_AIS_AttributeFilter*)nativeHandle))->UnsetWidth();
}

 System::Boolean OCAIS_AttributeFilter::IsOk(OCNaroWrappers::OCSelectMgr_EntityOwner^ anObj)
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_AIS_AttributeFilter*)nativeHandle))->IsOk(*((Handle_SelectMgr_EntityOwner*)anObj->Handle)));
}



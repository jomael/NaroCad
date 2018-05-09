// File generated by CPPExt (CPP file)
//

#include "V3d_Plane.h"
#include "../Converter.h"
#include "../Visual3d/Visual3d_ClipPlane.h"
#include "../Graphic3d/Graphic3d_Structure.h"
#include "V3d_View.h"


using namespace OCNaroWrappers;

OCV3d_Plane::OCV3d_Plane(Handle(V3d_Plane)* nativeHandle) : OCMMgt_TShared((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_V3d_Plane(*nativeHandle);
}

OCV3d_Plane::OCV3d_Plane(Quantity_Parameter A, Quantity_Parameter B, Quantity_Parameter C, Quantity_Parameter D) : OCMMgt_TShared((OCDummy^)nullptr)

{
  nativeHandle = new Handle_V3d_Plane(new V3d_Plane(A, B, C, D));
}

 void OCV3d_Plane::SetPlane(Quantity_Parameter A, Quantity_Parameter B, Quantity_Parameter C, Quantity_Parameter D)
{
  (*((Handle_V3d_Plane*)nativeHandle))->SetPlane(A, B, C, D);
}

 void OCV3d_Plane::Display(OCNaroWrappers::OCV3d_View^ aView, OCNaroWrappers::OCQuantity_Color^ aColor)
{
  (*((Handle_V3d_Plane*)nativeHandle))->Display(*((Handle_V3d_View*)aView->Handle), *((Quantity_Color*)aColor->Handle));
}

 void OCV3d_Plane::Erase()
{
  (*((Handle_V3d_Plane*)nativeHandle))->Erase();
}

 void OCV3d_Plane::Plane(Quantity_Parameter& A, Quantity_Parameter& B, Quantity_Parameter& C, Quantity_Parameter& D)
{
  (*((Handle_V3d_Plane*)nativeHandle))->Plane(A, B, C, D);
}

 System::Boolean OCV3d_Plane::IsDisplayed()
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_V3d_Plane*)nativeHandle))->IsDisplayed());
}



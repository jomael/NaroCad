// File generated by CPPExt (CPP file)
//

#include "Graphic3d_TextureRoot.h"
#include "../Converter.h"
#include "Graphic3d_GraphicDriver.h"
#include "../AlienImage/AlienImage_AlienImage.h"
#include "../TColStd/TColStd_HArray1OfReal.h"
#include "Graphic3d_StructureManager.h"
#include "../OSD/OSD_Path.h"


using namespace OCNaroWrappers;

OCGraphic3d_TextureRoot::OCGraphic3d_TextureRoot(Handle(Graphic3d_TextureRoot)* nativeHandle) : OCMMgt_TShared((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_Graphic3d_TextureRoot(*nativeHandle);
}

OCGraphic3d_TextureRoot::OCGraphic3d_TextureRoot(OCNaroWrappers::OCGraphic3d_StructureManager^ SM, System::String^ Path, System::String^ FileName, OCGraphic3d_TypeOfTexture Type) : OCMMgt_TShared((OCDummy^)nullptr)

{}

 System::Boolean OCGraphic3d_TextureRoot::IsDone()
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_Graphic3d_TextureRoot*)nativeHandle))->IsDone());
}

OCOSD_Path^ OCGraphic3d_TextureRoot::Path()
{
  OSD_Path* tmp = new OSD_Path();
  *tmp = (*((Handle_Graphic3d_TextureRoot*)nativeHandle))->Path();
  return gcnew OCOSD_Path(tmp);
}

 OCGraphic3d_TypeOfTexture OCGraphic3d_TextureRoot::Type()
{
  return (OCGraphic3d_TypeOfTexture)((*((Handle_Graphic3d_TextureRoot*)nativeHandle))->Type());
}

 void OCGraphic3d_TextureRoot::LoadTexture(OCNaroWrappers::OCAlienImage_AlienImage^ anImage)
{
  (*((Handle_Graphic3d_TextureRoot*)nativeHandle))->LoadTexture(*((Handle_AlienImage_AlienImage*)anImage->Handle));
}

 Standard_Integer OCGraphic3d_TextureRoot::TextureId()
{
  return (*((Handle_Graphic3d_TextureRoot*)nativeHandle))->TextureId();
}

OCAlienImage_AlienImage^ OCGraphic3d_TextureRoot::Image()
{
  Handle(AlienImage_AlienImage) tmp = (*((Handle_Graphic3d_TextureRoot*)nativeHandle))->Image();
  return gcnew OCAlienImage_AlienImage(&tmp);
}

OCTColStd_HArray1OfReal^ OCGraphic3d_TextureRoot::GetTexUpperBounds()
{
  Handle(TColStd_HArray1OfReal) tmp = (*((Handle_Graphic3d_TextureRoot*)nativeHandle))->GetTexUpperBounds();
  return gcnew OCTColStd_HArray1OfReal(&tmp);
}



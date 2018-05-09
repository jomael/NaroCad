// File generated by CPPExt (CPP file)
//

#include "AlienImage_EuclidAlienData.h"
#include "../Converter.h"
#include "../TColStd/TColStd_HArray2OfInteger.h"
#include "../OSD/OSD_File.h"
#include "../Image/Image_Image.h"
#include "../Image/Image_PseudoColorImage.h"
#include "../Image/Image_ColorImage.h"


using namespace OCNaroWrappers;

OCAlienImage_EuclidAlienData::OCAlienImage_EuclidAlienData(Handle(AlienImage_EuclidAlienData)* nativeHandle) : OCAlienImage_AlienImageData((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_AlienImage_EuclidAlienData(*nativeHandle);
}

OCAlienImage_EuclidAlienData::OCAlienImage_EuclidAlienData() : OCAlienImage_AlienImageData((OCDummy^)nullptr)

{
  nativeHandle = new Handle_AlienImage_EuclidAlienData(new AlienImage_EuclidAlienData());
}

 System::Boolean OCAlienImage_EuclidAlienData::Read(OCNaroWrappers::OCOSD_File^ afile)
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_AlienImage_EuclidAlienData*)nativeHandle))->Read(*((OSD_File*)afile->Handle)));
}

 System::Boolean OCAlienImage_EuclidAlienData::Write(OCNaroWrappers::OCOSD_File^ afile)
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_AlienImage_EuclidAlienData*)nativeHandle))->Write(*((OSD_File*)afile->Handle)));
}

OCImage_Image^ OCAlienImage_EuclidAlienData::ToImage()
{
  Handle(Image_Image) tmp = (*((Handle_AlienImage_EuclidAlienData*)nativeHandle))->ToImage();
  return gcnew OCImage_Image(&tmp);
}

 void OCAlienImage_EuclidAlienData::FromImage(OCNaroWrappers::OCImage_Image^ anImage)
{
  (*((Handle_AlienImage_EuclidAlienData*)nativeHandle))->FromImage(*((Handle_Image_Image*)anImage->Handle));
}

 void OCAlienImage_EuclidAlienData::FromPseudoColorImage(OCNaroWrappers::OCImage_PseudoColorImage^ anImage)
{
  (*((Handle_AlienImage_EuclidAlienData*)nativeHandle))->FromPseudoColorImage(*((Handle_Image_PseudoColorImage*)anImage->Handle));
}

 void OCAlienImage_EuclidAlienData::FromColorImage(OCNaroWrappers::OCImage_ColorImage^ anImage)
{
  (*((Handle_AlienImage_EuclidAlienData*)nativeHandle))->FromColorImage(*((Handle_Image_ColorImage*)anImage->Handle));
}



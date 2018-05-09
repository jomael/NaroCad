// File generated by CPPExt (CPP file)
//

#include "Image_PixelFieldOfDColorImage.h"
#include "../Converter.h"
#include "../Aspect/Aspect_ColorPixel.h"


using namespace OCNaroWrappers;

OCImage_PixelFieldOfDColorImage::OCImage_PixelFieldOfDColorImage(Image_PixelFieldOfDColorImage* nativeHandle) 
{
  this->nativeHandle = nativeHandle;
}

OCImage_PixelFieldOfDColorImage::OCImage_PixelFieldOfDColorImage(Standard_Integer Width, Standard_Integer Height) 
{
  nativeHandle = new Image_PixelFieldOfDColorImage(Width, Height);
}

OCImage_PixelFieldOfDColorImage::OCImage_PixelFieldOfDColorImage(Standard_Integer Width, Standard_Integer Height, OCNaroWrappers::OCAspect_ColorPixel^ V) 
{
  nativeHandle = new Image_PixelFieldOfDColorImage(Width, Height, *((Aspect_ColorPixel*)V->Handle));
}

 Standard_Integer OCImage_PixelFieldOfDColorImage::Width()
{
  return ((Image_PixelFieldOfDColorImage*)nativeHandle)->Width();
}

 Standard_Integer OCImage_PixelFieldOfDColorImage::Height()
{
  return ((Image_PixelFieldOfDColorImage*)nativeHandle)->Height();
}

 Standard_Integer OCImage_PixelFieldOfDColorImage::UpperX()
{
  return ((Image_PixelFieldOfDColorImage*)nativeHandle)->UpperX();
}

 Standard_Integer OCImage_PixelFieldOfDColorImage::UpperY()
{
  return ((Image_PixelFieldOfDColorImage*)nativeHandle)->UpperY();
}

 void OCImage_PixelFieldOfDColorImage::SetValue(Standard_Integer X, Standard_Integer Y, OCNaroWrappers::OCAspect_ColorPixel^ Value)
{
  ((Image_PixelFieldOfDColorImage*)nativeHandle)->SetValue(X, Y, *((Aspect_ColorPixel*)Value->Handle));
}

OCAspect_ColorPixel^ OCImage_PixelFieldOfDColorImage::Value(Standard_Integer X, Standard_Integer Y)
{
  Aspect_ColorPixel* tmp = new Aspect_ColorPixel();
  *tmp = ((Image_PixelFieldOfDColorImage*)nativeHandle)->Value(X, Y);
  return gcnew OCAspect_ColorPixel(tmp);
}

OCAspect_ColorPixel^ OCImage_PixelFieldOfDColorImage::ChangeValue(Standard_Integer X, Standard_Integer Y)
{
  Aspect_ColorPixel* tmp = new Aspect_ColorPixel();
  *tmp = ((Image_PixelFieldOfDColorImage*)nativeHandle)->ChangeValue(X, Y);
  return gcnew OCAspect_ColorPixel(tmp);
}



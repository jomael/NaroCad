// File generated by CPPExt (Transient)
//
#ifndef _Image_ColorImage_OCWrappers_HeaderFile
#define _Image_ColorImage_OCWrappers_HeaderFile

// include the wrapped class
#include <Image_ColorImage.hxx>
#include "../Converter.h"

#include "Image_DColorImage.h"

#include "Image_TypeOfImage.h"


namespace OCNaroWrappers
{

ref class OCAspect_ColorPixel;
ref class OCAspect_GenericColorMap;
ref class OCQuantity_Color;
ref class OCImage_Image;


//! A ColorImage is a DColorImage with specific method. <br>
//!	     Each Pixel in the Image ,as a ColorPixel <br>
//!	     from Aspect, can be use directly as a Color. <br>
//! A ColorImage is also called a "true color image". <br>
public ref class OCImage_ColorImage : OCImage_DColorImage {

protected:
  // dummy constructor;
  OCImage_ColorImage(OCDummy^) : OCImage_DColorImage((OCDummy^)nullptr) {};

public:

// constructor from native
OCImage_ColorImage(Handle(Image_ColorImage)* nativeHandle);

// Methods PUBLIC

//! Create a ColorImage object. <br>
//!	       The default Background Pixel is set to Black . <br>
//!	       All the Image is initialised with Background Pixel <br>
OCImage_ColorImage(Standard_Integer x, Standard_Integer y, Standard_Integer dx, Standard_Integer dy);

//! Create a ColorImage object and set the Background Pixel. <br>
//!	       All the Image is initialised with Background Pixel <br>
OCImage_ColorImage(Standard_Integer x, Standard_Integer y, Standard_Integer dx, Standard_Integer dy, OCNaroWrappers::OCAspect_ColorPixel^ BackPixel);

//! Create a GenericColorMap object with the best ColorMap <br>
//!	of a particular size to use in Dithering method . <br>
//!	The best ColorMap is defined to be the one that contains as <br>
//!	many as possible of the most frequently used colors. <br>
 /*instead*/  OCAspect_GenericColorMap^ ChooseColorMap(Standard_Integer aSize) ;

//! Returns the Image Type. <br>
 /*instead*/  OCImage_TypeOfImage Type() ;

//! Returns the Pixel Color . <br>
 /*instead*/  OCQuantity_Color^ PixelColor(Standard_Integer X, Standard_Integer Y) ;

//! Duplicates a Image. <br>
 /*instead*/  OCImage_Image^ Dup() ;

~OCImage_ColorImage()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif

// File generated by CPPExt (Transient)
//
#ifndef _Xw_GraphicDevice_OCWrappers_HeaderFile
#define _Xw_GraphicDevice_OCWrappers_HeaderFile

// include the wrapped class
#include <Xw_GraphicDevice.hxx>
#include "../Converter.h"

#include "../Aspect/Aspect_GraphicDevice.h"

#include "../TCollection/TCollection_AsciiString.h"
#include "Xw_TypeOfMapping.h"
#include "Xw_TypeOfVisual.h"


namespace OCNaroWrappers
{

ref class OCXw_ColorMap;
ref class OCXw_TypeMap;
ref class OCXw_WidthMap;
ref class OCXw_FontMap;
ref class OCXw_MarkMap;
ref class OCXw_Window;
ref class OCAspect_GraphicDriver;


//! This class defines an X11 Graphic Device <br>
//!  Warning: An Graphic Device is defined by : <br>
//!		- a connection "host:server.screen" <br>
//!		- a colormap mapping of type Xw_TOM_xxxxx <br>
//!		- a "UseDefault" flag which permits the use of the <br>
//!			DefaultColormap if possible. <br>
//!	    The connection can be specified directly <br>
//!	    or extracted from an existing Window. <br>
//!	    All Xw_Windows may share the same Graphic Device if <br>
//!	    you don't want to have any side effects on the stations <br>
//!	    which have only one hardware pseudo-colormap . <br>
//!	    Four kind of mapping are possible : <br>
//!	    1) Xw_TOM_SIMPLERAMP <br>
//!	       Allocates the number of required colors in the <br>
//!	       colormap. <br>
//!	       The number of user colors depends directly on <br>
//!	       the hardware colormap size if UseDefault is False, <br>
//!	       or on the remainding free colors in the hardware colormap <br>
//!	       if UseDefault is True. <br>
//!	    2) Xw_TOM_BESTRAMP <br>
//!	       Allocates the number of required colors in the <br>
//!	       colormap but leaves the Odd color indexes free <br>
//!	       if possible for highlight color management. <br>
//!	       (plane 0 is reserved for this usage) <br>
//!	       The number of user colors depends directly on <br>
//!	       the hardware colormap size if UseDefault is False, <br>
//!	       or on the remainding free colors in the hardware colormap <br>
//!	       if UseDefault is True. <br>
//!	    3) Xw_TOM_COLORCUBE (the default) <br>
//!	       Allocates the maximum available colors in the colormap <br>
//!	       and builds a colorcube at this place. <br>
//!	       Any user color will be approximate and will be chosen as <br>
//!	       the nearest of the set of available colorcube colors. <br>
//!	       In this case the number of user colors can be unlimited. <br>
//!	    4) Xw_TOM_HARDWARE <br>
//!	       May do serious damage to the color system. <br>
//!	       Must be used for maintenance only. <br>
//!	    5) Xw_TOM_READONLY <br>
//!	       Allocates the number of required read only colors in the <br>
//!	       default colormap. <br>
//!	       The number of user colors depends directly on <br>
//!	       the hardware colormap size. <br>
public ref class OCXw_GraphicDevice : OCAspect_GraphicDevice {

protected:
  // dummy constructor;
  OCXw_GraphicDevice(OCDummy^) : OCAspect_GraphicDevice((OCDummy^)nullptr) {};

public:

// constructor from native
OCXw_GraphicDevice(Handle(Xw_GraphicDevice)* nativeHandle);

// Methods PUBLIC

//! Create an Graphic Device on the specified Connection <br>
//!	    by using ALL screen defaults if possible <br>
//!	    (i.e:Default Colormap) <br>
//!  Warning: Raises if the Device is Badly defined <br>
OCXw_GraphicDevice(System::String^ Connection, OCXw_TypeOfMapping Mapping, Standard_Integer Ncolors, System::Boolean UseDefault);

//! Returns the 2D oriented Device color map. <br>
 /*instead*/  OCXw_ColorMap^ ColorMap2D() ;

//! Returns the 2D oriented Visual Class. <br>
 /*instead*/  OCXw_TypeOfVisual VisualClass2D() ;

//! Returns the 2D oriented overlay Visual Class. <br>
 /*instead*/  OCXw_TypeOfVisual OverlayVisualClass2D() ;

//! Returns the 3D oriented Device color map. <br>
 /*instead*/  OCXw_ColorMap^ ColorMap3D() ;

//! Returns the 3D oriented Visual Class. <br>
 /*instead*/  OCXw_TypeOfVisual VisualClass3D() ;

//! Returns the 3D oriented overlay Visual Class. <br>
 /*instead*/  OCXw_TypeOfVisual OverlayVisualClass3D() ;

//! Returns the Device Type map. <br>
 /*instead*/  OCXw_TypeMap^ TypeMap() ;

//! Returns the Device Width map. <br>
 /*instead*/  OCXw_WidthMap^ WidthMap() ;

//! Returns the Device Font map. <br>
 /*instead*/  OCXw_FontMap^ FontMap() ;

//! Returns the Device Mark map. <br>
 /*instead*/  OCXw_MarkMap^ MarkMap() ;

//! Returns the Device connection string. <br>
 /*instead*/  System::String^ Display() ;

//! Returns the Device Display Address. <br>
 /*instead*/  Standard_Address XDisplay() ;

//! Returns the Display size in PIXEL <br>
//!  Warning: Raises if the connection is not defined properly <br>
 /*instead*/  void DisplaySize(Standard_Integer& Width, Standard_Integer& Height) ;

//! Returns the Display size in METER <br>
//!  Warning: Raises if the connection is not defined properly <br>
 /*instead*/  void DisplaySize(Quantity_Length& Width, Quantity_Length& Height) ;

//! Returns the plane layer ID from a visual ID <br>
//!  Warning: Raises if the connection is not defined properly <br>
 /*instead*/  Standard_Integer PlaneLayer(Standard_Integer aVisualID) ;


virtual /*instead*/  OCAspect_GraphicDriver^ GraphicDriver() ;

~OCXw_GraphicDevice()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif

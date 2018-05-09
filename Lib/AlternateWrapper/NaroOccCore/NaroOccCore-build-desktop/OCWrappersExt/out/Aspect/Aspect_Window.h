// File generated by CPPExt (Transient)
//
#ifndef _Aspect_Window_OCWrappers_HeaderFile
#define _Aspect_Window_OCWrappers_HeaderFile

// include the wrapped class
#include <Aspect_Window.hxx>
#include "../Converter.h"

#include "../MMgt/MMgt_TShared.h"

#include "Aspect_Background.h"
#include "../TCollection/TCollection_AsciiString.h"
#include "Aspect_FillMethod.h"
#include "Aspect_GradientBackground.h"
#include "../Quantity/Quantity_NameOfColor.h"
#include "Aspect_TypeOfResize.h"


namespace OCNaroWrappers
{

ref class OCAspect_GraphicDevice;
ref class OCAspect_Background;
ref class OCQuantity_Color;
ref class OCAspect_GradientBackground;


//! This class allows the definition of a window <br>
//! Warning: The position and size for the creation of the window <br>
//!          are defined in Device Screen Unit (DSU) <br>
//!          floating [0,1] space. <br>
public ref class OCAspect_Window : OCMMgt_TShared {

protected:
  // dummy constructor;
  OCAspect_Window(OCDummy^) : OCMMgt_TShared((OCDummy^)nullptr) {};

public:

// constructor from native
OCAspect_Window(Handle(Aspect_Window)* nativeHandle);

// Methods PUBLIC

//! Initializes the datas of a Window. <br>
OCAspect_Window(OCNaroWrappers::OCAspect_GraphicDevice^ aGraphicDevice);

//! Returns the window background. <br>
 /*instead*/  OCAspect_Background^ Background() ;

//! Returns the current image background string <br>
//! or NULL if nothing is defined. <br>
 /*instead*/  System::String^ BackgroundImage() ;

//! Returns the current image background fill mode. <br>
 /*instead*/  OCAspect_FillMethod BackgroundFillMethod() ;

//! Returns the window gradient background. <br>
 /*instead*/  OCAspect_GradientBackground^ GradientBackground() ;

//! Returns the background bitmap handle or <br>
//! 0 when nothing is defined <br>
 /*instead*/  System::IntPtr HBackground() ;

//! Returns the Graphic Device associated to this Window. <br>
 /*instead*/  OCAspect_GraphicDevice^ GraphicDevice() ;

//! Returns True if the window <me> is virtual <br>
 /*instead*/  System::Boolean IsVirtual() ;

//! Setup the virtual state <br>
 /*instead*/  void SetVirtual(System::Boolean theVirtual) ;

~OCAspect_Window()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif

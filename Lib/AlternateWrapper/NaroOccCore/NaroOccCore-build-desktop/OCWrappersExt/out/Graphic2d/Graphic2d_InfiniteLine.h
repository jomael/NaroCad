// File generated by CPPExt (Transient)
//
#ifndef _Graphic2d_InfiniteLine_OCWrappers_HeaderFile
#define _Graphic2d_InfiniteLine_OCWrappers_HeaderFile

// include the wrapped class
#include <Graphic2d_InfiniteLine.hxx>
#include "../Converter.h"

#include "Graphic2d_Line.h"



namespace OCNaroWrappers
{

ref class OCGraphic2d_GraphicObject;
ref class OCGraphic2d_Drawer;


//! The primitive InfiniteLine <br>
public ref class OCGraphic2d_InfiniteLine : OCGraphic2d_Line {

protected:
  // dummy constructor;
  OCGraphic2d_InfiniteLine(OCDummy^) : OCGraphic2d_Line((OCDummy^)nullptr) {};

public:

// constructor from native
OCGraphic2d_InfiniteLine(Handle(Graphic2d_InfiniteLine)* nativeHandle);

// Methods PUBLIC

//! Creates an infinite line. <br>
//!	    The reference point is <X>, <Y>. <br>
//!	    The slope is <DX>, <DY>. <br>
//!  Warning: Raises InfiniteLineDefinitionError if the <br>
//!          <DX> and <DY> are null. <br>
OCGraphic2d_InfiniteLine(OCNaroWrappers::OCGraphic2d_GraphicObject^ aGraphicObject, Quantity_Length X, Quantity_Length Y, Quantity_Length DX, Quantity_Length DY);

//! returns the coordinates of the reference point <br>
 /*instead*/  void Reference(Quantity_Length& X, Quantity_Length& Y) ;

//! returns the slope <dX>, <dY> <br>
 /*instead*/  void Slope(Quantity_Length& dX, Quantity_Length& dY) ;


virtual /*instead*/  void Save(Aspect_FStream& aFStream) ;


static /*instead*/  void Retrieve(Aspect_IFStream& anIFStream, OCNaroWrappers::OCGraphic2d_GraphicObject^ aGraphicObject) ;

~OCGraphic2d_InfiniteLine()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif

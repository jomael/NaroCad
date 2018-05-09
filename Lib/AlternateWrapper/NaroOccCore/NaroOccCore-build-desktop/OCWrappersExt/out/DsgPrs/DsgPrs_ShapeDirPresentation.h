// File generated by CPPExt (MPV)
//
#ifndef _DsgPrs_ShapeDirPresentation_OCWrappers_HeaderFile
#define _DsgPrs_ShapeDirPresentation_OCWrappers_HeaderFile

// include native header
#include <DsgPrs_ShapeDirPresentation.hxx>
#include "../Converter.h"




namespace OCNaroWrappers
{

ref class OCPrs3d_Presentation;
ref class OCPrs3d_Drawer;
ref class OCTopoDS_Shape;


//! A framework to define display of the normal to the <br>
//! surface of a shape. <br>
public ref class OCDsgPrs_ShapeDirPresentation  {

protected:
  DsgPrs_ShapeDirPresentation* nativeHandle;
  OCDsgPrs_ShapeDirPresentation(OCDummy^) {};

public:
  property DsgPrs_ShapeDirPresentation* Handle
  {
    DsgPrs_ShapeDirPresentation* get()
    {
      return nativeHandle;
    }
  }


// constructor from native
OCDsgPrs_ShapeDirPresentation(DsgPrs_ShapeDirPresentation* nativeHandle);

// Methods PUBLIC

//! Adds the shape shape and the mode mode to the <br>
//! presentation object prs. <br>
//! The display attributes of the normal are defined by the <br>
//! attribute manager aDrawer. <br>
//! mode determines whether the first or the last point of <br>
//! the normal is given to the presentation object. If the <br>
//! first point: 0; if the last point, 1. <br>
static /*instead*/  void Add(OCNaroWrappers::OCPrs3d_Presentation^ prs, OCNaroWrappers::OCPrs3d_Drawer^ aDrawer, OCNaroWrappers::OCTopoDS_Shape^ shape, Standard_Integer mode) ;

~OCDsgPrs_ShapeDirPresentation()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif

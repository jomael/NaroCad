// File generated by CPPExt (MPV)
//
#ifndef _Aspect_ColorMapEntry_OCWrappers_HeaderFile
#define _Aspect_ColorMapEntry_OCWrappers_HeaderFile

// include native header
#include <Aspect_ColorMapEntry.hxx>
#include "../Converter.h"


#include "../Quantity/Quantity_Color.h"
#include "../Standard/Standard_Storable.h"


namespace OCNaroWrappers
{

ref class OCQuantity_Color;


//! This class defines a colormap entry. <br>
//!	    A colormap entry is an association between <br>
//!	    a RGB object and a index in the colormap. <br>
public ref class OCAspect_ColorMapEntry  {

protected:
  Aspect_ColorMapEntry* nativeHandle;
  OCAspect_ColorMapEntry(OCDummy^) {};

public:
  property Aspect_ColorMapEntry* Handle
  {
    Aspect_ColorMapEntry* get()
    {
      return nativeHandle;
    }
  }


// constructor from native
OCAspect_ColorMapEntry(Aspect_ColorMapEntry* nativeHandle);

// Methods PUBLIC

//! Creates an unallocated colormap entry <br>
OCAspect_ColorMapEntry();

//! Creates an allocated colormap entry <br>
OCAspect_ColorMapEntry(Standard_Integer index, OCNaroWrappers::OCQuantity_Color^ rgb);

//! Creates an allocated colormap entry. <br>
//!  Warning: Raises error if the colormap entry <entry> <br>
//!	    is unallocated. <br>
OCAspect_ColorMapEntry(OCNaroWrappers::OCAspect_ColorMapEntry^ entry);

//! Sets colormap entry value and allocates it. <br>
 /*instead*/  void SetValue(Standard_Integer index, OCNaroWrappers::OCQuantity_Color^ rgb) ;

//! Sets colormap entry value and allocates it. <br>
 /*instead*/  void SetValue(OCNaroWrappers::OCAspect_ColorMapEntry^ entry) ;

//! Sets color <rgb> of colormap entry. <br>
 /*instead*/  void SetColor(OCNaroWrappers::OCQuantity_Color^ rgb) ;


 /*instead*/  OCQuantity_Color^ Color() ;

//! Sets index value of a colormap entry. <br>
 /*instead*/  void SetIndex(Standard_Integer index) ;


 /*instead*/  Standard_Integer Index() ;

//! Unallocates the colormap entry. <br>
 /*instead*/  void Free() ;

//! Returns True if the colormap entry is allocated. <br>
//!  Warning: A colormap entry is allocated when the color and <br>
//!	    the index is defined. <br>
 /*instead*/  System::Boolean IsAllocated() ;


 /*instead*/  void Dump() ;

~OCAspect_ColorMapEntry()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif

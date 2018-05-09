// File generated by CPPExt (Transient)
//
#ifndef _IFSelect_SelectBase_OCWrappers_HeaderFile
#define _IFSelect_SelectBase_OCWrappers_HeaderFile

// include the wrapped class
#include <IFSelect_SelectBase.hxx>
#include "../Converter.h"

#include "IFSelect_Selection.h"



namespace OCNaroWrappers
{

ref class OCIFSelect_SelectionIterator;


//! SelectBase works directly from an InterfaceModel : it is the <br>
//!           first base for other Selections. <br>
public ref class OCIFSelect_SelectBase : OCIFSelect_Selection {

protected:
  // dummy constructor;
  OCIFSelect_SelectBase(OCDummy^) : OCIFSelect_Selection((OCDummy^)nullptr) {};

public:

// constructor from native
OCIFSelect_SelectBase(Handle(IFSelect_SelectBase)* nativeHandle);

// Methods PUBLIC

//! Puts in an Iterator the Selections from which "me" depends <br>
//!           This list is empty for all SelectBase type Selections <br>
 /*instead*/  void FillIterator(OCNaroWrappers::OCIFSelect_SelectionIterator^ iter) ;

~OCIFSelect_SelectBase()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif

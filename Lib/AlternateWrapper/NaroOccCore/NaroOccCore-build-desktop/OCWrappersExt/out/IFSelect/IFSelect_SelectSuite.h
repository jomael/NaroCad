// File generated by CPPExt (Transient)
//
#ifndef _IFSelect_SelectSuite_OCWrappers_HeaderFile
#define _IFSelect_SelectSuite_OCWrappers_HeaderFile

// include the wrapped class
#include <IFSelect_SelectSuite.hxx>
#include "../Converter.h"

#include "IFSelect_SelectDeduct.h"

#include "../TCollection/TCollection_AsciiString.h"
#include "../TColStd/TColStd_SequenceOfTransient.h"


namespace OCNaroWrappers
{

ref class OCIFSelect_Selection;
ref class OCIFSelect_SelectDeduct;
ref class OCInterface_EntityIterator;
ref class OCInterface_Graph;
ref class OCTCollection_AsciiString;


//! A SelectSuite can describe a suite of SelectDeduct as a unique <br>
//!           one : in other words, it can be seen as a "macro selection" <br>
//! <br>
//!           It works by applying each of its items (which is a <br>
//!           SelectDeduct) on the result computed by the previous one <br>
//!           (by using Alternate Input) <br>
//! <br>
//!           But each of these Selections used as items may be used <br>
//!           independently, it will then give its own result <br>
//! <br>
//!           Hence, SelectSuite gives a way of defining a new Selection <br>
//!           from existing ones, without having to do copies or saves <br>
public ref class OCIFSelect_SelectSuite : OCIFSelect_SelectDeduct {

protected:
  // dummy constructor;
  OCIFSelect_SelectSuite(OCDummy^) : OCIFSelect_SelectDeduct((OCDummy^)nullptr) {};

public:

// constructor from native
OCIFSelect_SelectSuite(Handle(IFSelect_SelectSuite)* nativeHandle);

// Methods PUBLIC

//! Creates an empty SelectSuite <br>
OCIFSelect_SelectSuite();

//! Adds an input selection. I.E. : <br>
//!           If <item> is a SelectDeduct, adds it as Previous, not as Input <br>
//!           Else, sets it as Input <br>
//!           Returns True when done <br>
//!           Returns False and refuses to work if Input is already defined <br>
 /*instead*/  System::Boolean AddInput(OCNaroWrappers::OCIFSelect_Selection^ item) ;

//! Adds a new first item (prepends to the list). The Input is not <br>
//!           touched <br>
//!           If <item> is null, does nothing <br>
 /*instead*/  void AddPrevious(OCNaroWrappers::OCIFSelect_SelectDeduct^ item) ;

//! Adds a new last item (prepends to the list) <br>
//!           If <item> is null, does nothing <br>
 /*instead*/  void AddNext(OCNaroWrappers::OCIFSelect_SelectDeduct^ item) ;

//! Returns the count of Items <br>
 /*instead*/  Standard_Integer NbItems() ;

//! Returns an item from its rank in the list <br>
//!           (the Input is always apart) <br>
 /*instead*/  OCIFSelect_SelectDeduct^ Item(Standard_Integer num) ;

//! Sets a value for the Label <br>
 /*instead*/  void SetLabel(System::String^ lab) ;

//! Returns the list of selected entities <br>
//!           To do this, once InputResult has been taken (if Input or <br>
//!           Alternate has been defined, else the first Item gives it) : <br>
//!           this result is set as alternate input for the first item, <br>
//!           which computes its result : this result is set as alternate <br>
//!           input for the second item, etc... <br>
 /*instead*/  OCInterface_EntityIterator^ RootResult(OCNaroWrappers::OCInterface_Graph^ G) ;

//! Returns the Label <br>
//!           Either it has been defined by SetLabel, or it will give <br>
//!           "Suite of nn Selections" <br>
 /*instead*/  OCTCollection_AsciiString^ Label() ;

~OCIFSelect_SelectSuite()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
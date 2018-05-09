// File generated by CPPExt (Transient)
//
#ifndef _GeomFill_TgtField_OCWrappers_HeaderFile
#define _GeomFill_TgtField_OCWrappers_HeaderFile

// include the wrapped class
#include <GeomFill_TgtField.hxx>
#include "../Converter.h"

#include "../MMgt/MMgt_TShared.h"



namespace OCNaroWrappers
{

ref class OCLaw_BSpline;
ref class OCgp_Vec;


//! Root class defining the methods we need to make an <br>
//!          algorithmic tangents field. <br>
public ref class OCGeomFill_TgtField : OCMMgt_TShared {

protected:
  // dummy constructor;
  OCGeomFill_TgtField(OCDummy^) : OCMMgt_TShared((OCDummy^)nullptr) {};

public:

// constructor from native
OCGeomFill_TgtField(Handle(GeomFill_TgtField)* nativeHandle);

// Methods PUBLIC


virtual /*instead*/  System::Boolean IsScalable() ;


virtual /*instead*/  void Scale(OCNaroWrappers::OCLaw_BSpline^ Func) ;

~OCGeomFill_TgtField()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
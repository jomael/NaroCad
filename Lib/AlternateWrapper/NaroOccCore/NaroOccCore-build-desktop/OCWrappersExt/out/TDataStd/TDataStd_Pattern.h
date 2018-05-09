// File generated by CPPExt (Transient)
//
#ifndef _TDataStd_Pattern_OCWrappers_HeaderFile
#define _TDataStd_Pattern_OCWrappers_HeaderFile

// include the wrapped class
#include <TDataStd_Pattern.hxx>
#include "../Converter.h"

#include "../TDF/TDF_Attribute.h"



namespace OCNaroWrappers
{

ref class OCStandard_GUID;
ref class OCTDataStd_Array1OfTrsf;


//! a general pattern model <br>
public ref class OCTDataStd_Pattern : OCTDF_Attribute {

protected:
  // dummy constructor;
  OCTDataStd_Pattern(OCDummy^) : OCTDF_Attribute((OCDummy^)nullptr) {};

public:

// constructor from native
OCTDataStd_Pattern(Handle(TDataStd_Pattern)* nativeHandle);

// Methods PUBLIC


static /*instead*/  OCStandard_GUID^ GetID() ;

//! Returns the ID of the attribute. <br>
//! <br>
virtual /*instead*/  OCStandard_GUID^ ID() ;

~OCTDataStd_Pattern()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
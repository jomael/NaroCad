// File generated by CPPExt (Transient)
//
#ifndef _TDataStd_DeltaOnModificationOfIntArray_OCWrappers_HeaderFile
#define _TDataStd_DeltaOnModificationOfIntArray_OCWrappers_HeaderFile

// include the wrapped class
#include <TDataStd_DeltaOnModificationOfIntArray.hxx>
#include "../Converter.h"

#include "../TDF/TDF_DeltaOnModification.h"



namespace OCNaroWrappers
{

ref class OCTColStd_HArray1OfInteger;
ref class OCTDataStd_IntegerArray;


//! This class provides default services for an <br>
//!          AttributeDelta on a MODIFICATION action. <br>
public ref class OCTDataStd_DeltaOnModificationOfIntArray : OCTDF_DeltaOnModification {

protected:
  // dummy constructor;
  OCTDataStd_DeltaOnModificationOfIntArray(OCDummy^) : OCTDF_DeltaOnModification((OCDummy^)nullptr) {};

public:

// constructor from native
OCTDataStd_DeltaOnModificationOfIntArray(Handle(TDataStd_DeltaOnModificationOfIntArray)* nativeHandle);

// Methods PUBLIC

//! Initializes a TDF_DeltaOnModification. <br>
OCTDataStd_DeltaOnModificationOfIntArray(OCNaroWrappers::OCTDataStd_IntegerArray^ Arr);

//! Applies the delta to the attribute. <br>
virtual /*instead*/  void Apply() override;

~OCTDataStd_DeltaOnModificationOfIntArray()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif

// File generated by CPPExt (Transient)
//
#ifndef _TDataStd_ReferenceArray_OCWrappers_HeaderFile
#define _TDataStd_ReferenceArray_OCWrappers_HeaderFile

// include the wrapped class
#include <TDataStd_ReferenceArray.hxx>
#include "../Converter.h"

#include "../TDF/TDF_Attribute.h"

#include "../TDF/TDF_Label.h"


namespace OCNaroWrappers
{

ref class OCTDataStd_HLabelArray1;
ref class OCStandard_GUID;
ref class OCTDF_Label;
ref class OCTDF_Attribute;
ref class OCTDF_RelocationTable;
ref class OCTDF_DataSet;


//! Contains an array of references to the labels. <br>
public ref class OCTDataStd_ReferenceArray : OCTDF_Attribute {

protected:
  // dummy constructor;
  OCTDataStd_ReferenceArray(OCDummy^) : OCTDF_Attribute((OCDummy^)nullptr) {};

public:

// constructor from native
OCTDataStd_ReferenceArray(Handle(TDataStd_ReferenceArray)* nativeHandle);

// Methods PUBLIC

//! Static methods <br>
//!          ============== <br>//! Returns the ID of the array of references (labels) attribute. <br>
static /*instead*/  OCStandard_GUID^ GetID() ;

//! Finds or creates an array of reference values (labels) attribute. <br>
static /*instead*/  OCTDataStd_ReferenceArray^ Set(OCNaroWrappers::OCTDF_Label^ label, Standard_Integer lower, Standard_Integer upper) ;

//! Initialize the inner array with bounds from <lower> to <upper> <br>
 /*instead*/  void Init(Standard_Integer lower, Standard_Integer upper) ;

//! Sets the <Index>th element of the array to <Value> <br>
 /*instead*/  void SetValue(Standard_Integer index, OCNaroWrappers::OCTDF_Label^ value) ;

//! Returns the value of the <Index>th element of the array. <br>
 /*instead*/  OCTDF_Label^ Value(Standard_Integer Index) ;

//! Returns the lower boundary of the array. <br>
 /*instead*/  Standard_Integer Lower() ;

//! Returns the upper boundary of the array. <br>
 /*instead*/  Standard_Integer Upper() ;

//! Returns the number of elements in the array. <br>
 /*instead*/  Standard_Integer Length() ;


 /*instead*/  OCTDataStd_HLabelArray1^ InternalArray() ;


 /*instead*/  void SetInternalArray(OCNaroWrappers::OCTDataStd_HLabelArray1^ values, System::Boolean isCheckItems) ;


OCTDataStd_ReferenceArray();


 /*instead*/  OCStandard_GUID^ ID() ;


 /*instead*/  void Restore(OCNaroWrappers::OCTDF_Attribute^ With) ;


 /*instead*/  OCTDF_Attribute^ NewEmpty() ;


 /*instead*/  void Paste(OCNaroWrappers::OCTDF_Attribute^ Into, OCNaroWrappers::OCTDF_RelocationTable^ RT) ;


virtual /*instead*/  void References(OCNaroWrappers::OCTDF_DataSet^ DS) override;


virtual /*instead*/  Standard_OStream& Dump(Standard_OStream& anOS) override;

~OCTDataStd_ReferenceArray()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif

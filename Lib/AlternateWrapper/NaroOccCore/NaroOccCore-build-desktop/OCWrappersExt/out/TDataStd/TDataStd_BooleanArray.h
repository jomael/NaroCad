// File generated by CPPExt (Transient)
//
#ifndef _TDataStd_BooleanArray_OCWrappers_HeaderFile
#define _TDataStd_BooleanArray_OCWrappers_HeaderFile

// include the wrapped class
#include <TDataStd_BooleanArray.hxx>
#include "../Converter.h"

#include "../TDF/TDF_Attribute.h"



namespace OCNaroWrappers
{

ref class OCTColStd_HArray1OfByte;
ref class OCStandard_GUID;
ref class OCTDF_Label;
ref class OCTDF_Attribute;
ref class OCTDF_RelocationTable;


//! An array of boolean values. <br>
public ref class OCTDataStd_BooleanArray : OCTDF_Attribute {

protected:
  // dummy constructor;
  OCTDataStd_BooleanArray(OCDummy^) : OCTDF_Attribute((OCDummy^)nullptr) {};

public:

// constructor from native
OCTDataStd_BooleanArray(Handle(TDataStd_BooleanArray)* nativeHandle);

// Methods PUBLIC

//! Static methods <br>
//!          ============== <br>//! Returns an ID for array. <br>
static /*instead*/  OCStandard_GUID^ GetID() ;

//! Finds or creates an attribute with the array. <br>
static /*instead*/  OCTDataStd_BooleanArray^ Set(OCNaroWrappers::OCTDF_Label^ label, Standard_Integer lower, Standard_Integer upper) ;

//! Initialize the inner array with bounds from <lower> to <upper> <br>
 /*instead*/  void Init(Standard_Integer lower, Standard_Integer upper) ;

//! Sets the <Index>th element of the array to <Value> <br>
 /*instead*/  void SetValue(Standard_Integer index, System::Boolean value) ;

//! Return the value of the <Index>th element of the array. <br>
 /*instead*/  System::Boolean Value(Standard_Integer Index) ;

//! Returns the lower boundary of the array. <br>
 /*instead*/  Standard_Integer Lower() ;

//! Returns the upper boundary of the array. <br>
 /*instead*/  Standard_Integer Upper() ;

//! Returns the number of elements in the array. <br>
 /*instead*/  Standard_Integer Length() ;


 /*instead*/  OCTColStd_HArray1OfByte^ InternalArray() ;


 /*instead*/  void SetInternalArray(OCNaroWrappers::OCTColStd_HArray1OfByte^ values) ;


OCTDataStd_BooleanArray();


 /*instead*/  OCStandard_GUID^ ID() ;


 /*instead*/  void Restore(OCNaroWrappers::OCTDF_Attribute^ with) ;


 /*instead*/  OCTDF_Attribute^ NewEmpty() ;


 /*instead*/  void Paste(OCNaroWrappers::OCTDF_Attribute^ into, OCNaroWrappers::OCTDF_RelocationTable^ RT) ;


virtual /*instead*/  Standard_OStream& Dump(Standard_OStream& OS) override;

~OCTDataStd_BooleanArray()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
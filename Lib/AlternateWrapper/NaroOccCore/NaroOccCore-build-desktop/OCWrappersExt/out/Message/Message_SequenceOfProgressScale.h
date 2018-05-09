// File generated by CPPExt (MPV)
//
#ifndef _Message_SequenceOfProgressScale_OCWrappers_HeaderFile
#define _Message_SequenceOfProgressScale_OCWrappers_HeaderFile

// include native header
#include <Message_SequenceOfProgressScale.hxx>
#include "../Converter.h"

#include "../TCollection/TCollection_BaseSequence.h"

#include "../TCollection/TCollection_BaseSequence.h"


namespace OCNaroWrappers
{

ref class OCMessage_ProgressScale;
ref class OCMessage_SequenceNodeOfSequenceOfProgressScale;



public ref class OCMessage_SequenceOfProgressScale  : public OCTCollection_BaseSequence {

protected:
  // dummy constructor;
  OCMessage_SequenceOfProgressScale(OCDummy^) : OCTCollection_BaseSequence((OCDummy^)nullptr) {};

public:

// constructor from native
OCMessage_SequenceOfProgressScale(Message_SequenceOfProgressScale* nativeHandle);

// Methods PUBLIC


OCMessage_SequenceOfProgressScale();


 /*instead*/  OCMessage_SequenceOfProgressScale^ Assign(OCNaroWrappers::OCMessage_SequenceOfProgressScale^ Other) ;


 /*instead*/  void Append(OCNaroWrappers::OCMessage_ProgressScale^ T) ;


 /*instead*/  void Append(OCNaroWrappers::OCMessage_SequenceOfProgressScale^ S) ;


 /*instead*/  void Prepend(OCNaroWrappers::OCMessage_ProgressScale^ T) ;


 /*instead*/  void Prepend(OCNaroWrappers::OCMessage_SequenceOfProgressScale^ S) ;


 /*instead*/  void InsertBefore(Standard_Integer Index, OCNaroWrappers::OCMessage_ProgressScale^ T) ;


 /*instead*/  void InsertBefore(Standard_Integer Index, OCNaroWrappers::OCMessage_SequenceOfProgressScale^ S) ;


 /*instead*/  void InsertAfter(Standard_Integer Index, OCNaroWrappers::OCMessage_ProgressScale^ T) ;


 /*instead*/  void InsertAfter(Standard_Integer Index, OCNaroWrappers::OCMessage_SequenceOfProgressScale^ S) ;


 /*instead*/  OCMessage_ProgressScale^ First() ;


 /*instead*/  OCMessage_ProgressScale^ Last() ;


 /*instead*/  void Split(Standard_Integer Index, OCNaroWrappers::OCMessage_SequenceOfProgressScale^ Sub) ;


 /*instead*/  OCMessage_ProgressScale^ Value(Standard_Integer Index) ;


 /*instead*/  void SetValue(Standard_Integer Index, OCNaroWrappers::OCMessage_ProgressScale^ I) ;


 /*instead*/  OCMessage_ProgressScale^ ChangeValue(Standard_Integer Index) ;


 /*instead*/  void Remove(Standard_Integer Index) ;


 /*instead*/  void Remove(Standard_Integer FromIndex, Standard_Integer ToIndex) ;

~OCMessage_SequenceOfProgressScale()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif

// File generated by CPPExt (MPV)
//
#ifndef _Intf_SeqOfSectionPoint_OCWrappers_HeaderFile
#define _Intf_SeqOfSectionPoint_OCWrappers_HeaderFile

// include native header
#include <Intf_SeqOfSectionPoint.hxx>
#include "../Converter.h"

#include "../TCollection/TCollection_BaseSequence.h"

#include "../TCollection/TCollection_BaseSequence.h"


namespace OCNaroWrappers
{

ref class OCIntf_SectionPoint;
ref class OCIntf_SequenceNodeOfSeqOfSectionPoint;



public ref class OCIntf_SeqOfSectionPoint  : public OCTCollection_BaseSequence {

protected:
  // dummy constructor;
  OCIntf_SeqOfSectionPoint(OCDummy^) : OCTCollection_BaseSequence((OCDummy^)nullptr) {};

public:

// constructor from native
OCIntf_SeqOfSectionPoint(Intf_SeqOfSectionPoint* nativeHandle);

// Methods PUBLIC


OCIntf_SeqOfSectionPoint();


 /*instead*/  OCIntf_SeqOfSectionPoint^ Assign(OCNaroWrappers::OCIntf_SeqOfSectionPoint^ Other) ;


 /*instead*/  void Append(OCNaroWrappers::OCIntf_SectionPoint^ T) ;


 /*instead*/  void Append(OCNaroWrappers::OCIntf_SeqOfSectionPoint^ S) ;


 /*instead*/  void Prepend(OCNaroWrappers::OCIntf_SectionPoint^ T) ;


 /*instead*/  void Prepend(OCNaroWrappers::OCIntf_SeqOfSectionPoint^ S) ;


 /*instead*/  void InsertBefore(Standard_Integer Index, OCNaroWrappers::OCIntf_SectionPoint^ T) ;


 /*instead*/  void InsertBefore(Standard_Integer Index, OCNaroWrappers::OCIntf_SeqOfSectionPoint^ S) ;


 /*instead*/  void InsertAfter(Standard_Integer Index, OCNaroWrappers::OCIntf_SectionPoint^ T) ;


 /*instead*/  void InsertAfter(Standard_Integer Index, OCNaroWrappers::OCIntf_SeqOfSectionPoint^ S) ;


 /*instead*/  OCIntf_SectionPoint^ First() ;


 /*instead*/  OCIntf_SectionPoint^ Last() ;


 /*instead*/  void Split(Standard_Integer Index, OCNaroWrappers::OCIntf_SeqOfSectionPoint^ Sub) ;


 /*instead*/  OCIntf_SectionPoint^ Value(Standard_Integer Index) ;


 /*instead*/  void SetValue(Standard_Integer Index, OCNaroWrappers::OCIntf_SectionPoint^ I) ;


 /*instead*/  OCIntf_SectionPoint^ ChangeValue(Standard_Integer Index) ;


 /*instead*/  void Remove(Standard_Integer Index) ;


 /*instead*/  void Remove(Standard_Integer FromIndex, Standard_Integer ToIndex) ;

~OCIntf_SeqOfSectionPoint()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif

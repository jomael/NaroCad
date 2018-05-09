// File generated by CPPExt (MPV)
//
#ifndef _MDF_ARDriverSequence_OCWrappers_HeaderFile
#define _MDF_ARDriverSequence_OCWrappers_HeaderFile

// include native header
#include <MDF_ARDriverSequence.hxx>
#include "../Converter.h"

#include "../TCollection/TCollection_BaseSequence.h"

#include "../TCollection/TCollection_BaseSequence.h"


namespace OCNaroWrappers
{

ref class OCMDF_ARDriver;
ref class OCMDF_SequenceNodeOfARDriverSequence;



public ref class OCMDF_ARDriverSequence  : public OCTCollection_BaseSequence {

protected:
  // dummy constructor;
  OCMDF_ARDriverSequence(OCDummy^) : OCTCollection_BaseSequence((OCDummy^)nullptr) {};

public:

// constructor from native
OCMDF_ARDriverSequence(MDF_ARDriverSequence* nativeHandle);

// Methods PUBLIC


OCMDF_ARDriverSequence();


 /*instead*/  OCMDF_ARDriverSequence^ Assign(OCNaroWrappers::OCMDF_ARDriverSequence^ Other) ;


 /*instead*/  void Append(OCNaroWrappers::OCMDF_ARDriver^ T) ;


 /*instead*/  void Append(OCNaroWrappers::OCMDF_ARDriverSequence^ S) ;


 /*instead*/  void Prepend(OCNaroWrappers::OCMDF_ARDriver^ T) ;


 /*instead*/  void Prepend(OCNaroWrappers::OCMDF_ARDriverSequence^ S) ;


 /*instead*/  void InsertBefore(Standard_Integer Index, OCNaroWrappers::OCMDF_ARDriver^ T) ;


 /*instead*/  void InsertBefore(Standard_Integer Index, OCNaroWrappers::OCMDF_ARDriverSequence^ S) ;


 /*instead*/  void InsertAfter(Standard_Integer Index, OCNaroWrappers::OCMDF_ARDriver^ T) ;


 /*instead*/  void InsertAfter(Standard_Integer Index, OCNaroWrappers::OCMDF_ARDriverSequence^ S) ;


 /*instead*/  OCMDF_ARDriver^ First() ;


 /*instead*/  OCMDF_ARDriver^ Last() ;


 /*instead*/  void Split(Standard_Integer Index, OCNaroWrappers::OCMDF_ARDriverSequence^ Sub) ;


 /*instead*/  OCMDF_ARDriver^ Value(Standard_Integer Index) ;


 /*instead*/  void SetValue(Standard_Integer Index, OCNaroWrappers::OCMDF_ARDriver^ I) ;


 /*instead*/  OCMDF_ARDriver^ ChangeValue(Standard_Integer Index) ;


 /*instead*/  void Remove(Standard_Integer Index) ;


 /*instead*/  void Remove(Standard_Integer FromIndex, Standard_Integer ToIndex) ;

~OCMDF_ARDriverSequence()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
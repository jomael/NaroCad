// File generated by CPPExt (Transient)
//
#ifndef _CDM_DataMapNodeOfPresentationDirectory_OCWrappers_HeaderFile
#define _CDM_DataMapNodeOfPresentationDirectory_OCWrappers_HeaderFile

// include the wrapped class
#include <CDM_DataMapNodeOfPresentationDirectory.hxx>
#include "../Converter.h"

#include "../TCollection/TCollection_MapNode.h"

#include "../TCollection/TCollection_ExtendedString.h"


namespace OCNaroWrappers
{

ref class OCCDM_Document;
ref class OCTCollection_ExtendedString;
ref class OCCDM_PresentationDirectory;
ref class OCCDM_DataMapIteratorOfPresentationDirectory;



public ref class OCCDM_DataMapNodeOfPresentationDirectory : OCTCollection_MapNode {

protected:
  // dummy constructor;
  OCCDM_DataMapNodeOfPresentationDirectory(OCDummy^) : OCTCollection_MapNode((OCDummy^)nullptr) {};

public:

// constructor from native
OCCDM_DataMapNodeOfPresentationDirectory(Handle(CDM_DataMapNodeOfPresentationDirectory)* nativeHandle);

// Methods PUBLIC


OCCDM_DataMapNodeOfPresentationDirectory(OCNaroWrappers::OCTCollection_ExtendedString^ K, OCNaroWrappers::OCCDM_Document^ I, TCollection_MapNodePtr n);


 /*instead*/  OCTCollection_ExtendedString^ Key() ;


 /*instead*/  OCCDM_Document^ Value() ;

~OCCDM_DataMapNodeOfPresentationDirectory()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif

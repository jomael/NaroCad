// File generated by CPPExt (Transient)
//
#ifndef _AIS_IndexedDataMapNodeOfIndexedDataMapOfOwnerPrs_OCWrappers_HeaderFile
#define _AIS_IndexedDataMapNodeOfIndexedDataMapOfOwnerPrs_OCWrappers_HeaderFile

// include the wrapped class
#include <AIS_IndexedDataMapNodeOfIndexedDataMapOfOwnerPrs.hxx>
#include "../Converter.h"

#include "../TCollection/TCollection_MapNode.h"



namespace OCNaroWrappers
{

ref class OCSelectMgr_EntityOwner;
ref class OCPrs3d_Presentation;
ref class OCTColStd_MapTransientHasher;
ref class OCAIS_IndexedDataMapOfOwnerPrs;



public ref class OCAIS_IndexedDataMapNodeOfIndexedDataMapOfOwnerPrs : OCTCollection_MapNode {

protected:
  // dummy constructor;
  OCAIS_IndexedDataMapNodeOfIndexedDataMapOfOwnerPrs(OCDummy^) : OCTCollection_MapNode((OCDummy^)nullptr) {};

public:

// constructor from native
OCAIS_IndexedDataMapNodeOfIndexedDataMapOfOwnerPrs(Handle(AIS_IndexedDataMapNodeOfIndexedDataMapOfOwnerPrs)* nativeHandle);

// Methods PUBLIC


OCAIS_IndexedDataMapNodeOfIndexedDataMapOfOwnerPrs(OCNaroWrappers::OCSelectMgr_EntityOwner^ K1, Standard_Integer K2, OCNaroWrappers::OCPrs3d_Presentation^ I, TCollection_MapNodePtr n1, TCollection_MapNodePtr n2);


 /*instead*/  OCSelectMgr_EntityOwner^ Key1() ;


 /*instead*/  Standard_Integer Key2() ;


 /*instead*/  TCollection_MapNodePtr& Next2() ;


 /*instead*/  OCPrs3d_Presentation^ Value() ;

~OCAIS_IndexedDataMapNodeOfIndexedDataMapOfOwnerPrs()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif

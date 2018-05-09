// File generated by CPPExt (MPV)
//
#ifndef _SelectMgr_IndexedDataMapOfOwnerCriterion_OCWrappers_HeaderFile
#define _SelectMgr_IndexedDataMapOfOwnerCriterion_OCWrappers_HeaderFile

// include native header
#include <SelectMgr_IndexedDataMapOfOwnerCriterion.hxx>
#include "../Converter.h"

#include "../TCollection/TCollection_BasicMap.h"

#include "../TCollection/TCollection_BasicMap.h"


namespace OCNaroWrappers
{

ref class OCSelectBasics_EntityOwner;
ref class OCSelectMgr_SortCriterion;
ref class OCTColStd_MapTransientHasher;
ref class OCSelectMgr_IndexedDataMapNodeOfIndexedDataMapOfOwnerCriterion;



public ref class OCSelectMgr_IndexedDataMapOfOwnerCriterion  : public OCTCollection_BasicMap {

protected:
  // dummy constructor;
  OCSelectMgr_IndexedDataMapOfOwnerCriterion(OCDummy^) : OCTCollection_BasicMap((OCDummy^)nullptr) {};

public:

// constructor from native
OCSelectMgr_IndexedDataMapOfOwnerCriterion(SelectMgr_IndexedDataMapOfOwnerCriterion* nativeHandle);

// Methods PUBLIC


OCSelectMgr_IndexedDataMapOfOwnerCriterion(Standard_Integer NbBuckets);


 /*instead*/  OCSelectMgr_IndexedDataMapOfOwnerCriterion^ Assign(OCNaroWrappers::OCSelectMgr_IndexedDataMapOfOwnerCriterion^ Other) ;


 /*instead*/  void ReSize(Standard_Integer NbBuckets) ;


 /*instead*/  Standard_Integer Add(OCNaroWrappers::OCSelectBasics_EntityOwner^ K, OCNaroWrappers::OCSelectMgr_SortCriterion^ I) ;


 /*instead*/  void Substitute(Standard_Integer I, OCNaroWrappers::OCSelectBasics_EntityOwner^ K, OCNaroWrappers::OCSelectMgr_SortCriterion^ T) ;


 /*instead*/  void RemoveLast() ;


 /*instead*/  System::Boolean Contains(OCNaroWrappers::OCSelectBasics_EntityOwner^ K) ;


 /*instead*/  OCSelectBasics_EntityOwner^ FindKey(Standard_Integer I) ;


 /*instead*/  OCSelectMgr_SortCriterion^ FindFromIndex(Standard_Integer I) ;


 /*instead*/  OCSelectMgr_SortCriterion^ ChangeFromIndex(Standard_Integer I) ;


 /*instead*/  Standard_Integer FindIndex(OCNaroWrappers::OCSelectBasics_EntityOwner^ K) ;


 /*instead*/  OCSelectMgr_SortCriterion^ FindFromKey(OCNaroWrappers::OCSelectBasics_EntityOwner^ K) ;


 /*instead*/  OCSelectMgr_SortCriterion^ ChangeFromKey(OCNaroWrappers::OCSelectBasics_EntityOwner^ K) ;


 /*instead*/  Standard_Address FindFromKey1(OCNaroWrappers::OCSelectBasics_EntityOwner^ K) ;


 /*instead*/  Standard_Address ChangeFromKey1(OCNaroWrappers::OCSelectBasics_EntityOwner^ K) ;

~OCSelectMgr_IndexedDataMapOfOwnerCriterion()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif

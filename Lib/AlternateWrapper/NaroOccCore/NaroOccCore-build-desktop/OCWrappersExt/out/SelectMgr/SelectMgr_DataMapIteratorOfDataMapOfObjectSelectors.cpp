// File generated by CPPExt (CPP file)
//

#include "SelectMgr_DataMapIteratorOfDataMapOfObjectSelectors.h"
#include "../Converter.h"
#include "SelectMgr_SelectableObject.h"
#include "SelectMgr_SequenceOfSelector.h"
#include "../TColStd/TColStd_MapTransientHasher.h"
#include "SelectMgr_DataMapOfObjectSelectors.h"
#include "SelectMgr_DataMapNodeOfDataMapOfObjectSelectors.h"


using namespace OCNaroWrappers;

OCSelectMgr_DataMapIteratorOfDataMapOfObjectSelectors::OCSelectMgr_DataMapIteratorOfDataMapOfObjectSelectors(SelectMgr_DataMapIteratorOfDataMapOfObjectSelectors* nativeHandle) : OCTCollection_BasicMapIterator((OCDummy^)nullptr)

{
  this->nativeHandle = nativeHandle;
}

OCSelectMgr_DataMapIteratorOfDataMapOfObjectSelectors::OCSelectMgr_DataMapIteratorOfDataMapOfObjectSelectors() : OCTCollection_BasicMapIterator((OCDummy^)nullptr)

{
  nativeHandle = new SelectMgr_DataMapIteratorOfDataMapOfObjectSelectors();
}

OCSelectMgr_DataMapIteratorOfDataMapOfObjectSelectors::OCSelectMgr_DataMapIteratorOfDataMapOfObjectSelectors(OCNaroWrappers::OCSelectMgr_DataMapOfObjectSelectors^ aMap) : OCTCollection_BasicMapIterator((OCDummy^)nullptr)

{
  nativeHandle = new SelectMgr_DataMapIteratorOfDataMapOfObjectSelectors(*((SelectMgr_DataMapOfObjectSelectors*)aMap->Handle));
}

 void OCSelectMgr_DataMapIteratorOfDataMapOfObjectSelectors::Initialize(OCNaroWrappers::OCSelectMgr_DataMapOfObjectSelectors^ aMap)
{
  ((SelectMgr_DataMapIteratorOfDataMapOfObjectSelectors*)nativeHandle)->Initialize(*((SelectMgr_DataMapOfObjectSelectors*)aMap->Handle));
}

OCSelectMgr_SelectableObject^ OCSelectMgr_DataMapIteratorOfDataMapOfObjectSelectors::Key()
{
  Handle(SelectMgr_SelectableObject) tmp = ((SelectMgr_DataMapIteratorOfDataMapOfObjectSelectors*)nativeHandle)->Key();
  return gcnew OCSelectMgr_SelectableObject(&tmp);
}

OCSelectMgr_SequenceOfSelector^ OCSelectMgr_DataMapIteratorOfDataMapOfObjectSelectors::Value()
{
  SelectMgr_SequenceOfSelector* tmp = new SelectMgr_SequenceOfSelector();
  *tmp = ((SelectMgr_DataMapIteratorOfDataMapOfObjectSelectors*)nativeHandle)->Value();
  return gcnew OCSelectMgr_SequenceOfSelector(tmp);
}



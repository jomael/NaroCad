// File generated by CPPExt (CPP file)
//

#include "Transfer_IndexedDataMapNodeOfTransferMapOfProcessForFinder.h"
#include "../Converter.h"
#include "Transfer_Finder.h"
#include "Transfer_Binder.h"
#include "Transfer_FindHasher.h"
#include "Transfer_TransferMapOfProcessForFinder.h"


using namespace OCNaroWrappers;

OCTransfer_IndexedDataMapNodeOfTransferMapOfProcessForFinder::OCTransfer_IndexedDataMapNodeOfTransferMapOfProcessForFinder(Handle(Transfer_IndexedDataMapNodeOfTransferMapOfProcessForFinder)* nativeHandle) : OCTCollection_MapNode((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_Transfer_IndexedDataMapNodeOfTransferMapOfProcessForFinder(*nativeHandle);
}

OCTransfer_IndexedDataMapNodeOfTransferMapOfProcessForFinder::OCTransfer_IndexedDataMapNodeOfTransferMapOfProcessForFinder(OCNaroWrappers::OCTransfer_Finder^ K1, Standard_Integer K2, OCNaroWrappers::OCTransfer_Binder^ I, TCollection_MapNodePtr n1, TCollection_MapNodePtr n2) : OCTCollection_MapNode((OCDummy^)nullptr)

{
  nativeHandle = new Handle_Transfer_IndexedDataMapNodeOfTransferMapOfProcessForFinder(new Transfer_IndexedDataMapNodeOfTransferMapOfProcessForFinder(*((Handle_Transfer_Finder*)K1->Handle), K2, *((Handle_Transfer_Binder*)I->Handle), n1, n2));
}

OCTransfer_Finder^ OCTransfer_IndexedDataMapNodeOfTransferMapOfProcessForFinder::Key1()
{
  Handle(Transfer_Finder) tmp = (*((Handle_Transfer_IndexedDataMapNodeOfTransferMapOfProcessForFinder*)nativeHandle))->Key1();
  return gcnew OCTransfer_Finder(&tmp);
}

 Standard_Integer OCTransfer_IndexedDataMapNodeOfTransferMapOfProcessForFinder::Key2()
{
  return (*((Handle_Transfer_IndexedDataMapNodeOfTransferMapOfProcessForFinder*)nativeHandle))->Key2();
}

 TCollection_MapNodePtr& OCTransfer_IndexedDataMapNodeOfTransferMapOfProcessForFinder::Next2()
{
  return (*((Handle_Transfer_IndexedDataMapNodeOfTransferMapOfProcessForFinder*)nativeHandle))->Next2();
}

OCTransfer_Binder^ OCTransfer_IndexedDataMapNodeOfTransferMapOfProcessForFinder::Value()
{
  Handle(Transfer_Binder) tmp = (*((Handle_Transfer_IndexedDataMapNodeOfTransferMapOfProcessForFinder*)nativeHandle))->Value();
  return gcnew OCTransfer_Binder(&tmp);
}



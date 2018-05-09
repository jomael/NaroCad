// File generated by CPPExt (CPP file)
//

#include "BOPTools_IndexedMapNodeOfIndexedMapOfCoupleOfInteger.h"
#include "../Converter.h"
#include "BOPTools_CoupleOfInteger.h"
#include "BOPTools_CoupleOfIntegerMapHasher.h"
#include "BOPTools_IndexedMapOfCoupleOfInteger.h"


using namespace OCNaroWrappers;

OCBOPTools_IndexedMapNodeOfIndexedMapOfCoupleOfInteger::OCBOPTools_IndexedMapNodeOfIndexedMapOfCoupleOfInteger(Handle(BOPTools_IndexedMapNodeOfIndexedMapOfCoupleOfInteger)* nativeHandle) : OCTCollection_MapNode((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_BOPTools_IndexedMapNodeOfIndexedMapOfCoupleOfInteger(*nativeHandle);
}

OCBOPTools_IndexedMapNodeOfIndexedMapOfCoupleOfInteger::OCBOPTools_IndexedMapNodeOfIndexedMapOfCoupleOfInteger(OCNaroWrappers::OCBOPTools_CoupleOfInteger^ K1, Standard_Integer K2, TCollection_MapNodePtr n1, TCollection_MapNodePtr n2) : OCTCollection_MapNode((OCDummy^)nullptr)

{
  nativeHandle = new Handle_BOPTools_IndexedMapNodeOfIndexedMapOfCoupleOfInteger(new BOPTools_IndexedMapNodeOfIndexedMapOfCoupleOfInteger(*((BOPTools_CoupleOfInteger*)K1->Handle), K2, n1, n2));
}

OCBOPTools_CoupleOfInteger^ OCBOPTools_IndexedMapNodeOfIndexedMapOfCoupleOfInteger::Key1()
{
  BOPTools_CoupleOfInteger* tmp = new BOPTools_CoupleOfInteger();
  *tmp = (*((Handle_BOPTools_IndexedMapNodeOfIndexedMapOfCoupleOfInteger*)nativeHandle))->Key1();
  return gcnew OCBOPTools_CoupleOfInteger(tmp);
}

 Standard_Integer OCBOPTools_IndexedMapNodeOfIndexedMapOfCoupleOfInteger::Key2()
{
  return (*((Handle_BOPTools_IndexedMapNodeOfIndexedMapOfCoupleOfInteger*)nativeHandle))->Key2();
}

 TCollection_MapNodePtr& OCBOPTools_IndexedMapNodeOfIndexedMapOfCoupleOfInteger::Next2()
{
  return (*((Handle_BOPTools_IndexedMapNodeOfIndexedMapOfCoupleOfInteger*)nativeHandle))->Next2();
}



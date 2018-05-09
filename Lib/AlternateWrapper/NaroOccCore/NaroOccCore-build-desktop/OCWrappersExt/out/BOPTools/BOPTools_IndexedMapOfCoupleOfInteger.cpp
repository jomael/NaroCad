// File generated by CPPExt (CPP file)
//

#include "BOPTools_IndexedMapOfCoupleOfInteger.h"
#include "../Converter.h"
#include "BOPTools_CoupleOfInteger.h"
#include "BOPTools_CoupleOfIntegerMapHasher.h"
#include "BOPTools_IndexedMapNodeOfIndexedMapOfCoupleOfInteger.h"


using namespace OCNaroWrappers;

OCBOPTools_IndexedMapOfCoupleOfInteger::OCBOPTools_IndexedMapOfCoupleOfInteger(BOPTools_IndexedMapOfCoupleOfInteger* nativeHandle) : OCTCollection_BasicMap((OCDummy^)nullptr)

{
  this->nativeHandle = nativeHandle;
}

OCBOPTools_IndexedMapOfCoupleOfInteger::OCBOPTools_IndexedMapOfCoupleOfInteger(Standard_Integer NbBuckets) : OCTCollection_BasicMap((OCDummy^)nullptr)

{
  nativeHandle = new BOPTools_IndexedMapOfCoupleOfInteger(NbBuckets);
}

OCBOPTools_IndexedMapOfCoupleOfInteger^ OCBOPTools_IndexedMapOfCoupleOfInteger::Assign(OCNaroWrappers::OCBOPTools_IndexedMapOfCoupleOfInteger^ Other)
{
  BOPTools_IndexedMapOfCoupleOfInteger* tmp = new BOPTools_IndexedMapOfCoupleOfInteger(0);
  *tmp = ((BOPTools_IndexedMapOfCoupleOfInteger*)nativeHandle)->Assign(*((BOPTools_IndexedMapOfCoupleOfInteger*)Other->Handle));
  return gcnew OCBOPTools_IndexedMapOfCoupleOfInteger(tmp);
}

 void OCBOPTools_IndexedMapOfCoupleOfInteger::ReSize(Standard_Integer NbBuckets)
{
  ((BOPTools_IndexedMapOfCoupleOfInteger*)nativeHandle)->ReSize(NbBuckets);
}

 Standard_Integer OCBOPTools_IndexedMapOfCoupleOfInteger::Add(OCNaroWrappers::OCBOPTools_CoupleOfInteger^ K)
{
  return ((BOPTools_IndexedMapOfCoupleOfInteger*)nativeHandle)->Add(*((BOPTools_CoupleOfInteger*)K->Handle));
}

 void OCBOPTools_IndexedMapOfCoupleOfInteger::Substitute(Standard_Integer I, OCNaroWrappers::OCBOPTools_CoupleOfInteger^ K)
{
  ((BOPTools_IndexedMapOfCoupleOfInteger*)nativeHandle)->Substitute(I, *((BOPTools_CoupleOfInteger*)K->Handle));
}

 void OCBOPTools_IndexedMapOfCoupleOfInteger::RemoveLast()
{
  ((BOPTools_IndexedMapOfCoupleOfInteger*)nativeHandle)->RemoveLast();
}

 System::Boolean OCBOPTools_IndexedMapOfCoupleOfInteger::Contains(OCNaroWrappers::OCBOPTools_CoupleOfInteger^ K)
{
  return OCConverter::StandardBooleanToBoolean(((BOPTools_IndexedMapOfCoupleOfInteger*)nativeHandle)->Contains(*((BOPTools_CoupleOfInteger*)K->Handle)));
}

OCBOPTools_CoupleOfInteger^ OCBOPTools_IndexedMapOfCoupleOfInteger::FindKey(Standard_Integer I)
{
  BOPTools_CoupleOfInteger* tmp = new BOPTools_CoupleOfInteger();
  *tmp = ((BOPTools_IndexedMapOfCoupleOfInteger*)nativeHandle)->FindKey(I);
  return gcnew OCBOPTools_CoupleOfInteger(tmp);
}

 Standard_Integer OCBOPTools_IndexedMapOfCoupleOfInteger::FindIndex(OCNaroWrappers::OCBOPTools_CoupleOfInteger^ K)
{
  return ((BOPTools_IndexedMapOfCoupleOfInteger*)nativeHandle)->FindIndex(*((BOPTools_CoupleOfInteger*)K->Handle));
}



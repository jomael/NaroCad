// File generated by CPPExt (CPP file)
//

#include "BRepFill_ListOfOffsetWire.h"
#include "../Converter.h"
#include "BRepFill_ListIteratorOfListOfOffsetWire.h"
#include "BRepFill_OffsetWire.h"
#include "BRepFill_ListNodeOfListOfOffsetWire.h"


using namespace OCNaroWrappers;

OCBRepFill_ListOfOffsetWire::OCBRepFill_ListOfOffsetWire(BRepFill_ListOfOffsetWire* nativeHandle) 
{
  this->nativeHandle = nativeHandle;
}

OCBRepFill_ListOfOffsetWire::OCBRepFill_ListOfOffsetWire() 
{
  nativeHandle = new BRepFill_ListOfOffsetWire();
}

 void OCBRepFill_ListOfOffsetWire::Assign(OCNaroWrappers::OCBRepFill_ListOfOffsetWire^ Other)
{
  ((BRepFill_ListOfOffsetWire*)nativeHandle)->Assign(*((BRepFill_ListOfOffsetWire*)Other->Handle));
}

 Standard_Integer OCBRepFill_ListOfOffsetWire::Extent()
{
  return ((BRepFill_ListOfOffsetWire*)nativeHandle)->Extent();
}

 System::Boolean OCBRepFill_ListOfOffsetWire::IsEmpty()
{
  return OCConverter::StandardBooleanToBoolean(((BRepFill_ListOfOffsetWire*)nativeHandle)->IsEmpty());
}

 void OCBRepFill_ListOfOffsetWire::Prepend(OCNaroWrappers::OCBRepFill_OffsetWire^ I)
{
  ((BRepFill_ListOfOffsetWire*)nativeHandle)->Prepend(*((BRepFill_OffsetWire*)I->Handle));
}

 void OCBRepFill_ListOfOffsetWire::Prepend(OCNaroWrappers::OCBRepFill_OffsetWire^ I, OCNaroWrappers::OCBRepFill_ListIteratorOfListOfOffsetWire^ theIt)
{
  ((BRepFill_ListOfOffsetWire*)nativeHandle)->Prepend(*((BRepFill_OffsetWire*)I->Handle), *((BRepFill_ListIteratorOfListOfOffsetWire*)theIt->Handle));
}

 void OCBRepFill_ListOfOffsetWire::Prepend(OCNaroWrappers::OCBRepFill_ListOfOffsetWire^ Other)
{
  ((BRepFill_ListOfOffsetWire*)nativeHandle)->Prepend(*((BRepFill_ListOfOffsetWire*)Other->Handle));
}

 void OCBRepFill_ListOfOffsetWire::Append(OCNaroWrappers::OCBRepFill_OffsetWire^ I)
{
  ((BRepFill_ListOfOffsetWire*)nativeHandle)->Append(*((BRepFill_OffsetWire*)I->Handle));
}

 void OCBRepFill_ListOfOffsetWire::Append(OCNaroWrappers::OCBRepFill_OffsetWire^ I, OCNaroWrappers::OCBRepFill_ListIteratorOfListOfOffsetWire^ theIt)
{
  ((BRepFill_ListOfOffsetWire*)nativeHandle)->Append(*((BRepFill_OffsetWire*)I->Handle), *((BRepFill_ListIteratorOfListOfOffsetWire*)theIt->Handle));
}

 void OCBRepFill_ListOfOffsetWire::Append(OCNaroWrappers::OCBRepFill_ListOfOffsetWire^ Other)
{
  ((BRepFill_ListOfOffsetWire*)nativeHandle)->Append(*((BRepFill_ListOfOffsetWire*)Other->Handle));
}

OCBRepFill_OffsetWire^ OCBRepFill_ListOfOffsetWire::First()
{
  BRepFill_OffsetWire* tmp = new BRepFill_OffsetWire();
  *tmp = ((BRepFill_ListOfOffsetWire*)nativeHandle)->First();
  return gcnew OCBRepFill_OffsetWire(tmp);
}

OCBRepFill_OffsetWire^ OCBRepFill_ListOfOffsetWire::Last()
{
  BRepFill_OffsetWire* tmp = new BRepFill_OffsetWire();
  *tmp = ((BRepFill_ListOfOffsetWire*)nativeHandle)->Last();
  return gcnew OCBRepFill_OffsetWire(tmp);
}

 void OCBRepFill_ListOfOffsetWire::RemoveFirst()
{
  ((BRepFill_ListOfOffsetWire*)nativeHandle)->RemoveFirst();
}

 void OCBRepFill_ListOfOffsetWire::Remove(OCNaroWrappers::OCBRepFill_ListIteratorOfListOfOffsetWire^ It)
{
  ((BRepFill_ListOfOffsetWire*)nativeHandle)->Remove(*((BRepFill_ListIteratorOfListOfOffsetWire*)It->Handle));
}

 void OCBRepFill_ListOfOffsetWire::InsertBefore(OCNaroWrappers::OCBRepFill_OffsetWire^ I, OCNaroWrappers::OCBRepFill_ListIteratorOfListOfOffsetWire^ It)
{
  ((BRepFill_ListOfOffsetWire*)nativeHandle)->InsertBefore(*((BRepFill_OffsetWire*)I->Handle), *((BRepFill_ListIteratorOfListOfOffsetWire*)It->Handle));
}

 void OCBRepFill_ListOfOffsetWire::InsertBefore(OCNaroWrappers::OCBRepFill_ListOfOffsetWire^ Other, OCNaroWrappers::OCBRepFill_ListIteratorOfListOfOffsetWire^ It)
{
  ((BRepFill_ListOfOffsetWire*)nativeHandle)->InsertBefore(*((BRepFill_ListOfOffsetWire*)Other->Handle), *((BRepFill_ListIteratorOfListOfOffsetWire*)It->Handle));
}

 void OCBRepFill_ListOfOffsetWire::InsertAfter(OCNaroWrappers::OCBRepFill_OffsetWire^ I, OCNaroWrappers::OCBRepFill_ListIteratorOfListOfOffsetWire^ It)
{
  ((BRepFill_ListOfOffsetWire*)nativeHandle)->InsertAfter(*((BRepFill_OffsetWire*)I->Handle), *((BRepFill_ListIteratorOfListOfOffsetWire*)It->Handle));
}

 void OCBRepFill_ListOfOffsetWire::InsertAfter(OCNaroWrappers::OCBRepFill_ListOfOffsetWire^ Other, OCNaroWrappers::OCBRepFill_ListIteratorOfListOfOffsetWire^ It)
{
  ((BRepFill_ListOfOffsetWire*)nativeHandle)->InsertAfter(*((BRepFill_ListOfOffsetWire*)Other->Handle), *((BRepFill_ListIteratorOfListOfOffsetWire*)It->Handle));
}



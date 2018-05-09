// File generated by CPPExt (CPP file)
//

#include "BRepFill_ListNodeOfListOfOffsetWire.h"
#include "../Converter.h"
#include "BRepFill_OffsetWire.h"
#include "BRepFill_ListOfOffsetWire.h"
#include "BRepFill_ListIteratorOfListOfOffsetWire.h"


using namespace OCNaroWrappers;

OCBRepFill_ListNodeOfListOfOffsetWire::OCBRepFill_ListNodeOfListOfOffsetWire(Handle(BRepFill_ListNodeOfListOfOffsetWire)* nativeHandle) : OCTCollection_MapNode((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_BRepFill_ListNodeOfListOfOffsetWire(*nativeHandle);
}

OCBRepFill_ListNodeOfListOfOffsetWire::OCBRepFill_ListNodeOfListOfOffsetWire(OCNaroWrappers::OCBRepFill_OffsetWire^ I, TCollection_MapNodePtr n) : OCTCollection_MapNode((OCDummy^)nullptr)

{
  nativeHandle = new Handle_BRepFill_ListNodeOfListOfOffsetWire(new BRepFill_ListNodeOfListOfOffsetWire(*((BRepFill_OffsetWire*)I->Handle), n));
}

OCBRepFill_OffsetWire^ OCBRepFill_ListNodeOfListOfOffsetWire::Value()
{
  BRepFill_OffsetWire* tmp = new BRepFill_OffsetWire();
  *tmp = (*((Handle_BRepFill_ListNodeOfListOfOffsetWire*)nativeHandle))->Value();
  return gcnew OCBRepFill_OffsetWire(tmp);
}


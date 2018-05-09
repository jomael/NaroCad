// File generated by CPPExt (CPP file)
//

#include "BRepCheck_ListNodeOfListOfStatus.h"
#include "../Converter.h"
#include "BRepCheck_ListOfStatus.h"
#include "BRepCheck_ListIteratorOfListOfStatus.h"


using namespace OCNaroWrappers;

OCBRepCheck_ListNodeOfListOfStatus::OCBRepCheck_ListNodeOfListOfStatus(Handle(BRepCheck_ListNodeOfListOfStatus)* nativeHandle) : OCTCollection_MapNode((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_BRepCheck_ListNodeOfListOfStatus(*nativeHandle);
}

OCBRepCheck_ListNodeOfListOfStatus::OCBRepCheck_ListNodeOfListOfStatus(OCBRepCheck_Status I, TCollection_MapNodePtr n) : OCTCollection_MapNode((OCDummy^)nullptr)

{
  nativeHandle = new Handle_BRepCheck_ListNodeOfListOfStatus(new BRepCheck_ListNodeOfListOfStatus((BRepCheck_Status)I, n));
}

 OCBRepCheck_Status OCBRepCheck_ListNodeOfListOfStatus::Value()
{
  return (OCBRepCheck_Status)((*((Handle_BRepCheck_ListNodeOfListOfStatus*)nativeHandle))->Value());
}


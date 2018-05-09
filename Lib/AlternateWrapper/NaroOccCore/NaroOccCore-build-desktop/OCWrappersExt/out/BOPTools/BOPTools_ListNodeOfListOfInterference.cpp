// File generated by CPPExt (CPP file)
//

#include "BOPTools_ListNodeOfListOfInterference.h"
#include "../Converter.h"
#include "BOPTools_Interference.h"
#include "BOPTools_ListOfInterference.h"
#include "BOPTools_ListIteratorOfListOfInterference.h"


using namespace OCNaroWrappers;

OCBOPTools_ListNodeOfListOfInterference::OCBOPTools_ListNodeOfListOfInterference(Handle(BOPTools_ListNodeOfListOfInterference)* nativeHandle) : OCTCollection_MapNode((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_BOPTools_ListNodeOfListOfInterference(*nativeHandle);
}

OCBOPTools_ListNodeOfListOfInterference::OCBOPTools_ListNodeOfListOfInterference(OCNaroWrappers::OCBOPTools_Interference^ I, TCollection_MapNodePtr n) : OCTCollection_MapNode((OCDummy^)nullptr)

{
  nativeHandle = new Handle_BOPTools_ListNodeOfListOfInterference(new BOPTools_ListNodeOfListOfInterference(*((BOPTools_Interference*)I->Handle), n));
}

OCBOPTools_Interference^ OCBOPTools_ListNodeOfListOfInterference::Value()
{
  BOPTools_Interference* tmp = new BOPTools_Interference();
  *tmp = (*((Handle_BOPTools_ListNodeOfListOfInterference*)nativeHandle))->Value();
  return gcnew OCBOPTools_Interference(tmp);
}



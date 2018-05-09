// File generated by CPPExt (CPP file)
//

#include "TDF_StdMapNodeOfIDMap.h"
#include "../Converter.h"
#include "../Standard/Standard_GUID.h"
#include "TDF_IDMap.h"
#include "TDF_MapIteratorOfIDMap.h"


using namespace OCNaroWrappers;

OCTDF_StdMapNodeOfIDMap::OCTDF_StdMapNodeOfIDMap(Handle(TDF_StdMapNodeOfIDMap)* nativeHandle) : OCTCollection_MapNode((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_TDF_StdMapNodeOfIDMap(*nativeHandle);
}

OCTDF_StdMapNodeOfIDMap::OCTDF_StdMapNodeOfIDMap(OCNaroWrappers::OCStandard_GUID^ K, TCollection_MapNodePtr n) : OCTCollection_MapNode((OCDummy^)nullptr)

{
  nativeHandle = new Handle_TDF_StdMapNodeOfIDMap(new TDF_StdMapNodeOfIDMap(*((Standard_GUID*)K->Handle), n));
}

OCStandard_GUID^ OCTDF_StdMapNodeOfIDMap::Key()
{
  Standard_GUID* tmp = new Standard_GUID();
  *tmp = (*((Handle_TDF_StdMapNodeOfIDMap*)nativeHandle))->Key();
  return gcnew OCStandard_GUID(tmp);
}



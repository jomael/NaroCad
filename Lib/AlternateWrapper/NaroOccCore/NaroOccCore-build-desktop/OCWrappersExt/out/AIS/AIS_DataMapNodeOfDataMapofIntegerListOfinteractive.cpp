// File generated by CPPExt (CPP file)
//

#include "AIS_DataMapNodeOfDataMapofIntegerListOfinteractive.h"
#include "../Converter.h"
#include "AIS_ListOfInteractive.h"
#include "../TColStd/TColStd_MapIntegerHasher.h"
#include "AIS_DataMapofIntegerListOfinteractive.h"
#include "AIS_DataMapIteratorOfDataMapofIntegerListOfinteractive.h"


using namespace OCNaroWrappers;

OCAIS_DataMapNodeOfDataMapofIntegerListOfinteractive::OCAIS_DataMapNodeOfDataMapofIntegerListOfinteractive(Handle(AIS_DataMapNodeOfDataMapofIntegerListOfinteractive)* nativeHandle) : OCTCollection_MapNode((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_AIS_DataMapNodeOfDataMapofIntegerListOfinteractive(*nativeHandle);
}

OCAIS_DataMapNodeOfDataMapofIntegerListOfinteractive::OCAIS_DataMapNodeOfDataMapofIntegerListOfinteractive(Standard_Integer K, OCNaroWrappers::OCAIS_ListOfInteractive^ I, TCollection_MapNodePtr n) : OCTCollection_MapNode((OCDummy^)nullptr)

{
  nativeHandle = new Handle_AIS_DataMapNodeOfDataMapofIntegerListOfinteractive(new AIS_DataMapNodeOfDataMapofIntegerListOfinteractive(K, *((AIS_ListOfInteractive*)I->Handle), n));
}

 Standard_Integer OCAIS_DataMapNodeOfDataMapofIntegerListOfinteractive::Key()
{
  return (*((Handle_AIS_DataMapNodeOfDataMapofIntegerListOfinteractive*)nativeHandle))->Key();
}

OCAIS_ListOfInteractive^ OCAIS_DataMapNodeOfDataMapofIntegerListOfinteractive::Value()
{
  AIS_ListOfInteractive* tmp = new AIS_ListOfInteractive();
  *tmp = (*((Handle_AIS_DataMapNodeOfDataMapofIntegerListOfinteractive*)nativeHandle))->Value();
  return gcnew OCAIS_ListOfInteractive(tmp);
}



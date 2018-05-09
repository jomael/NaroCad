// File generated by CPPExt (CPP file)
//

#include "CDM_ListNodeOfListOfReferences.h"
#include "../Converter.h"
#include "CDM_Reference.h"
#include "CDM_ListOfReferences.h"
#include "CDM_ListIteratorOfListOfReferences.h"


using namespace OCNaroWrappers;

OCCDM_ListNodeOfListOfReferences::OCCDM_ListNodeOfListOfReferences(Handle(CDM_ListNodeOfListOfReferences)* nativeHandle) : OCTCollection_MapNode((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_CDM_ListNodeOfListOfReferences(*nativeHandle);
}

OCCDM_ListNodeOfListOfReferences::OCCDM_ListNodeOfListOfReferences(OCNaroWrappers::OCCDM_Reference^ I, TCollection_MapNodePtr n) : OCTCollection_MapNode((OCDummy^)nullptr)

{
  nativeHandle = new Handle_CDM_ListNodeOfListOfReferences(new CDM_ListNodeOfListOfReferences(*((Handle_CDM_Reference*)I->Handle), n));
}

OCCDM_Reference^ OCCDM_ListNodeOfListOfReferences::Value()
{
  Handle(CDM_Reference) tmp = (*((Handle_CDM_ListNodeOfListOfReferences*)nativeHandle))->Value();
  return gcnew OCCDM_Reference(&tmp);
}



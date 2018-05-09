// File generated by CPPExt (CPP file)
//

#include "CDM_DataMapIteratorOfMetaDataLookUpTable.h"
#include "../Converter.h"
#include "../TCollection/TCollection_ExtendedString.h"
#include "CDM_MetaData.h"
#include "CDM_MetaDataLookUpTable.h"
#include "CDM_DataMapNodeOfMetaDataLookUpTable.h"


using namespace OCNaroWrappers;

OCCDM_DataMapIteratorOfMetaDataLookUpTable::OCCDM_DataMapIteratorOfMetaDataLookUpTable(CDM_DataMapIteratorOfMetaDataLookUpTable* nativeHandle) : OCTCollection_BasicMapIterator((OCDummy^)nullptr)

{
  this->nativeHandle = nativeHandle;
}

OCCDM_DataMapIteratorOfMetaDataLookUpTable::OCCDM_DataMapIteratorOfMetaDataLookUpTable() : OCTCollection_BasicMapIterator((OCDummy^)nullptr)

{
  nativeHandle = new CDM_DataMapIteratorOfMetaDataLookUpTable();
}

OCCDM_DataMapIteratorOfMetaDataLookUpTable::OCCDM_DataMapIteratorOfMetaDataLookUpTable(OCNaroWrappers::OCCDM_MetaDataLookUpTable^ aMap) : OCTCollection_BasicMapIterator((OCDummy^)nullptr)

{
  nativeHandle = new CDM_DataMapIteratorOfMetaDataLookUpTable(*((CDM_MetaDataLookUpTable*)aMap->Handle));
}

 void OCCDM_DataMapIteratorOfMetaDataLookUpTable::Initialize(OCNaroWrappers::OCCDM_MetaDataLookUpTable^ aMap)
{
  ((CDM_DataMapIteratorOfMetaDataLookUpTable*)nativeHandle)->Initialize(*((CDM_MetaDataLookUpTable*)aMap->Handle));
}

OCTCollection_ExtendedString^ OCCDM_DataMapIteratorOfMetaDataLookUpTable::Key()
{
  TCollection_ExtendedString* tmp = new TCollection_ExtendedString();
  *tmp = ((CDM_DataMapIteratorOfMetaDataLookUpTable*)nativeHandle)->Key();
  return gcnew OCTCollection_ExtendedString(tmp);
}

OCCDM_MetaData^ OCCDM_DataMapIteratorOfMetaDataLookUpTable::Value()
{
  Handle(CDM_MetaData) tmp = ((CDM_DataMapIteratorOfMetaDataLookUpTable*)nativeHandle)->Value();
  return gcnew OCCDM_MetaData(&tmp);
}


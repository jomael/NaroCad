// File generated by CPPExt (Transient)
//
#ifndef _MDF_DataMapNodeOfTypeDriverListMapOfASDriverTable_OCWrappers_HeaderFile
#define _MDF_DataMapNodeOfTypeDriverListMapOfASDriverTable_OCWrappers_HeaderFile

// include the wrapped class
#include <MDF_DataMapNodeOfTypeDriverListMapOfASDriverTable.hxx>
#include "../Converter.h"

#include "../TCollection/TCollection_MapNode.h"

#include "MDF_DriverListOfASDriverTable.h"


namespace OCNaroWrappers
{

ref class OCStandard_Type;
ref class OCMDF_DriverListOfASDriverTable;
ref class OCTColStd_MapTransientHasher;
ref class OCMDF_TypeDriverListMapOfASDriverTable;
ref class OCMDF_DataMapIteratorOfTypeDriverListMapOfASDriverTable;



public ref class OCMDF_DataMapNodeOfTypeDriverListMapOfASDriverTable : OCTCollection_MapNode {

protected:
  // dummy constructor;
  OCMDF_DataMapNodeOfTypeDriverListMapOfASDriverTable(OCDummy^) : OCTCollection_MapNode((OCDummy^)nullptr) {};

public:

// constructor from native
OCMDF_DataMapNodeOfTypeDriverListMapOfASDriverTable(Handle(MDF_DataMapNodeOfTypeDriverListMapOfASDriverTable)* nativeHandle);

// Methods PUBLIC


OCMDF_DataMapNodeOfTypeDriverListMapOfASDriverTable(OCNaroWrappers::OCStandard_Type^ K, OCNaroWrappers::OCMDF_DriverListOfASDriverTable^ I, TCollection_MapNodePtr n);


 /*instead*/  OCStandard_Type^ Key() ;


 /*instead*/  OCMDF_DriverListOfASDriverTable^ Value() ;

~OCMDF_DataMapNodeOfTypeDriverListMapOfASDriverTable()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif

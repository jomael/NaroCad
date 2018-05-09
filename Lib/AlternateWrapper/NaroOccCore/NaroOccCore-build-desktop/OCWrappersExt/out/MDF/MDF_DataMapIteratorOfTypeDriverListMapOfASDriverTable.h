// File generated by CPPExt (MPV)
//
#ifndef _MDF_DataMapIteratorOfTypeDriverListMapOfASDriverTable_OCWrappers_HeaderFile
#define _MDF_DataMapIteratorOfTypeDriverListMapOfASDriverTable_OCWrappers_HeaderFile

// include native header
#include <MDF_DataMapIteratorOfTypeDriverListMapOfASDriverTable.hxx>
#include "../Converter.h"

#include "../TCollection/TCollection_BasicMapIterator.h"

#include "../TCollection/TCollection_BasicMapIterator.h"


namespace OCNaroWrappers
{

ref class OCStandard_Type;
ref class OCMDF_DriverListOfASDriverTable;
ref class OCTColStd_MapTransientHasher;
ref class OCMDF_TypeDriverListMapOfASDriverTable;
ref class OCMDF_DataMapNodeOfTypeDriverListMapOfASDriverTable;



public ref class OCMDF_DataMapIteratorOfTypeDriverListMapOfASDriverTable  : public OCTCollection_BasicMapIterator {

protected:
  // dummy constructor;
  OCMDF_DataMapIteratorOfTypeDriverListMapOfASDriverTable(OCDummy^) : OCTCollection_BasicMapIterator((OCDummy^)nullptr) {};

public:

// constructor from native
OCMDF_DataMapIteratorOfTypeDriverListMapOfASDriverTable(MDF_DataMapIteratorOfTypeDriverListMapOfASDriverTable* nativeHandle);

// Methods PUBLIC


OCMDF_DataMapIteratorOfTypeDriverListMapOfASDriverTable();


OCMDF_DataMapIteratorOfTypeDriverListMapOfASDriverTable(OCNaroWrappers::OCMDF_TypeDriverListMapOfASDriverTable^ aMap);


 /*instead*/  void Initialize(OCNaroWrappers::OCMDF_TypeDriverListMapOfASDriverTable^ aMap) ;


 /*instead*/  OCStandard_Type^ Key() ;


 /*instead*/  OCMDF_DriverListOfASDriverTable^ Value() ;

~OCMDF_DataMapIteratorOfTypeDriverListMapOfASDriverTable()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif

// File generated by CPPExt (MPV)
//
#ifndef _TopTools_IndexedDataMapOfShapeAddress_OCWrappers_HeaderFile
#define _TopTools_IndexedDataMapOfShapeAddress_OCWrappers_HeaderFile

// include native header
#include <TopTools_IndexedDataMapOfShapeAddress.hxx>
#include "../Converter.h"

#include "../TCollection/TCollection_BasicMap.h"

#include "../TCollection/TCollection_BasicMap.h"


namespace OCNaroWrappers
{

ref class OCTopoDS_Shape;
ref class OCTopTools_ShapeMapHasher;
ref class OCTopTools_IndexedDataMapNodeOfIndexedDataMapOfShapeAddress;



public ref class OCTopTools_IndexedDataMapOfShapeAddress  : public OCTCollection_BasicMap {

protected:
  // dummy constructor;
  OCTopTools_IndexedDataMapOfShapeAddress(OCDummy^) : OCTCollection_BasicMap((OCDummy^)nullptr) {};

public:

// constructor from native
OCTopTools_IndexedDataMapOfShapeAddress(TopTools_IndexedDataMapOfShapeAddress* nativeHandle);

// Methods PUBLIC


OCTopTools_IndexedDataMapOfShapeAddress(Standard_Integer NbBuckets);


 /*instead*/  OCTopTools_IndexedDataMapOfShapeAddress^ Assign(OCNaroWrappers::OCTopTools_IndexedDataMapOfShapeAddress^ Other) ;


 /*instead*/  void ReSize(Standard_Integer NbBuckets) ;


 /*instead*/  Standard_Integer Add(OCNaroWrappers::OCTopoDS_Shape^ K, Standard_Address I) ;


 /*instead*/  void Substitute(Standard_Integer I, OCNaroWrappers::OCTopoDS_Shape^ K, Standard_Address T) ;


 /*instead*/  void RemoveLast() ;


 /*instead*/  System::Boolean Contains(OCNaroWrappers::OCTopoDS_Shape^ K) ;


 /*instead*/  OCTopoDS_Shape^ FindKey(Standard_Integer I) ;


 /*instead*/  Standard_Address FindFromIndex(Standard_Integer I) ;


 /*instead*/  Standard_Address ChangeFromIndex(Standard_Integer I) ;


 /*instead*/  Standard_Integer FindIndex(OCNaroWrappers::OCTopoDS_Shape^ K) ;


 /*instead*/  Standard_Address FindFromKey(OCNaroWrappers::OCTopoDS_Shape^ K) ;


 /*instead*/  Standard_Address ChangeFromKey(OCNaroWrappers::OCTopoDS_Shape^ K) ;


 /*instead*/  Standard_Address FindFromKey1(OCNaroWrappers::OCTopoDS_Shape^ K) ;


 /*instead*/  Standard_Address ChangeFromKey1(OCNaroWrappers::OCTopoDS_Shape^ K) ;

~OCTopTools_IndexedDataMapOfShapeAddress()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif

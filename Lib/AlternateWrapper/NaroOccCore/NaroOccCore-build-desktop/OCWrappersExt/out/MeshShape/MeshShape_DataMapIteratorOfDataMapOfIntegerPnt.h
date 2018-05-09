// File generated by CPPExt (MPV)
//
#ifndef _MeshShape_DataMapIteratorOfDataMapOfIntegerPnt_OCWrappers_HeaderFile
#define _MeshShape_DataMapIteratorOfDataMapOfIntegerPnt_OCWrappers_HeaderFile

// include native header
#include <MeshShape_DataMapIteratorOfDataMapOfIntegerPnt.hxx>
#include "../Converter.h"

#include "../TCollection/TCollection_BasicMapIterator.h"

#include "../TCollection/TCollection_BasicMapIterator.h"


namespace OCNaroWrappers
{

ref class OCgp_Pnt;
ref class OCTColStd_MapIntegerHasher;
ref class OCMeshShape_DataMapOfIntegerPnt;
ref class OCMeshShape_DataMapNodeOfDataMapOfIntegerPnt;



public ref class OCMeshShape_DataMapIteratorOfDataMapOfIntegerPnt  : public OCTCollection_BasicMapIterator {

protected:
  // dummy constructor;
  OCMeshShape_DataMapIteratorOfDataMapOfIntegerPnt(OCDummy^) : OCTCollection_BasicMapIterator((OCDummy^)nullptr) {};

public:

// constructor from native
OCMeshShape_DataMapIteratorOfDataMapOfIntegerPnt(MeshShape_DataMapIteratorOfDataMapOfIntegerPnt* nativeHandle);

// Methods PUBLIC


OCMeshShape_DataMapIteratorOfDataMapOfIntegerPnt();


OCMeshShape_DataMapIteratorOfDataMapOfIntegerPnt(OCNaroWrappers::OCMeshShape_DataMapOfIntegerPnt^ aMap);


 /*instead*/  void Initialize(OCNaroWrappers::OCMeshShape_DataMapOfIntegerPnt^ aMap) ;


 /*instead*/  Standard_Integer Key() ;


 /*instead*/  OCgp_Pnt^ Value() ;

~OCMeshShape_DataMapIteratorOfDataMapOfIntegerPnt()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif

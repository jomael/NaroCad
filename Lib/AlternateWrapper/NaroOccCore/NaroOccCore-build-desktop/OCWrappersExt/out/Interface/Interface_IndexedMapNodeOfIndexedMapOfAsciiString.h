// File generated by CPPExt (Transient)
//
#ifndef _Interface_IndexedMapNodeOfIndexedMapOfAsciiString_OCWrappers_HeaderFile
#define _Interface_IndexedMapNodeOfIndexedMapOfAsciiString_OCWrappers_HeaderFile

// include the wrapped class
#include <Interface_IndexedMapNodeOfIndexedMapOfAsciiString.hxx>
#include "../Converter.h"

#include "../TCollection/TCollection_MapNode.h"

#include "../TCollection/TCollection_AsciiString.h"


namespace OCNaroWrappers
{

ref class OCTCollection_AsciiString;
ref class OCInterface_MapAsciiStringHasher;
ref class OCInterface_IndexedMapOfAsciiString;



public ref class OCInterface_IndexedMapNodeOfIndexedMapOfAsciiString : OCTCollection_MapNode {

protected:
  // dummy constructor;
  OCInterface_IndexedMapNodeOfIndexedMapOfAsciiString(OCDummy^) : OCTCollection_MapNode((OCDummy^)nullptr) {};

public:

// constructor from native
OCInterface_IndexedMapNodeOfIndexedMapOfAsciiString(Handle(Interface_IndexedMapNodeOfIndexedMapOfAsciiString)* nativeHandle);

// Methods PUBLIC


OCInterface_IndexedMapNodeOfIndexedMapOfAsciiString(OCNaroWrappers::OCTCollection_AsciiString^ K1, Standard_Integer K2, TCollection_MapNodePtr n1, TCollection_MapNodePtr n2);


 /*instead*/  OCTCollection_AsciiString^ Key1() ;


 /*instead*/  Standard_Integer Key2() ;


 /*instead*/  TCollection_MapNodePtr& Next2() ;

~OCInterface_IndexedMapNodeOfIndexedMapOfAsciiString()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
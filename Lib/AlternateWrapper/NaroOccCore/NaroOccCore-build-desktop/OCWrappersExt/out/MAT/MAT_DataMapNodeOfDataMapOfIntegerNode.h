// File generated by CPPExt (Transient)
//
#ifndef _MAT_DataMapNodeOfDataMapOfIntegerNode_OCWrappers_HeaderFile
#define _MAT_DataMapNodeOfDataMapOfIntegerNode_OCWrappers_HeaderFile

// include the wrapped class
#include <MAT_DataMapNodeOfDataMapOfIntegerNode.hxx>
#include "../Converter.h"

#include "../TCollection/TCollection_MapNode.h"



namespace OCNaroWrappers
{

ref class OCMAT_Node;
ref class OCTColStd_MapIntegerHasher;
ref class OCMAT_DataMapOfIntegerNode;
ref class OCMAT_DataMapIteratorOfDataMapOfIntegerNode;



public ref class OCMAT_DataMapNodeOfDataMapOfIntegerNode : OCTCollection_MapNode {

protected:
  // dummy constructor;
  OCMAT_DataMapNodeOfDataMapOfIntegerNode(OCDummy^) : OCTCollection_MapNode((OCDummy^)nullptr) {};

public:

// constructor from native
OCMAT_DataMapNodeOfDataMapOfIntegerNode(Handle(MAT_DataMapNodeOfDataMapOfIntegerNode)* nativeHandle);

// Methods PUBLIC


OCMAT_DataMapNodeOfDataMapOfIntegerNode(Standard_Integer K, OCNaroWrappers::OCMAT_Node^ I, TCollection_MapNodePtr n);


 /*instead*/  Standard_Integer Key() ;


 /*instead*/  OCMAT_Node^ Value() ;

~OCMAT_DataMapNodeOfDataMapOfIntegerNode()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif

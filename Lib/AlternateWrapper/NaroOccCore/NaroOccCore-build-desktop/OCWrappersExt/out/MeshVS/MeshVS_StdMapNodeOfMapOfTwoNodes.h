// File generated by CPPExt (Transient)
//
#ifndef _MeshVS_StdMapNodeOfMapOfTwoNodes_OCWrappers_HeaderFile
#define _MeshVS_StdMapNodeOfMapOfTwoNodes_OCWrappers_HeaderFile

// include the wrapped class
#include <MeshVS_StdMapNodeOfMapOfTwoNodes.hxx>
#include "../Converter.h"

#include "../TCollection/TCollection_MapNode.h"



namespace OCNaroWrappers
{

ref class OCMeshVS_TwoNodesHasher;
ref class OCMeshVS_MapOfTwoNodes;
ref class OCMeshVS_MapIteratorOfMapOfTwoNodes;



public ref class OCMeshVS_StdMapNodeOfMapOfTwoNodes : OCTCollection_MapNode {

protected:
  // dummy constructor;
  OCMeshVS_StdMapNodeOfMapOfTwoNodes(OCDummy^) : OCTCollection_MapNode((OCDummy^)nullptr) {};

public:

// constructor from native
OCMeshVS_StdMapNodeOfMapOfTwoNodes(Handle(MeshVS_StdMapNodeOfMapOfTwoNodes)* nativeHandle);

// Methods PUBLIC


OCMeshVS_StdMapNodeOfMapOfTwoNodes(MeshVS_TwoNodes K, TCollection_MapNodePtr n);


 /*instead*/  MeshVS_TwoNodes& Key() ;

~OCMeshVS_StdMapNodeOfMapOfTwoNodes()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif

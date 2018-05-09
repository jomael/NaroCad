// File generated by CPPExt (Transient)
//
#ifndef _BRepMesh_DataMapNodeOfDataMapOfFaceAttribute_OCWrappers_HeaderFile
#define _BRepMesh_DataMapNodeOfDataMapOfFaceAttribute_OCWrappers_HeaderFile

// include the wrapped class
#include <BRepMesh_DataMapNodeOfDataMapOfFaceAttribute.hxx>
#include "../Converter.h"

#include "../TCollection/TCollection_MapNode.h"

#include "../TopoDS/TopoDS_Face.h"


namespace OCNaroWrappers
{

ref class OCBRepMesh_FaceAttribute;
ref class OCTopoDS_Face;
ref class OCTopTools_ShapeMapHasher;
ref class OCBRepMesh_DataMapOfFaceAttribute;
ref class OCBRepMesh_DataMapIteratorOfDataMapOfFaceAttribute;



public ref class OCBRepMesh_DataMapNodeOfDataMapOfFaceAttribute : OCTCollection_MapNode {

protected:
  // dummy constructor;
  OCBRepMesh_DataMapNodeOfDataMapOfFaceAttribute(OCDummy^) : OCTCollection_MapNode((OCDummy^)nullptr) {};

public:

// constructor from native
OCBRepMesh_DataMapNodeOfDataMapOfFaceAttribute(Handle(BRepMesh_DataMapNodeOfDataMapOfFaceAttribute)* nativeHandle);

// Methods PUBLIC


OCBRepMesh_DataMapNodeOfDataMapOfFaceAttribute(OCNaroWrappers::OCTopoDS_Face^ K, OCNaroWrappers::OCBRepMesh_FaceAttribute^ I, TCollection_MapNodePtr n);


 /*instead*/  OCTopoDS_Face^ Key() ;


 /*instead*/  OCBRepMesh_FaceAttribute^ Value() ;

~OCBRepMesh_DataMapNodeOfDataMapOfFaceAttribute()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif

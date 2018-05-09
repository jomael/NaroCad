// File generated by CPPExt (Transient)
//
#ifndef _MoniTool_DataMapNodeOfDataMapOfShapeTransient_OCWrappers_HeaderFile
#define _MoniTool_DataMapNodeOfDataMapOfShapeTransient_OCWrappers_HeaderFile

// include the wrapped class
#include <MoniTool_DataMapNodeOfDataMapOfShapeTransient.hxx>
#include "../Converter.h"

#include "../TCollection/TCollection_MapNode.h"

#include "../TopoDS/TopoDS_Shape.h"


namespace OCNaroWrappers
{

ref class OCStandard_Transient;
ref class OCTopoDS_Shape;
ref class OCTopTools_ShapeMapHasher;
ref class OCMoniTool_DataMapOfShapeTransient;
ref class OCMoniTool_DataMapIteratorOfDataMapOfShapeTransient;



public ref class OCMoniTool_DataMapNodeOfDataMapOfShapeTransient : OCTCollection_MapNode {

protected:
  // dummy constructor;
  OCMoniTool_DataMapNodeOfDataMapOfShapeTransient(OCDummy^) : OCTCollection_MapNode((OCDummy^)nullptr) {};

public:

// constructor from native
OCMoniTool_DataMapNodeOfDataMapOfShapeTransient(Handle(MoniTool_DataMapNodeOfDataMapOfShapeTransient)* nativeHandle);

// Methods PUBLIC


OCMoniTool_DataMapNodeOfDataMapOfShapeTransient(OCNaroWrappers::OCTopoDS_Shape^ K, OCNaroWrappers::OCStandard_Transient^ I, TCollection_MapNodePtr n);


 /*instead*/  OCTopoDS_Shape^ Key() ;


 /*instead*/  OCStandard_Transient^ Value() ;

~OCMoniTool_DataMapNodeOfDataMapOfShapeTransient()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif

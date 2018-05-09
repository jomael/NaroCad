// File generated by CPPExt (MPV)
//
#ifndef _BRepFill_DataMapIteratorOfDataMapOfNodeShape_OCWrappers_HeaderFile
#define _BRepFill_DataMapIteratorOfDataMapOfNodeShape_OCWrappers_HeaderFile

// include native header
#include <BRepFill_DataMapIteratorOfDataMapOfNodeShape.hxx>
#include "../Converter.h"

#include "../TCollection/TCollection_BasicMapIterator.h"

#include "../TCollection/TCollection_BasicMapIterator.h"


namespace OCNaroWrappers
{

ref class OCMAT_Node;
ref class OCTopoDS_Shape;
ref class OCTColStd_MapTransientHasher;
ref class OCBRepFill_DataMapOfNodeShape;
ref class OCBRepFill_DataMapNodeOfDataMapOfNodeShape;



public ref class OCBRepFill_DataMapIteratorOfDataMapOfNodeShape  : public OCTCollection_BasicMapIterator {

protected:
  // dummy constructor;
  OCBRepFill_DataMapIteratorOfDataMapOfNodeShape(OCDummy^) : OCTCollection_BasicMapIterator((OCDummy^)nullptr) {};

public:

// constructor from native
OCBRepFill_DataMapIteratorOfDataMapOfNodeShape(BRepFill_DataMapIteratorOfDataMapOfNodeShape* nativeHandle);

// Methods PUBLIC


OCBRepFill_DataMapIteratorOfDataMapOfNodeShape();


OCBRepFill_DataMapIteratorOfDataMapOfNodeShape(OCNaroWrappers::OCBRepFill_DataMapOfNodeShape^ aMap);


 /*instead*/  void Initialize(OCNaroWrappers::OCBRepFill_DataMapOfNodeShape^ aMap) ;


 /*instead*/  OCMAT_Node^ Key() ;


 /*instead*/  OCTopoDS_Shape^ Value() ;

~OCBRepFill_DataMapIteratorOfDataMapOfNodeShape()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif

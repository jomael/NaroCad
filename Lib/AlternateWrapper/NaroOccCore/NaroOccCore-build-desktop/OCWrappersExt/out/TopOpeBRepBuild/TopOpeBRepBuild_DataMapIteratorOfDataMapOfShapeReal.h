// File generated by CPPExt (MPV)
//
#ifndef _TopOpeBRepBuild_DataMapIteratorOfDataMapOfShapeReal_OCWrappers_HeaderFile
#define _TopOpeBRepBuild_DataMapIteratorOfDataMapOfShapeReal_OCWrappers_HeaderFile

// include native header
#include <TopOpeBRepBuild_DataMapIteratorOfDataMapOfShapeReal.hxx>
#include "../Converter.h"

#include "../TCollection/TCollection_BasicMapIterator.h"

#include "../TCollection/TCollection_BasicMapIterator.h"


namespace OCNaroWrappers
{

ref class OCTopoDS_Shape;
ref class OCTopTools_ShapeMapHasher;
ref class OCTopOpeBRepBuild_DataMapOfShapeReal;
ref class OCTopOpeBRepBuild_DataMapNodeOfDataMapOfShapeReal;



public ref class OCTopOpeBRepBuild_DataMapIteratorOfDataMapOfShapeReal  : public OCTCollection_BasicMapIterator {

protected:
  // dummy constructor;
  OCTopOpeBRepBuild_DataMapIteratorOfDataMapOfShapeReal(OCDummy^) : OCTCollection_BasicMapIterator((OCDummy^)nullptr) {};

public:

// constructor from native
OCTopOpeBRepBuild_DataMapIteratorOfDataMapOfShapeReal(TopOpeBRepBuild_DataMapIteratorOfDataMapOfShapeReal* nativeHandle);

// Methods PUBLIC


OCTopOpeBRepBuild_DataMapIteratorOfDataMapOfShapeReal();


OCTopOpeBRepBuild_DataMapIteratorOfDataMapOfShapeReal(OCNaroWrappers::OCTopOpeBRepBuild_DataMapOfShapeReal^ aMap);


 /*instead*/  void Initialize(OCNaroWrappers::OCTopOpeBRepBuild_DataMapOfShapeReal^ aMap) ;


 /*instead*/  OCTopoDS_Shape^ Key() ;


 /*instead*/  Standard_Real Value() ;

~OCTopOpeBRepBuild_DataMapIteratorOfDataMapOfShapeReal()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif

// File generated by CPPExt (Transient)
//
#ifndef _IntSurf_ListNodeOfListOfPntOn2S_OCWrappers_HeaderFile
#define _IntSurf_ListNodeOfListOfPntOn2S_OCWrappers_HeaderFile

// include the wrapped class
#include <IntSurf_ListNodeOfListOfPntOn2S.hxx>
#include "../Converter.h"

#include "../TCollection/TCollection_MapNode.h"

#include "IntSurf_PntOn2S.h"


namespace OCNaroWrappers
{

ref class OCIntSurf_PntOn2S;
ref class OCIntSurf_ListOfPntOn2S;
ref class OCIntSurf_ListIteratorOfListOfPntOn2S;



public ref class OCIntSurf_ListNodeOfListOfPntOn2S : OCTCollection_MapNode {

protected:
  // dummy constructor;
  OCIntSurf_ListNodeOfListOfPntOn2S(OCDummy^) : OCTCollection_MapNode((OCDummy^)nullptr) {};

public:

// constructor from native
OCIntSurf_ListNodeOfListOfPntOn2S(Handle(IntSurf_ListNodeOfListOfPntOn2S)* nativeHandle);

// Methods PUBLIC


OCIntSurf_ListNodeOfListOfPntOn2S(OCNaroWrappers::OCIntSurf_PntOn2S^ I, TCollection_MapNodePtr n);


 /*instead*/  OCIntSurf_PntOn2S^ Value() ;

~OCIntSurf_ListNodeOfListOfPntOn2S()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif

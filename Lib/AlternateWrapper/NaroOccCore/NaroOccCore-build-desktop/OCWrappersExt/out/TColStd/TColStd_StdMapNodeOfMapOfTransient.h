// File generated by CPPExt (Transient)
//
#ifndef _TColStd_StdMapNodeOfMapOfTransient_OCWrappers_HeaderFile
#define _TColStd_StdMapNodeOfMapOfTransient_OCWrappers_HeaderFile

// include the wrapped class
#include <TColStd_StdMapNodeOfMapOfTransient.hxx>
#include "../Converter.h"

#include "../TCollection/TCollection_MapNode.h"



namespace OCNaroWrappers
{

ref class OCStandard_Transient;
ref class OCTColStd_MapTransientHasher;
ref class OCTColStd_MapOfTransient;
ref class OCTColStd_MapIteratorOfMapOfTransient;



public ref class OCTColStd_StdMapNodeOfMapOfTransient : OCTCollection_MapNode {

protected:
  // dummy constructor;
  OCTColStd_StdMapNodeOfMapOfTransient(OCDummy^) : OCTCollection_MapNode((OCDummy^)nullptr) {};

public:

// constructor from native
OCTColStd_StdMapNodeOfMapOfTransient(Handle(TColStd_StdMapNodeOfMapOfTransient)* nativeHandle);

// Methods PUBLIC


OCTColStd_StdMapNodeOfMapOfTransient(OCNaroWrappers::OCStandard_Transient^ K, TCollection_MapNodePtr n);


 /*instead*/  OCStandard_Transient^ Key() ;

~OCTColStd_StdMapNodeOfMapOfTransient()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif

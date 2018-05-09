// File generated by CPPExt (Transient)
//
#ifndef _TColStd_ListNodeOfSetListOfSetOfReal_OCWrappers_HeaderFile
#define _TColStd_ListNodeOfSetListOfSetOfReal_OCWrappers_HeaderFile

// include the wrapped class
#include <TColStd_ListNodeOfSetListOfSetOfReal.hxx>
#include "../Converter.h"

#include "../TCollection/TCollection_MapNode.h"



namespace OCNaroWrappers
{

ref class OCTColStd_SetListOfSetOfReal;
ref class OCTColStd_ListIteratorOfSetListOfSetOfReal;



public ref class OCTColStd_ListNodeOfSetListOfSetOfReal : OCTCollection_MapNode {

protected:
  // dummy constructor;
  OCTColStd_ListNodeOfSetListOfSetOfReal(OCDummy^) : OCTCollection_MapNode((OCDummy^)nullptr) {};

public:

// constructor from native
OCTColStd_ListNodeOfSetListOfSetOfReal(Handle(TColStd_ListNodeOfSetListOfSetOfReal)* nativeHandle);

// Methods PUBLIC


OCTColStd_ListNodeOfSetListOfSetOfReal(Standard_Real I, TCollection_MapNodePtr n);


 /*instead*/  Standard_Real Value() ;

~OCTColStd_ListNodeOfSetListOfSetOfReal()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif

// File generated by CPPExt (Transient)
//
#ifndef _TColGeom_SequenceNodeOfSequenceOfBoundedSurface_OCWrappers_HeaderFile
#define _TColGeom_SequenceNodeOfSequenceOfBoundedSurface_OCWrappers_HeaderFile

// include the wrapped class
#include <TColGeom_SequenceNodeOfSequenceOfBoundedSurface.hxx>
#include "../Converter.h"

#include "../TCollection/TCollection_SeqNode.h"



namespace OCNaroWrappers
{

ref class OCGeom_BoundedSurface;
ref class OCTColGeom_SequenceOfBoundedSurface;



public ref class OCTColGeom_SequenceNodeOfSequenceOfBoundedSurface : OCTCollection_SeqNode {

protected:
  // dummy constructor;
  OCTColGeom_SequenceNodeOfSequenceOfBoundedSurface(OCDummy^) : OCTCollection_SeqNode((OCDummy^)nullptr) {};

public:

// constructor from native
OCTColGeom_SequenceNodeOfSequenceOfBoundedSurface(Handle(TColGeom_SequenceNodeOfSequenceOfBoundedSurface)* nativeHandle);

// Methods PUBLIC


OCTColGeom_SequenceNodeOfSequenceOfBoundedSurface(OCNaroWrappers::OCGeom_BoundedSurface^ I, TCollection_SeqNodePtr n, TCollection_SeqNodePtr p);


 /*instead*/  OCGeom_BoundedSurface^ Value() ;

~OCTColGeom_SequenceNodeOfSequenceOfBoundedSurface()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif

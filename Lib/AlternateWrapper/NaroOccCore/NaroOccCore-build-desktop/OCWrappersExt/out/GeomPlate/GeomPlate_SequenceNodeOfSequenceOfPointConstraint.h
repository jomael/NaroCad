// File generated by CPPExt (Transient)
//
#ifndef _GeomPlate_SequenceNodeOfSequenceOfPointConstraint_OCWrappers_HeaderFile
#define _GeomPlate_SequenceNodeOfSequenceOfPointConstraint_OCWrappers_HeaderFile

// include the wrapped class
#include <GeomPlate_SequenceNodeOfSequenceOfPointConstraint.hxx>
#include "../Converter.h"

#include "../TCollection/TCollection_SeqNode.h"



namespace OCNaroWrappers
{

ref class OCGeomPlate_PointConstraint;
ref class OCGeomPlate_SequenceOfPointConstraint;



public ref class OCGeomPlate_SequenceNodeOfSequenceOfPointConstraint : OCTCollection_SeqNode {

protected:
  // dummy constructor;
  OCGeomPlate_SequenceNodeOfSequenceOfPointConstraint(OCDummy^) : OCTCollection_SeqNode((OCDummy^)nullptr) {};

public:

// constructor from native
OCGeomPlate_SequenceNodeOfSequenceOfPointConstraint(Handle(GeomPlate_SequenceNodeOfSequenceOfPointConstraint)* nativeHandle);

// Methods PUBLIC


OCGeomPlate_SequenceNodeOfSequenceOfPointConstraint(OCNaroWrappers::OCGeomPlate_PointConstraint^ I, TCollection_SeqNodePtr n, TCollection_SeqNodePtr p);


 /*instead*/  OCGeomPlate_PointConstraint^ Value() ;

~OCGeomPlate_SequenceNodeOfSequenceOfPointConstraint()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif

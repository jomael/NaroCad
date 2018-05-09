// File generated by CPPExt (MPV)
//
#ifndef _IntPatch_SequenceOfIWLineOfTheIWalkingOfTheIPIntOfIntersection_OCWrappers_HeaderFile
#define _IntPatch_SequenceOfIWLineOfTheIWalkingOfTheIPIntOfIntersection_OCWrappers_HeaderFile

// include native header
#include <IntPatch_SequenceOfIWLineOfTheIWalkingOfTheIPIntOfIntersection.hxx>
#include "../Converter.h"

#include "../TCollection/TCollection_BaseSequence.h"

#include "../TCollection/TCollection_BaseSequence.h"


namespace OCNaroWrappers
{

ref class OCIntPatch_TheIWLineOfTheIWalkingOfTheIPIntOfIntersection;
ref class OCIntPatch_SequenceNodeOfSequenceOfIWLineOfTheIWalkingOfTheIPIntOfIntersection;



public ref class OCIntPatch_SequenceOfIWLineOfTheIWalkingOfTheIPIntOfIntersection  : public OCTCollection_BaseSequence {

protected:
  // dummy constructor;
  OCIntPatch_SequenceOfIWLineOfTheIWalkingOfTheIPIntOfIntersection(OCDummy^) : OCTCollection_BaseSequence((OCDummy^)nullptr) {};

public:

// constructor from native
OCIntPatch_SequenceOfIWLineOfTheIWalkingOfTheIPIntOfIntersection(IntPatch_SequenceOfIWLineOfTheIWalkingOfTheIPIntOfIntersection* nativeHandle);

// Methods PUBLIC


OCIntPatch_SequenceOfIWLineOfTheIWalkingOfTheIPIntOfIntersection();


 /*instead*/  OCIntPatch_SequenceOfIWLineOfTheIWalkingOfTheIPIntOfIntersection^ Assign(OCNaroWrappers::OCIntPatch_SequenceOfIWLineOfTheIWalkingOfTheIPIntOfIntersection^ Other) ;


 /*instead*/  void Append(OCNaroWrappers::OCIntPatch_TheIWLineOfTheIWalkingOfTheIPIntOfIntersection^ T) ;


 /*instead*/  void Append(OCNaroWrappers::OCIntPatch_SequenceOfIWLineOfTheIWalkingOfTheIPIntOfIntersection^ S) ;


 /*instead*/  void Prepend(OCNaroWrappers::OCIntPatch_TheIWLineOfTheIWalkingOfTheIPIntOfIntersection^ T) ;


 /*instead*/  void Prepend(OCNaroWrappers::OCIntPatch_SequenceOfIWLineOfTheIWalkingOfTheIPIntOfIntersection^ S) ;


 /*instead*/  void InsertBefore(Standard_Integer Index, OCNaroWrappers::OCIntPatch_TheIWLineOfTheIWalkingOfTheIPIntOfIntersection^ T) ;


 /*instead*/  void InsertBefore(Standard_Integer Index, OCNaroWrappers::OCIntPatch_SequenceOfIWLineOfTheIWalkingOfTheIPIntOfIntersection^ S) ;


 /*instead*/  void InsertAfter(Standard_Integer Index, OCNaroWrappers::OCIntPatch_TheIWLineOfTheIWalkingOfTheIPIntOfIntersection^ T) ;


 /*instead*/  void InsertAfter(Standard_Integer Index, OCNaroWrappers::OCIntPatch_SequenceOfIWLineOfTheIWalkingOfTheIPIntOfIntersection^ S) ;


 /*instead*/  OCIntPatch_TheIWLineOfTheIWalkingOfTheIPIntOfIntersection^ First() ;


 /*instead*/  OCIntPatch_TheIWLineOfTheIWalkingOfTheIPIntOfIntersection^ Last() ;


 /*instead*/  void Split(Standard_Integer Index, OCNaroWrappers::OCIntPatch_SequenceOfIWLineOfTheIWalkingOfTheIPIntOfIntersection^ Sub) ;


 /*instead*/  OCIntPatch_TheIWLineOfTheIWalkingOfTheIPIntOfIntersection^ Value(Standard_Integer Index) ;


 /*instead*/  void SetValue(Standard_Integer Index, OCNaroWrappers::OCIntPatch_TheIWLineOfTheIWalkingOfTheIPIntOfIntersection^ I) ;


 /*instead*/  OCIntPatch_TheIWLineOfTheIWalkingOfTheIPIntOfIntersection^ ChangeValue(Standard_Integer Index) ;


 /*instead*/  void Remove(Standard_Integer Index) ;


 /*instead*/  void Remove(Standard_Integer FromIndex, Standard_Integer ToIndex) ;

~OCIntPatch_SequenceOfIWLineOfTheIWalkingOfTheIPIntOfIntersection()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif

// File generated by CPPExt (Transient)
//
#ifndef _TDF_SequenceNodeOfLabelSequence_OCWrappers_HeaderFile
#define _TDF_SequenceNodeOfLabelSequence_OCWrappers_HeaderFile

// include the wrapped class
#include <TDF_SequenceNodeOfLabelSequence.hxx>
#include "../Converter.h"

#include "../TCollection/TCollection_SeqNode.h"

#include "TDF_Label.h"


namespace OCNaroWrappers
{

ref class OCTDF_Label;
ref class OCTDF_LabelSequence;



public ref class OCTDF_SequenceNodeOfLabelSequence : OCTCollection_SeqNode {

protected:
  // dummy constructor;
  OCTDF_SequenceNodeOfLabelSequence(OCDummy^) : OCTCollection_SeqNode((OCDummy^)nullptr) {};

public:

// constructor from native
OCTDF_SequenceNodeOfLabelSequence(Handle(TDF_SequenceNodeOfLabelSequence)* nativeHandle);

// Methods PUBLIC


OCTDF_SequenceNodeOfLabelSequence(OCNaroWrappers::OCTDF_Label^ I, TCollection_SeqNodePtr n, TCollection_SeqNodePtr p);


 /*instead*/  OCTDF_Label^ Value() ;

~OCTDF_SequenceNodeOfLabelSequence()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
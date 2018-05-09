// File generated by CPPExt (Transient)
//
#ifndef _StepVisual_AnnotationTextOccurrence_OCWrappers_HeaderFile
#define _StepVisual_AnnotationTextOccurrence_OCWrappers_HeaderFile

// include the wrapped class
#include <StepVisual_AnnotationTextOccurrence.hxx>
#include "../Converter.h"

#include "StepVisual_AnnotationOccurrence.h"



namespace OCNaroWrappers
{




public ref class OCStepVisual_AnnotationTextOccurrence : OCStepVisual_AnnotationOccurrence {

protected:
  // dummy constructor;
  OCStepVisual_AnnotationTextOccurrence(OCDummy^) : OCStepVisual_AnnotationOccurrence((OCDummy^)nullptr) {};

public:

// constructor from native
OCStepVisual_AnnotationTextOccurrence(Handle(StepVisual_AnnotationTextOccurrence)* nativeHandle);

// Methods PUBLIC

//! Returns a AnnotationTextOccurrence <br>
OCStepVisual_AnnotationTextOccurrence();

~OCStepVisual_AnnotationTextOccurrence()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif

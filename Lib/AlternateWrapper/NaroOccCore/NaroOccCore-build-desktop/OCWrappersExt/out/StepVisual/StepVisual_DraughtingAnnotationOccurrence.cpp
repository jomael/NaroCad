// File generated by CPPExt (CPP file)
//

#include "StepVisual_DraughtingAnnotationOccurrence.h"
#include "../Converter.h"


using namespace OCNaroWrappers;

OCStepVisual_DraughtingAnnotationOccurrence::OCStepVisual_DraughtingAnnotationOccurrence(Handle(StepVisual_DraughtingAnnotationOccurrence)* nativeHandle) : OCStepVisual_AnnotationOccurrence((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_StepVisual_DraughtingAnnotationOccurrence(*nativeHandle);
}

OCStepVisual_DraughtingAnnotationOccurrence::OCStepVisual_DraughtingAnnotationOccurrence() : OCStepVisual_AnnotationOccurrence((OCDummy^)nullptr)

{
  nativeHandle = new Handle_StepVisual_DraughtingAnnotationOccurrence(new StepVisual_DraughtingAnnotationOccurrence());
}



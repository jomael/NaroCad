// File generated by CPPExt (CPP file)
//

#include "StepGeom_Surface.h"
#include "../Converter.h"


using namespace OCNaroWrappers;

OCStepGeom_Surface::OCStepGeom_Surface(StepGeom_Surface* nativeHandle) : OCStepGeom_GeometricRepresentationItem((OCDummy^)nullptr)

{
  this->nativeHandle = nativeHandle;
}

OCStepGeom_Surface::OCStepGeom_Surface() : OCStepGeom_GeometricRepresentationItem((OCDummy^)nullptr)

{
  nativeHandle = new StepGeom_Surface();
}



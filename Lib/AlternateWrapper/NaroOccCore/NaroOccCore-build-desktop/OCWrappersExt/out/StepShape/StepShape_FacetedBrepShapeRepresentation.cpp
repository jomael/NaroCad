// File generated by CPPExt (CPP file)
//

#include "StepShape_FacetedBrepShapeRepresentation.h"
#include "../Converter.h"


using namespace OCNaroWrappers;

OCStepShape_FacetedBrepShapeRepresentation::OCStepShape_FacetedBrepShapeRepresentation(StepShape_FacetedBrepShapeRepresentation* nativeHandle) : OCStepShape_ShapeRepresentation((OCDummy^)nullptr)

{
  this->nativeHandle = nativeHandle;
}

OCStepShape_FacetedBrepShapeRepresentation::OCStepShape_FacetedBrepShapeRepresentation() : OCStepShape_ShapeRepresentation((OCDummy^)nullptr)

{
  nativeHandle = new StepShape_FacetedBrepShapeRepresentation();
}



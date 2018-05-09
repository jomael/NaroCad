// File generated by CPPExt (CPP file)
//

#include "StepGeom_DegeneratePcurve.h"
#include "../Converter.h"
#include "../StepRepr/StepRepr_DefinitionalRepresentation.h"
#include "../TCollection/TCollection_HAsciiString.h"
#include "StepGeom_Surface.h"


using namespace OCNaroWrappers;

OCStepGeom_DegeneratePcurve::OCStepGeom_DegeneratePcurve(StepGeom_DegeneratePcurve* nativeHandle) : OCStepGeom_Point((OCDummy^)nullptr)

{
  this->nativeHandle = nativeHandle;
}

OCStepGeom_DegeneratePcurve::OCStepGeom_DegeneratePcurve() : OCStepGeom_Point((OCDummy^)nullptr)

{
  nativeHandle = new StepGeom_DegeneratePcurve();
}

 void OCStepGeom_DegeneratePcurve::Init(OCNaroWrappers::OCTCollection_HAsciiString^ aName)
{
  ((StepGeom_DegeneratePcurve*)nativeHandle)->Init(*((Handle_TCollection_HAsciiString*)aName->Handle));
}

 void OCStepGeom_DegeneratePcurve::Init(OCNaroWrappers::OCTCollection_HAsciiString^ aName, OCNaroWrappers::OCStepGeom_Surface^ aBasisSurface, OCNaroWrappers::OCStepRepr_DefinitionalRepresentation^ aReferenceToCurve)
{
  ((StepGeom_DegeneratePcurve*)nativeHandle)->Init(*((Handle_TCollection_HAsciiString*)aName->Handle), *((StepGeom_Surface*)aBasisSurface->Handle), *((Handle_StepRepr_DefinitionalRepresentation*)aReferenceToCurve->Handle));
}

 void OCStepGeom_DegeneratePcurve::SetBasisSurface(OCNaroWrappers::OCStepGeom_Surface^ aBasisSurface)
{
  ((StepGeom_DegeneratePcurve*)nativeHandle)->SetBasisSurface(*((StepGeom_Surface*)aBasisSurface->Handle));
}

OCStepGeom_Surface^ OCStepGeom_DegeneratePcurve::BasisSurface()
{
  StepGeom_Surface* tmp = new StepGeom_Surface();
  *tmp = ((StepGeom_DegeneratePcurve*)nativeHandle)->BasisSurface();
  return gcnew OCStepGeom_Surface(tmp);
}

 void OCStepGeom_DegeneratePcurve::SetReferenceToCurve(OCNaroWrappers::OCStepRepr_DefinitionalRepresentation^ aReferenceToCurve)
{
  ((StepGeom_DegeneratePcurve*)nativeHandle)->SetReferenceToCurve(*((Handle_StepRepr_DefinitionalRepresentation*)aReferenceToCurve->Handle));
}

OCStepRepr_DefinitionalRepresentation^ OCStepGeom_DegeneratePcurve::ReferenceToCurve()
{
  Handle(StepRepr_DefinitionalRepresentation) tmp = ((StepGeom_DegeneratePcurve*)nativeHandle)->ReferenceToCurve();
  return gcnew OCStepRepr_DefinitionalRepresentation(&tmp);
}



// File generated by CPPExt (CPP file)
//

#include "StepVisual_FontSelect.h"
#include "../Converter.h"
#include "../Standard/Standard_Transient.h"
#include "StepVisual_PreDefinedTextFont.h"
#include "StepVisual_ExternallyDefinedTextFont.h"


using namespace OCNaroWrappers;

OCStepVisual_FontSelect::OCStepVisual_FontSelect(StepVisual_FontSelect* nativeHandle) : OCStepData_SelectType((OCDummy^)nullptr)

{
  this->nativeHandle = nativeHandle;
}

OCStepVisual_FontSelect::OCStepVisual_FontSelect() : OCStepData_SelectType((OCDummy^)nullptr)

{
  nativeHandle = new StepVisual_FontSelect();
}

 Standard_Integer OCStepVisual_FontSelect::CaseNum(OCNaroWrappers::OCStandard_Transient^ ent)
{
  return ((StepVisual_FontSelect*)nativeHandle)->CaseNum(*((Handle_Standard_Transient*)ent->Handle));
}

OCStepVisual_PreDefinedTextFont^ OCStepVisual_FontSelect::PreDefinedTextFont()
{
  Handle(StepVisual_PreDefinedTextFont) tmp = ((StepVisual_FontSelect*)nativeHandle)->PreDefinedTextFont();
  return gcnew OCStepVisual_PreDefinedTextFont(&tmp);
}

OCStepVisual_ExternallyDefinedTextFont^ OCStepVisual_FontSelect::ExternallyDefinedTextFont()
{
  Handle(StepVisual_ExternallyDefinedTextFont) tmp = ((StepVisual_FontSelect*)nativeHandle)->ExternallyDefinedTextFont();
  return gcnew OCStepVisual_ExternallyDefinedTextFont(&tmp);
}



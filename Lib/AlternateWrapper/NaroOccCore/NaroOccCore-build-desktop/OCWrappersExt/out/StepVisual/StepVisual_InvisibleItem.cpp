// File generated by CPPExt (CPP file)
//

#include "StepVisual_InvisibleItem.h"
#include "../Converter.h"
#include "../Standard/Standard_Transient.h"
#include "StepVisual_StyledItem.h"
#include "StepVisual_PresentationLayerAssignment.h"
#include "StepVisual_PresentationRepresentation.h"


using namespace OCNaroWrappers;

OCStepVisual_InvisibleItem::OCStepVisual_InvisibleItem(StepVisual_InvisibleItem* nativeHandle) : OCStepData_SelectType((OCDummy^)nullptr)

{
  this->nativeHandle = nativeHandle;
}

OCStepVisual_InvisibleItem::OCStepVisual_InvisibleItem() : OCStepData_SelectType((OCDummy^)nullptr)

{
  nativeHandle = new StepVisual_InvisibleItem();
}

 Standard_Integer OCStepVisual_InvisibleItem::CaseNum(OCNaroWrappers::OCStandard_Transient^ ent)
{
  return ((StepVisual_InvisibleItem*)nativeHandle)->CaseNum(*((Handle_Standard_Transient*)ent->Handle));
}

OCStepVisual_StyledItem^ OCStepVisual_InvisibleItem::StyledItem()
{
  Handle(StepVisual_StyledItem) tmp = ((StepVisual_InvisibleItem*)nativeHandle)->StyledItem();
  return gcnew OCStepVisual_StyledItem(&tmp);
}

OCStepVisual_PresentationLayerAssignment^ OCStepVisual_InvisibleItem::PresentationLayerAssignment()
{
  Handle(StepVisual_PresentationLayerAssignment) tmp = ((StepVisual_InvisibleItem*)nativeHandle)->PresentationLayerAssignment();
  return gcnew OCStepVisual_PresentationLayerAssignment(&tmp);
}

OCStepVisual_PresentationRepresentation^ OCStepVisual_InvisibleItem::PresentationRepresentation()
{
  Handle(StepVisual_PresentationRepresentation) tmp = ((StepVisual_InvisibleItem*)nativeHandle)->PresentationRepresentation();
  return gcnew OCStepVisual_PresentationRepresentation(&tmp);
}



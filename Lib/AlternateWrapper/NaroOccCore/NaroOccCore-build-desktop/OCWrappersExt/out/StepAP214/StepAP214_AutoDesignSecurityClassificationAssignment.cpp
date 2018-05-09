// File generated by CPPExt (CPP file)
//

#include "StepAP214_AutoDesignSecurityClassificationAssignment.h"
#include "../Converter.h"
#include "../StepBasic/StepBasic_HArray1OfApproval.h"
#include "../StepBasic/StepBasic_SecurityClassification.h"
#include "../StepBasic/StepBasic_Approval.h"


using namespace OCNaroWrappers;

OCStepAP214_AutoDesignSecurityClassificationAssignment::OCStepAP214_AutoDesignSecurityClassificationAssignment(Handle(StepAP214_AutoDesignSecurityClassificationAssignment)* nativeHandle) : OCStepBasic_SecurityClassificationAssignment((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_StepAP214_AutoDesignSecurityClassificationAssignment(*nativeHandle);
}

OCStepAP214_AutoDesignSecurityClassificationAssignment::OCStepAP214_AutoDesignSecurityClassificationAssignment() : OCStepBasic_SecurityClassificationAssignment((OCDummy^)nullptr)

{
  nativeHandle = new Handle_StepAP214_AutoDesignSecurityClassificationAssignment(new StepAP214_AutoDesignSecurityClassificationAssignment());
}

 void OCStepAP214_AutoDesignSecurityClassificationAssignment::Init(OCNaroWrappers::OCStepBasic_SecurityClassification^ aAssignedSecurityClassification)
{
  (*((Handle_StepAP214_AutoDesignSecurityClassificationAssignment*)nativeHandle))->Init(*((Handle_StepBasic_SecurityClassification*)aAssignedSecurityClassification->Handle));
}

 void OCStepAP214_AutoDesignSecurityClassificationAssignment::Init(OCNaroWrappers::OCStepBasic_SecurityClassification^ aAssignedSecurityClassification, OCNaroWrappers::OCStepBasic_HArray1OfApproval^ aItems)
{
  (*((Handle_StepAP214_AutoDesignSecurityClassificationAssignment*)nativeHandle))->Init(*((Handle_StepBasic_SecurityClassification*)aAssignedSecurityClassification->Handle), *((Handle_StepBasic_HArray1OfApproval*)aItems->Handle));
}

 void OCStepAP214_AutoDesignSecurityClassificationAssignment::SetItems(OCNaroWrappers::OCStepBasic_HArray1OfApproval^ aItems)
{
  (*((Handle_StepAP214_AutoDesignSecurityClassificationAssignment*)nativeHandle))->SetItems(*((Handle_StepBasic_HArray1OfApproval*)aItems->Handle));
}

OCStepBasic_HArray1OfApproval^ OCStepAP214_AutoDesignSecurityClassificationAssignment::Items()
{
  Handle(StepBasic_HArray1OfApproval) tmp = (*((Handle_StepAP214_AutoDesignSecurityClassificationAssignment*)nativeHandle))->Items();
  return gcnew OCStepBasic_HArray1OfApproval(&tmp);
}

OCStepBasic_Approval^ OCStepAP214_AutoDesignSecurityClassificationAssignment::ItemsValue(Standard_Integer num)
{
  Handle(StepBasic_Approval) tmp = (*((Handle_StepAP214_AutoDesignSecurityClassificationAssignment*)nativeHandle))->ItemsValue(num);
  return gcnew OCStepBasic_Approval(&tmp);
}

 Standard_Integer OCStepAP214_AutoDesignSecurityClassificationAssignment::NbItems()
{
  return (*((Handle_StepAP214_AutoDesignSecurityClassificationAssignment*)nativeHandle))->NbItems();
}



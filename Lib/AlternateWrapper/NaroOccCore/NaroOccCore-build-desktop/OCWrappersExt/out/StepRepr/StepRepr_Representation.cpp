// File generated by CPPExt (CPP file)
//

#include "StepRepr_Representation.h"
#include "../Converter.h"
#include "../TCollection/TCollection_HAsciiString.h"
#include "StepRepr_HArray1OfRepresentationItem.h"
#include "StepRepr_RepresentationContext.h"
#include "StepRepr_RepresentationItem.h"


using namespace OCNaroWrappers;

OCStepRepr_Representation::OCStepRepr_Representation(Handle(StepRepr_Representation)* nativeHandle) : OCMMgt_TShared((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_StepRepr_Representation(*nativeHandle);
}

OCStepRepr_Representation::OCStepRepr_Representation() : OCMMgt_TShared((OCDummy^)nullptr)

{
  nativeHandle = new Handle_StepRepr_Representation(new StepRepr_Representation());
}

 void OCStepRepr_Representation::Init(OCNaroWrappers::OCTCollection_HAsciiString^ aName, OCNaroWrappers::OCStepRepr_HArray1OfRepresentationItem^ aItems, OCNaroWrappers::OCStepRepr_RepresentationContext^ aContextOfItems)
{
  (*((Handle_StepRepr_Representation*)nativeHandle))->Init(*((Handle_TCollection_HAsciiString*)aName->Handle), *((Handle_StepRepr_HArray1OfRepresentationItem*)aItems->Handle), *((Handle_StepRepr_RepresentationContext*)aContextOfItems->Handle));
}

 void OCStepRepr_Representation::SetName(OCNaroWrappers::OCTCollection_HAsciiString^ aName)
{
  (*((Handle_StepRepr_Representation*)nativeHandle))->SetName(*((Handle_TCollection_HAsciiString*)aName->Handle));
}

OCTCollection_HAsciiString^ OCStepRepr_Representation::Name()
{
  Handle(TCollection_HAsciiString) tmp = (*((Handle_StepRepr_Representation*)nativeHandle))->Name();
  return gcnew OCTCollection_HAsciiString(&tmp);
}

 void OCStepRepr_Representation::SetItems(OCNaroWrappers::OCStepRepr_HArray1OfRepresentationItem^ aItems)
{
  (*((Handle_StepRepr_Representation*)nativeHandle))->SetItems(*((Handle_StepRepr_HArray1OfRepresentationItem*)aItems->Handle));
}

OCStepRepr_HArray1OfRepresentationItem^ OCStepRepr_Representation::Items()
{
  Handle(StepRepr_HArray1OfRepresentationItem) tmp = (*((Handle_StepRepr_Representation*)nativeHandle))->Items();
  return gcnew OCStepRepr_HArray1OfRepresentationItem(&tmp);
}

OCStepRepr_RepresentationItem^ OCStepRepr_Representation::ItemsValue(Standard_Integer num)
{
  Handle(StepRepr_RepresentationItem) tmp = (*((Handle_StepRepr_Representation*)nativeHandle))->ItemsValue(num);
  return gcnew OCStepRepr_RepresentationItem(&tmp);
}

 Standard_Integer OCStepRepr_Representation::NbItems()
{
  return (*((Handle_StepRepr_Representation*)nativeHandle))->NbItems();
}

 void OCStepRepr_Representation::SetContextOfItems(OCNaroWrappers::OCStepRepr_RepresentationContext^ aContextOfItems)
{
  (*((Handle_StepRepr_Representation*)nativeHandle))->SetContextOfItems(*((Handle_StepRepr_RepresentationContext*)aContextOfItems->Handle));
}

OCStepRepr_RepresentationContext^ OCStepRepr_Representation::ContextOfItems()
{
  Handle(StepRepr_RepresentationContext) tmp = (*((Handle_StepRepr_Representation*)nativeHandle))->ContextOfItems();
  return gcnew OCStepRepr_RepresentationContext(&tmp);
}



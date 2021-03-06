// File generated by CPPExt (CPP file)
//

#include "StepBasic_DocumentRelationship.h"
#include "../Converter.h"
#include "../TCollection/TCollection_HAsciiString.h"
#include "StepBasic_Document.h"


using namespace OCNaroWrappers;

OCStepBasic_DocumentRelationship::OCStepBasic_DocumentRelationship(Handle(StepBasic_DocumentRelationship)* nativeHandle) : OCMMgt_TShared((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_StepBasic_DocumentRelationship(*nativeHandle);
}

OCStepBasic_DocumentRelationship::OCStepBasic_DocumentRelationship() : OCMMgt_TShared((OCDummy^)nullptr)

{
  nativeHandle = new Handle_StepBasic_DocumentRelationship(new StepBasic_DocumentRelationship());
}

 void OCStepBasic_DocumentRelationship::Init(OCNaroWrappers::OCTCollection_HAsciiString^ aName, OCNaroWrappers::OCTCollection_HAsciiString^ aDescription, OCNaroWrappers::OCStepBasic_Document^ aRelating, OCNaroWrappers::OCStepBasic_Document^ aRelated)
{
  (*((Handle_StepBasic_DocumentRelationship*)nativeHandle))->Init(*((Handle_TCollection_HAsciiString*)aName->Handle), *((Handle_TCollection_HAsciiString*)aDescription->Handle), *((Handle_StepBasic_Document*)aRelating->Handle), *((Handle_StepBasic_Document*)aRelated->Handle));
}

OCTCollection_HAsciiString^ OCStepBasic_DocumentRelationship::Name()
{
  Handle(TCollection_HAsciiString) tmp = (*((Handle_StepBasic_DocumentRelationship*)nativeHandle))->Name();
  return gcnew OCTCollection_HAsciiString(&tmp);
}

 void OCStepBasic_DocumentRelationship::SetName(OCNaroWrappers::OCTCollection_HAsciiString^ aName)
{
  (*((Handle_StepBasic_DocumentRelationship*)nativeHandle))->SetName(*((Handle_TCollection_HAsciiString*)aName->Handle));
}

OCTCollection_HAsciiString^ OCStepBasic_DocumentRelationship::Description()
{
  Handle(TCollection_HAsciiString) tmp = (*((Handle_StepBasic_DocumentRelationship*)nativeHandle))->Description();
  return gcnew OCTCollection_HAsciiString(&tmp);
}

 void OCStepBasic_DocumentRelationship::SetDescription(OCNaroWrappers::OCTCollection_HAsciiString^ aDescription)
{
  (*((Handle_StepBasic_DocumentRelationship*)nativeHandle))->SetDescription(*((Handle_TCollection_HAsciiString*)aDescription->Handle));
}

OCStepBasic_Document^ OCStepBasic_DocumentRelationship::RelatingDocument()
{
  Handle(StepBasic_Document) tmp = (*((Handle_StepBasic_DocumentRelationship*)nativeHandle))->RelatingDocument();
  return gcnew OCStepBasic_Document(&tmp);
}

 void OCStepBasic_DocumentRelationship::SetRelatingDocument(OCNaroWrappers::OCStepBasic_Document^ aRelating)
{
  (*((Handle_StepBasic_DocumentRelationship*)nativeHandle))->SetRelatingDocument(*((Handle_StepBasic_Document*)aRelating->Handle));
}

OCStepBasic_Document^ OCStepBasic_DocumentRelationship::RelatedDocument()
{
  Handle(StepBasic_Document) tmp = (*((Handle_StepBasic_DocumentRelationship*)nativeHandle))->RelatedDocument();
  return gcnew OCStepBasic_Document(&tmp);
}

 void OCStepBasic_DocumentRelationship::SetRelatedDocument(OCNaroWrappers::OCStepBasic_Document^ aRelated)
{
  (*((Handle_StepBasic_DocumentRelationship*)nativeHandle))->SetRelatedDocument(*((Handle_StepBasic_Document*)aRelated->Handle));
}



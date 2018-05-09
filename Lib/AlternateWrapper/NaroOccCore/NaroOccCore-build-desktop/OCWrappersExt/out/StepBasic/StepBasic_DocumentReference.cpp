// File generated by CPPExt (CPP file)
//

#include "StepBasic_DocumentReference.h"
#include "../Converter.h"
#include "StepBasic_Document.h"
#include "../TCollection/TCollection_HAsciiString.h"


using namespace OCNaroWrappers;

OCStepBasic_DocumentReference::OCStepBasic_DocumentReference(Handle(StepBasic_DocumentReference)* nativeHandle) : OCMMgt_TShared((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_StepBasic_DocumentReference(*nativeHandle);
}

 void OCStepBasic_DocumentReference::Init0(OCNaroWrappers::OCStepBasic_Document^ aAssignedDocument, OCNaroWrappers::OCTCollection_HAsciiString^ aSource)
{
  (*((Handle_StepBasic_DocumentReference*)nativeHandle))->Init0(*((Handle_StepBasic_Document*)aAssignedDocument->Handle), *((Handle_TCollection_HAsciiString*)aSource->Handle));
}

OCStepBasic_Document^ OCStepBasic_DocumentReference::AssignedDocument()
{
  Handle(StepBasic_Document) tmp = (*((Handle_StepBasic_DocumentReference*)nativeHandle))->AssignedDocument();
  return gcnew OCStepBasic_Document(&tmp);
}

 void OCStepBasic_DocumentReference::SetAssignedDocument(OCNaroWrappers::OCStepBasic_Document^ aAssignedDocument)
{
  (*((Handle_StepBasic_DocumentReference*)nativeHandle))->SetAssignedDocument(*((Handle_StepBasic_Document*)aAssignedDocument->Handle));
}

OCTCollection_HAsciiString^ OCStepBasic_DocumentReference::Source()
{
  Handle(TCollection_HAsciiString) tmp = (*((Handle_StepBasic_DocumentReference*)nativeHandle))->Source();
  return gcnew OCTCollection_HAsciiString(&tmp);
}

 void OCStepBasic_DocumentReference::SetSource(OCNaroWrappers::OCTCollection_HAsciiString^ aSource)
{
  (*((Handle_StepBasic_DocumentReference*)nativeHandle))->SetSource(*((Handle_TCollection_HAsciiString*)aSource->Handle));
}



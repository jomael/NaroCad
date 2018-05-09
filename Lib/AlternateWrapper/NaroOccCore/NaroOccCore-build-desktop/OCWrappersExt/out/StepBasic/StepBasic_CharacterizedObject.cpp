// File generated by CPPExt (CPP file)
//

#include "StepBasic_CharacterizedObject.h"
#include "../Converter.h"
#include "../TCollection/TCollection_HAsciiString.h"


using namespace OCNaroWrappers;

OCStepBasic_CharacterizedObject::OCStepBasic_CharacterizedObject(Handle(StepBasic_CharacterizedObject)* nativeHandle) : OCMMgt_TShared((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_StepBasic_CharacterizedObject(*nativeHandle);
}

OCStepBasic_CharacterizedObject::OCStepBasic_CharacterizedObject() : OCMMgt_TShared((OCDummy^)nullptr)

{
  nativeHandle = new Handle_StepBasic_CharacterizedObject(new StepBasic_CharacterizedObject());
}

 void OCStepBasic_CharacterizedObject::Init(OCNaroWrappers::OCTCollection_HAsciiString^ aName, System::Boolean hasDescription, OCNaroWrappers::OCTCollection_HAsciiString^ aDescription)
{
  (*((Handle_StepBasic_CharacterizedObject*)nativeHandle))->Init(*((Handle_TCollection_HAsciiString*)aName->Handle), OCConverter::BooleanToStandardBoolean(hasDescription), *((Handle_TCollection_HAsciiString*)aDescription->Handle));
}

OCTCollection_HAsciiString^ OCStepBasic_CharacterizedObject::Name()
{
  Handle(TCollection_HAsciiString) tmp = (*((Handle_StepBasic_CharacterizedObject*)nativeHandle))->Name();
  return gcnew OCTCollection_HAsciiString(&tmp);
}

 void OCStepBasic_CharacterizedObject::SetName(OCNaroWrappers::OCTCollection_HAsciiString^ Name)
{
  (*((Handle_StepBasic_CharacterizedObject*)nativeHandle))->SetName(*((Handle_TCollection_HAsciiString*)Name->Handle));
}

OCTCollection_HAsciiString^ OCStepBasic_CharacterizedObject::Description()
{
  Handle(TCollection_HAsciiString) tmp = (*((Handle_StepBasic_CharacterizedObject*)nativeHandle))->Description();
  return gcnew OCTCollection_HAsciiString(&tmp);
}

 void OCStepBasic_CharacterizedObject::SetDescription(OCNaroWrappers::OCTCollection_HAsciiString^ Description)
{
  (*((Handle_StepBasic_CharacterizedObject*)nativeHandle))->SetDescription(*((Handle_TCollection_HAsciiString*)Description->Handle));
}

 System::Boolean OCStepBasic_CharacterizedObject::HasDescription()
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_StepBasic_CharacterizedObject*)nativeHandle))->HasDescription());
}


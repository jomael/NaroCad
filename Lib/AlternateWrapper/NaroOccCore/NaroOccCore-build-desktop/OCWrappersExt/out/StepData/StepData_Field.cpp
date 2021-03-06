// File generated by CPPExt (CPP file)
//

#include "StepData_Field.h"
#include "../Converter.h"
#include "../Standard/Standard_Transient.h"
#include "StepData_SelectMember.h"


using namespace OCNaroWrappers;

OCStepData_Field::OCStepData_Field(StepData_Field* nativeHandle) 
{
  this->nativeHandle = nativeHandle;
}

OCStepData_Field::OCStepData_Field() 
{
  nativeHandle = new StepData_Field();
}

OCStepData_Field::OCStepData_Field(OCNaroWrappers::OCStepData_Field^ other, System::Boolean copy) 
{
  nativeHandle = new StepData_Field(*((StepData_Field*)other->Handle), OCConverter::BooleanToStandardBoolean(copy));
}

 void OCStepData_Field::CopyFrom(OCNaroWrappers::OCStepData_Field^ other)
{
  ((StepData_Field*)nativeHandle)->CopyFrom(*((StepData_Field*)other->Handle));
}

 void OCStepData_Field::Clear(Standard_Integer kind)
{
  ((StepData_Field*)nativeHandle)->Clear(kind);
}

 void OCStepData_Field::SetDerived()
{
  ((StepData_Field*)nativeHandle)->SetDerived();
}

 void OCStepData_Field::SetInt(Standard_Integer val)
{
  ((StepData_Field*)nativeHandle)->SetInt(val);
}

 void OCStepData_Field::SetInteger(Standard_Integer val)
{
  ((StepData_Field*)nativeHandle)->SetInteger(val);
}

 void OCStepData_Field::SetBoolean(System::Boolean val)
{
  ((StepData_Field*)nativeHandle)->SetBoolean(OCConverter::BooleanToStandardBoolean(val));
}

 void OCStepData_Field::SetLogical(OCStepData_Logical val)
{
  ((StepData_Field*)nativeHandle)->SetLogical((StepData_Logical)val);
}

 void OCStepData_Field::SetReal(Standard_Real val)
{
  ((StepData_Field*)nativeHandle)->SetReal(val);
}

 void OCStepData_Field::SetString(System::String^ val)
{
  ((StepData_Field*)nativeHandle)->SetString(OCConverter::StringToStandardCString(val));
}

 void OCStepData_Field::SetEnum(Standard_Integer val, System::String^ text)
{
  ((StepData_Field*)nativeHandle)->SetEnum(val, OCConverter::StringToStandardCString(text));
}

 void OCStepData_Field::SetSelectMember(OCNaroWrappers::OCStepData_SelectMember^ val)
{
  ((StepData_Field*)nativeHandle)->SetSelectMember(*((Handle_StepData_SelectMember*)val->Handle));
}

 void OCStepData_Field::SetEntity(OCNaroWrappers::OCStandard_Transient^ val)
{
  ((StepData_Field*)nativeHandle)->SetEntity(*((Handle_Standard_Transient*)val->Handle));
}

 void OCStepData_Field::SetEntity()
{
  ((StepData_Field*)nativeHandle)->SetEntity();
}

 void OCStepData_Field::SetList(Standard_Integer size, Standard_Integer first)
{
  ((StepData_Field*)nativeHandle)->SetList(size, first);
}

 void OCStepData_Field::SetList2(Standard_Integer siz1, Standard_Integer siz2, Standard_Integer f1, Standard_Integer f2)
{
  ((StepData_Field*)nativeHandle)->SetList2(siz1, siz2, f1, f2);
}

 void OCStepData_Field::Set(OCNaroWrappers::OCStandard_Transient^ val)
{
  ((StepData_Field*)nativeHandle)->Set(*((Handle_Standard_Transient*)val->Handle));
}

 void OCStepData_Field::ClearItem(Standard_Integer num)
{
  ((StepData_Field*)nativeHandle)->ClearItem(num);
}

 void OCStepData_Field::SetInt(Standard_Integer num, Standard_Integer val, Standard_Integer kind)
{
  ((StepData_Field*)nativeHandle)->SetInt(num, val, kind);
}

 void OCStepData_Field::SetInteger(Standard_Integer num, Standard_Integer val)
{
  ((StepData_Field*)nativeHandle)->SetInteger(num, val);
}

 void OCStepData_Field::SetBoolean(Standard_Integer num, System::Boolean val)
{
  ((StepData_Field*)nativeHandle)->SetBoolean(num, OCConverter::BooleanToStandardBoolean(val));
}

 void OCStepData_Field::SetLogical(Standard_Integer num, OCStepData_Logical val)
{
  ((StepData_Field*)nativeHandle)->SetLogical(num, (StepData_Logical)val);
}

 void OCStepData_Field::SetEnum(Standard_Integer num, Standard_Integer val, System::String^ text)
{
  ((StepData_Field*)nativeHandle)->SetEnum(num, val, OCConverter::StringToStandardCString(text));
}

 void OCStepData_Field::SetReal(Standard_Integer num, Standard_Real val)
{
  ((StepData_Field*)nativeHandle)->SetReal(num, val);
}

 void OCStepData_Field::SetString(Standard_Integer num, System::String^ val)
{
  ((StepData_Field*)nativeHandle)->SetString(num, OCConverter::StringToStandardCString(val));
}

 void OCStepData_Field::SetEntity(Standard_Integer num, OCNaroWrappers::OCStandard_Transient^ val)
{
  ((StepData_Field*)nativeHandle)->SetEntity(num, *((Handle_Standard_Transient*)val->Handle));
}

 System::Boolean OCStepData_Field::IsSet(Standard_Integer n1, Standard_Integer n2)
{
  return OCConverter::StandardBooleanToBoolean(((StepData_Field*)nativeHandle)->IsSet(n1, n2));
}

 Standard_Integer OCStepData_Field::ItemKind(Standard_Integer n1, Standard_Integer n2)
{
  return ((StepData_Field*)nativeHandle)->ItemKind(n1, n2);
}

 Standard_Integer OCStepData_Field::Kind(System::Boolean type)
{
  return ((StepData_Field*)nativeHandle)->Kind(OCConverter::BooleanToStandardBoolean(type));
}

 Standard_Integer OCStepData_Field::Arity()
{
  return ((StepData_Field*)nativeHandle)->Arity();
}

 Standard_Integer OCStepData_Field::Length(Standard_Integer index)
{
  return ((StepData_Field*)nativeHandle)->Length(index);
}

 Standard_Integer OCStepData_Field::Lower(Standard_Integer index)
{
  return ((StepData_Field*)nativeHandle)->Lower(index);
}

 Standard_Integer OCStepData_Field::Int()
{
  return ((StepData_Field*)nativeHandle)->Int();
}

 Standard_Integer OCStepData_Field::Integer(Standard_Integer n1, Standard_Integer n2)
{
  return ((StepData_Field*)nativeHandle)->Integer(n1, n2);
}

 System::Boolean OCStepData_Field::Boolean(Standard_Integer n1, Standard_Integer n2)
{
  return OCConverter::StandardBooleanToBoolean(((StepData_Field*)nativeHandle)->Boolean(n1, n2));
}

 OCStepData_Logical OCStepData_Field::Logical(Standard_Integer n1, Standard_Integer n2)
{
  return (OCStepData_Logical)(((StepData_Field*)nativeHandle)->Logical(n1, n2));
}

 Standard_Real OCStepData_Field::Real(Standard_Integer n1, Standard_Integer n2)
{
  return ((StepData_Field*)nativeHandle)->Real(n1, n2);
}

 System::String^ OCStepData_Field::String(Standard_Integer n1, Standard_Integer n2)
{
  return OCConverter::StandardCStringToString(((StepData_Field*)nativeHandle)->String(n1, n2));
}

 Standard_Integer OCStepData_Field::Enum(Standard_Integer n1, Standard_Integer n2)
{
  return ((StepData_Field*)nativeHandle)->Enum(n1, n2);
}

 System::String^ OCStepData_Field::EnumText(Standard_Integer n1, Standard_Integer n2)
{
  return OCConverter::StandardCStringToString(((StepData_Field*)nativeHandle)->EnumText(n1, n2));
}

OCStandard_Transient^ OCStepData_Field::Entity(Standard_Integer n1, Standard_Integer n2)
{
  Handle(Standard_Transient) tmp = ((StepData_Field*)nativeHandle)->Entity(n1, n2);
  return gcnew OCStandard_Transient(&tmp);
}

OCStandard_Transient^ OCStepData_Field::Transient()
{
  Handle(Standard_Transient) tmp = ((StepData_Field*)nativeHandle)->Transient();
  return gcnew OCStandard_Transient(&tmp);
}



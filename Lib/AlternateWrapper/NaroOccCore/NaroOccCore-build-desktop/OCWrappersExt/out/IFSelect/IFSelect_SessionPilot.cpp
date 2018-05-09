// File generated by CPPExt (CPP file)
//

#include "IFSelect_SessionPilot.h"
#include "../Converter.h"
#include "IFSelect_WorkSession.h"
#include "../Standard/Standard_Transient.h"
#include "IFSelect_WorkLibrary.h"
#include "../TCollection/TCollection_AsciiString.h"
#include "IFSelect_SignCounter.h"


using namespace OCNaroWrappers;

OCIFSelect_SessionPilot::OCIFSelect_SessionPilot(Handle(IFSelect_SessionPilot)* nativeHandle) : OCIFSelect_Activator((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_IFSelect_SessionPilot(*nativeHandle);
}

OCIFSelect_SessionPilot::OCIFSelect_SessionPilot(System::String^ prompt) : OCIFSelect_Activator((OCDummy^)nullptr)

{
  nativeHandle = new Handle_IFSelect_SessionPilot(new IFSelect_SessionPilot(OCConverter::StringToStandardCString(prompt)));
}

OCIFSelect_WorkSession^ OCIFSelect_SessionPilot::Session()
{
  Handle(IFSelect_WorkSession) tmp = (*((Handle_IFSelect_SessionPilot*)nativeHandle))->Session();
  return gcnew OCIFSelect_WorkSession(&tmp);
}

OCIFSelect_WorkLibrary^ OCIFSelect_SessionPilot::Library()
{
  Handle(IFSelect_WorkLibrary) tmp = (*((Handle_IFSelect_SessionPilot*)nativeHandle))->Library();
  return gcnew OCIFSelect_WorkLibrary(&tmp);
}

 System::Boolean OCIFSelect_SessionPilot::RecordMode()
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_IFSelect_SessionPilot*)nativeHandle))->RecordMode());
}

 void OCIFSelect_SessionPilot::SetSession(OCNaroWrappers::OCIFSelect_WorkSession^ WS)
{
  (*((Handle_IFSelect_SessionPilot*)nativeHandle))->SetSession(*((Handle_IFSelect_WorkSession*)WS->Handle));
}

 void OCIFSelect_SessionPilot::SetLibrary(OCNaroWrappers::OCIFSelect_WorkLibrary^ WL)
{
  (*((Handle_IFSelect_SessionPilot*)nativeHandle))->SetLibrary(*((Handle_IFSelect_WorkLibrary*)WL->Handle));
}

 void OCIFSelect_SessionPilot::SetRecordMode(System::Boolean mode)
{
  (*((Handle_IFSelect_SessionPilot*)nativeHandle))->SetRecordMode(OCConverter::BooleanToStandardBoolean(mode));
}

 void OCIFSelect_SessionPilot::SetCommandLine(OCNaroWrappers::OCTCollection_AsciiString^ command)
{
  (*((Handle_IFSelect_SessionPilot*)nativeHandle))->SetCommandLine(*((TCollection_AsciiString*)command->Handle));
}

OCTCollection_AsciiString^ OCIFSelect_SessionPilot::CommandLine()
{
  TCollection_AsciiString* tmp = new TCollection_AsciiString();
  *tmp = (*((Handle_IFSelect_SessionPilot*)nativeHandle))->CommandLine();
  return gcnew OCTCollection_AsciiString(tmp);
}

 System::String^ OCIFSelect_SessionPilot::CommandPart(Standard_Integer numarg)
{
  return OCConverter::StandardCStringToString((*((Handle_IFSelect_SessionPilot*)nativeHandle))->CommandPart(numarg));
}

 Standard_Integer OCIFSelect_SessionPilot::NbWords()
{
  return (*((Handle_IFSelect_SessionPilot*)nativeHandle))->NbWords();
}

OCTCollection_AsciiString^ OCIFSelect_SessionPilot::Word(Standard_Integer num)
{
  TCollection_AsciiString* tmp = new TCollection_AsciiString();
  *tmp = (*((Handle_IFSelect_SessionPilot*)nativeHandle))->Word(num);
  return gcnew OCTCollection_AsciiString(tmp);
}

 System::String^ OCIFSelect_SessionPilot::Arg(Standard_Integer num)
{
  return OCConverter::StandardCStringToString((*((Handle_IFSelect_SessionPilot*)nativeHandle))->Arg(num));
}

 System::Boolean OCIFSelect_SessionPilot::RemoveWord(Standard_Integer num)
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_IFSelect_SessionPilot*)nativeHandle))->RemoveWord(num));
}

 Standard_Integer OCIFSelect_SessionPilot::NbCommands()
{
  return (*((Handle_IFSelect_SessionPilot*)nativeHandle))->NbCommands();
}

OCTCollection_AsciiString^ OCIFSelect_SessionPilot::Command(Standard_Integer num)
{
  TCollection_AsciiString* tmp = new TCollection_AsciiString();
  *tmp = (*((Handle_IFSelect_SessionPilot*)nativeHandle))->Command(num);
  return gcnew OCTCollection_AsciiString(tmp);
}

 OCIFSelect_ReturnStatus OCIFSelect_SessionPilot::RecordItem(OCNaroWrappers::OCStandard_Transient^ item)
{
  return (OCIFSelect_ReturnStatus)((*((Handle_IFSelect_SessionPilot*)nativeHandle))->RecordItem(*((Handle_Standard_Transient*)item->Handle)));
}

OCStandard_Transient^ OCIFSelect_SessionPilot::RecordedItem()
{
  Handle(Standard_Transient) tmp = (*((Handle_IFSelect_SessionPilot*)nativeHandle))->RecordedItem();
  return gcnew OCStandard_Transient(&tmp);
}

 void OCIFSelect_SessionPilot::Clear()
{
  (*((Handle_IFSelect_SessionPilot*)nativeHandle))->Clear();
}

 OCIFSelect_ReturnStatus OCIFSelect_SessionPilot::ReadScript(System::String^ file)
{
  return (OCIFSelect_ReturnStatus)((*((Handle_IFSelect_SessionPilot*)nativeHandle))->ReadScript(OCConverter::StringToStandardCString(file)));
}

 OCIFSelect_ReturnStatus OCIFSelect_SessionPilot::Perform()
{
  return (OCIFSelect_ReturnStatus)((*((Handle_IFSelect_SessionPilot*)nativeHandle))->Perform());
}

 OCIFSelect_ReturnStatus OCIFSelect_SessionPilot::ExecuteAlias(OCNaroWrappers::OCTCollection_AsciiString^ aliasname)
{
  return (OCIFSelect_ReturnStatus)((*((Handle_IFSelect_SessionPilot*)nativeHandle))->ExecuteAlias(*((TCollection_AsciiString*)aliasname->Handle)));
}

 OCIFSelect_ReturnStatus OCIFSelect_SessionPilot::Execute(OCNaroWrappers::OCTCollection_AsciiString^ command)
{
  return (OCIFSelect_ReturnStatus)((*((Handle_IFSelect_SessionPilot*)nativeHandle))->Execute(*((TCollection_AsciiString*)command->Handle)));
}

 OCIFSelect_ReturnStatus OCIFSelect_SessionPilot::ExecuteCounter(OCNaroWrappers::OCIFSelect_SignCounter^ counter, Standard_Integer numword, OCIFSelect_PrintCount mode)
{
  return (OCIFSelect_ReturnStatus)((*((Handle_IFSelect_SessionPilot*)nativeHandle))->ExecuteCounter(*((Handle_IFSelect_SignCounter*)counter->Handle), numword, (IFSelect_PrintCount)mode));
}

 Standard_Integer OCIFSelect_SessionPilot::Number(System::String^ val)
{
  return (*((Handle_IFSelect_SessionPilot*)nativeHandle))->Number(OCConverter::StringToStandardCString(val));
}

 OCIFSelect_ReturnStatus OCIFSelect_SessionPilot::Do(Standard_Integer number, OCNaroWrappers::OCIFSelect_SessionPilot^ session)
{
  return (OCIFSelect_ReturnStatus)((*((Handle_IFSelect_SessionPilot*)nativeHandle))->Do(number, *((Handle_IFSelect_SessionPilot*)session->Handle)));
}

 System::String^ OCIFSelect_SessionPilot::Help(Standard_Integer number)
{
  return OCConverter::StandardCStringToString((*((Handle_IFSelect_SessionPilot*)nativeHandle))->Help(number));
}



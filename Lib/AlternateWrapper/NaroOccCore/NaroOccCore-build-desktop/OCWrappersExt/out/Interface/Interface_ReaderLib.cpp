// File generated by CPPExt (CPP file)
//

#include "Interface_ReaderLib.h"
#include "../Converter.h"
#include "Interface_NodeOfReaderLib.h"
#include "../Standard/Standard_Transient.h"
#include "Interface_ReaderModule.h"
#include "Interface_Protocol.h"
#include "Interface_GlobalNodeOfReaderLib.h"


using namespace OCNaroWrappers;

OCInterface_ReaderLib::OCInterface_ReaderLib(Interface_ReaderLib* nativeHandle) 
{
  this->nativeHandle = nativeHandle;
}

 void OCInterface_ReaderLib::SetGlobal(OCNaroWrappers::OCInterface_ReaderModule^ amodule, OCNaroWrappers::OCInterface_Protocol^ aprotocol)
{
  Interface_ReaderLib::SetGlobal(*((Handle_Interface_ReaderModule*)amodule->Handle), *((Handle_Interface_Protocol*)aprotocol->Handle));
}

OCInterface_ReaderLib::OCInterface_ReaderLib(OCNaroWrappers::OCInterface_Protocol^ aprotocol) 
{
  nativeHandle = new Interface_ReaderLib(*((Handle_Interface_Protocol*)aprotocol->Handle));
}

OCInterface_ReaderLib::OCInterface_ReaderLib() 
{
  nativeHandle = new Interface_ReaderLib();
}

 void OCInterface_ReaderLib::AddProtocol(OCNaroWrappers::OCStandard_Transient^ aprotocol)
{
  ((Interface_ReaderLib*)nativeHandle)->AddProtocol(*((Handle_Standard_Transient*)aprotocol->Handle));
}

 void OCInterface_ReaderLib::Clear()
{
  ((Interface_ReaderLib*)nativeHandle)->Clear();
}

 void OCInterface_ReaderLib::SetComplete()
{
  ((Interface_ReaderLib*)nativeHandle)->SetComplete();
}

 System::Boolean OCInterface_ReaderLib::Select(OCNaroWrappers::OCStandard_Transient^ obj, OCNaroWrappers::OCInterface_ReaderModule^ module, Standard_Integer& CN)
{
  return OCConverter::StandardBooleanToBoolean(((Interface_ReaderLib*)nativeHandle)->Select(*((Handle_Standard_Transient*)obj->Handle), *((Handle_Interface_ReaderModule*)module->Handle), CN));
}

 void OCInterface_ReaderLib::Start()
{
  ((Interface_ReaderLib*)nativeHandle)->Start();
}

 System::Boolean OCInterface_ReaderLib::More()
{
  return OCConverter::StandardBooleanToBoolean(((Interface_ReaderLib*)nativeHandle)->More());
}

 void OCInterface_ReaderLib::Next()
{
  ((Interface_ReaderLib*)nativeHandle)->Next();
}

OCInterface_ReaderModule^ OCInterface_ReaderLib::Module()
{
  Handle(Interface_ReaderModule) tmp = ((Interface_ReaderLib*)nativeHandle)->Module();
  return gcnew OCInterface_ReaderModule(&tmp);
}

OCInterface_Protocol^ OCInterface_ReaderLib::Protocol()
{
  Handle(Interface_Protocol) tmp = ((Interface_ReaderLib*)nativeHandle)->Protocol();
  return gcnew OCInterface_Protocol(&tmp);
}



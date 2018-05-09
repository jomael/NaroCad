// File generated by CPPExt (CPP file)
//

#include "BOPTColStd_Failure.h"
#include "../Converter.h"


using namespace OCNaroWrappers;

OCBOPTColStd_Failure::OCBOPTColStd_Failure(BOPTColStd_Failure* nativeHandle) 
{
  this->nativeHandle = nativeHandle;
}

OCBOPTColStd_Failure::OCBOPTColStd_Failure(System::String^ aMessage) 
{
  nativeHandle = new BOPTColStd_Failure(OCConverter::StringToStandardCString(aMessage));
}

 System::String^ OCBOPTColStd_Failure::Message()
{
  return OCConverter::StandardCStringToString(((BOPTColStd_Failure*)nativeHandle)->Message());
}



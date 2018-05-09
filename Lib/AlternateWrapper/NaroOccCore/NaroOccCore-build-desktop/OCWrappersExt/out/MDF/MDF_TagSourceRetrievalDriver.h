// File generated by CPPExt (Transient)
//
#ifndef _MDF_TagSourceRetrievalDriver_OCWrappers_HeaderFile
#define _MDF_TagSourceRetrievalDriver_OCWrappers_HeaderFile

// include the wrapped class
#include <MDF_TagSourceRetrievalDriver.hxx>
#include "../Converter.h"

#include "MDF_ARDriver.h"



namespace OCNaroWrappers
{

ref class OCCDM_MessageDriver;
ref class OCStandard_Type;
ref class OCTDF_Attribute;
ref class OCPDF_Attribute;
ref class OCMDF_RRelocationTable;



public ref class OCMDF_TagSourceRetrievalDriver : OCMDF_ARDriver {

protected:
  // dummy constructor;
  OCMDF_TagSourceRetrievalDriver(OCDummy^) : OCMDF_ARDriver((OCDummy^)nullptr) {};

public:

// constructor from native
OCMDF_TagSourceRetrievalDriver(Handle(MDF_TagSourceRetrievalDriver)* nativeHandle);

// Methods PUBLIC


OCMDF_TagSourceRetrievalDriver(OCNaroWrappers::OCCDM_MessageDriver^ theMessageDriver);

//! Returns the version number from which the driver <br>
//!          is available: 0. <br>
 /*instead*/  Standard_Integer VersionNumber() ;

//! Returns the type: TagSource from PDF. <br>
 /*instead*/  OCStandard_Type^ SourceType() ;


 /*instead*/  OCTDF_Attribute^ NewEmpty() ;


 /*instead*/  void Paste(OCNaroWrappers::OCPDF_Attribute^ Source, OCNaroWrappers::OCTDF_Attribute^ Target, OCNaroWrappers::OCMDF_RRelocationTable^ RelocTable) ;

~OCMDF_TagSourceRetrievalDriver()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif

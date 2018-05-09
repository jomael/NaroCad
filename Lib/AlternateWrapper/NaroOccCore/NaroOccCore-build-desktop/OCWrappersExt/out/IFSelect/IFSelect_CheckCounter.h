// File generated by CPPExt (Transient)
//
#ifndef _IFSelect_CheckCounter_OCWrappers_HeaderFile
#define _IFSelect_CheckCounter_OCWrappers_HeaderFile

// include the wrapped class
#include <IFSelect_CheckCounter.hxx>
#include "../Converter.h"

#include "IFSelect_SignatureList.h"



namespace OCNaroWrappers
{

ref class OCMoniTool_SignText;
ref class OCInterface_CheckIterator;
ref class OCInterface_InterfaceModel;


//! A CheckCounter allows to see a CheckList (i.e. CheckIterator) <br>
//!           not per entity, its messages, but per message, the entities <br>
//!           attached (count and list). Because many messages can be <br>
//!           repeated if they are due to systematic errors <br>
public ref class OCIFSelect_CheckCounter : OCIFSelect_SignatureList {

protected:
  // dummy constructor;
  OCIFSelect_CheckCounter(OCDummy^) : OCIFSelect_SignatureList((OCDummy^)nullptr) {};

public:

// constructor from native
OCIFSelect_CheckCounter(Handle(IFSelect_CheckCounter)* nativeHandle);

// Methods PUBLIC

//! Creates a CheckCounter, empty ready to work <br>
OCIFSelect_CheckCounter(System::Boolean withlist);

//! Sets a specific signature <br>
//!           Else, the current SignType (in the model) is used <br>
 /*instead*/  void SetSignature(OCNaroWrappers::OCMoniTool_SignText^ sign) ;

//! Returns the Signature; <br>
 /*instead*/  OCMoniTool_SignText^ Signature() ;

//! Analyses a CheckIterator according a Model (which detains the <br>
//!           entities for which the CheckIterator has messages), i.e. <br>
//!           counts messages for entities <br>
//!           If <original> is True, does not consider final messages but <br>
//!             those before interpretation (such as inserting variables : <br>
//!             integers, reals, strings) <br>
//!           If <failsonly> is True, only Fails are considered <br>
//!           Remark : global messages are recorded with a Null entity <br>
 /*instead*/  void Analyse(OCNaroWrappers::OCInterface_CheckIterator^ list, OCNaroWrappers::OCInterface_InterfaceModel^ model, System::Boolean original, System::Boolean failsonly) ;

~OCIFSelect_CheckCounter()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif

// File generated by CPPExt (Transient)
//
#ifndef _IFSelect_SignAncestor_OCWrappers_HeaderFile
#define _IFSelect_SignAncestor_OCWrappers_HeaderFile

// include the wrapped class
#include <IFSelect_SignAncestor.hxx>
#include "../Converter.h"

#include "IFSelect_SignType.h"



namespace OCNaroWrappers
{

ref class OCStandard_Transient;
ref class OCInterface_InterfaceModel;
ref class OCTCollection_AsciiString;



public ref class OCIFSelect_SignAncestor : OCIFSelect_SignType {

protected:
  // dummy constructor;
  OCIFSelect_SignAncestor(OCDummy^) : OCIFSelect_SignType((OCDummy^)nullptr) {};

public:

// constructor from native
OCIFSelect_SignAncestor(Handle(IFSelect_SignAncestor)* nativeHandle);

// Methods PUBLIC


OCIFSelect_SignAncestor(System::Boolean nopk);


virtual /*instead*/  System::Boolean Matches(OCNaroWrappers::OCStandard_Transient^ ent, OCNaroWrappers::OCInterface_InterfaceModel^ model, OCNaroWrappers::OCTCollection_AsciiString^ text, System::Boolean exact) override;

~OCIFSelect_SignAncestor()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif

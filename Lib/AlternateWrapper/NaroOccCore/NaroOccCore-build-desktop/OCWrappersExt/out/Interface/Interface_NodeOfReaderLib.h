// File generated by CPPExt (Transient)
//
#ifndef _Interface_NodeOfReaderLib_OCWrappers_HeaderFile
#define _Interface_NodeOfReaderLib_OCWrappers_HeaderFile

// include the wrapped class
#include <Interface_NodeOfReaderLib.hxx>
#include "../Converter.h"

#include "../MMgt/MMgt_TShared.h"



namespace OCNaroWrappers
{

ref class OCInterface_GlobalNodeOfReaderLib;
ref class OCStandard_Transient;
ref class OCInterface_ReaderModule;
ref class OCInterface_Protocol;
ref class OCInterface_ReaderLib;



public ref class OCInterface_NodeOfReaderLib : OCMMgt_TShared {

protected:
  // dummy constructor;
  OCInterface_NodeOfReaderLib(OCDummy^) : OCMMgt_TShared((OCDummy^)nullptr) {};

public:

// constructor from native
OCInterface_NodeOfReaderLib(Handle(Interface_NodeOfReaderLib)* nativeHandle);

// Methods PUBLIC


OCInterface_NodeOfReaderLib();


 /*instead*/  void AddNode(OCNaroWrappers::OCInterface_GlobalNodeOfReaderLib^ anode) ;


 /*instead*/  OCInterface_ReaderModule^ Module() ;


 /*instead*/  OCInterface_Protocol^ Protocol() ;


 /*instead*/  OCInterface_NodeOfReaderLib^ Next() ;

~OCInterface_NodeOfReaderLib()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif

// File generated by CPPExt (Transient)
//
#ifndef _MoniTool_IntVal_OCWrappers_HeaderFile
#define _MoniTool_IntVal_OCWrappers_HeaderFile

// include the wrapped class
#include <MoniTool_IntVal.hxx>
#include "../Converter.h"

#include "../MMgt/MMgt_TShared.h"



namespace OCNaroWrappers
{



//! An Integer through a Handle (i.e. managed as TShared) <br>
public ref class OCMoniTool_IntVal : OCMMgt_TShared {

protected:
  // dummy constructor;
  OCMoniTool_IntVal(OCDummy^) : OCMMgt_TShared((OCDummy^)nullptr) {};

public:

// constructor from native
OCMoniTool_IntVal(Handle(MoniTool_IntVal)* nativeHandle);

// Methods PUBLIC


OCMoniTool_IntVal(Standard_Integer val);


 /*instead*/  Standard_Integer Value() ;


 /*instead*/  Standard_Integer CValue() ;

~OCMoniTool_IntVal()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif

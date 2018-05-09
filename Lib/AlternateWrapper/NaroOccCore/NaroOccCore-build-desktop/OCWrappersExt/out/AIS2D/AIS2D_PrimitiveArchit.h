// File generated by CPPExt (Transient)
//
#ifndef _AIS2D_PrimitiveArchit_OCWrappers_HeaderFile
#define _AIS2D_PrimitiveArchit_OCWrappers_HeaderFile

// include the wrapped class
#include <AIS2D_PrimitiveArchit.hxx>
#include "../Converter.h"

#include "../MMgt/MMgt_TShared.h"



namespace OCNaroWrappers
{

ref class OCGraphic2d_Primitive;



public ref class OCAIS2D_PrimitiveArchit : OCMMgt_TShared {

protected:
  // dummy constructor;
  OCAIS2D_PrimitiveArchit(OCDummy^) : OCMMgt_TShared((OCDummy^)nullptr) {};

public:

// constructor from native
OCAIS2D_PrimitiveArchit(Handle(AIS2D_PrimitiveArchit)* nativeHandle);

// Methods PUBLIC


OCAIS2D_PrimitiveArchit(OCNaroWrappers::OCGraphic2d_Primitive^ aPrim, Standard_Integer ind);


 /*instead*/  OCGraphic2d_Primitive^ GetPrimitive() ;


 /*instead*/  Standard_Integer GetIndex() ;

~OCAIS2D_PrimitiveArchit()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif

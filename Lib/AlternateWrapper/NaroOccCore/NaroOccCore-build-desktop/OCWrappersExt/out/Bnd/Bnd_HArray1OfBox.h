// File generated by CPPExt (Transient)
//
#ifndef _Bnd_HArray1OfBox_OCWrappers_HeaderFile
#define _Bnd_HArray1OfBox_OCWrappers_HeaderFile

// include the wrapped class
#include <Bnd_HArray1OfBox.hxx>
#include "../Converter.h"

#include "../MMgt/MMgt_TShared.h"

#include "Bnd_Array1OfBox.h"


namespace OCNaroWrappers
{

ref class OCBnd_Box;
ref class OCBnd_Array1OfBox;



public ref class OCBnd_HArray1OfBox : OCMMgt_TShared {

protected:
  // dummy constructor;
  OCBnd_HArray1OfBox(OCDummy^) : OCMMgt_TShared((OCDummy^)nullptr) {};

public:

// constructor from native
OCBnd_HArray1OfBox(Handle(Bnd_HArray1OfBox)* nativeHandle);

// Methods PUBLIC


OCBnd_HArray1OfBox(Standard_Integer Low, Standard_Integer Up);


OCBnd_HArray1OfBox(Standard_Integer Low, Standard_Integer Up, OCNaroWrappers::OCBnd_Box^ V);


 /*instead*/  void Init(OCNaroWrappers::OCBnd_Box^ V) ;


 /*instead*/  Standard_Integer Length() ;


 /*instead*/  Standard_Integer Lower() ;


 /*instead*/  Standard_Integer Upper() ;


 /*instead*/  void SetValue(Standard_Integer Index, OCNaroWrappers::OCBnd_Box^ Value) ;


 /*instead*/  OCBnd_Box^ Value(Standard_Integer Index) ;


 /*instead*/  OCBnd_Box^ ChangeValue(Standard_Integer Index) ;


 /*instead*/  OCBnd_Array1OfBox^ Array1() ;


 /*instead*/  OCBnd_Array1OfBox^ ChangeArray1() ;

~OCBnd_HArray1OfBox()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
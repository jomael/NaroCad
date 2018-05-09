// File generated by CPPExt (Transient)
//
#ifndef _TColStd_HArray2OfCharacter_OCWrappers_HeaderFile
#define _TColStd_HArray2OfCharacter_OCWrappers_HeaderFile

// include the wrapped class
#include <TColStd_HArray2OfCharacter.hxx>
#include "../Converter.h"

#include "../MMgt/MMgt_TShared.h"

#include "TColStd_Array2OfCharacter.h"


namespace OCNaroWrappers
{

ref class OCTColStd_Array2OfCharacter;



public ref class OCTColStd_HArray2OfCharacter : OCMMgt_TShared {

protected:
  // dummy constructor;
  OCTColStd_HArray2OfCharacter(OCDummy^) : OCMMgt_TShared((OCDummy^)nullptr) {};

public:

// constructor from native
OCTColStd_HArray2OfCharacter(Handle(TColStd_HArray2OfCharacter)* nativeHandle);

// Methods PUBLIC


OCTColStd_HArray2OfCharacter(Standard_Integer R1, Standard_Integer R2, Standard_Integer C1, Standard_Integer C2);


OCTColStd_HArray2OfCharacter(Standard_Integer R1, Standard_Integer R2, Standard_Integer C1, Standard_Integer C2, Standard_Character V);


 /*instead*/  void Init(Standard_Character V) ;


 /*instead*/  Standard_Integer ColLength() ;


 /*instead*/  Standard_Integer RowLength() ;


 /*instead*/  Standard_Integer LowerCol() ;


 /*instead*/  Standard_Integer LowerRow() ;


 /*instead*/  Standard_Integer UpperCol() ;


 /*instead*/  Standard_Integer UpperRow() ;


 /*instead*/  void SetValue(Standard_Integer Row, Standard_Integer Col, Standard_Character Value) ;


 /*instead*/  Standard_Character Value(Standard_Integer Row, Standard_Integer Col) ;


 /*instead*/  Standard_Character ChangeValue(Standard_Integer Row, Standard_Integer Col) ;


 /*instead*/  OCTColStd_Array2OfCharacter^ Array2() ;


 /*instead*/  OCTColStd_Array2OfCharacter^ ChangeArray2() ;

~OCTColStd_HArray2OfCharacter()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif

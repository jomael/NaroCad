// File generated by CPPExt (Transient)
//
#ifndef _Extrema_HArray2OfPOnCurv_OCWrappers_HeaderFile
#define _Extrema_HArray2OfPOnCurv_OCWrappers_HeaderFile

// include the wrapped class
#include <Extrema_HArray2OfPOnCurv.hxx>
#include "../Converter.h"

#include "../MMgt/MMgt_TShared.h"

#include "Extrema_Array2OfPOnCurv.h"


namespace OCNaroWrappers
{

ref class OCExtrema_POnCurv;
ref class OCExtrema_Array2OfPOnCurv;



public ref class OCExtrema_HArray2OfPOnCurv : OCMMgt_TShared {

protected:
  // dummy constructor;
  OCExtrema_HArray2OfPOnCurv(OCDummy^) : OCMMgt_TShared((OCDummy^)nullptr) {};

public:

// constructor from native
OCExtrema_HArray2OfPOnCurv(Handle(Extrema_HArray2OfPOnCurv)* nativeHandle);

// Methods PUBLIC


OCExtrema_HArray2OfPOnCurv(Standard_Integer R1, Standard_Integer R2, Standard_Integer C1, Standard_Integer C2);


OCExtrema_HArray2OfPOnCurv(Standard_Integer R1, Standard_Integer R2, Standard_Integer C1, Standard_Integer C2, OCNaroWrappers::OCExtrema_POnCurv^ V);


 /*instead*/  void Init(OCNaroWrappers::OCExtrema_POnCurv^ V) ;


 /*instead*/  Standard_Integer ColLength() ;


 /*instead*/  Standard_Integer RowLength() ;


 /*instead*/  Standard_Integer LowerCol() ;


 /*instead*/  Standard_Integer LowerRow() ;


 /*instead*/  Standard_Integer UpperCol() ;


 /*instead*/  Standard_Integer UpperRow() ;


 /*instead*/  void SetValue(Standard_Integer Row, Standard_Integer Col, OCNaroWrappers::OCExtrema_POnCurv^ Value) ;


 /*instead*/  OCExtrema_POnCurv^ Value(Standard_Integer Row, Standard_Integer Col) ;


 /*instead*/  OCExtrema_POnCurv^ ChangeValue(Standard_Integer Row, Standard_Integer Col) ;


 /*instead*/  OCExtrema_Array2OfPOnCurv^ Array2() ;


 /*instead*/  OCExtrema_Array2OfPOnCurv^ ChangeArray2() ;

~OCExtrema_HArray2OfPOnCurv()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif

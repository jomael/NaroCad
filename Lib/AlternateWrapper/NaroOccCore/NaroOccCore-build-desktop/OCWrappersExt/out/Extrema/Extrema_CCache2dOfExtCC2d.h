// File generated by CPPExt (Transient)
//
#ifndef _Extrema_CCache2dOfExtCC2d_OCWrappers_HeaderFile
#define _Extrema_CCache2dOfExtCC2d_OCWrappers_HeaderFile

// include the wrapped class
#include <Extrema_CCache2dOfExtCC2d.hxx>
#include "../Converter.h"

#include "../Standard/Standard_Transient.h"



namespace OCNaroWrappers
{

ref class OCTColgp_HArray1OfPnt2d;
ref class OCAdaptor2d_Curve2d;
ref class OCgp_Pnt2d;



public ref class OCExtrema_CCache2dOfExtCC2d : OCStandard_Transient {

protected:
  // dummy constructor;
  OCExtrema_CCache2dOfExtCC2d(OCDummy^) : OCStandard_Transient((OCDummy^)nullptr) {};

public:

// constructor from native
OCExtrema_CCache2dOfExtCC2d(Handle(Extrema_CCache2dOfExtCC2d)* nativeHandle);

// Methods PUBLIC


OCExtrema_CCache2dOfExtCC2d();


OCExtrema_CCache2dOfExtCC2d(OCNaroWrappers::OCAdaptor2d_Curve2d^ theC, Standard_Real theUFirst, Standard_Real theULast, Standard_Integer theNbSamples, System::Boolean theToCalculate);


 /*instead*/  void SetCurve(OCNaroWrappers::OCAdaptor2d_Curve2d^ theC, Standard_Integer theNbSamples, System::Boolean theToCalculate) ;


 /*instead*/  void SetCurve(OCNaroWrappers::OCAdaptor2d_Curve2d^ theC, Standard_Real theUFirst, Standard_Real theULast, Standard_Integer theNbSamples, System::Boolean theToCalculate) ;


 /*instead*/  void SetRange(Standard_Real Uinf, Standard_Real Usup, System::Boolean theToCalculate) ;


 /*instead*/  void CalculatePoints() ;


 /*instead*/  System::Boolean IsValid() ;


 /*instead*/  OCTColgp_HArray1OfPnt2d^ Points() ;


 /*instead*/  Standard_Address CurvePtr() ;


 /*instead*/  Standard_Integer NbSamples() ;


 /*instead*/  Standard_Real FirstParameter() ;


 /*instead*/  Standard_Real LastParameter() ;


 /*instead*/  Standard_Real TrimFirstParameter() ;


 /*instead*/  Standard_Real TrimLastParameter() ;

~OCExtrema_CCache2dOfExtCC2d()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif

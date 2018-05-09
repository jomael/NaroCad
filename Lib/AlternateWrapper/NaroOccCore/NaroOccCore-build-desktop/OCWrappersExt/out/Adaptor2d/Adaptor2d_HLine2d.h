// File generated by CPPExt (Transient)
//
#ifndef _Adaptor2d_HLine2d_OCWrappers_HeaderFile
#define _Adaptor2d_HLine2d_OCWrappers_HeaderFile

// include the wrapped class
#include <Adaptor2d_HLine2d.hxx>
#include "../Converter.h"

#include "Adaptor2d_HCurve2d.h"

#include "Adaptor2d_Line2d.h"


namespace OCNaroWrappers
{

ref class OCAdaptor2d_Line2d;
ref class OCAdaptor2d_Curve2d;



public ref class OCAdaptor2d_HLine2d : OCAdaptor2d_HCurve2d {

protected:
  // dummy constructor;
  OCAdaptor2d_HLine2d(OCDummy^) : OCAdaptor2d_HCurve2d((OCDummy^)nullptr) {};

public:

// constructor from native
OCAdaptor2d_HLine2d(Handle(Adaptor2d_HLine2d)* nativeHandle);

// Methods PUBLIC


OCAdaptor2d_HLine2d();


OCAdaptor2d_HLine2d(OCNaroWrappers::OCAdaptor2d_Line2d^ C);


 /*instead*/  void Set(OCNaroWrappers::OCAdaptor2d_Line2d^ C) ;


 /*instead*/  OCAdaptor2d_Curve2d^ Curve2d() ;


 /*instead*/  OCAdaptor2d_Line2d^ ChangeCurve2d() ;

~OCAdaptor2d_HLine2d()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif

// File generated by CPPExt (Transient)
//
#ifndef _BRepAdaptor_HCurve2d_OCWrappers_HeaderFile
#define _BRepAdaptor_HCurve2d_OCWrappers_HeaderFile

// include the wrapped class
#include <BRepAdaptor_HCurve2d.hxx>
#include "../Converter.h"

#include "../Adaptor2d/Adaptor2d_HCurve2d.h"

#include "BRepAdaptor_Curve2d.h"


namespace OCNaroWrappers
{

ref class OCBRepAdaptor_Curve2d;
ref class OCAdaptor2d_Curve2d;



public ref class OCBRepAdaptor_HCurve2d : OCAdaptor2d_HCurve2d {

protected:
  // dummy constructor;
  OCBRepAdaptor_HCurve2d(OCDummy^) : OCAdaptor2d_HCurve2d((OCDummy^)nullptr) {};

public:

// constructor from native
OCBRepAdaptor_HCurve2d(Handle(BRepAdaptor_HCurve2d)* nativeHandle);

// Methods PUBLIC


OCBRepAdaptor_HCurve2d();


OCBRepAdaptor_HCurve2d(OCNaroWrappers::OCBRepAdaptor_Curve2d^ C);


 /*instead*/  void Set(OCNaroWrappers::OCBRepAdaptor_Curve2d^ C) ;


 /*instead*/  OCAdaptor2d_Curve2d^ Curve2d() ;


 /*instead*/  OCBRepAdaptor_Curve2d^ ChangeCurve2d() ;

~OCBRepAdaptor_HCurve2d()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
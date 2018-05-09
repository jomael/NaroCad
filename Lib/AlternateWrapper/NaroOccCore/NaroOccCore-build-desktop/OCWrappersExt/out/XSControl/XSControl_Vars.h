// File generated by CPPExt (Transient)
//
#ifndef _XSControl_Vars_OCWrappers_HeaderFile
#define _XSControl_Vars_OCWrappers_HeaderFile

// include the wrapped class
#include <XSControl_Vars.hxx>
#include "../Converter.h"

#include "../MMgt/MMgt_TShared.h"



namespace OCNaroWrappers
{

ref class OCDico_DictionaryOfTransient;
ref class OCStandard_Transient;
ref class OCGeom_Geometry;
ref class OCGeom2d_Curve;
ref class OCGeom_Curve;
ref class OCGeom_Surface;
ref class OCgp_Pnt;
ref class OCgp_Pnt2d;
ref class OCTopoDS_Shape;


//! Defines a receptacle for externally defined variables, each <br>
//!           one has a name <br>
//! <br>
//!           I.E. a WorkSession for XSTEP is generally used inside a <br>
//!           context, which brings variables, especially shapes and <br>
//!           geometries. For instance DRAW or an application engine <br>
//! <br>
//!           This class provides a common form for this. It also provides <br>
//!           a default implementation (locally recorded variables in a <br>
//!           dictionary), but which is aimed to be redefined <br>
public ref class OCXSControl_Vars : OCMMgt_TShared {

protected:
  // dummy constructor;
  OCXSControl_Vars(OCDummy^) : OCMMgt_TShared((OCDummy^)nullptr) {};

public:

// constructor from native
OCXSControl_Vars(Handle(XSControl_Vars)* nativeHandle);

// Methods PUBLIC


OCXSControl_Vars();


virtual /*instead*/  void Set(System::String^ name, OCNaroWrappers::OCStandard_Transient^ val) ;


virtual /*instead*/  OCStandard_Transient^ Get(System::String^& name) ;


virtual /*instead*/  OCGeom_Geometry^ GetGeom(System::String^& name) ;


virtual /*instead*/  OCGeom2d_Curve^ GetCurve2d(System::String^& name) ;


virtual /*instead*/  OCGeom_Curve^ GetCurve(System::String^& name) ;


virtual /*instead*/  OCGeom_Surface^ GetSurface(System::String^& name) ;


virtual /*instead*/  void SetPoint(System::String^ name, OCNaroWrappers::OCgp_Pnt^ val) ;


virtual /*instead*/  void SetPoint2d(System::String^ name, OCNaroWrappers::OCgp_Pnt2d^ val) ;


virtual /*instead*/  System::Boolean GetPoint(System::String^& name, OCNaroWrappers::OCgp_Pnt^ pnt) ;


virtual /*instead*/  System::Boolean GetPoint2d(System::String^& name, OCNaroWrappers::OCgp_Pnt2d^ pnt) ;


virtual /*instead*/  void SetShape(System::String^ name, OCNaroWrappers::OCTopoDS_Shape^ val) ;


virtual /*instead*/  OCTopoDS_Shape^ GetShape(System::String^& name) ;

~OCXSControl_Vars()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif

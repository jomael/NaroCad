// File generated by CPPExt (Transient)
//
#ifndef _StepShape_HArray1OfOrientedEdge_OCWrappers_HeaderFile
#define _StepShape_HArray1OfOrientedEdge_OCWrappers_HeaderFile

// include the wrapped class
#include <StepShape_HArray1OfOrientedEdge.hxx>
#include "../Converter.h"

#include "../MMgt/MMgt_TShared.h"

#include "StepShape_Array1OfOrientedEdge.h"


namespace OCNaroWrappers
{

ref class OCStepShape_OrientedEdge;
ref class OCStepShape_Array1OfOrientedEdge;



public ref class OCStepShape_HArray1OfOrientedEdge : OCMMgt_TShared {

protected:
  // dummy constructor;
  OCStepShape_HArray1OfOrientedEdge(OCDummy^) : OCMMgt_TShared((OCDummy^)nullptr) {};

public:

// constructor from native
OCStepShape_HArray1OfOrientedEdge(Handle(StepShape_HArray1OfOrientedEdge)* nativeHandle);

// Methods PUBLIC


OCStepShape_HArray1OfOrientedEdge(Standard_Integer Low, Standard_Integer Up);


OCStepShape_HArray1OfOrientedEdge(Standard_Integer Low, Standard_Integer Up, OCNaroWrappers::OCStepShape_OrientedEdge^ V);


 /*instead*/  void Init(OCNaroWrappers::OCStepShape_OrientedEdge^ V) ;


 /*instead*/  Standard_Integer Length() ;


 /*instead*/  Standard_Integer Lower() ;


 /*instead*/  Standard_Integer Upper() ;


 /*instead*/  void SetValue(Standard_Integer Index, OCNaroWrappers::OCStepShape_OrientedEdge^ Value) ;


 /*instead*/  OCStepShape_OrientedEdge^ Value(Standard_Integer Index) ;


 /*instead*/  OCStepShape_OrientedEdge^ ChangeValue(Standard_Integer Index) ;


 /*instead*/  OCStepShape_Array1OfOrientedEdge^ Array1() ;


 /*instead*/  OCStepShape_Array1OfOrientedEdge^ ChangeArray1() ;

~OCStepShape_HArray1OfOrientedEdge()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif

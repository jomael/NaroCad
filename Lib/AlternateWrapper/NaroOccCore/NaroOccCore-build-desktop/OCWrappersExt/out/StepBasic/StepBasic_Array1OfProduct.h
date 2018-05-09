// File generated by CPPExt (MPV)
//
#ifndef _StepBasic_Array1OfProduct_OCWrappers_HeaderFile
#define _StepBasic_Array1OfProduct_OCWrappers_HeaderFile

// include native header
#include <StepBasic_Array1OfProduct.hxx>
#include "../Converter.h"




namespace OCNaroWrappers
{

ref class OCStepBasic_Product;



public ref class OCStepBasic_Array1OfProduct  {

protected:
  StepBasic_Array1OfProduct* nativeHandle;
  OCStepBasic_Array1OfProduct(OCDummy^) {};

public:
  property StepBasic_Array1OfProduct* Handle
  {
    StepBasic_Array1OfProduct* get()
    {
      return nativeHandle;
    }
  }


// constructor from native
OCStepBasic_Array1OfProduct(StepBasic_Array1OfProduct* nativeHandle);

// Methods PUBLIC


OCStepBasic_Array1OfProduct(Standard_Integer Low, Standard_Integer Up);


OCStepBasic_Array1OfProduct(OCNaroWrappers::OCStepBasic_Product^ Item, Standard_Integer Low, Standard_Integer Up);


 /*instead*/  void Init(OCNaroWrappers::OCStepBasic_Product^ V) ;


 /*instead*/  System::Boolean IsAllocated() ;


 /*instead*/  OCStepBasic_Array1OfProduct^ Assign(OCNaroWrappers::OCStepBasic_Array1OfProduct^ Other) ;


 /*instead*/  Standard_Integer Length() ;


 /*instead*/  Standard_Integer Lower() ;


 /*instead*/  Standard_Integer Upper() ;


 /*instead*/  void SetValue(Standard_Integer Index, OCNaroWrappers::OCStepBasic_Product^ Value) ;


 /*instead*/  OCStepBasic_Product^ Value(Standard_Integer Index) ;


 /*instead*/  OCStepBasic_Product^ ChangeValue(Standard_Integer Index) ;

~OCStepBasic_Array1OfProduct()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
// File generated by CPPExt (MPV)
//
#ifndef _TColgp_Array1OfXYZ_OCWrappers_HeaderFile
#define _TColgp_Array1OfXYZ_OCWrappers_HeaderFile

// include native header
#include <TColgp_Array1OfXYZ.hxx>
#include "../Converter.h"




namespace OCNaroWrappers
{

ref class OCgp_XYZ;



public ref class OCTColgp_Array1OfXYZ  {

protected:
  TColgp_Array1OfXYZ* nativeHandle;
  OCTColgp_Array1OfXYZ(OCDummy^) {};

public:
  property TColgp_Array1OfXYZ* Handle
  {
    TColgp_Array1OfXYZ* get()
    {
      return nativeHandle;
    }
  }


// constructor from native
OCTColgp_Array1OfXYZ(TColgp_Array1OfXYZ* nativeHandle);

// Methods PUBLIC


OCTColgp_Array1OfXYZ(Standard_Integer Low, Standard_Integer Up);


OCTColgp_Array1OfXYZ(OCNaroWrappers::OCgp_XYZ^ Item, Standard_Integer Low, Standard_Integer Up);


 /*instead*/  void Init(OCNaroWrappers::OCgp_XYZ^ V) ;


 /*instead*/  System::Boolean IsAllocated() ;


 /*instead*/  OCTColgp_Array1OfXYZ^ Assign(OCNaroWrappers::OCTColgp_Array1OfXYZ^ Other) ;


 /*instead*/  Standard_Integer Length() ;


 /*instead*/  Standard_Integer Lower() ;


 /*instead*/  Standard_Integer Upper() ;


 /*instead*/  void SetValue(Standard_Integer Index, OCNaroWrappers::OCgp_XYZ^ Value) ;


 /*instead*/  OCgp_XYZ^ Value(Standard_Integer Index) ;


 /*instead*/  OCgp_XYZ^ ChangeValue(Standard_Integer Index) ;

~OCTColgp_Array1OfXYZ()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif

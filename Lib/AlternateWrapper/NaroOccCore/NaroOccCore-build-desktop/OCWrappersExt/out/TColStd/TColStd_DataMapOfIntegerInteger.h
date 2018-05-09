// File generated by CPPExt (MPV)
//
#ifndef _TColStd_DataMapOfIntegerInteger_OCWrappers_HeaderFile
#define _TColStd_DataMapOfIntegerInteger_OCWrappers_HeaderFile

// include native header
#include <TColStd_DataMapOfIntegerInteger.hxx>
#include "../Converter.h"

#include "../TCollection/TCollection_BasicMap.h"

#include "../TCollection/TCollection_BasicMap.h"


namespace OCNaroWrappers
{

ref class OCTColStd_MapIntegerHasher;
ref class OCTColStd_DataMapNodeOfDataMapOfIntegerInteger;
ref class OCTColStd_DataMapIteratorOfDataMapOfIntegerInteger;



public ref class OCTColStd_DataMapOfIntegerInteger  : public OCTCollection_BasicMap {

protected:
  // dummy constructor;
  OCTColStd_DataMapOfIntegerInteger(OCDummy^) : OCTCollection_BasicMap((OCDummy^)nullptr) {};

public:

// constructor from native
OCTColStd_DataMapOfIntegerInteger(TColStd_DataMapOfIntegerInteger* nativeHandle);

// Methods PUBLIC


OCTColStd_DataMapOfIntegerInteger(Standard_Integer NbBuckets);


 /*instead*/  OCTColStd_DataMapOfIntegerInteger^ Assign(OCNaroWrappers::OCTColStd_DataMapOfIntegerInteger^ Other) ;


 /*instead*/  void ReSize(Standard_Integer NbBuckets) ;


 /*instead*/  System::Boolean Bind(Standard_Integer K, Standard_Integer I) ;


 /*instead*/  System::Boolean IsBound(Standard_Integer K) ;


 /*instead*/  System::Boolean UnBind(Standard_Integer K) ;


 /*instead*/  Standard_Integer Find(Standard_Integer K) ;


 /*instead*/  Standard_Integer ChangeFind(Standard_Integer K) ;


 /*instead*/  Standard_Address Find1(Standard_Integer K) ;


 /*instead*/  Standard_Address ChangeFind1(Standard_Integer K) ;

~OCTColStd_DataMapOfIntegerInteger()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
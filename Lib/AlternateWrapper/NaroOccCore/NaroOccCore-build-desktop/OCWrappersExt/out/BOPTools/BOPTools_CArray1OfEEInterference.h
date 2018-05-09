// File generated by CPPExt (MPV)
//
#ifndef _BOPTools_CArray1OfEEInterference_OCWrappers_HeaderFile
#define _BOPTools_CArray1OfEEInterference_OCWrappers_HeaderFile

// include native header
#include <BOPTools_CArray1OfEEInterference.hxx>
#include "../Converter.h"




namespace OCNaroWrappers
{

ref class OCBOPTools_EEInterference;



public ref class OCBOPTools_CArray1OfEEInterference  {

protected:
  BOPTools_CArray1OfEEInterference* nativeHandle;
  OCBOPTools_CArray1OfEEInterference(OCDummy^) {};

public:
  property BOPTools_CArray1OfEEInterference* Handle
  {
    BOPTools_CArray1OfEEInterference* get()
    {
      return nativeHandle;
    }
  }


// constructor from native
OCBOPTools_CArray1OfEEInterference(BOPTools_CArray1OfEEInterference* nativeHandle);

// Methods PUBLIC


OCBOPTools_CArray1OfEEInterference(Standard_Integer Length, Standard_Integer BlockLength);


 /*instead*/  void Resize(Standard_Integer theNewLength) ;


 /*instead*/  Standard_Integer Length() ;


 /*instead*/  Standard_Integer Extent() ;


 /*instead*/  Standard_Integer FactLength() ;


 /*instead*/  Standard_Integer Append(OCNaroWrappers::OCBOPTools_EEInterference^ Value) ;


 /*instead*/  void Remove(Standard_Integer Index) ;


 /*instead*/  OCBOPTools_EEInterference^ Value(Standard_Integer Index) ;


 /*instead*/  OCBOPTools_EEInterference^ ChangeValue(Standard_Integer Index) ;


 /*instead*/  void SetBlockLength(Standard_Integer aBL) ;


 /*instead*/  Standard_Integer BlockLength() ;


 /*instead*/  void Purge() ;

~OCBOPTools_CArray1OfEEInterference()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
// File generated by CPPExt (MPV)
//
#ifndef _BOPTools_CoupleOfIntegerMapHasher_OCWrappers_HeaderFile
#define _BOPTools_CoupleOfIntegerMapHasher_OCWrappers_HeaderFile

// include native header
#include <BOPTools_CoupleOfIntegerMapHasher.hxx>
#include "../Converter.h"




namespace OCNaroWrappers
{

ref class OCBOPTools_CoupleOfInteger;



public ref class OCBOPTools_CoupleOfIntegerMapHasher  {

protected:
  BOPTools_CoupleOfIntegerMapHasher* nativeHandle;
  OCBOPTools_CoupleOfIntegerMapHasher(OCDummy^) {};

public:
  property BOPTools_CoupleOfIntegerMapHasher* Handle
  {
    BOPTools_CoupleOfIntegerMapHasher* get()
    {
      return nativeHandle;
    }
  }


// constructor from native
OCBOPTools_CoupleOfIntegerMapHasher(BOPTools_CoupleOfIntegerMapHasher* nativeHandle);

// Methods PUBLIC


static /*instead*/  Standard_Integer HashCode(OCNaroWrappers::OCBOPTools_CoupleOfInteger^ aPKey, Standard_Integer Upper) ;


static /*instead*/  System::Boolean IsEqual(OCNaroWrappers::OCBOPTools_CoupleOfInteger^ aPKey1, OCNaroWrappers::OCBOPTools_CoupleOfInteger^ aPKey2) ;

~OCBOPTools_CoupleOfIntegerMapHasher()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
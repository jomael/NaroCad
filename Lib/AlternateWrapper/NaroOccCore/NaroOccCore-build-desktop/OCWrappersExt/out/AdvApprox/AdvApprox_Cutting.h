// File generated by CPPExt (MPV)
//
#ifndef _AdvApprox_Cutting_OCWrappers_HeaderFile
#define _AdvApprox_Cutting_OCWrappers_HeaderFile

// include native header
#include <AdvApprox_Cutting.hxx>
#include "../Converter.h"




namespace OCNaroWrappers
{



//! to choose the way of cutting in approximation <br>
public ref class OCAdvApprox_Cutting  {

protected:
  AdvApprox_Cutting* nativeHandle;
  OCAdvApprox_Cutting(OCDummy^) {};

public:
  property AdvApprox_Cutting* Handle
  {
    AdvApprox_Cutting* get()
    {
      return nativeHandle;
    }
  }


// constructor from native
OCAdvApprox_Cutting(AdvApprox_Cutting* nativeHandle);

// Methods PUBLIC


virtual /*instead*/  void Delete() ;

~OCAdvApprox_Cutting()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif

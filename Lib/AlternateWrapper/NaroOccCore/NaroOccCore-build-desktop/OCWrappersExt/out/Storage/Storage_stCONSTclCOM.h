// File generated by CPPExt (MPV)
//
#ifndef _Storage_stCONSTclCOM_OCWrappers_HeaderFile
#define _Storage_stCONSTclCOM_OCWrappers_HeaderFile

// include native header
#include <Storage_stCONSTclCOM.hxx>
#include "../Converter.h"




namespace OCNaroWrappers
{




public ref class OCStorage_stCONSTclCOM  {

protected:
  Storage_stCONSTclCOM* nativeHandle;
  OCStorage_stCONSTclCOM(OCDummy^) {};

public:
  property Storage_stCONSTclCOM* Handle
  {
    Storage_stCONSTclCOM* get()
    {
      return nativeHandle;
    }
  }


// constructor from native
OCStorage_stCONSTclCOM(Storage_stCONSTclCOM* nativeHandle);

// Methods PUBLIC

~OCStorage_stCONSTclCOM()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif

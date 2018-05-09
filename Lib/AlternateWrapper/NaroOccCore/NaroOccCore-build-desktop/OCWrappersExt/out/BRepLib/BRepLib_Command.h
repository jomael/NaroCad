// File generated by CPPExt (MPV)
//
#ifndef _BRepLib_Command_OCWrappers_HeaderFile
#define _BRepLib_Command_OCWrappers_HeaderFile

// include native header
#include <BRepLib_Command.hxx>
#include "../Converter.h"




namespace OCNaroWrappers
{



//! Root class for all commands in BRepLib. <br>
//! <br>
//!          Provides : <br>
//! <br>
//!          * Managements of the notDone flag. <br>
//! <br>
//!          * Catching of exceptions (not implemented). <br>
//! <br>
//!          * Logging (not implemented). <br>
public ref class OCBRepLib_Command  {

protected:
  BRepLib_Command* nativeHandle;
  OCBRepLib_Command(OCDummy^) {};

public:
  property BRepLib_Command* Handle
  {
    BRepLib_Command* get()
    {
      return nativeHandle;
    }
  }


// constructor from native
OCBRepLib_Command(BRepLib_Command* nativeHandle);

// Methods PUBLIC


virtual /*instead*/  void Delete() ;

//! Set done to False. <br>
OCBRepLib_Command();


 /*instead*/  System::Boolean IsDone() ;

//! Raises NotDone if done is false. <br>
 /*instead*/  void Check() ;

~OCBRepLib_Command()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif

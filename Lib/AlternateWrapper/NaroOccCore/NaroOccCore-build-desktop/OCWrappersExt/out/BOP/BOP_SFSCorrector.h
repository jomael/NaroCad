// File generated by CPPExt (MPV)
//
#ifndef _BOP_SFSCorrector_OCWrappers_HeaderFile
#define _BOP_SFSCorrector_OCWrappers_HeaderFile

// include native header
#include <BOP_SFSCorrector.hxx>
#include "../Converter.h"


#include "BOP_ShellFaceSet.h"
#include "BOP_ListOfConnexityBlock.h"


namespace OCNaroWrappers
{

ref class OCBOP_ShellFaceSet;



//!  the algorithm is to change the Shell Faces Set (SFS)contents. <br>
//!  The NewSFS will contain only shells <br>
//!  instead of shells and faces. <br>
//! <br>
public ref class OCBOP_SFSCorrector  {

protected:
  BOP_SFSCorrector* nativeHandle;
  OCBOP_SFSCorrector(OCDummy^) {};

public:
  property BOP_SFSCorrector* Handle
  {
    BOP_SFSCorrector* get()
    {
      return nativeHandle;
    }
  }


// constructor from native
OCBOP_SFSCorrector(BOP_SFSCorrector* nativeHandle);

// Methods PUBLIC


//! Empty constructor; <br>
OCBOP_SFSCorrector();


//! Modifier <br>
 /*instead*/  void SetSFS(OCNaroWrappers::OCBOP_ShellFaceSet^ aSFS) ;


//! Performs the algorithm of  two  steps <br>
//! 1. Make conexity blocks (  DoConnexityBlocks()  ) <br>
//! 2. Make corrections     (  DoCorrections()  ) <br>
 /*instead*/  void Do() ;


//! Selector <br>
 /*instead*/  System::Boolean IsDone() ;


//! Selector <br>
//! - 1 - Nothing is done because only constructor has been called <br>
 /*instead*/  Standard_Integer ErrorStatus() ;


//! Selector <br>
 /*instead*/  OCBOP_ShellFaceSet^ SFS() ;


//! Selector <br>
//! Returns the resulting SFS <br>
 /*instead*/  OCBOP_ShellFaceSet^ NewSFS() ;

~OCBOP_SFSCorrector()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif

// File generated by CPPExt (MPV)
//
#ifndef _BRepAlgoAPI_Cut_OCWrappers_HeaderFile
#define _BRepAlgoAPI_Cut_OCWrappers_HeaderFile

// include native header
#include <BRepAlgoAPI_Cut.hxx>
#include "../Converter.h"

#include "BRepAlgoAPI_BooleanOperation.h"

#include "BRepAlgoAPI_BooleanOperation.h"


namespace OCNaroWrappers
{

ref class OCTopoDS_Shape;
ref class OCBOPTools_DSFiller;



//! Created on: 1993-10-14 <br>
//! Created by: Remi LEQUETTE <br>
//! Copyright (c) 1993-1999 Matra Datavision <br>
//! Copyright (c) 1999-2012 OPEN CASCADE SAS <br>//!  The class Cut provides a Boolean <br>
//! cut operation on a pair of arguments (Boolean Subtraction). <br>
//! The class Cut provides a framework for: <br>
//!   -      Defining the construction of a cut shape <br>
//!   -      Implementing the building algorithm <br>
//!   -      Consulting the result <br>
public ref class OCBRepAlgoAPI_Cut  : public OCBRepAlgoAPI_BooleanOperation {

protected:
  // dummy constructor;
  OCBRepAlgoAPI_Cut(OCDummy^) : OCBRepAlgoAPI_BooleanOperation((OCDummy^)nullptr) {};

public:

// constructor from native
OCBRepAlgoAPI_Cut(BRepAlgoAPI_Cut* nativeHandle);

// Methods PUBLIC

//! Shape aS2 cuts shape aS1. The <br>
//! resulting shape is a new shape produced by the cut operation. <br>
OCBRepAlgoAPI_Cut(OCNaroWrappers::OCTopoDS_Shape^ S1, OCNaroWrappers::OCTopoDS_Shape^ S2);

//! Constructs a new shape cut from <br>
//! shape aS1 by shape aS2 using aDSFiller (see <br>
//! BRepAlgoAPI_BooleanOperation Constructor). <br>
OCBRepAlgoAPI_Cut(OCNaroWrappers::OCTopoDS_Shape^ S1, OCNaroWrappers::OCTopoDS_Shape^ S2, OCNaroWrappers::OCBOPTools_DSFiller^ aDSF, System::Boolean bFWD);

~OCBRepAlgoAPI_Cut()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif

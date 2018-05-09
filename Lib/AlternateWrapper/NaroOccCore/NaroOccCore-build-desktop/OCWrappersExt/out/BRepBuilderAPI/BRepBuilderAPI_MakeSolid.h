// File generated by CPPExt (MPV)
//
#ifndef _BRepBuilderAPI_MakeSolid_OCWrappers_HeaderFile
#define _BRepBuilderAPI_MakeSolid_OCWrappers_HeaderFile

// include native header
#include <BRepBuilderAPI_MakeSolid.hxx>
#include "../Converter.h"

#include "BRepBuilderAPI_MakeShape.h"

#include "../BRepLib/BRepLib_MakeSolid.h"
#include "BRepBuilderAPI_MakeShape.h"


namespace OCNaroWrappers
{

ref class OCTopoDS_CompSolid;
ref class OCTopoDS_Shell;
ref class OCTopoDS_Solid;
ref class OCTopoDS_Shape;


//! Describes functions to build a solid from shells. <br>
//! A solid is made of one shell, or a series of shells, which <br>
//! do not intersect each other. One of these shells <br>
//! constitutes the outside skin of the solid. It may be closed <br>
//! (a finite solid) or open (an infinite solid). Other shells <br>
//! form hollows (cavities) in these previous ones. Each <br>
//! must bound a closed volume. <br>
//! A MakeSolid object provides a framework for: <br>
//! -   defining and implementing the construction of a solid, and <br>
//! -   consulting the result. <br>
public ref class OCBRepBuilderAPI_MakeSolid  : public OCBRepBuilderAPI_MakeShape {

protected:
  // dummy constructor;
  OCBRepBuilderAPI_MakeSolid(OCDummy^) : OCBRepBuilderAPI_MakeShape((OCDummy^)nullptr) {};

public:

// constructor from native
OCBRepBuilderAPI_MakeSolid(BRepBuilderAPI_MakeSolid* nativeHandle);

// Methods PUBLIC

//! Initializes the construction of a solid. An empty solid is <br>
//! considered to cover the whole space. The Add function <br>
//! is used to define shells to bound it. <br>
OCBRepBuilderAPI_MakeSolid();

//! Make a solid from a CompSolid. <br>
OCBRepBuilderAPI_MakeSolid(OCNaroWrappers::OCTopoDS_CompSolid^ S);

//! Make a solid from a shell. <br>
OCBRepBuilderAPI_MakeSolid(OCNaroWrappers::OCTopoDS_Shell^ S);

//! Make a solid from two shells. <br>
OCBRepBuilderAPI_MakeSolid(OCNaroWrappers::OCTopoDS_Shell^ S1, OCNaroWrappers::OCTopoDS_Shell^ S2);

//! Make a solid from three shells. <br>//! Constructs a solid <br>
//! -   covering the whole space, or <br>
//! -   from shell S, or <br>
//! -   from two shells S1 and S2, or <br>
//! -   from three shells S1, S2 and S3, or <br>
//! Warning <br>
//! No check is done to verify the conditions of coherence <br>
//! of the resulting solid. In particular, S1, S2 (and S3) must <br>
//! not intersect each other. <br>
//! Besides, after all shells have been added using the Add <br>
//! function, one of these shells should constitute the outside <br>
//! skin of the solid; it may be closed (a finite solid) or open <br>
//! (an infinite solid). Other shells form hollows (cavities) in <br>
//! these previous ones. Each must bound a closed volume. <br>
OCBRepBuilderAPI_MakeSolid(OCNaroWrappers::OCTopoDS_Shell^ S1, OCNaroWrappers::OCTopoDS_Shell^ S2, OCNaroWrappers::OCTopoDS_Shell^ S3);

//! Make a solid from a solid. Usefull for adding later. <br>
OCBRepBuilderAPI_MakeSolid(OCNaroWrappers::OCTopoDS_Solid^ So);

//! Add a shell to a solid. <br>
//! Constructs a solid: <br>
//! -   from the solid So, to which shells can be added, or <br>
//! -   by adding the shell S to the solid So. <br>
//!   Warning <br>
//! No check is done to verify the conditions of coherence <br>
//! of the resulting solid. In particular S must not intersect the solid S0. <br>
//! Besides, after all shells have been added using the Add <br>
//! function, one of these shells should constitute the outside <br>
//! skin of the solid. It may be closed (a finite solid) or open <br>
//! (an infinite solid). Other shells form hollows (cavities) in <br>
//! the previous ones. Each must bound a closed volume. <br>
OCBRepBuilderAPI_MakeSolid(OCNaroWrappers::OCTopoDS_Solid^ So, OCNaroWrappers::OCTopoDS_Shell^ S);

//! Adds the shell to the current solid. <br>
//!	Warning <br>
//! No check is done to verify the conditions of coherence <br>
//! of the resulting solid. In particular, S must not intersect <br>
//! other shells of the solid under construction. <br>
//! Besides, after all shells have been added, one of <br>
//! these shells should constitute the outside skin of the <br>
//! solid. It may be closed (a finite solid) or open (an <br>
//! infinite solid). Other shells form hollows (cavities) in <br>
//! these previous ones. Each must bound a closed volume. <br>
 /*instead*/  void Add(OCNaroWrappers::OCTopoDS_Shell^ S) ;

//! Returns true if the solid is built. <br>
//! For this class, a solid under construction is always valid. <br>
//! If no shell has been added, it could be a whole-space <br>
//! solid. However, no check was done to verify the <br>
//! conditions of coherence of the resulting solid. <br>
virtual /*instead*/  System::Boolean IsDone() override;

//! Returns the new Solid. <br>
//! <br>
 /*instead*/  OCTopoDS_Solid^ Solid() ;


virtual /*instead*/  System::Boolean IsDeleted(OCNaroWrappers::OCTopoDS_Shape^ S) override;

~OCBRepBuilderAPI_MakeSolid()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif

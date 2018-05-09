// File generated by CPPExt (Transient)
//
#ifndef _PrsMgr_Prs_OCWrappers_HeaderFile
#define _PrsMgr_Prs_OCWrappers_HeaderFile

// include the wrapped class
#include <PrsMgr_Prs.hxx>
#include "../Converter.h"

#include "../Prs3d/Prs3d_Presentation.h"

#include "PrsMgr_TypeOfPresentation3d.h"


namespace OCNaroWrappers
{

ref class OCGraphic3d_StructureManager;
ref class OCGraphic3d_Structure;
ref class OCGraphic3d_DataStructureManager;
ref class OCTColStd_Array2OfReal;



public ref class OCPrsMgr_Prs : OCPrs3d_Presentation {

protected:
  // dummy constructor;
  OCPrsMgr_Prs(OCDummy^) : OCPrs3d_Presentation((OCDummy^)nullptr) {};

public:

// constructor from native
OCPrsMgr_Prs(Handle(PrsMgr_Prs)* nativeHandle);

// Methods PUBLIC


OCPrsMgr_Prs(OCNaroWrappers::OCGraphic3d_StructureManager^ aStructureManager, PrsMgr_Presentation3dPointer aPresentation, OCPrsMgr_TypeOfPresentation3d aTypeOfPresentation3d);


virtual /*instead*/  OCGraphic3d_Structure^ Compute(OCNaroWrappers::OCGraphic3d_DataStructureManager^ aProjector) override;

//! the "degenerated" Structure is displayed with <br>
//!          a transformation defined by <AMatrix> <br>
//!          which is not a Pure Translation. <br>
//!          We have to take in account this Transformation <br>
//!          in the computation of hidden line removal... <br>
//!          returns a filled Graphic Structure. <br>
virtual /*instead*/  OCGraphic3d_Structure^ Compute(OCNaroWrappers::OCGraphic3d_DataStructureManager^ aProjector, OCNaroWrappers::OCTColStd_Array2OfReal^ AMatrix) override;

//! No need to return a structure, just to fill <br>
//!          <ComputedStruct> .... <br>
virtual /*instead*/  void Compute(OCNaroWrappers::OCGraphic3d_DataStructureManager^ aProjector, OCNaroWrappers::OCGraphic3d_Structure^ ComputedStruct) override;

//! No Need to return a Structure, just to <br>
//!          Fill <aStructure>. The Trsf has to be taken in account <br>
//!          in the computation (Rotation Part....) <br>
virtual /*instead*/  void Compute(OCNaroWrappers::OCGraphic3d_DataStructureManager^ aProjector, OCNaroWrappers::OCTColStd_Array2OfReal^ AMatrix, OCNaroWrappers::OCGraphic3d_Structure^ aStructure) override;

~OCPrsMgr_Prs()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif

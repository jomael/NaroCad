// File generated by CPPExt (MPV)
//
#ifndef _BRepSweep_Trsf_OCWrappers_HeaderFile
#define _BRepSweep_Trsf_OCWrappers_HeaderFile

// include native header
#include <BRepSweep_Trsf.hxx>
#include "../Converter.h"

#include "BRepSweep_NumLinearRegularSweep.h"

#include "../TopLoc/TopLoc_Location.h"
#include "BRepSweep_NumLinearRegularSweep.h"
#include "../TopAbs/TopAbs_Orientation.h"


namespace OCNaroWrappers
{

ref class OCBRep_Builder;
ref class OCTopoDS_Shape;
ref class OCSweep_NumShape;
ref class OCTopLoc_Location;


//! This class is inherited from NumLinearRegularSweep <br>
//!          to  implement the  simple   swept primitives built <br>
//!          moving a Shape with a Trsf.  It  often is possible <br>
//!          to  build  the constructed subshapes  by  a simple <br>
//!          move of the  generating subshapes (shared topology <br>
//!          and geometry).   So two  ways of construction  are <br>
//!          proposed : <br>
//! <br>
public ref class OCBRepSweep_Trsf  : public OCBRepSweep_NumLinearRegularSweep {

protected:
  // dummy constructor;
  OCBRepSweep_Trsf(OCDummy^) : OCBRepSweep_NumLinearRegularSweep((OCDummy^)nullptr) {};

public:

// constructor from native
OCBRepSweep_Trsf(BRepSweep_Trsf* nativeHandle);

// Methods PUBLIC


virtual /*instead*/  void Delete() override;

//! Initialize  the Trsf BrepSweep, if  aCopy  is true <br>
//!          the  basis elements  are    shared  as   often  as <br>
//!          possible, else everything is copied. <br>
//! <br>
OCBRepSweep_Trsf(OCNaroWrappers::OCBRep_Builder^ aBuilder, OCNaroWrappers::OCTopoDS_Shape^ aGenShape, OCNaroWrappers::OCSweep_NumShape^ aDirWire, OCNaroWrappers::OCTopLoc_Location^ aLocation, System::Boolean aCopy);

//! ends  the  construction  of the   swept  primitive <br>
//!          calling the virtual geometric functions that can't <br>
//!          be called in the initialize. <br>
 /*instead*/  void Init() ;

//! function called to analize the way of construction <br>
//!          of the shapes generated by aGenS and aDirV. <br>
 /*instead*/  System::Boolean Process(OCNaroWrappers::OCTopoDS_Shape^ aGenS, OCNaroWrappers::OCSweep_NumShape^ aDirV) ;

//! Called to propagate the continuity of  every vertex <br>
//!          between two edges of the  generating wire  aGenS on <br>
//!          the generated edge and faces. <br>
 /*instead*/  void SetContinuity(OCNaroWrappers::OCTopoDS_Shape^ aGenS, OCNaroWrappers::OCSweep_NumShape^ aDirS) ;

~OCBRepSweep_Trsf()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif

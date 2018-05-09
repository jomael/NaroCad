// File generated by CPPExt (Package)
//

#ifndef _ChFi3d_OCWrappers_HeaderFile
#define _ChFi3d_OCWrappers_HeaderFile

// Include the wrapped header
#include <ChFi3d.hxx>

#include "ChFi3d_Builder.h"
#include "ChFi3d_ChBuilder.h"
#include "ChFi3d_FilBuilder.h"
#include "ChFi3d_SearchSing.h"


namespace OCNaroWrappers
{
//! creation of spatial fillets on a solid. <br>
public ref class OCChFi3d abstract sealed
{

public:
// Methods


static /*instead*/  Standard_Integer ConcaveSide(OCNaroWrappers::OCBRepAdaptor_Surface^ S1, OCNaroWrappers::OCBRepAdaptor_Surface^ S2, OCNaroWrappers::OCTopoDS_Edge^ E, OCTopAbs_Orientation& Or1, OCTopAbs_Orientation& Or2) ;


static /*instead*/  Standard_Integer NextSide(OCTopAbs_Orientation& Or1, OCTopAbs_Orientation& Or2, OCTopAbs_Orientation OrSave1, OCTopAbs_Orientation OrSave2, Standard_Integer ChoixSauv) ;

//! Same  as  the  other NextSide, but the calculation is  done <br>
//!          on an edge  only. <br>
static /*instead*/  void NextSide(OCTopAbs_Orientation& Or, OCTopAbs_Orientation OrSave, OCTopAbs_Orientation OrFace) ;


static /*instead*/  System::Boolean SameSide(OCTopAbs_Orientation Or, OCTopAbs_Orientation OrSave1, OCTopAbs_Orientation OrSave2, OCTopAbs_Orientation OrFace1, OCTopAbs_Orientation OrFace2) ;


};

}; // OCNaroWrappers

#endif

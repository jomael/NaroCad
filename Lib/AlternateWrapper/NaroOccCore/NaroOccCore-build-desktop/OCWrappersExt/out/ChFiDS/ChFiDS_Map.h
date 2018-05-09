// File generated by CPPExt (MPV)
//
#ifndef _ChFiDS_Map_OCWrappers_HeaderFile
#define _ChFiDS_Map_OCWrappers_HeaderFile

// include native header
#include <ChFiDS_Map.hxx>
#include "../Converter.h"


#include "../TopTools/TopTools_IndexedDataMapOfShapeListOfShape.h"
#include "../TopAbs/TopAbs_ShapeEnum.h"


namespace OCNaroWrappers
{

ref class OCTopoDS_Shape;
ref class OCTopTools_ListOfShape;


//! Encapsulation of IndexedDataMapOfShapeListOfShape. <br>
public ref class OCChFiDS_Map  {

protected:
  ChFiDS_Map* nativeHandle;
  OCChFiDS_Map(OCDummy^) {};

public:
  property ChFiDS_Map* Handle
  {
    ChFiDS_Map* get()
    {
      return nativeHandle;
    }
  }


// constructor from native
OCChFiDS_Map(ChFiDS_Map* nativeHandle);

// Methods PUBLIC

//!  Create an empty Map <br>
OCChFiDS_Map();

//! Fills the map with the subshapes of type T1 as keys <br>
//!          and the list of ancestors  of type T2 as items. <br>
 /*instead*/  void Fill(OCNaroWrappers::OCTopoDS_Shape^ S, OCTopAbs_ShapeEnum T1, OCTopAbs_ShapeEnum T2) ;


 /*instead*/  System::Boolean Contains(OCNaroWrappers::OCTopoDS_Shape^ S) ;


 /*instead*/  OCTopTools_ListOfShape^ FindFromKey(OCNaroWrappers::OCTopoDS_Shape^ S) ;


 /*instead*/  OCTopTools_ListOfShape^ FindFromIndex(Standard_Integer I) ;

~OCChFiDS_Map()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif

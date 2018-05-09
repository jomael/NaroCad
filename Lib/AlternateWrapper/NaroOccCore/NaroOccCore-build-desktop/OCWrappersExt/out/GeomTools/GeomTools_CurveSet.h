// File generated by CPPExt (MPV)
//
#ifndef _GeomTools_CurveSet_OCWrappers_HeaderFile
#define _GeomTools_CurveSet_OCWrappers_HeaderFile

// include native header
#include <GeomTools_CurveSet.hxx>
#include "../Converter.h"


#include "../TColStd/TColStd_IndexedMapOfTransient.h"


namespace OCNaroWrappers
{

ref class OCMessage_ProgressIndicator;
ref class OCGeom_Curve;


//! Stores a set of Curves from Geom. <br>
public ref class OCGeomTools_CurveSet  {

protected:
  GeomTools_CurveSet* nativeHandle;
  OCGeomTools_CurveSet(OCDummy^) {};

public:
  property GeomTools_CurveSet* Handle
  {
    GeomTools_CurveSet* get()
    {
      return nativeHandle;
    }
  }


// constructor from native
OCGeomTools_CurveSet(GeomTools_CurveSet* nativeHandle);

// Methods PUBLIC

//! Returns an empty set of Curves. <br>
OCGeomTools_CurveSet();

//! Clears the content of the set. <br>
 /*instead*/  void Clear() ;

//! Incorporate a new Curve in the  set and returns <br>
//!          its index. <br>
 /*instead*/  Standard_Integer Add(OCNaroWrappers::OCGeom_Curve^ C) ;

//! Returns the Curve of index <I>. <br>
 /*instead*/  OCGeom_Curve^ Curve(Standard_Integer I) ;

//! Returns the index of <L>. <br>
 /*instead*/  Standard_Integer Index(OCNaroWrappers::OCGeom_Curve^ C) ;

//! Dumps the content of me on the stream <OS>. <br>
 /*instead*/  void Dump(Standard_OStream& OS) ;

//! Writes the content of  me  on the stream <OS> in a <br>
//!          format that can be read back by Read. <br>
 /*instead*/  void Write(Standard_OStream& OS) ;

//! Reads the content of me from the  stream  <IS>. me <br>
//!          is first cleared. <br>
//! <br>
 /*instead*/  void Read(Standard_IStream& IS) ;

//! Dumps the curve on the stream,  if compact is True <br>
//!          use the compact format that can be read back. <br>
static /*instead*/  void PrintCurve(OCNaroWrappers::OCGeom_Curve^ C, Standard_OStream& OS, System::Boolean compact) ;

//! Reads the curve  from  the stream.  The  curve  is <br>
//!          assumed   to have  been  writtent  with  the Print <br>
//!          method (compact = True). <br>
//! <br>
static /*instead*/  Standard_IStream& ReadCurve(Standard_IStream& IS, OCNaroWrappers::OCGeom_Curve^ C) ;


 /*instead*/  void SetProgress(OCNaroWrappers::OCMessage_ProgressIndicator^ PR) ;


 /*instead*/  OCMessage_ProgressIndicator^ GetProgress() ;

~OCGeomTools_CurveSet()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
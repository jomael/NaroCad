// File generated by CPPExt (MPV)
//
#ifndef _ShapeAnalysis_ShapeTolerance_OCWrappers_HeaderFile
#define _ShapeAnalysis_ShapeTolerance_OCWrappers_HeaderFile

// include native header
#include <ShapeAnalysis_ShapeTolerance.hxx>
#include "../Converter.h"


#include "../TopAbs/TopAbs_ShapeEnum.h"


namespace OCNaroWrappers
{

ref class OCTopoDS_Shape;
ref class OCTopTools_HSequenceOfShape;


//! Tool for computing shape tolerances (minimal, maximal, average), <br>
//!          finding shape with tolerance matching given criteria, <br>
//!          setting or limitating tolerances. <br>
public ref class OCShapeAnalysis_ShapeTolerance  {

protected:
  ShapeAnalysis_ShapeTolerance* nativeHandle;
  OCShapeAnalysis_ShapeTolerance(OCDummy^) {};

public:
  property ShapeAnalysis_ShapeTolerance* Handle
  {
    ShapeAnalysis_ShapeTolerance* get()
    {
      return nativeHandle;
    }
  }


// constructor from native
OCShapeAnalysis_ShapeTolerance(ShapeAnalysis_ShapeTolerance* nativeHandle);

// Methods PUBLIC

//! Empty constructor <br>
OCShapeAnalysis_ShapeTolerance();

//! Determines a tolerance from the ones stored in a shape <br>
//!          Remark : calls InitTolerance and AddTolerance, <br>
//!          hence, can be used to start a series for cumulating tolerance <br>
//!          <mode> = 0 : returns the average value between sub-shapes, <br>
//!          <mode> > 0 : returns the maximal found, <br>
//!          <mode> < 0 : returns the minimal found. <br>
//!          <type> defines what kinds of sub-shapes to consider: <br>
//!          SHAPE (default) : all : VERTEX, EDGE, FACE, <br>
//!          VERTEX : only vertices, <br>
//!          EDGE   : only edges, <br>
//!          FACE   : only faces, <br>
//!          SHELL  : combined SHELL + FACE, for each face (and containing <br>
//!          shell), also checks EDGE and VERTEX <br>
 /*instead*/  Standard_Real Tolerance(OCNaroWrappers::OCTopoDS_Shape^ shape, Standard_Integer mode, OCTopAbs_ShapeEnum type) ;

//! Determines which shapes have a tolerance over the given value <br>
//!          <type> is interpreted as in the method Tolerance <br>
 /*instead*/  OCTopTools_HSequenceOfShape^ OverTolerance(OCNaroWrappers::OCTopoDS_Shape^ shape, Standard_Real value, OCTopAbs_ShapeEnum type) ;

//! Determines which shapes have a tolerance within a given interval <br>
//!          <type> is interpreted as in the method Tolerance <br>
 /*instead*/  OCTopTools_HSequenceOfShape^ InTolerance(OCNaroWrappers::OCTopoDS_Shape^ shape, Standard_Real valmin, Standard_Real valmax, OCTopAbs_ShapeEnum type) ;

//! Initializes computation of cumulated tolerance <br>
 /*instead*/  void InitTolerance() ;

//! Adds data on new Shape to compute Cumulated Tolerance <br>
//!          (prepares three computations : maximal, average, minimal) <br>
 /*instead*/  void AddTolerance(OCNaroWrappers::OCTopoDS_Shape^ shape, OCTopAbs_ShapeEnum type) ;

//! Returns the computed tolerance according to the <mode> <br>
//!          <mode> = 0 : average <br>
//!          <mode> > 0 : maximal <br>
//!          <mode> < 0 : minimal <br>
 /*instead*/  Standard_Real GlobalTolerance(Standard_Integer mode) ;

~OCShapeAnalysis_ShapeTolerance()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif

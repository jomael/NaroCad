// File generated by CPPExt (MPV)
//
#ifndef _BRepOffsetAPI_FindContigousEdges_OCWrappers_HeaderFile
#define _BRepOffsetAPI_FindContigousEdges_OCWrappers_HeaderFile

// include native header
#include <BRepOffsetAPI_FindContigousEdges.hxx>
#include "../Converter.h"




namespace OCNaroWrappers
{

ref class OCBRepBuilderAPI_Sewing;
ref class OCTopoDS_Shape;
ref class OCTopoDS_Edge;
ref class OCTopTools_ListOfShape;


//! Provides methods to identify contigous boundaries <br>
//!          for continuity control (C0, C1, ...) <br>
//! <br>
//!          Use this function as following: <br>
//!            - create an object <br>
//!                - default tolerance 1.E-06 <br>
//!                - with analysis of degenerated faces on <br>
//!                - define if necessary a new tolerance <br>
//!                - set if necessary analysis of degenerated shapes off <br>
//!            - add shapes to be controlled -> Add <br>
//!            - compute -> Perfom <br>
//!            - output couples of connected edges for control <br>
//!            - output the problems if any <br>
public ref class OCBRepOffsetAPI_FindContigousEdges  {

protected:
  BRepOffsetAPI_FindContigousEdges* nativeHandle;
  OCBRepOffsetAPI_FindContigousEdges(OCDummy^) {};

public:
  property BRepOffsetAPI_FindContigousEdges* Handle
  {
    BRepOffsetAPI_FindContigousEdges* get()
    {
      return nativeHandle;
    }
  }


// constructor from native
OCBRepOffsetAPI_FindContigousEdges(BRepOffsetAPI_FindContigousEdges* nativeHandle);

// Methods PUBLIC

//! Initializes an algorithm for identifying contiguous edges <br>
//! on shapes with tolerance as the tolerance of contiguity <br>
//! (defaulted to 1.0e-6). This tolerance value is used to <br>
//! determine whether two edges or sections of edges are coincident. <br>
//! Use the function Add to define the shapes to be checked. <br>
//! Set option to false. This argument (defaulted to true) will <br>
//! serve in subsequent software releases for performing an <br>
//! analysis of degenerated shapes. <br>
OCBRepOffsetAPI_FindContigousEdges(Standard_Real tolerance, System::Boolean option);

//! Initializes this algorithm for identifying contiguous edges <br>
//! on shapes using the tolerance of contiguity tolerance. <br>
//! This tolerance value is used to determine whether two <br>
//! edges or sections of edges are coincident. <br>
//! Use the function Add to define the shapes to be checked. <br>
//! Sets <option> to false. <br>
 /*instead*/  void Init(Standard_Real tolerance, System::Boolean option) ;

//! Adds the shape shape to the list of shapes to be <br>
//! checked by this algorithm. <br>
//! Once all the shapes to be checked have been added, <br>
//! use the function Perform to find the contiguous edges <br>
//! and the function ContigousEdge to return these edges. <br>
 /*instead*/  void Add(OCNaroWrappers::OCTopoDS_Shape^ shape) ;

//! Finds coincident parts of edges of two or more shapes <br>
//! added to this algorithm and breaks down these edges <br>
//! into contiguous and non-contiguous sections on copies <br>
//! of the initial shapes. <br>
//!        The function ContigousEdge returns contiguous <br>
//! edges. The function Modified can be used to return <br>
//! modified copies of the initial shapes where one or more <br>
//! edges were broken down into contiguous and non-contiguous sections. <br>
//! Warning <br>
//! This function must be used once all the shapes to be <br>
//! checked have been added. It is not possible to add <br>
//! further shapes subsequently and then to repeat the call to Perform. <br>
 /*instead*/  void Perform() ;

//! Gives  the number  of edges (free  edges + contigous <br>
//!          edges  +  multiple edge) <br>
 /*instead*/  Standard_Integer NbEdges() ;

//! Returns the number of contiguous edges found by the <br>
//! function Perform on the shapes added to this algorithm. <br>
 /*instead*/  Standard_Integer NbContigousEdges() ;

//! Returns the contiguous edge of index index found by <br>
//! the function Perform on the shapes added to this algorithm. <br>
//! Exceptions <br>
//! Standard_OutOfRange if: <br>
//! - index is less than 1, or <br>
//! - index is greater than the number of contiguous <br>
//!   edges found by the function Perform on the shapes added to this algorithm. <br>
 /*instead*/  OCTopoDS_Edge^ ContigousEdge(Standard_Integer index) ;

//! Returns a list of edges coincident with the contiguous <br>
//! edge of index index found by the function Perform. <br>
//! There are as many edges in the list as there are faces <br>
//! adjacent to this contiguous edge. <br>
//! Exceptions <br>
//! Standard_OutOfRange if: <br>
//! - index is less than 1, or <br>
//! - index is greater than the number of contiguous edges <br>
//!   found by the function Perform on the shapes added to this algorithm. <br>
 /*instead*/  OCTopTools_ListOfShape^ ContigousEdgeCouple(Standard_Integer index) ;

//! Returns the edge on the initial shape, of which the <br>
//! modified copy contains the edge section. <br>
//! section is coincident with a contiguous edge found by <br>
//! the function Perform. Use the function <br>
//! ContigousEdgeCouple to obtain a valid section. <br>
//! This information is useful for verification purposes, since <br>
//! it provides a means of determining the surface to which <br>
//! the contiguous edge belongs. <br>
//! Exceptions <br>
//! Standard_NoSuchObject if section is not coincident <br>
//! with a contiguous edge. Use the function <br>
//! ContigousEdgeCouple to obtain a valid section. <br>
 /*instead*/  OCTopoDS_Edge^ SectionToBoundary(OCNaroWrappers::OCTopoDS_Edge^ section) ;

//! Gives the number of degenerated shapes <br>
 /*instead*/  Standard_Integer NbDegeneratedShapes() ;

//! Gives a degenerated shape <br>
 /*instead*/  OCTopoDS_Shape^ DegeneratedShape(Standard_Integer index) ;

//! Indicates if a input shape is degenerated <br>
 /*instead*/  System::Boolean IsDegenerated(OCNaroWrappers::OCTopoDS_Shape^ shape) ;

//! Returns true if the copy of the initial shape shape was <br>
//! modified by the function Perform (i.e. if one or more of <br>
//! its edges was broken down into contiguous and non-contiguous sections). <br>
//! Warning <br>
//! Returns false if shape is not one of the initial shapes <br>
//! added to this algorithm. <br>
 /*instead*/  System::Boolean IsModified(OCNaroWrappers::OCTopoDS_Shape^ shape) ;

//! Gives a modifieded shape <br>
//! Raises   NoSuchObject if shape has not been modified <br>
 /*instead*/  OCTopoDS_Shape^ Modified(OCNaroWrappers::OCTopoDS_Shape^ shape) ;

//! Dump properties of resulting shape. <br>
 /*instead*/  void Dump() ;

~OCBRepOffsetAPI_FindContigousEdges()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif

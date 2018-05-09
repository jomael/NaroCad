// File generated by CPPExt (MPV)
//
#ifndef _IntPatch_TheRstIntOfIntersection_OCWrappers_HeaderFile
#define _IntPatch_TheRstIntOfIntersection_OCWrappers_HeaderFile

// include native header
#include <IntPatch_TheRstIntOfIntersection.hxx>
#include "../Converter.h"




namespace OCNaroWrappers
{

ref class OCAdaptor3d_HVertex;
ref class OCAdaptor2d_HCurve2d;
ref class OCAdaptor3d_HSurface;
ref class OCIntPatch_HCurve2dTool;
ref class OCIntPatch_HSurfaceTool;
ref class OCAdaptor3d_TopolTool;
ref class OCIntPatch_HInterTool;
ref class OCIntPatch_ThePointOfIntersection;
ref class OCIntPatch_SequenceOfPointOfIntersection;
ref class OCIntPatch_TheWLineOfIntersection;
ref class OCIntPatch_TheRLineOfIntersection;
ref class OCIntPatch_LPolygoOfTheRstIntOfIntersection;
ref class OCIntPatch_APolygoOfTheRstIntOfIntersection;
ref class OCIntPatch_SearchPntOfTheRstIntOfIntersection;
ref class OCIntPatch_CSFunctionOfTheRstIntOfIntersection;
ref class OCIntPatch_CurvIntSurfOfTheRstIntOfIntersection;
ref class OCIntPatch_Line;



public ref class OCIntPatch_TheRstIntOfIntersection  {

protected:
  IntPatch_TheRstIntOfIntersection* nativeHandle;
  OCIntPatch_TheRstIntOfIntersection(OCDummy^) {};

public:
  property IntPatch_TheRstIntOfIntersection* Handle
  {
    IntPatch_TheRstIntOfIntersection* get()
    {
      return nativeHandle;
    }
  }


// constructor from native
OCIntPatch_TheRstIntOfIntersection(IntPatch_TheRstIntOfIntersection* nativeHandle);

// Methods PUBLIC


static /*instead*/  void PutVertexOnLine(OCNaroWrappers::OCIntPatch_Line^ L, OCNaroWrappers::OCAdaptor3d_HSurface^ Surf, OCNaroWrappers::OCAdaptor3d_TopolTool^ Domain, OCNaroWrappers::OCAdaptor3d_HSurface^ OtherSurf, System::Boolean OnFirst, Standard_Real Tol) ;

~OCIntPatch_TheRstIntOfIntersection()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif

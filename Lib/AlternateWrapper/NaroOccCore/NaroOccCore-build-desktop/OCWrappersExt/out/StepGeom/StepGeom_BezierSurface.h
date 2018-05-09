// File generated by CPPExt (MPV)
//
#ifndef _StepGeom_BezierSurface_OCWrappers_HeaderFile
#define _StepGeom_BezierSurface_OCWrappers_HeaderFile

// include native header
#include <StepGeom_BezierSurface.hxx>
#include "../Converter.h"

#include "StepGeom_BSplineSurface.h"

#include "StepGeom_BSplineSurface.h"


namespace OCNaroWrappers
{




public ref class OCStepGeom_BezierSurface  : public OCStepGeom_BSplineSurface {

protected:
  // dummy constructor;
  OCStepGeom_BezierSurface(OCDummy^) : OCStepGeom_BSplineSurface((OCDummy^)nullptr) {};

public:

// constructor from native
OCStepGeom_BezierSurface(StepGeom_BezierSurface* nativeHandle);

// Methods PUBLIC

//! Returns a BezierSurface <br>
OCStepGeom_BezierSurface();

~OCStepGeom_BezierSurface()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif

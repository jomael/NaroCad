// File generated by CPPExt (CPP file)
//

#include "IntPatch_PrmPrmIntersection_T3BitsOfThePPIntOfIntersection.h"
#include "../Converter.h"
#include "../Adaptor3d/Adaptor3d_HVertex.h"
#include "../Adaptor2d/Adaptor2d_HCurve2d.h"
#include "../Adaptor3d/Adaptor3d_HSurface.h"
#include "IntPatch_HCurve2dTool.h"
#include "IntPatch_HSurfaceTool.h"
#include "../Adaptor3d/Adaptor3d_TopolTool.h"
#include "IntPatch_HInterTool.h"
#include "IntPatch_ThePointOfIntersection.h"
#include "IntPatch_SequenceOfPointOfIntersection.h"
#include "IntPatch_TheWLineOfIntersection.h"
#include "IntPatch_TheRstIntOfIntersection.h"
#include "IntPatch_ThePPIntOfIntersection.h"
#include "IntPatch_ThePolyhedronOfThePPIntOfIntersection.h"
#include "IntPatch_TheToolPolyhOfThePPIntOfIntersection.h"
#include "IntPatch_TheInterfPolyhedronOfThePPIntOfIntersection.h"
#include "IntPatch_ThePWalkingInterOfThePPIntOfIntersection.h"
#include "IntPatch_TheInt2SOfThePWalkingInterOfThePPIntOfIntersection.h"


using namespace OCNaroWrappers;

OCIntPatch_PrmPrmIntersection_T3BitsOfThePPIntOfIntersection::OCIntPatch_PrmPrmIntersection_T3BitsOfThePPIntOfIntersection(IntPatch_PrmPrmIntersection_T3BitsOfThePPIntOfIntersection* nativeHandle) 
{
  this->nativeHandle = nativeHandle;
}

OCIntPatch_PrmPrmIntersection_T3BitsOfThePPIntOfIntersection::OCIntPatch_PrmPrmIntersection_T3BitsOfThePPIntOfIntersection(Standard_Integer size) 
{
  nativeHandle = new IntPatch_PrmPrmIntersection_T3BitsOfThePPIntOfIntersection(size);
}

 void OCIntPatch_PrmPrmIntersection_T3BitsOfThePPIntOfIntersection::Add(Standard_Integer t)
{
  ((IntPatch_PrmPrmIntersection_T3BitsOfThePPIntOfIntersection*)nativeHandle)->Add(t);
}

 Standard_Integer OCIntPatch_PrmPrmIntersection_T3BitsOfThePPIntOfIntersection::Val(Standard_Integer t)
{
  return ((IntPatch_PrmPrmIntersection_T3BitsOfThePPIntOfIntersection*)nativeHandle)->Val(t);
}

 void OCIntPatch_PrmPrmIntersection_T3BitsOfThePPIntOfIntersection::Raz(Standard_Integer t)
{
  ((IntPatch_PrmPrmIntersection_T3BitsOfThePPIntOfIntersection*)nativeHandle)->Raz(t);
}

 void OCIntPatch_PrmPrmIntersection_T3BitsOfThePPIntOfIntersection::ResetAnd()
{
  ((IntPatch_PrmPrmIntersection_T3BitsOfThePPIntOfIntersection*)nativeHandle)->ResetAnd();
}

 Standard_Integer OCIntPatch_PrmPrmIntersection_T3BitsOfThePPIntOfIntersection::And(OCNaroWrappers::OCIntPatch_PrmPrmIntersection_T3BitsOfThePPIntOfIntersection^ Oth, Standard_Integer& indiceprecedent)
{
  return ((IntPatch_PrmPrmIntersection_T3BitsOfThePPIntOfIntersection*)nativeHandle)->And(*((IntPatch_PrmPrmIntersection_T3BitsOfThePPIntOfIntersection*)Oth->Handle), indiceprecedent);
}



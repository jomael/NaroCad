// File generated by CPPExt (CPP file)
//

#include "BRepClass_Intersector.h"
#include "../Converter.h"
#include "../gp/gp_Lin2d.h"
#include "BRepClass_Edge.h"
#include "../gp/gp_Dir2d.h"


using namespace OCNaroWrappers;

OCBRepClass_Intersector::OCBRepClass_Intersector(BRepClass_Intersector* nativeHandle) : OCGeom2dInt_IntConicCurveOfGInter((OCDummy^)nullptr)

{
  this->nativeHandle = nativeHandle;
}

OCBRepClass_Intersector::OCBRepClass_Intersector() : OCGeom2dInt_IntConicCurveOfGInter((OCDummy^)nullptr)

{
  nativeHandle = new BRepClass_Intersector();
}

 void OCBRepClass_Intersector::Perform(OCNaroWrappers::OCgp_Lin2d^ L, Standard_Real P, Standard_Real Tol, OCNaroWrappers::OCBRepClass_Edge^ E)
{
  ((BRepClass_Intersector*)nativeHandle)->Perform(*((gp_Lin2d*)L->Handle), P, Tol, *((BRepClass_Edge*)E->Handle));
}

 void OCBRepClass_Intersector::LocalGeometry(OCNaroWrappers::OCBRepClass_Edge^ E, Standard_Real U, OCNaroWrappers::OCgp_Dir2d^ T, OCNaroWrappers::OCgp_Dir2d^ N, Standard_Real& C)
{
  ((BRepClass_Intersector*)nativeHandle)->LocalGeometry(*((BRepClass_Edge*)E->Handle), U, *((gp_Dir2d*)T->Handle), *((gp_Dir2d*)N->Handle), C);
}



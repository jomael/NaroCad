// File generated by CPPExt (CPP file)
//

#include "BRepGProp_Vinert.h"
#include "../Converter.h"
#include "../TopoDS/TopoDS_Edge.h"
#include "BRepGProp_Face.h"
#include "BRepGProp_Domain.h"
#include "../gp/gp_Pnt.h"
#include "../gp/gp_Pln.h"


using namespace OCNaroWrappers;

OCBRepGProp_Vinert::OCBRepGProp_Vinert(BRepGProp_Vinert* nativeHandle) : OCGProp_GProps((OCDummy^)nullptr)

{
  this->nativeHandle = nativeHandle;
}

OCBRepGProp_Vinert::OCBRepGProp_Vinert() : OCGProp_GProps((OCDummy^)nullptr)

{
  nativeHandle = new BRepGProp_Vinert();
}

OCBRepGProp_Vinert::OCBRepGProp_Vinert(OCNaroWrappers::OCBRepGProp_Face^ S, OCNaroWrappers::OCgp_Pnt^ VLocation) : OCGProp_GProps((OCDummy^)nullptr)

{
  nativeHandle = new BRepGProp_Vinert(*((BRepGProp_Face*)S->Handle), *((gp_Pnt*)VLocation->Handle));
}

OCBRepGProp_Vinert::OCBRepGProp_Vinert(OCNaroWrappers::OCBRepGProp_Face^ S, OCNaroWrappers::OCgp_Pnt^ VLocation, Standard_Real Eps) : OCGProp_GProps((OCDummy^)nullptr)

{
  nativeHandle = new BRepGProp_Vinert(*((BRepGProp_Face*)S->Handle), *((gp_Pnt*)VLocation->Handle), Eps);
}

OCBRepGProp_Vinert::OCBRepGProp_Vinert(OCNaroWrappers::OCBRepGProp_Face^ S, OCNaroWrappers::OCgp_Pnt^ O, OCNaroWrappers::OCgp_Pnt^ VLocation) : OCGProp_GProps((OCDummy^)nullptr)

{
  nativeHandle = new BRepGProp_Vinert(*((BRepGProp_Face*)S->Handle), *((gp_Pnt*)O->Handle), *((gp_Pnt*)VLocation->Handle));
}

OCBRepGProp_Vinert::OCBRepGProp_Vinert(OCNaroWrappers::OCBRepGProp_Face^ S, OCNaroWrappers::OCgp_Pnt^ O, OCNaroWrappers::OCgp_Pnt^ VLocation, Standard_Real Eps) : OCGProp_GProps((OCDummy^)nullptr)

{
  nativeHandle = new BRepGProp_Vinert(*((BRepGProp_Face*)S->Handle), *((gp_Pnt*)O->Handle), *((gp_Pnt*)VLocation->Handle), Eps);
}

OCBRepGProp_Vinert::OCBRepGProp_Vinert(OCNaroWrappers::OCBRepGProp_Face^ S, OCNaroWrappers::OCgp_Pln^ Pl, OCNaroWrappers::OCgp_Pnt^ VLocation) : OCGProp_GProps((OCDummy^)nullptr)

{
  nativeHandle = new BRepGProp_Vinert(*((BRepGProp_Face*)S->Handle), *((gp_Pln*)Pl->Handle), *((gp_Pnt*)VLocation->Handle));
}

OCBRepGProp_Vinert::OCBRepGProp_Vinert(OCNaroWrappers::OCBRepGProp_Face^ S, OCNaroWrappers::OCgp_Pln^ Pl, OCNaroWrappers::OCgp_Pnt^ VLocation, Standard_Real Eps) : OCGProp_GProps((OCDummy^)nullptr)

{
  nativeHandle = new BRepGProp_Vinert(*((BRepGProp_Face*)S->Handle), *((gp_Pln*)Pl->Handle), *((gp_Pnt*)VLocation->Handle), Eps);
}

OCBRepGProp_Vinert::OCBRepGProp_Vinert(OCNaroWrappers::OCBRepGProp_Face^ S, OCNaroWrappers::OCBRepGProp_Domain^ D, OCNaroWrappers::OCgp_Pnt^ VLocation) : OCGProp_GProps((OCDummy^)nullptr)

{
  nativeHandle = new BRepGProp_Vinert(*((BRepGProp_Face*)S->Handle), *((BRepGProp_Domain*)D->Handle), *((gp_Pnt*)VLocation->Handle));
}

OCBRepGProp_Vinert::OCBRepGProp_Vinert(OCNaroWrappers::OCBRepGProp_Face^ S, OCNaroWrappers::OCBRepGProp_Domain^ D, OCNaroWrappers::OCgp_Pnt^ VLocation, Standard_Real Eps) : OCGProp_GProps((OCDummy^)nullptr)

{
  nativeHandle = new BRepGProp_Vinert(*((BRepGProp_Face*)S->Handle), *((BRepGProp_Domain*)D->Handle), *((gp_Pnt*)VLocation->Handle), Eps);
}

OCBRepGProp_Vinert::OCBRepGProp_Vinert(OCNaroWrappers::OCBRepGProp_Face^ S, OCNaroWrappers::OCBRepGProp_Domain^ D, OCNaroWrappers::OCgp_Pnt^ O, OCNaroWrappers::OCgp_Pnt^ VLocation) : OCGProp_GProps((OCDummy^)nullptr)

{
  nativeHandle = new BRepGProp_Vinert(*((BRepGProp_Face*)S->Handle), *((BRepGProp_Domain*)D->Handle), *((gp_Pnt*)O->Handle), *((gp_Pnt*)VLocation->Handle));
}

OCBRepGProp_Vinert::OCBRepGProp_Vinert(OCNaroWrappers::OCBRepGProp_Face^ S, OCNaroWrappers::OCBRepGProp_Domain^ D, OCNaroWrappers::OCgp_Pnt^ O, OCNaroWrappers::OCgp_Pnt^ VLocation, Standard_Real Eps) : OCGProp_GProps((OCDummy^)nullptr)

{
  nativeHandle = new BRepGProp_Vinert(*((BRepGProp_Face*)S->Handle), *((BRepGProp_Domain*)D->Handle), *((gp_Pnt*)O->Handle), *((gp_Pnt*)VLocation->Handle), Eps);
}

OCBRepGProp_Vinert::OCBRepGProp_Vinert(OCNaroWrappers::OCBRepGProp_Face^ S, OCNaroWrappers::OCBRepGProp_Domain^ D, OCNaroWrappers::OCgp_Pln^ Pl, OCNaroWrappers::OCgp_Pnt^ VLocation) : OCGProp_GProps((OCDummy^)nullptr)

{
  nativeHandle = new BRepGProp_Vinert(*((BRepGProp_Face*)S->Handle), *((BRepGProp_Domain*)D->Handle), *((gp_Pln*)Pl->Handle), *((gp_Pnt*)VLocation->Handle));
}

OCBRepGProp_Vinert::OCBRepGProp_Vinert(OCNaroWrappers::OCBRepGProp_Face^ S, OCNaroWrappers::OCBRepGProp_Domain^ D, OCNaroWrappers::OCgp_Pln^ Pl, OCNaroWrappers::OCgp_Pnt^ VLocation, Standard_Real Eps) : OCGProp_GProps((OCDummy^)nullptr)

{
  nativeHandle = new BRepGProp_Vinert(*((BRepGProp_Face*)S->Handle), *((BRepGProp_Domain*)D->Handle), *((gp_Pln*)Pl->Handle), *((gp_Pnt*)VLocation->Handle), Eps);
}

 void OCBRepGProp_Vinert::SetLocation(OCNaroWrappers::OCgp_Pnt^ VLocation)
{
  ((BRepGProp_Vinert*)nativeHandle)->SetLocation(*((gp_Pnt*)VLocation->Handle));
}

 void OCBRepGProp_Vinert::Perform(OCNaroWrappers::OCBRepGProp_Face^ S)
{
  ((BRepGProp_Vinert*)nativeHandle)->Perform(*((BRepGProp_Face*)S->Handle));
}

 Standard_Real OCBRepGProp_Vinert::Perform(OCNaroWrappers::OCBRepGProp_Face^ S, Standard_Real Eps)
{
  return ((BRepGProp_Vinert*)nativeHandle)->Perform(*((BRepGProp_Face*)S->Handle), Eps);
}

 void OCBRepGProp_Vinert::Perform(OCNaroWrappers::OCBRepGProp_Face^ S, OCNaroWrappers::OCgp_Pnt^ O)
{
  ((BRepGProp_Vinert*)nativeHandle)->Perform(*((BRepGProp_Face*)S->Handle), *((gp_Pnt*)O->Handle));
}

 Standard_Real OCBRepGProp_Vinert::Perform(OCNaroWrappers::OCBRepGProp_Face^ S, OCNaroWrappers::OCgp_Pnt^ O, Standard_Real Eps)
{
  return ((BRepGProp_Vinert*)nativeHandle)->Perform(*((BRepGProp_Face*)S->Handle), *((gp_Pnt*)O->Handle), Eps);
}

 void OCBRepGProp_Vinert::Perform(OCNaroWrappers::OCBRepGProp_Face^ S, OCNaroWrappers::OCgp_Pln^ Pl)
{
  ((BRepGProp_Vinert*)nativeHandle)->Perform(*((BRepGProp_Face*)S->Handle), *((gp_Pln*)Pl->Handle));
}

 Standard_Real OCBRepGProp_Vinert::Perform(OCNaroWrappers::OCBRepGProp_Face^ S, OCNaroWrappers::OCgp_Pln^ Pl, Standard_Real Eps)
{
  return ((BRepGProp_Vinert*)nativeHandle)->Perform(*((BRepGProp_Face*)S->Handle), *((gp_Pln*)Pl->Handle), Eps);
}

 void OCBRepGProp_Vinert::Perform(OCNaroWrappers::OCBRepGProp_Face^ S, OCNaroWrappers::OCBRepGProp_Domain^ D)
{
  ((BRepGProp_Vinert*)nativeHandle)->Perform(*((BRepGProp_Face*)S->Handle), *((BRepGProp_Domain*)D->Handle));
}

 Standard_Real OCBRepGProp_Vinert::Perform(OCNaroWrappers::OCBRepGProp_Face^ S, OCNaroWrappers::OCBRepGProp_Domain^ D, Standard_Real Eps)
{
  return ((BRepGProp_Vinert*)nativeHandle)->Perform(*((BRepGProp_Face*)S->Handle), *((BRepGProp_Domain*)D->Handle), Eps);
}

 void OCBRepGProp_Vinert::Perform(OCNaroWrappers::OCBRepGProp_Face^ S, OCNaroWrappers::OCBRepGProp_Domain^ D, OCNaroWrappers::OCgp_Pnt^ O)
{
  ((BRepGProp_Vinert*)nativeHandle)->Perform(*((BRepGProp_Face*)S->Handle), *((BRepGProp_Domain*)D->Handle), *((gp_Pnt*)O->Handle));
}

 Standard_Real OCBRepGProp_Vinert::Perform(OCNaroWrappers::OCBRepGProp_Face^ S, OCNaroWrappers::OCBRepGProp_Domain^ D, OCNaroWrappers::OCgp_Pnt^ O, Standard_Real Eps)
{
  return ((BRepGProp_Vinert*)nativeHandle)->Perform(*((BRepGProp_Face*)S->Handle), *((BRepGProp_Domain*)D->Handle), *((gp_Pnt*)O->Handle), Eps);
}

 void OCBRepGProp_Vinert::Perform(OCNaroWrappers::OCBRepGProp_Face^ S, OCNaroWrappers::OCBRepGProp_Domain^ D, OCNaroWrappers::OCgp_Pln^ Pl)
{
  ((BRepGProp_Vinert*)nativeHandle)->Perform(*((BRepGProp_Face*)S->Handle), *((BRepGProp_Domain*)D->Handle), *((gp_Pln*)Pl->Handle));
}

 Standard_Real OCBRepGProp_Vinert::Perform(OCNaroWrappers::OCBRepGProp_Face^ S, OCNaroWrappers::OCBRepGProp_Domain^ D, OCNaroWrappers::OCgp_Pln^ Pl, Standard_Real Eps)
{
  return ((BRepGProp_Vinert*)nativeHandle)->Perform(*((BRepGProp_Face*)S->Handle), *((BRepGProp_Domain*)D->Handle), *((gp_Pln*)Pl->Handle), Eps);
}

 Standard_Real OCBRepGProp_Vinert::GetEpsilon()
{
  return ((BRepGProp_Vinert*)nativeHandle)->GetEpsilon();
}



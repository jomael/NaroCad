// File generated by CPPExt (CPP file)
//

#include "BRep_GCurve.h"
#include "../Converter.h"
#include "../TopLoc/TopLoc_Location.h"
#include "../gp/gp_Pnt.h"


using namespace OCNaroWrappers;

OCBRep_GCurve::OCBRep_GCurve(Handle(BRep_GCurve)* nativeHandle) : OCBRep_CurveRepresentation((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_BRep_GCurve(*nativeHandle);
}

OCBRep_GCurve::OCBRep_GCurve(OCNaroWrappers::OCTopLoc_Location^ L, Standard_Real First, Standard_Real Last) : OCBRep_CurveRepresentation((OCDummy^)nullptr)

{}

 void OCBRep_GCurve::SetRange(Standard_Real First, Standard_Real Last)
{
  (*((Handle_BRep_GCurve*)nativeHandle))->SetRange(First, Last);
}

 void OCBRep_GCurve::Range(Standard_Real& First, Standard_Real& Last)
{
  (*((Handle_BRep_GCurve*)nativeHandle))->Range(First, Last);
}

 Standard_Real OCBRep_GCurve::First()
{
  return (*((Handle_BRep_GCurve*)nativeHandle))->First();
}

 Standard_Real OCBRep_GCurve::Last()
{
  return (*((Handle_BRep_GCurve*)nativeHandle))->Last();
}

 void OCBRep_GCurve::First(Standard_Real F)
{
  (*((Handle_BRep_GCurve*)nativeHandle))->First(F);
}

 void OCBRep_GCurve::Last(Standard_Real L)
{
  (*((Handle_BRep_GCurve*)nativeHandle))->Last(L);
}

 void OCBRep_GCurve::Update()
{
  (*((Handle_BRep_GCurve*)nativeHandle))->Update();
}



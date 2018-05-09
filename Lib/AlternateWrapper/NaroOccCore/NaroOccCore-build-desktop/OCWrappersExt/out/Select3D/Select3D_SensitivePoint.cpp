// File generated by CPPExt (CPP file)
//

#include "Select3D_SensitivePoint.h"
#include "../Converter.h"
#include "../SelectBasics/SelectBasics_EntityOwner.h"
#include "../gp/gp_Pnt.h"
#include "Select3D_Projector.h"
#include "../SelectBasics/SelectBasics_ListOfBox2d.h"
#include "Select3D_SensitiveEntity.h"
#include "../TopLoc/TopLoc_Location.h"
#include "../TColgp/TColgp_Array1OfPnt2d.h"
#include "../Bnd/Bnd_Box2d.h"
#include "../gp/gp_Lin.h"


using namespace OCNaroWrappers;

OCSelect3D_SensitivePoint::OCSelect3D_SensitivePoint(Handle(Select3D_SensitivePoint)* nativeHandle) : OCSelect3D_SensitiveEntity((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_Select3D_SensitivePoint(*nativeHandle);
}

OCSelect3D_SensitivePoint::OCSelect3D_SensitivePoint(OCNaroWrappers::OCSelectBasics_EntityOwner^ OwnerId, OCNaroWrappers::OCgp_Pnt^ Point) : OCSelect3D_SensitiveEntity((OCDummy^)nullptr)

{
  nativeHandle = new Handle_Select3D_SensitivePoint(new Select3D_SensitivePoint(*((Handle_SelectBasics_EntityOwner*)OwnerId->Handle), *((gp_Pnt*)Point->Handle)));
}

 void OCSelect3D_SensitivePoint::Project(OCNaroWrappers::OCSelect3D_Projector^ aProjector)
{
  (*((Handle_Select3D_SensitivePoint*)nativeHandle))->Project(*((Handle_Select3D_Projector*)aProjector->Handle));
}

 void OCSelect3D_SensitivePoint::Areas(OCNaroWrappers::OCSelectBasics_ListOfBox2d^ aresult)
{
  (*((Handle_Select3D_SensitivePoint*)nativeHandle))->Areas(*((SelectBasics_ListOfBox2d*)aresult->Handle));
}

OCSelect3D_SensitiveEntity^ OCSelect3D_SensitivePoint::GetConnected(OCNaroWrappers::OCTopLoc_Location^ aLocation)
{
  Handle(Select3D_SensitiveEntity) tmp = (*((Handle_Select3D_SensitivePoint*)nativeHandle))->GetConnected(*((TopLoc_Location*)aLocation->Handle));
  return gcnew OCSelect3D_SensitiveEntity(&tmp);
}

 System::Boolean OCSelect3D_SensitivePoint::Matches(Standard_Real X, Standard_Real Y, Standard_Real aTol, Standard_Real& DMin)
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_Select3D_SensitivePoint*)nativeHandle))->Matches(X, Y, aTol, DMin));
}

 System::Boolean OCSelect3D_SensitivePoint::Matches(Standard_Real XMin, Standard_Real YMin, Standard_Real XMax, Standard_Real YMax, Standard_Real aTol)
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_Select3D_SensitivePoint*)nativeHandle))->Matches(XMin, YMin, XMax, YMax, aTol));
}

 System::Boolean OCSelect3D_SensitivePoint::Matches(OCNaroWrappers::OCTColgp_Array1OfPnt2d^ Polyline, OCNaroWrappers::OCBnd_Box2d^ aBox, Standard_Real aTol)
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_Select3D_SensitivePoint*)nativeHandle))->Matches(*((TColgp_Array1OfPnt2d*)Polyline->Handle), *((Bnd_Box2d*)aBox->Handle), aTol));
}

 Standard_Real OCSelect3D_SensitivePoint::ComputeDepth(OCNaroWrappers::OCgp_Lin^ EyeLine)
{
  return (*((Handle_Select3D_SensitivePoint*)nativeHandle))->ComputeDepth(*((gp_Lin*)EyeLine->Handle));
}

OCgp_Pnt^ OCSelect3D_SensitivePoint::Point()
{
  gp_Pnt* tmp = new gp_Pnt();
  *tmp = (*((Handle_Select3D_SensitivePoint*)nativeHandle))->Point();
  return gcnew OCgp_Pnt(tmp);
}

 void OCSelect3D_SensitivePoint::Dump(Standard_OStream& S, System::Boolean FullDump)
{
  (*((Handle_Select3D_SensitivePoint*)nativeHandle))->Dump(S, OCConverter::BooleanToStandardBoolean(FullDump));
}


// File generated by CPPExt (CPP file)
//

#include "Prs3d_Drawer.h"
#include "../Converter.h"
#include "Prs3d_IsoAspect.h"
#include "Prs3d_LineAspect.h"
#include "Prs3d_TextAspect.h"
#include "Prs3d_ShadingAspect.h"
#include "Prs3d_PointAspect.h"
#include "Prs3d_PlaneAspect.h"
#include "Prs3d_ArrowAspect.h"
#include "Prs3d_DatumAspect.h"
#include "Prs3d_LengthAspect.h"
#include "Prs3d_AngleAspect.h"
#include "Prs3d_RadiusAspect.h"


using namespace OCNaroWrappers;

OCPrs3d_Drawer::OCPrs3d_Drawer(Handle(Prs3d_Drawer)* nativeHandle) : OCMMgt_TShared((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_Prs3d_Drawer(*nativeHandle);
}

OCPrs3d_Drawer::OCPrs3d_Drawer() : OCMMgt_TShared((OCDummy^)nullptr)

{
  nativeHandle = new Handle_Prs3d_Drawer(new Prs3d_Drawer());
}

 void OCPrs3d_Drawer::SetTypeOfDeflection(OCAspect_TypeOfDeflection aTypeOfDeflection)
{
  (*((Handle_Prs3d_Drawer*)nativeHandle))->SetTypeOfDeflection((Aspect_TypeOfDeflection)aTypeOfDeflection);
}

 OCAspect_TypeOfDeflection OCPrs3d_Drawer::TypeOfDeflection()
{
  return (OCAspect_TypeOfDeflection)((*((Handle_Prs3d_Drawer*)nativeHandle))->TypeOfDeflection());
}

 void OCPrs3d_Drawer::SetMaximalChordialDeviation(Quantity_Length aChordialDeviation)
{
  (*((Handle_Prs3d_Drawer*)nativeHandle))->SetMaximalChordialDeviation(aChordialDeviation);
}

 Quantity_Length OCPrs3d_Drawer::MaximalChordialDeviation()
{
  return (*((Handle_Prs3d_Drawer*)nativeHandle))->MaximalChordialDeviation();
}

 void OCPrs3d_Drawer::SetDeviationCoefficient(Standard_Real aCoefficient)
{
  (*((Handle_Prs3d_Drawer*)nativeHandle))->SetDeviationCoefficient(aCoefficient);
}

 Standard_Real OCPrs3d_Drawer::DeviationCoefficient()
{
  return (*((Handle_Prs3d_Drawer*)nativeHandle))->DeviationCoefficient();
}

 void OCPrs3d_Drawer::SetHLRDeviationCoefficient(Standard_Real aCoefficient)
{
  (*((Handle_Prs3d_Drawer*)nativeHandle))->SetHLRDeviationCoefficient(aCoefficient);
}

 Standard_Real OCPrs3d_Drawer::HLRDeviationCoefficient()
{
  return (*((Handle_Prs3d_Drawer*)nativeHandle))->HLRDeviationCoefficient();
}

 void OCPrs3d_Drawer::SetHLRAngle(Standard_Real anAngle)
{
  (*((Handle_Prs3d_Drawer*)nativeHandle))->SetHLRAngle(anAngle);
}

 Standard_Real OCPrs3d_Drawer::HLRAngle()
{
  return (*((Handle_Prs3d_Drawer*)nativeHandle))->HLRAngle();
}

 void OCPrs3d_Drawer::SetDeviationAngle(Standard_Real anAngle)
{
  (*((Handle_Prs3d_Drawer*)nativeHandle))->SetDeviationAngle(anAngle);
}

 Standard_Real OCPrs3d_Drawer::DeviationAngle()
{
  return (*((Handle_Prs3d_Drawer*)nativeHandle))->DeviationAngle();
}

 void OCPrs3d_Drawer::SetDiscretisation(Standard_Integer d)
{
  (*((Handle_Prs3d_Drawer*)nativeHandle))->SetDiscretisation(d);
}

 Standard_Integer OCPrs3d_Drawer::Discretisation()
{
  return (*((Handle_Prs3d_Drawer*)nativeHandle))->Discretisation();
}

 void OCPrs3d_Drawer::SetMaximalParameterValue(Standard_Real Value)
{
  (*((Handle_Prs3d_Drawer*)nativeHandle))->SetMaximalParameterValue(Value);
}

 Standard_Real OCPrs3d_Drawer::MaximalParameterValue()
{
  return (*((Handle_Prs3d_Drawer*)nativeHandle))->MaximalParameterValue();
}

 void OCPrs3d_Drawer::SetIsoOnPlane(System::Boolean OnOff)
{
  (*((Handle_Prs3d_Drawer*)nativeHandle))->SetIsoOnPlane(OCConverter::BooleanToStandardBoolean(OnOff));
}

 System::Boolean OCPrs3d_Drawer::IsoOnPlane()
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_Prs3d_Drawer*)nativeHandle))->IsoOnPlane());
}

OCPrs3d_IsoAspect^ OCPrs3d_Drawer::UIsoAspect()
{
  Handle(Prs3d_IsoAspect) tmp = (*((Handle_Prs3d_Drawer*)nativeHandle))->UIsoAspect();
  return gcnew OCPrs3d_IsoAspect(&tmp);
}

 void OCPrs3d_Drawer::SetUIsoAspect(OCNaroWrappers::OCPrs3d_IsoAspect^ anAspect)
{
  (*((Handle_Prs3d_Drawer*)nativeHandle))->SetUIsoAspect(*((Handle_Prs3d_IsoAspect*)anAspect->Handle));
}

OCPrs3d_IsoAspect^ OCPrs3d_Drawer::VIsoAspect()
{
  Handle(Prs3d_IsoAspect) tmp = (*((Handle_Prs3d_Drawer*)nativeHandle))->VIsoAspect();
  return gcnew OCPrs3d_IsoAspect(&tmp);
}

 void OCPrs3d_Drawer::SetVIsoAspect(OCNaroWrappers::OCPrs3d_IsoAspect^ anAspect)
{
  (*((Handle_Prs3d_Drawer*)nativeHandle))->SetVIsoAspect(*((Handle_Prs3d_IsoAspect*)anAspect->Handle));
}

OCPrs3d_LineAspect^ OCPrs3d_Drawer::FreeBoundaryAspect()
{
  Handle(Prs3d_LineAspect) tmp = (*((Handle_Prs3d_Drawer*)nativeHandle))->FreeBoundaryAspect();
  return gcnew OCPrs3d_LineAspect(&tmp);
}

 void OCPrs3d_Drawer::SetFreeBoundaryAspect(OCNaroWrappers::OCPrs3d_LineAspect^ anAspect)
{
  (*((Handle_Prs3d_Drawer*)nativeHandle))->SetFreeBoundaryAspect(*((Handle_Prs3d_LineAspect*)anAspect->Handle));
}

 void OCPrs3d_Drawer::SetFreeBoundaryDraw(System::Boolean OnOff)
{
  (*((Handle_Prs3d_Drawer*)nativeHandle))->SetFreeBoundaryDraw(OCConverter::BooleanToStandardBoolean(OnOff));
}

 System::Boolean OCPrs3d_Drawer::FreeBoundaryDraw()
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_Prs3d_Drawer*)nativeHandle))->FreeBoundaryDraw());
}

OCPrs3d_LineAspect^ OCPrs3d_Drawer::WireAspect()
{
  Handle(Prs3d_LineAspect) tmp = (*((Handle_Prs3d_Drawer*)nativeHandle))->WireAspect();
  return gcnew OCPrs3d_LineAspect(&tmp);
}

 void OCPrs3d_Drawer::SetWireAspect(OCNaroWrappers::OCPrs3d_LineAspect^ anAspect)
{
  (*((Handle_Prs3d_Drawer*)nativeHandle))->SetWireAspect(*((Handle_Prs3d_LineAspect*)anAspect->Handle));
}

 void OCPrs3d_Drawer::SetWireDraw(System::Boolean OnOff)
{
  (*((Handle_Prs3d_Drawer*)nativeHandle))->SetWireDraw(OCConverter::BooleanToStandardBoolean(OnOff));
}

 System::Boolean OCPrs3d_Drawer::WireDraw()
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_Prs3d_Drawer*)nativeHandle))->WireDraw());
}

OCPrs3d_LineAspect^ OCPrs3d_Drawer::UnFreeBoundaryAspect()
{
  Handle(Prs3d_LineAspect) tmp = (*((Handle_Prs3d_Drawer*)nativeHandle))->UnFreeBoundaryAspect();
  return gcnew OCPrs3d_LineAspect(&tmp);
}

 void OCPrs3d_Drawer::SetUnFreeBoundaryAspect(OCNaroWrappers::OCPrs3d_LineAspect^ anAspect)
{
  (*((Handle_Prs3d_Drawer*)nativeHandle))->SetUnFreeBoundaryAspect(*((Handle_Prs3d_LineAspect*)anAspect->Handle));
}

 void OCPrs3d_Drawer::SetUnFreeBoundaryDraw(System::Boolean OnOff)
{
  (*((Handle_Prs3d_Drawer*)nativeHandle))->SetUnFreeBoundaryDraw(OCConverter::BooleanToStandardBoolean(OnOff));
}

 System::Boolean OCPrs3d_Drawer::UnFreeBoundaryDraw()
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_Prs3d_Drawer*)nativeHandle))->UnFreeBoundaryDraw());
}

OCPrs3d_LineAspect^ OCPrs3d_Drawer::LineAspect()
{
  Handle(Prs3d_LineAspect) tmp = (*((Handle_Prs3d_Drawer*)nativeHandle))->LineAspect();
  return gcnew OCPrs3d_LineAspect(&tmp);
}

 void OCPrs3d_Drawer::SetLineAspect(OCNaroWrappers::OCPrs3d_LineAspect^ anAspect)
{
  (*((Handle_Prs3d_Drawer*)nativeHandle))->SetLineAspect(*((Handle_Prs3d_LineAspect*)anAspect->Handle));
}

OCPrs3d_TextAspect^ OCPrs3d_Drawer::TextAspect()
{
  Handle(Prs3d_TextAspect) tmp = (*((Handle_Prs3d_Drawer*)nativeHandle))->TextAspect();
  return gcnew OCPrs3d_TextAspect(&tmp);
}

 void OCPrs3d_Drawer::SetTextAspect(OCNaroWrappers::OCPrs3d_TextAspect^ anAspect)
{
  (*((Handle_Prs3d_Drawer*)nativeHandle))->SetTextAspect(*((Handle_Prs3d_TextAspect*)anAspect->Handle));
}

 void OCPrs3d_Drawer::SetLineArrowDraw(System::Boolean OnOff)
{
  (*((Handle_Prs3d_Drawer*)nativeHandle))->SetLineArrowDraw(OCConverter::BooleanToStandardBoolean(OnOff));
}

 System::Boolean OCPrs3d_Drawer::LineArrowDraw()
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_Prs3d_Drawer*)nativeHandle))->LineArrowDraw());
}

OCPrs3d_ArrowAspect^ OCPrs3d_Drawer::ArrowAspect()
{
  Handle(Prs3d_ArrowAspect) tmp = (*((Handle_Prs3d_Drawer*)nativeHandle))->ArrowAspect();
  return gcnew OCPrs3d_ArrowAspect(&tmp);
}

 void OCPrs3d_Drawer::SetArrowAspect(OCNaroWrappers::OCPrs3d_ArrowAspect^ anAspect)
{
  (*((Handle_Prs3d_Drawer*)nativeHandle))->SetArrowAspect(*((Handle_Prs3d_ArrowAspect*)anAspect->Handle));
}

OCPrs3d_PointAspect^ OCPrs3d_Drawer::PointAspect()
{
  Handle(Prs3d_PointAspect) tmp = (*((Handle_Prs3d_Drawer*)nativeHandle))->PointAspect();
  return gcnew OCPrs3d_PointAspect(&tmp);
}

 void OCPrs3d_Drawer::SetPointAspect(OCNaroWrappers::OCPrs3d_PointAspect^ anAspect)
{
  (*((Handle_Prs3d_Drawer*)nativeHandle))->SetPointAspect(*((Handle_Prs3d_PointAspect*)anAspect->Handle));
}

OCPrs3d_ShadingAspect^ OCPrs3d_Drawer::ShadingAspect()
{
  Handle(Prs3d_ShadingAspect) tmp = (*((Handle_Prs3d_Drawer*)nativeHandle))->ShadingAspect();
  return gcnew OCPrs3d_ShadingAspect(&tmp);
}

 void OCPrs3d_Drawer::SetShadingAspect(OCNaroWrappers::OCPrs3d_ShadingAspect^ anAspect)
{
  (*((Handle_Prs3d_Drawer*)nativeHandle))->SetShadingAspect(*((Handle_Prs3d_ShadingAspect*)anAspect->Handle));
}

 void OCPrs3d_Drawer::SetShadingAspectGlobal(System::Boolean aValue)
{
  (*((Handle_Prs3d_Drawer*)nativeHandle))->SetShadingAspectGlobal(OCConverter::BooleanToStandardBoolean(aValue));
}

 System::Boolean OCPrs3d_Drawer::ShadingAspectGlobal()
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_Prs3d_Drawer*)nativeHandle))->ShadingAspectGlobal());
}

 System::Boolean OCPrs3d_Drawer::DrawHiddenLine()
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_Prs3d_Drawer*)nativeHandle))->DrawHiddenLine());
}

 void OCPrs3d_Drawer::EnableDrawHiddenLine()
{
  (*((Handle_Prs3d_Drawer*)nativeHandle))->EnableDrawHiddenLine();
}

 void OCPrs3d_Drawer::DisableDrawHiddenLine()
{
  (*((Handle_Prs3d_Drawer*)nativeHandle))->DisableDrawHiddenLine();
}

OCPrs3d_LineAspect^ OCPrs3d_Drawer::HiddenLineAspect()
{
  Handle(Prs3d_LineAspect) tmp = (*((Handle_Prs3d_Drawer*)nativeHandle))->HiddenLineAspect();
  return gcnew OCPrs3d_LineAspect(&tmp);
}

 void OCPrs3d_Drawer::SetHiddenLineAspect(OCNaroWrappers::OCPrs3d_LineAspect^ anAspect)
{
  (*((Handle_Prs3d_Drawer*)nativeHandle))->SetHiddenLineAspect(*((Handle_Prs3d_LineAspect*)anAspect->Handle));
}

OCPrs3d_LineAspect^ OCPrs3d_Drawer::SeenLineAspect()
{
  Handle(Prs3d_LineAspect) tmp = (*((Handle_Prs3d_Drawer*)nativeHandle))->SeenLineAspect();
  return gcnew OCPrs3d_LineAspect(&tmp);
}

 void OCPrs3d_Drawer::SetSeenLineAspect(OCNaroWrappers::OCPrs3d_LineAspect^ anAspect)
{
  (*((Handle_Prs3d_Drawer*)nativeHandle))->SetSeenLineAspect(*((Handle_Prs3d_LineAspect*)anAspect->Handle));
}

OCPrs3d_PlaneAspect^ OCPrs3d_Drawer::PlaneAspect()
{
  Handle(Prs3d_PlaneAspect) tmp = (*((Handle_Prs3d_Drawer*)nativeHandle))->PlaneAspect();
  return gcnew OCPrs3d_PlaneAspect(&tmp);
}

 void OCPrs3d_Drawer::SetPlaneAspect(OCNaroWrappers::OCPrs3d_PlaneAspect^ anAspect)
{
  (*((Handle_Prs3d_Drawer*)nativeHandle))->SetPlaneAspect(*((Handle_Prs3d_PlaneAspect*)anAspect->Handle));
}

OCPrs3d_LineAspect^ OCPrs3d_Drawer::VectorAspect()
{
  Handle(Prs3d_LineAspect) tmp = (*((Handle_Prs3d_Drawer*)nativeHandle))->VectorAspect();
  return gcnew OCPrs3d_LineAspect(&tmp);
}

 void OCPrs3d_Drawer::SetVectorAspect(OCNaroWrappers::OCPrs3d_LineAspect^ anAspect)
{
  (*((Handle_Prs3d_Drawer*)nativeHandle))->SetVectorAspect(*((Handle_Prs3d_LineAspect*)anAspect->Handle));
}

OCPrs3d_DatumAspect^ OCPrs3d_Drawer::DatumAspect()
{
  Handle(Prs3d_DatumAspect) tmp = (*((Handle_Prs3d_Drawer*)nativeHandle))->DatumAspect();
  return gcnew OCPrs3d_DatumAspect(&tmp);
}

 void OCPrs3d_Drawer::SetDatumAspect(OCNaroWrappers::OCPrs3d_DatumAspect^ anAspect)
{
  (*((Handle_Prs3d_Drawer*)nativeHandle))->SetDatumAspect(*((Handle_Prs3d_DatumAspect*)anAspect->Handle));
}

OCPrs3d_LengthAspect^ OCPrs3d_Drawer::LengthAspect()
{
  Handle(Prs3d_LengthAspect) tmp = (*((Handle_Prs3d_Drawer*)nativeHandle))->LengthAspect();
  return gcnew OCPrs3d_LengthAspect(&tmp);
}

 void OCPrs3d_Drawer::SetLengthAspect(OCNaroWrappers::OCPrs3d_LengthAspect^ anAspect)
{
  (*((Handle_Prs3d_Drawer*)nativeHandle))->SetLengthAspect(*((Handle_Prs3d_LengthAspect*)anAspect->Handle));
}

OCPrs3d_AngleAspect^ OCPrs3d_Drawer::AngleAspect()
{
  Handle(Prs3d_AngleAspect) tmp = (*((Handle_Prs3d_Drawer*)nativeHandle))->AngleAspect();
  return gcnew OCPrs3d_AngleAspect(&tmp);
}

 void OCPrs3d_Drawer::SetAngleAspect(OCNaroWrappers::OCPrs3d_AngleAspect^ anAspect)
{
  (*((Handle_Prs3d_Drawer*)nativeHandle))->SetAngleAspect(*((Handle_Prs3d_AngleAspect*)anAspect->Handle));
}

OCPrs3d_RadiusAspect^ OCPrs3d_Drawer::RadiusAspect()
{
  Handle(Prs3d_RadiusAspect) tmp = (*((Handle_Prs3d_Drawer*)nativeHandle))->RadiusAspect();
  return gcnew OCPrs3d_RadiusAspect(&tmp);
}

 void OCPrs3d_Drawer::SetRadiusAspect(OCNaroWrappers::OCPrs3d_RadiusAspect^ anAspect)
{
  (*((Handle_Prs3d_Drawer*)nativeHandle))->SetRadiusAspect(*((Handle_Prs3d_RadiusAspect*)anAspect->Handle));
}

OCPrs3d_LineAspect^ OCPrs3d_Drawer::SectionAspect()
{
  Handle(Prs3d_LineAspect) tmp = (*((Handle_Prs3d_Drawer*)nativeHandle))->SectionAspect();
  return gcnew OCPrs3d_LineAspect(&tmp);
}

 void OCPrs3d_Drawer::SetSectionAspect(OCNaroWrappers::OCPrs3d_LineAspect^ anAspect)
{
  (*((Handle_Prs3d_Drawer*)nativeHandle))->SetSectionAspect(*((Handle_Prs3d_LineAspect*)anAspect->Handle));
}

 void OCPrs3d_Drawer::SetFaceBoundaryDraw(System::Boolean theIsEnabled)
{
  (*((Handle_Prs3d_Drawer*)nativeHandle))->SetFaceBoundaryDraw(OCConverter::BooleanToStandardBoolean(theIsEnabled));
}

 System::Boolean OCPrs3d_Drawer::IsFaceBoundaryDraw()
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_Prs3d_Drawer*)nativeHandle))->IsFaceBoundaryDraw());
}

 void OCPrs3d_Drawer::SetFaceBoundaryAspect(OCNaroWrappers::OCPrs3d_LineAspect^ theAspect)
{
  (*((Handle_Prs3d_Drawer*)nativeHandle))->SetFaceBoundaryAspect(*((Handle_Prs3d_LineAspect*)theAspect->Handle));
}

OCPrs3d_LineAspect^ OCPrs3d_Drawer::FaceBoundaryAspect()
{
  Handle(Prs3d_LineAspect) tmp = (*((Handle_Prs3d_Drawer*)nativeHandle))->FaceBoundaryAspect();
  return gcnew OCPrs3d_LineAspect(&tmp);
}



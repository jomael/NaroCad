// File generated by CPPExt (CPP file)
//

#include "AdvApp2Var_Framework.h"
#include "../Converter.h"
#include "AdvApp2Var_SequenceOfNode.h"
#include "AdvApp2Var_SequenceOfStrip.h"
#include "AdvApp2Var_Iso.h"
#include "AdvApp2Var_Node.h"
#include "../TColStd/TColStd_HArray1OfReal.h"


using namespace OCNaroWrappers;

OCAdvApp2Var_Framework::OCAdvApp2Var_Framework(AdvApp2Var_Framework* nativeHandle) 
{
  this->nativeHandle = nativeHandle;
}

OCAdvApp2Var_Framework::OCAdvApp2Var_Framework() 
{
  nativeHandle = new AdvApp2Var_Framework();
}

OCAdvApp2Var_Framework::OCAdvApp2Var_Framework(OCNaroWrappers::OCAdvApp2Var_SequenceOfNode^ Frame, OCNaroWrappers::OCAdvApp2Var_SequenceOfStrip^ UFrontier, OCNaroWrappers::OCAdvApp2Var_SequenceOfStrip^ VFrontier) 
{
  nativeHandle = new AdvApp2Var_Framework(*((AdvApp2Var_SequenceOfNode*)Frame->Handle), *((AdvApp2Var_SequenceOfStrip*)UFrontier->Handle), *((AdvApp2Var_SequenceOfStrip*)VFrontier->Handle));
}

 System::Boolean OCAdvApp2Var_Framework::FirstNotApprox(Standard_Integer& IndexIso, Standard_Integer& IndexStrip, OCNaroWrappers::OCAdvApp2Var_Iso^ anIso)
{
  return OCConverter::StandardBooleanToBoolean(((AdvApp2Var_Framework*)nativeHandle)->FirstNotApprox(IndexIso, IndexStrip, *((AdvApp2Var_Iso*)anIso->Handle)));
}

 Standard_Integer OCAdvApp2Var_Framework::FirstNode(OCGeomAbs_IsoType Type, Standard_Integer IndexIso, Standard_Integer IndexStrip)
{
  return ((AdvApp2Var_Framework*)nativeHandle)->FirstNode((GeomAbs_IsoType)Type, IndexIso, IndexStrip);
}

 Standard_Integer OCAdvApp2Var_Framework::LastNode(OCGeomAbs_IsoType Type, Standard_Integer IndexIso, Standard_Integer IndexStrip)
{
  return ((AdvApp2Var_Framework*)nativeHandle)->LastNode((GeomAbs_IsoType)Type, IndexIso, IndexStrip);
}

 void OCAdvApp2Var_Framework::ChangeIso(Standard_Integer IndexIso, Standard_Integer IndexStrip, OCNaroWrappers::OCAdvApp2Var_Iso^ anIso)
{
  ((AdvApp2Var_Framework*)nativeHandle)->ChangeIso(IndexIso, IndexStrip, *((AdvApp2Var_Iso*)anIso->Handle));
}

OCAdvApp2Var_Node^ OCAdvApp2Var_Framework::Node(Standard_Integer IndexNode)
{
  AdvApp2Var_Node* tmp = new AdvApp2Var_Node();
  *tmp = ((AdvApp2Var_Framework*)nativeHandle)->Node(IndexNode);
  return gcnew OCAdvApp2Var_Node(tmp);
}

OCAdvApp2Var_Node^ OCAdvApp2Var_Framework::Node(Standard_Real U, Standard_Real V)
{
  AdvApp2Var_Node* tmp = new AdvApp2Var_Node();
  *tmp = ((AdvApp2Var_Framework*)nativeHandle)->Node(U, V);
  return gcnew OCAdvApp2Var_Node(tmp);
}

OCAdvApp2Var_Iso^ OCAdvApp2Var_Framework::IsoU(Standard_Real U, Standard_Real V0, Standard_Real V1)
{
  AdvApp2Var_Iso* tmp = new AdvApp2Var_Iso();
  *tmp = ((AdvApp2Var_Framework*)nativeHandle)->IsoU(U, V0, V1);
  return gcnew OCAdvApp2Var_Iso(tmp);
}

OCAdvApp2Var_Iso^ OCAdvApp2Var_Framework::IsoV(Standard_Real U0, Standard_Real U1, Standard_Real V)
{
  AdvApp2Var_Iso* tmp = new AdvApp2Var_Iso();
  *tmp = ((AdvApp2Var_Framework*)nativeHandle)->IsoV(U0, U1, V);
  return gcnew OCAdvApp2Var_Iso(tmp);
}

OCAdvApp2Var_Node^ OCAdvApp2Var_Framework::ChangeNode(Standard_Integer IndexNode)
{
  AdvApp2Var_Node* tmp = new AdvApp2Var_Node();
  *tmp = ((AdvApp2Var_Framework*)nativeHandle)->ChangeNode(IndexNode);
  return gcnew OCAdvApp2Var_Node(tmp);
}

 void OCAdvApp2Var_Framework::UpdateInU(Standard_Real CuttingValue)
{
  ((AdvApp2Var_Framework*)nativeHandle)->UpdateInU(CuttingValue);
}

 void OCAdvApp2Var_Framework::UpdateInV(Standard_Real CuttingValue)
{
  ((AdvApp2Var_Framework*)nativeHandle)->UpdateInV(CuttingValue);
}

OCTColStd_HArray1OfReal^ OCAdvApp2Var_Framework::UEquation(Standard_Integer IndexIso, Standard_Integer IndexStrip)
{
  Handle(TColStd_HArray1OfReal) tmp = ((AdvApp2Var_Framework*)nativeHandle)->UEquation(IndexIso, IndexStrip);
  return gcnew OCTColStd_HArray1OfReal(&tmp);
}

OCTColStd_HArray1OfReal^ OCAdvApp2Var_Framework::VEquation(Standard_Integer IndexIso, Standard_Integer IndexStrip)
{
  Handle(TColStd_HArray1OfReal) tmp = ((AdvApp2Var_Framework*)nativeHandle)->VEquation(IndexIso, IndexStrip);
  return gcnew OCTColStd_HArray1OfReal(&tmp);
}



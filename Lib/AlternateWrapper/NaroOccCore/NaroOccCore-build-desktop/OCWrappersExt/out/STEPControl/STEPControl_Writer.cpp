// File generated by CPPExt (CPP file)
//

#include "STEPControl_Writer.h"
#include "../Converter.h"
#include "../XSControl/XSControl_WorkSession.h"
#include "../StepData/StepData_StepModel.h"
#include "../TopoDS/TopoDS_Shape.h"


using namespace OCNaroWrappers;

OCSTEPControl_Writer::OCSTEPControl_Writer(STEPControl_Writer* nativeHandle) 
{
  this->nativeHandle = nativeHandle;
}

OCSTEPControl_Writer::OCSTEPControl_Writer() 
{
  nativeHandle = new STEPControl_Writer();
}

OCSTEPControl_Writer::OCSTEPControl_Writer(OCNaroWrappers::OCXSControl_WorkSession^ WS, System::Boolean scratch) 
{
  nativeHandle = new STEPControl_Writer(*((Handle_XSControl_WorkSession*)WS->Handle), OCConverter::BooleanToStandardBoolean(scratch));
}

 void OCSTEPControl_Writer::SetTolerance(Standard_Real Tol)
{
  ((STEPControl_Writer*)nativeHandle)->SetTolerance(Tol);
}

 void OCSTEPControl_Writer::UnsetTolerance()
{
  ((STEPControl_Writer*)nativeHandle)->UnsetTolerance();
}

 void OCSTEPControl_Writer::SetWS(OCNaroWrappers::OCXSControl_WorkSession^ WS, System::Boolean scratch)
{
  ((STEPControl_Writer*)nativeHandle)->SetWS(*((Handle_XSControl_WorkSession*)WS->Handle), OCConverter::BooleanToStandardBoolean(scratch));
}

OCXSControl_WorkSession^ OCSTEPControl_Writer::WS()
{
  Handle(XSControl_WorkSession) tmp = ((STEPControl_Writer*)nativeHandle)->WS();
  return gcnew OCXSControl_WorkSession(&tmp);
}

OCStepData_StepModel^ OCSTEPControl_Writer::Model(System::Boolean newone)
{
  Handle(StepData_StepModel) tmp = ((STEPControl_Writer*)nativeHandle)->Model(OCConverter::BooleanToStandardBoolean(newone));
  return gcnew OCStepData_StepModel(&tmp);
}

 OCIFSelect_ReturnStatus OCSTEPControl_Writer::Transfer(OCNaroWrappers::OCTopoDS_Shape^ sh, OCSTEPControl_StepModelType mode, System::Boolean compgraph)
{
  return (OCIFSelect_ReturnStatus)(((STEPControl_Writer*)nativeHandle)->Transfer(*((TopoDS_Shape*)sh->Handle), (STEPControl_StepModelType)mode, OCConverter::BooleanToStandardBoolean(compgraph)));
}

 OCIFSelect_ReturnStatus OCSTEPControl_Writer::Write(System::String^ filename)
{
  return (OCIFSelect_ReturnStatus)(((STEPControl_Writer*)nativeHandle)->Write(OCConverter::StringToStandardCString(filename)));
}

 void OCSTEPControl_Writer::PrintStatsTransfer(Standard_Integer what, Standard_Integer mode)
{
  ((STEPControl_Writer*)nativeHandle)->PrintStatsTransfer(what, mode);
}



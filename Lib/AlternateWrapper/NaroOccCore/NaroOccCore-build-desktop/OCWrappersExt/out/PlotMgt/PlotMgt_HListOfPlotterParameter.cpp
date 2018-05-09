// File generated by CPPExt (CPP file)
//

#include "PlotMgt_HListOfPlotterParameter.h"
#include "../Converter.h"
#include "PlotMgt_PlotterParameter.h"
#include "PlotMgt_ListOfPlotterParameter.h"


using namespace OCNaroWrappers;

OCPlotMgt_HListOfPlotterParameter::OCPlotMgt_HListOfPlotterParameter(Handle(PlotMgt_HListOfPlotterParameter)* nativeHandle) : OCMMgt_TShared((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_PlotMgt_HListOfPlotterParameter(*nativeHandle);
}

OCPlotMgt_HListOfPlotterParameter::OCPlotMgt_HListOfPlotterParameter() : OCMMgt_TShared((OCDummy^)nullptr)

{
  nativeHandle = new Handle_PlotMgt_HListOfPlotterParameter(new PlotMgt_HListOfPlotterParameter());
}

 System::Boolean OCPlotMgt_HListOfPlotterParameter::IsEmpty()
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_PlotMgt_HListOfPlotterParameter*)nativeHandle))->IsEmpty());
}

 Standard_Integer OCPlotMgt_HListOfPlotterParameter::Length()
{
  return (*((Handle_PlotMgt_HListOfPlotterParameter*)nativeHandle))->Length();
}

 void OCPlotMgt_HListOfPlotterParameter::Clear()
{
  (*((Handle_PlotMgt_HListOfPlotterParameter*)nativeHandle))->Clear();
}

 void OCPlotMgt_HListOfPlotterParameter::Append(OCNaroWrappers::OCPlotMgt_PlotterParameter^ anItem)
{
  (*((Handle_PlotMgt_HListOfPlotterParameter*)nativeHandle))->Append(*((Handle_PlotMgt_PlotterParameter*)anItem->Handle));
}

 void OCPlotMgt_HListOfPlotterParameter::Append(OCNaroWrappers::OCPlotMgt_HListOfPlotterParameter^ aSequence)
{
  (*((Handle_PlotMgt_HListOfPlotterParameter*)nativeHandle))->Append(*((Handle_PlotMgt_HListOfPlotterParameter*)aSequence->Handle));
}

 void OCPlotMgt_HListOfPlotterParameter::Prepend(OCNaroWrappers::OCPlotMgt_PlotterParameter^ anItem)
{
  (*((Handle_PlotMgt_HListOfPlotterParameter*)nativeHandle))->Prepend(*((Handle_PlotMgt_PlotterParameter*)anItem->Handle));
}

 void OCPlotMgt_HListOfPlotterParameter::Prepend(OCNaroWrappers::OCPlotMgt_HListOfPlotterParameter^ aSequence)
{
  (*((Handle_PlotMgt_HListOfPlotterParameter*)nativeHandle))->Prepend(*((Handle_PlotMgt_HListOfPlotterParameter*)aSequence->Handle));
}

 void OCPlotMgt_HListOfPlotterParameter::Reverse()
{
  (*((Handle_PlotMgt_HListOfPlotterParameter*)nativeHandle))->Reverse();
}

 void OCPlotMgt_HListOfPlotterParameter::InsertBefore(Standard_Integer anIndex, OCNaroWrappers::OCPlotMgt_PlotterParameter^ anItem)
{
  (*((Handle_PlotMgt_HListOfPlotterParameter*)nativeHandle))->InsertBefore(anIndex, *((Handle_PlotMgt_PlotterParameter*)anItem->Handle));
}

 void OCPlotMgt_HListOfPlotterParameter::InsertBefore(Standard_Integer anIndex, OCNaroWrappers::OCPlotMgt_HListOfPlotterParameter^ aSequence)
{
  (*((Handle_PlotMgt_HListOfPlotterParameter*)nativeHandle))->InsertBefore(anIndex, *((Handle_PlotMgt_HListOfPlotterParameter*)aSequence->Handle));
}

 void OCPlotMgt_HListOfPlotterParameter::InsertAfter(Standard_Integer anIndex, OCNaroWrappers::OCPlotMgt_PlotterParameter^ anItem)
{
  (*((Handle_PlotMgt_HListOfPlotterParameter*)nativeHandle))->InsertAfter(anIndex, *((Handle_PlotMgt_PlotterParameter*)anItem->Handle));
}

 void OCPlotMgt_HListOfPlotterParameter::InsertAfter(Standard_Integer anIndex, OCNaroWrappers::OCPlotMgt_HListOfPlotterParameter^ aSequence)
{
  (*((Handle_PlotMgt_HListOfPlotterParameter*)nativeHandle))->InsertAfter(anIndex, *((Handle_PlotMgt_HListOfPlotterParameter*)aSequence->Handle));
}

 void OCPlotMgt_HListOfPlotterParameter::Exchange(Standard_Integer anIndex, Standard_Integer anOtherIndex)
{
  (*((Handle_PlotMgt_HListOfPlotterParameter*)nativeHandle))->Exchange(anIndex, anOtherIndex);
}

OCPlotMgt_HListOfPlotterParameter^ OCPlotMgt_HListOfPlotterParameter::Split(Standard_Integer anIndex)
{
  Handle(PlotMgt_HListOfPlotterParameter) tmp = (*((Handle_PlotMgt_HListOfPlotterParameter*)nativeHandle))->Split(anIndex);
  return gcnew OCPlotMgt_HListOfPlotterParameter(&tmp);
}

 void OCPlotMgt_HListOfPlotterParameter::SetValue(Standard_Integer anIndex, OCNaroWrappers::OCPlotMgt_PlotterParameter^ anItem)
{
  (*((Handle_PlotMgt_HListOfPlotterParameter*)nativeHandle))->SetValue(anIndex, *((Handle_PlotMgt_PlotterParameter*)anItem->Handle));
}

OCPlotMgt_PlotterParameter^ OCPlotMgt_HListOfPlotterParameter::Value(Standard_Integer anIndex)
{
  Handle(PlotMgt_PlotterParameter) tmp = (*((Handle_PlotMgt_HListOfPlotterParameter*)nativeHandle))->Value(anIndex);
  return gcnew OCPlotMgt_PlotterParameter(&tmp);
}

OCPlotMgt_PlotterParameter^ OCPlotMgt_HListOfPlotterParameter::ChangeValue(Standard_Integer anIndex)
{
  Handle(PlotMgt_PlotterParameter) tmp = (*((Handle_PlotMgt_HListOfPlotterParameter*)nativeHandle))->ChangeValue(anIndex);
  return gcnew OCPlotMgt_PlotterParameter(&tmp);
}

 void OCPlotMgt_HListOfPlotterParameter::Remove(Standard_Integer anIndex)
{
  (*((Handle_PlotMgt_HListOfPlotterParameter*)nativeHandle))->Remove(anIndex);
}

 void OCPlotMgt_HListOfPlotterParameter::Remove(Standard_Integer fromIndex, Standard_Integer toIndex)
{
  (*((Handle_PlotMgt_HListOfPlotterParameter*)nativeHandle))->Remove(fromIndex, toIndex);
}

OCPlotMgt_ListOfPlotterParameter^ OCPlotMgt_HListOfPlotterParameter::Sequence()
{
  PlotMgt_ListOfPlotterParameter* tmp = new PlotMgt_ListOfPlotterParameter();
  *tmp = (*((Handle_PlotMgt_HListOfPlotterParameter*)nativeHandle))->Sequence();
  return gcnew OCPlotMgt_ListOfPlotterParameter(tmp);
}

OCPlotMgt_ListOfPlotterParameter^ OCPlotMgt_HListOfPlotterParameter::ChangeSequence()
{
  PlotMgt_ListOfPlotterParameter* tmp = new PlotMgt_ListOfPlotterParameter();
  *tmp = (*((Handle_PlotMgt_HListOfPlotterParameter*)nativeHandle))->ChangeSequence();
  return gcnew OCPlotMgt_ListOfPlotterParameter(tmp);
}

OCPlotMgt_HListOfPlotterParameter^ OCPlotMgt_HListOfPlotterParameter::ShallowCopy()
{
  Handle(PlotMgt_HListOfPlotterParameter) tmp = (*((Handle_PlotMgt_HListOfPlotterParameter*)nativeHandle))->ShallowCopy();
  return gcnew OCPlotMgt_HListOfPlotterParameter(&tmp);
}



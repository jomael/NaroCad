// File generated by CPPExt (CPP file)
//

#include "TDF_ListIteratorOfDeltaList.h"
#include "../Converter.h"
#include "TDF_DeltaList.h"
#include "TDF_Delta.h"
#include "TDF_ListNodeOfDeltaList.h"


using namespace OCNaroWrappers;

OCTDF_ListIteratorOfDeltaList::OCTDF_ListIteratorOfDeltaList(TDF_ListIteratorOfDeltaList* nativeHandle) 
{
  this->nativeHandle = nativeHandle;
}

OCTDF_ListIteratorOfDeltaList::OCTDF_ListIteratorOfDeltaList() 
{
  nativeHandle = new TDF_ListIteratorOfDeltaList();
}

OCTDF_ListIteratorOfDeltaList::OCTDF_ListIteratorOfDeltaList(OCNaroWrappers::OCTDF_DeltaList^ L) 
{
  nativeHandle = new TDF_ListIteratorOfDeltaList(*((TDF_DeltaList*)L->Handle));
}

 void OCTDF_ListIteratorOfDeltaList::Initialize(OCNaroWrappers::OCTDF_DeltaList^ L)
{
  ((TDF_ListIteratorOfDeltaList*)nativeHandle)->Initialize(*((TDF_DeltaList*)L->Handle));
}

 System::Boolean OCTDF_ListIteratorOfDeltaList::More()
{
  return OCConverter::StandardBooleanToBoolean(((TDF_ListIteratorOfDeltaList*)nativeHandle)->More());
}

 void OCTDF_ListIteratorOfDeltaList::Next()
{
  ((TDF_ListIteratorOfDeltaList*)nativeHandle)->Next();
}

OCTDF_Delta^ OCTDF_ListIteratorOfDeltaList::Value()
{
  Handle(TDF_Delta) tmp = ((TDF_ListIteratorOfDeltaList*)nativeHandle)->Value();
  return gcnew OCTDF_Delta(&tmp);
}



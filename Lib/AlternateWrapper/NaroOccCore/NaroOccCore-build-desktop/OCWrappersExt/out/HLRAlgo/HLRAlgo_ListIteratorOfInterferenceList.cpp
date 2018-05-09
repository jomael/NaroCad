// File generated by CPPExt (CPP file)
//

#include "HLRAlgo_ListIteratorOfInterferenceList.h"
#include "../Converter.h"
#include "HLRAlgo_InterferenceList.h"
#include "HLRAlgo_Interference.h"
#include "HLRAlgo_ListNodeOfInterferenceList.h"


using namespace OCNaroWrappers;

OCHLRAlgo_ListIteratorOfInterferenceList::OCHLRAlgo_ListIteratorOfInterferenceList(HLRAlgo_ListIteratorOfInterferenceList* nativeHandle) 
{
  this->nativeHandle = nativeHandle;
}

OCHLRAlgo_ListIteratorOfInterferenceList::OCHLRAlgo_ListIteratorOfInterferenceList() 
{
  nativeHandle = new HLRAlgo_ListIteratorOfInterferenceList();
}

OCHLRAlgo_ListIteratorOfInterferenceList::OCHLRAlgo_ListIteratorOfInterferenceList(OCNaroWrappers::OCHLRAlgo_InterferenceList^ L) 
{
  nativeHandle = new HLRAlgo_ListIteratorOfInterferenceList(*((HLRAlgo_InterferenceList*)L->Handle));
}

 void OCHLRAlgo_ListIteratorOfInterferenceList::Initialize(OCNaroWrappers::OCHLRAlgo_InterferenceList^ L)
{
  ((HLRAlgo_ListIteratorOfInterferenceList*)nativeHandle)->Initialize(*((HLRAlgo_InterferenceList*)L->Handle));
}

 System::Boolean OCHLRAlgo_ListIteratorOfInterferenceList::More()
{
  return OCConverter::StandardBooleanToBoolean(((HLRAlgo_ListIteratorOfInterferenceList*)nativeHandle)->More());
}

 void OCHLRAlgo_ListIteratorOfInterferenceList::Next()
{
  ((HLRAlgo_ListIteratorOfInterferenceList*)nativeHandle)->Next();
}

OCHLRAlgo_Interference^ OCHLRAlgo_ListIteratorOfInterferenceList::Value()
{
  HLRAlgo_Interference* tmp = new HLRAlgo_Interference();
  *tmp = ((HLRAlgo_ListIteratorOfInterferenceList*)nativeHandle)->Value();
  return gcnew OCHLRAlgo_Interference(tmp);
}



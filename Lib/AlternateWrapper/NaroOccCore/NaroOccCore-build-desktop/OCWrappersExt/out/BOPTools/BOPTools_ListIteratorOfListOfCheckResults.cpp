// File generated by CPPExt (CPP file)
//

#include "BOPTools_ListIteratorOfListOfCheckResults.h"
#include "../Converter.h"
#include "BOPTools_ListOfCheckResults.h"
#include "BOPTools_CheckResult.h"
#include "BOPTools_ListNodeOfListOfCheckResults.h"


using namespace OCNaroWrappers;

OCBOPTools_ListIteratorOfListOfCheckResults::OCBOPTools_ListIteratorOfListOfCheckResults(BOPTools_ListIteratorOfListOfCheckResults* nativeHandle) 
{
  this->nativeHandle = nativeHandle;
}

OCBOPTools_ListIteratorOfListOfCheckResults::OCBOPTools_ListIteratorOfListOfCheckResults() 
{
  nativeHandle = new BOPTools_ListIteratorOfListOfCheckResults();
}

OCBOPTools_ListIteratorOfListOfCheckResults::OCBOPTools_ListIteratorOfListOfCheckResults(OCNaroWrappers::OCBOPTools_ListOfCheckResults^ L) 
{
  nativeHandle = new BOPTools_ListIteratorOfListOfCheckResults(*((BOPTools_ListOfCheckResults*)L->Handle));
}

 void OCBOPTools_ListIteratorOfListOfCheckResults::Initialize(OCNaroWrappers::OCBOPTools_ListOfCheckResults^ L)
{
  ((BOPTools_ListIteratorOfListOfCheckResults*)nativeHandle)->Initialize(*((BOPTools_ListOfCheckResults*)L->Handle));
}

 System::Boolean OCBOPTools_ListIteratorOfListOfCheckResults::More()
{
  return OCConverter::StandardBooleanToBoolean(((BOPTools_ListIteratorOfListOfCheckResults*)nativeHandle)->More());
}

 void OCBOPTools_ListIteratorOfListOfCheckResults::Next()
{
  ((BOPTools_ListIteratorOfListOfCheckResults*)nativeHandle)->Next();
}

OCBOPTools_CheckResult^ OCBOPTools_ListIteratorOfListOfCheckResults::Value()
{
  BOPTools_CheckResult* tmp = new BOPTools_CheckResult();
  *tmp = ((BOPTools_ListIteratorOfListOfCheckResults*)nativeHandle)->Value();
  return gcnew OCBOPTools_CheckResult(tmp);
}



// File generated by CPPExt (CPP file)
//

#include "TopOpeBRepTool_ListOfC2DF.h"
#include "../Converter.h"
#include "TopOpeBRepTool_ListIteratorOfListOfC2DF.h"
#include "TopOpeBRepTool_C2DF.h"
#include "TopOpeBRepTool_ListNodeOfListOfC2DF.h"


using namespace OCNaroWrappers;

OCTopOpeBRepTool_ListOfC2DF::OCTopOpeBRepTool_ListOfC2DF(TopOpeBRepTool_ListOfC2DF* nativeHandle) 
{
  this->nativeHandle = nativeHandle;
}

OCTopOpeBRepTool_ListOfC2DF::OCTopOpeBRepTool_ListOfC2DF() 
{
  nativeHandle = new TopOpeBRepTool_ListOfC2DF();
}

 void OCTopOpeBRepTool_ListOfC2DF::Assign(OCNaroWrappers::OCTopOpeBRepTool_ListOfC2DF^ Other)
{
  ((TopOpeBRepTool_ListOfC2DF*)nativeHandle)->Assign(*((TopOpeBRepTool_ListOfC2DF*)Other->Handle));
}

 Standard_Integer OCTopOpeBRepTool_ListOfC2DF::Extent()
{
  return ((TopOpeBRepTool_ListOfC2DF*)nativeHandle)->Extent();
}

 System::Boolean OCTopOpeBRepTool_ListOfC2DF::IsEmpty()
{
  return OCConverter::StandardBooleanToBoolean(((TopOpeBRepTool_ListOfC2DF*)nativeHandle)->IsEmpty());
}

 void OCTopOpeBRepTool_ListOfC2DF::Prepend(OCNaroWrappers::OCTopOpeBRepTool_C2DF^ I)
{
  ((TopOpeBRepTool_ListOfC2DF*)nativeHandle)->Prepend(*((TopOpeBRepTool_C2DF*)I->Handle));
}

 void OCTopOpeBRepTool_ListOfC2DF::Prepend(OCNaroWrappers::OCTopOpeBRepTool_C2DF^ I, OCNaroWrappers::OCTopOpeBRepTool_ListIteratorOfListOfC2DF^ theIt)
{
  ((TopOpeBRepTool_ListOfC2DF*)nativeHandle)->Prepend(*((TopOpeBRepTool_C2DF*)I->Handle), *((TopOpeBRepTool_ListIteratorOfListOfC2DF*)theIt->Handle));
}

 void OCTopOpeBRepTool_ListOfC2DF::Prepend(OCNaroWrappers::OCTopOpeBRepTool_ListOfC2DF^ Other)
{
  ((TopOpeBRepTool_ListOfC2DF*)nativeHandle)->Prepend(*((TopOpeBRepTool_ListOfC2DF*)Other->Handle));
}

 void OCTopOpeBRepTool_ListOfC2DF::Append(OCNaroWrappers::OCTopOpeBRepTool_C2DF^ I)
{
  ((TopOpeBRepTool_ListOfC2DF*)nativeHandle)->Append(*((TopOpeBRepTool_C2DF*)I->Handle));
}

 void OCTopOpeBRepTool_ListOfC2DF::Append(OCNaroWrappers::OCTopOpeBRepTool_C2DF^ I, OCNaroWrappers::OCTopOpeBRepTool_ListIteratorOfListOfC2DF^ theIt)
{
  ((TopOpeBRepTool_ListOfC2DF*)nativeHandle)->Append(*((TopOpeBRepTool_C2DF*)I->Handle), *((TopOpeBRepTool_ListIteratorOfListOfC2DF*)theIt->Handle));
}

 void OCTopOpeBRepTool_ListOfC2DF::Append(OCNaroWrappers::OCTopOpeBRepTool_ListOfC2DF^ Other)
{
  ((TopOpeBRepTool_ListOfC2DF*)nativeHandle)->Append(*((TopOpeBRepTool_ListOfC2DF*)Other->Handle));
}

OCTopOpeBRepTool_C2DF^ OCTopOpeBRepTool_ListOfC2DF::First()
{
  TopOpeBRepTool_C2DF* tmp = new TopOpeBRepTool_C2DF();
  *tmp = ((TopOpeBRepTool_ListOfC2DF*)nativeHandle)->First();
  return gcnew OCTopOpeBRepTool_C2DF(tmp);
}

OCTopOpeBRepTool_C2DF^ OCTopOpeBRepTool_ListOfC2DF::Last()
{
  TopOpeBRepTool_C2DF* tmp = new TopOpeBRepTool_C2DF();
  *tmp = ((TopOpeBRepTool_ListOfC2DF*)nativeHandle)->Last();
  return gcnew OCTopOpeBRepTool_C2DF(tmp);
}

 void OCTopOpeBRepTool_ListOfC2DF::RemoveFirst()
{
  ((TopOpeBRepTool_ListOfC2DF*)nativeHandle)->RemoveFirst();
}

 void OCTopOpeBRepTool_ListOfC2DF::Remove(OCNaroWrappers::OCTopOpeBRepTool_ListIteratorOfListOfC2DF^ It)
{
  ((TopOpeBRepTool_ListOfC2DF*)nativeHandle)->Remove(*((TopOpeBRepTool_ListIteratorOfListOfC2DF*)It->Handle));
}

 void OCTopOpeBRepTool_ListOfC2DF::InsertBefore(OCNaroWrappers::OCTopOpeBRepTool_C2DF^ I, OCNaroWrappers::OCTopOpeBRepTool_ListIteratorOfListOfC2DF^ It)
{
  ((TopOpeBRepTool_ListOfC2DF*)nativeHandle)->InsertBefore(*((TopOpeBRepTool_C2DF*)I->Handle), *((TopOpeBRepTool_ListIteratorOfListOfC2DF*)It->Handle));
}

 void OCTopOpeBRepTool_ListOfC2DF::InsertBefore(OCNaroWrappers::OCTopOpeBRepTool_ListOfC2DF^ Other, OCNaroWrappers::OCTopOpeBRepTool_ListIteratorOfListOfC2DF^ It)
{
  ((TopOpeBRepTool_ListOfC2DF*)nativeHandle)->InsertBefore(*((TopOpeBRepTool_ListOfC2DF*)Other->Handle), *((TopOpeBRepTool_ListIteratorOfListOfC2DF*)It->Handle));
}

 void OCTopOpeBRepTool_ListOfC2DF::InsertAfter(OCNaroWrappers::OCTopOpeBRepTool_C2DF^ I, OCNaroWrappers::OCTopOpeBRepTool_ListIteratorOfListOfC2DF^ It)
{
  ((TopOpeBRepTool_ListOfC2DF*)nativeHandle)->InsertAfter(*((TopOpeBRepTool_C2DF*)I->Handle), *((TopOpeBRepTool_ListIteratorOfListOfC2DF*)It->Handle));
}

 void OCTopOpeBRepTool_ListOfC2DF::InsertAfter(OCNaroWrappers::OCTopOpeBRepTool_ListOfC2DF^ Other, OCNaroWrappers::OCTopOpeBRepTool_ListIteratorOfListOfC2DF^ It)
{
  ((TopOpeBRepTool_ListOfC2DF*)nativeHandle)->InsertAfter(*((TopOpeBRepTool_ListOfC2DF*)Other->Handle), *((TopOpeBRepTool_ListIteratorOfListOfC2DF*)It->Handle));
}



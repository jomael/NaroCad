// File generated by CPPExt (CPP file)
//

#include "IntAna_ListOfCurve.h"
#include "../Converter.h"
#include "IntAna_ListIteratorOfListOfCurve.h"
#include "IntAna_Curve.h"
#include "IntAna_ListNodeOfListOfCurve.h"


using namespace OCNaroWrappers;

OCIntAna_ListOfCurve::OCIntAna_ListOfCurve(IntAna_ListOfCurve* nativeHandle) 
{
  this->nativeHandle = nativeHandle;
}

OCIntAna_ListOfCurve::OCIntAna_ListOfCurve() 
{
  nativeHandle = new IntAna_ListOfCurve();
}

 void OCIntAna_ListOfCurve::Assign(OCNaroWrappers::OCIntAna_ListOfCurve^ Other)
{
  ((IntAna_ListOfCurve*)nativeHandle)->Assign(*((IntAna_ListOfCurve*)Other->Handle));
}

 Standard_Integer OCIntAna_ListOfCurve::Extent()
{
  return ((IntAna_ListOfCurve*)nativeHandle)->Extent();
}

 System::Boolean OCIntAna_ListOfCurve::IsEmpty()
{
  return OCConverter::StandardBooleanToBoolean(((IntAna_ListOfCurve*)nativeHandle)->IsEmpty());
}

 void OCIntAna_ListOfCurve::Prepend(OCNaroWrappers::OCIntAna_Curve^ I)
{
  ((IntAna_ListOfCurve*)nativeHandle)->Prepend(*((IntAna_Curve*)I->Handle));
}

 void OCIntAna_ListOfCurve::Prepend(OCNaroWrappers::OCIntAna_Curve^ I, OCNaroWrappers::OCIntAna_ListIteratorOfListOfCurve^ theIt)
{
  ((IntAna_ListOfCurve*)nativeHandle)->Prepend(*((IntAna_Curve*)I->Handle), *((IntAna_ListIteratorOfListOfCurve*)theIt->Handle));
}

 void OCIntAna_ListOfCurve::Prepend(OCNaroWrappers::OCIntAna_ListOfCurve^ Other)
{
  ((IntAna_ListOfCurve*)nativeHandle)->Prepend(*((IntAna_ListOfCurve*)Other->Handle));
}

 void OCIntAna_ListOfCurve::Append(OCNaroWrappers::OCIntAna_Curve^ I)
{
  ((IntAna_ListOfCurve*)nativeHandle)->Append(*((IntAna_Curve*)I->Handle));
}

 void OCIntAna_ListOfCurve::Append(OCNaroWrappers::OCIntAna_Curve^ I, OCNaroWrappers::OCIntAna_ListIteratorOfListOfCurve^ theIt)
{
  ((IntAna_ListOfCurve*)nativeHandle)->Append(*((IntAna_Curve*)I->Handle), *((IntAna_ListIteratorOfListOfCurve*)theIt->Handle));
}

 void OCIntAna_ListOfCurve::Append(OCNaroWrappers::OCIntAna_ListOfCurve^ Other)
{
  ((IntAna_ListOfCurve*)nativeHandle)->Append(*((IntAna_ListOfCurve*)Other->Handle));
}

OCIntAna_Curve^ OCIntAna_ListOfCurve::First()
{
  IntAna_Curve* tmp = new IntAna_Curve();
  *tmp = ((IntAna_ListOfCurve*)nativeHandle)->First();
  return gcnew OCIntAna_Curve(tmp);
}

OCIntAna_Curve^ OCIntAna_ListOfCurve::Last()
{
  IntAna_Curve* tmp = new IntAna_Curve();
  *tmp = ((IntAna_ListOfCurve*)nativeHandle)->Last();
  return gcnew OCIntAna_Curve(tmp);
}

 void OCIntAna_ListOfCurve::RemoveFirst()
{
  ((IntAna_ListOfCurve*)nativeHandle)->RemoveFirst();
}

 void OCIntAna_ListOfCurve::Remove(OCNaroWrappers::OCIntAna_ListIteratorOfListOfCurve^ It)
{
  ((IntAna_ListOfCurve*)nativeHandle)->Remove(*((IntAna_ListIteratorOfListOfCurve*)It->Handle));
}

 void OCIntAna_ListOfCurve::InsertBefore(OCNaroWrappers::OCIntAna_Curve^ I, OCNaroWrappers::OCIntAna_ListIteratorOfListOfCurve^ It)
{
  ((IntAna_ListOfCurve*)nativeHandle)->InsertBefore(*((IntAna_Curve*)I->Handle), *((IntAna_ListIteratorOfListOfCurve*)It->Handle));
}

 void OCIntAna_ListOfCurve::InsertBefore(OCNaroWrappers::OCIntAna_ListOfCurve^ Other, OCNaroWrappers::OCIntAna_ListIteratorOfListOfCurve^ It)
{
  ((IntAna_ListOfCurve*)nativeHandle)->InsertBefore(*((IntAna_ListOfCurve*)Other->Handle), *((IntAna_ListIteratorOfListOfCurve*)It->Handle));
}

 void OCIntAna_ListOfCurve::InsertAfter(OCNaroWrappers::OCIntAna_Curve^ I, OCNaroWrappers::OCIntAna_ListIteratorOfListOfCurve^ It)
{
  ((IntAna_ListOfCurve*)nativeHandle)->InsertAfter(*((IntAna_Curve*)I->Handle), *((IntAna_ListIteratorOfListOfCurve*)It->Handle));
}

 void OCIntAna_ListOfCurve::InsertAfter(OCNaroWrappers::OCIntAna_ListOfCurve^ Other, OCNaroWrappers::OCIntAna_ListIteratorOfListOfCurve^ It)
{
  ((IntAna_ListOfCurve*)nativeHandle)->InsertAfter(*((IntAna_ListOfCurve*)Other->Handle), *((IntAna_ListIteratorOfListOfCurve*)It->Handle));
}



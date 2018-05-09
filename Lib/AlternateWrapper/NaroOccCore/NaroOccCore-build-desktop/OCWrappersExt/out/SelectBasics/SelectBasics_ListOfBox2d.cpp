// File generated by CPPExt (CPP file)
//

#include "SelectBasics_ListOfBox2d.h"
#include "../Converter.h"
#include "SelectBasics_ListIteratorOfListOfBox2d.h"
#include "../Bnd/Bnd_Box2d.h"
#include "SelectBasics_ListNodeOfListOfBox2d.h"


using namespace OCNaroWrappers;

OCSelectBasics_ListOfBox2d::OCSelectBasics_ListOfBox2d(SelectBasics_ListOfBox2d* nativeHandle) 
{
  this->nativeHandle = nativeHandle;
}

OCSelectBasics_ListOfBox2d::OCSelectBasics_ListOfBox2d() 
{
  nativeHandle = new SelectBasics_ListOfBox2d();
}

 void OCSelectBasics_ListOfBox2d::Assign(OCNaroWrappers::OCSelectBasics_ListOfBox2d^ Other)
{
  ((SelectBasics_ListOfBox2d*)nativeHandle)->Assign(*((SelectBasics_ListOfBox2d*)Other->Handle));
}

 Standard_Integer OCSelectBasics_ListOfBox2d::Extent()
{
  return ((SelectBasics_ListOfBox2d*)nativeHandle)->Extent();
}

 System::Boolean OCSelectBasics_ListOfBox2d::IsEmpty()
{
  return OCConverter::StandardBooleanToBoolean(((SelectBasics_ListOfBox2d*)nativeHandle)->IsEmpty());
}

 void OCSelectBasics_ListOfBox2d::Prepend(OCNaroWrappers::OCBnd_Box2d^ I)
{
  ((SelectBasics_ListOfBox2d*)nativeHandle)->Prepend(*((Bnd_Box2d*)I->Handle));
}

 void OCSelectBasics_ListOfBox2d::Prepend(OCNaroWrappers::OCBnd_Box2d^ I, OCNaroWrappers::OCSelectBasics_ListIteratorOfListOfBox2d^ theIt)
{
  ((SelectBasics_ListOfBox2d*)nativeHandle)->Prepend(*((Bnd_Box2d*)I->Handle), *((SelectBasics_ListIteratorOfListOfBox2d*)theIt->Handle));
}

 void OCSelectBasics_ListOfBox2d::Prepend(OCNaroWrappers::OCSelectBasics_ListOfBox2d^ Other)
{
  ((SelectBasics_ListOfBox2d*)nativeHandle)->Prepend(*((SelectBasics_ListOfBox2d*)Other->Handle));
}

 void OCSelectBasics_ListOfBox2d::Append(OCNaroWrappers::OCBnd_Box2d^ I)
{
  ((SelectBasics_ListOfBox2d*)nativeHandle)->Append(*((Bnd_Box2d*)I->Handle));
}

 void OCSelectBasics_ListOfBox2d::Append(OCNaroWrappers::OCBnd_Box2d^ I, OCNaroWrappers::OCSelectBasics_ListIteratorOfListOfBox2d^ theIt)
{
  ((SelectBasics_ListOfBox2d*)nativeHandle)->Append(*((Bnd_Box2d*)I->Handle), *((SelectBasics_ListIteratorOfListOfBox2d*)theIt->Handle));
}

 void OCSelectBasics_ListOfBox2d::Append(OCNaroWrappers::OCSelectBasics_ListOfBox2d^ Other)
{
  ((SelectBasics_ListOfBox2d*)nativeHandle)->Append(*((SelectBasics_ListOfBox2d*)Other->Handle));
}

OCBnd_Box2d^ OCSelectBasics_ListOfBox2d::First()
{
  Bnd_Box2d* tmp = new Bnd_Box2d();
  *tmp = ((SelectBasics_ListOfBox2d*)nativeHandle)->First();
  return gcnew OCBnd_Box2d(tmp);
}

OCBnd_Box2d^ OCSelectBasics_ListOfBox2d::Last()
{
  Bnd_Box2d* tmp = new Bnd_Box2d();
  *tmp = ((SelectBasics_ListOfBox2d*)nativeHandle)->Last();
  return gcnew OCBnd_Box2d(tmp);
}

 void OCSelectBasics_ListOfBox2d::RemoveFirst()
{
  ((SelectBasics_ListOfBox2d*)nativeHandle)->RemoveFirst();
}

 void OCSelectBasics_ListOfBox2d::Remove(OCNaroWrappers::OCSelectBasics_ListIteratorOfListOfBox2d^ It)
{
  ((SelectBasics_ListOfBox2d*)nativeHandle)->Remove(*((SelectBasics_ListIteratorOfListOfBox2d*)It->Handle));
}

 void OCSelectBasics_ListOfBox2d::InsertBefore(OCNaroWrappers::OCBnd_Box2d^ I, OCNaroWrappers::OCSelectBasics_ListIteratorOfListOfBox2d^ It)
{
  ((SelectBasics_ListOfBox2d*)nativeHandle)->InsertBefore(*((Bnd_Box2d*)I->Handle), *((SelectBasics_ListIteratorOfListOfBox2d*)It->Handle));
}

 void OCSelectBasics_ListOfBox2d::InsertBefore(OCNaroWrappers::OCSelectBasics_ListOfBox2d^ Other, OCNaroWrappers::OCSelectBasics_ListIteratorOfListOfBox2d^ It)
{
  ((SelectBasics_ListOfBox2d*)nativeHandle)->InsertBefore(*((SelectBasics_ListOfBox2d*)Other->Handle), *((SelectBasics_ListIteratorOfListOfBox2d*)It->Handle));
}

 void OCSelectBasics_ListOfBox2d::InsertAfter(OCNaroWrappers::OCBnd_Box2d^ I, OCNaroWrappers::OCSelectBasics_ListIteratorOfListOfBox2d^ It)
{
  ((SelectBasics_ListOfBox2d*)nativeHandle)->InsertAfter(*((Bnd_Box2d*)I->Handle), *((SelectBasics_ListIteratorOfListOfBox2d*)It->Handle));
}

 void OCSelectBasics_ListOfBox2d::InsertAfter(OCNaroWrappers::OCSelectBasics_ListOfBox2d^ Other, OCNaroWrappers::OCSelectBasics_ListIteratorOfListOfBox2d^ It)
{
  ((SelectBasics_ListOfBox2d*)nativeHandle)->InsertAfter(*((SelectBasics_ListOfBox2d*)Other->Handle), *((SelectBasics_ListIteratorOfListOfBox2d*)It->Handle));
}



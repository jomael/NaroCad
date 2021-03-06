// File generated by CPPExt (CPP file)
//

#include "Bnd_HArray1OfBox2d.h"
#include "../Converter.h"
#include "Bnd_Box2d.h"
#include "Bnd_Array1OfBox2d.h"


using namespace OCNaroWrappers;

OCBnd_HArray1OfBox2d::OCBnd_HArray1OfBox2d(Handle(Bnd_HArray1OfBox2d)* nativeHandle) : OCMMgt_TShared((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_Bnd_HArray1OfBox2d(*nativeHandle);
}

OCBnd_HArray1OfBox2d::OCBnd_HArray1OfBox2d(Standard_Integer Low, Standard_Integer Up) : OCMMgt_TShared((OCDummy^)nullptr)

{
  nativeHandle = new Handle_Bnd_HArray1OfBox2d(new Bnd_HArray1OfBox2d(Low, Up));
}

OCBnd_HArray1OfBox2d::OCBnd_HArray1OfBox2d(Standard_Integer Low, Standard_Integer Up, OCNaroWrappers::OCBnd_Box2d^ V) : OCMMgt_TShared((OCDummy^)nullptr)

{
  nativeHandle = new Handle_Bnd_HArray1OfBox2d(new Bnd_HArray1OfBox2d(Low, Up, *((Bnd_Box2d*)V->Handle)));
}

 void OCBnd_HArray1OfBox2d::Init(OCNaroWrappers::OCBnd_Box2d^ V)
{
  (*((Handle_Bnd_HArray1OfBox2d*)nativeHandle))->Init(*((Bnd_Box2d*)V->Handle));
}

 Standard_Integer OCBnd_HArray1OfBox2d::Length()
{
  return (*((Handle_Bnd_HArray1OfBox2d*)nativeHandle))->Length();
}

 Standard_Integer OCBnd_HArray1OfBox2d::Lower()
{
  return (*((Handle_Bnd_HArray1OfBox2d*)nativeHandle))->Lower();
}

 Standard_Integer OCBnd_HArray1OfBox2d::Upper()
{
  return (*((Handle_Bnd_HArray1OfBox2d*)nativeHandle))->Upper();
}

 void OCBnd_HArray1OfBox2d::SetValue(Standard_Integer Index, OCNaroWrappers::OCBnd_Box2d^ Value)
{
  (*((Handle_Bnd_HArray1OfBox2d*)nativeHandle))->SetValue(Index, *((Bnd_Box2d*)Value->Handle));
}

OCBnd_Box2d^ OCBnd_HArray1OfBox2d::Value(Standard_Integer Index)
{
  Bnd_Box2d* tmp = new Bnd_Box2d();
  *tmp = (*((Handle_Bnd_HArray1OfBox2d*)nativeHandle))->Value(Index);
  return gcnew OCBnd_Box2d(tmp);
}

OCBnd_Box2d^ OCBnd_HArray1OfBox2d::ChangeValue(Standard_Integer Index)
{
  Bnd_Box2d* tmp = new Bnd_Box2d();
  *tmp = (*((Handle_Bnd_HArray1OfBox2d*)nativeHandle))->ChangeValue(Index);
  return gcnew OCBnd_Box2d(tmp);
}

OCBnd_Array1OfBox2d^ OCBnd_HArray1OfBox2d::Array1()
{
  Bnd_Array1OfBox2d* tmp = new Bnd_Array1OfBox2d(0, 0);
  *tmp = (*((Handle_Bnd_HArray1OfBox2d*)nativeHandle))->Array1();
  return gcnew OCBnd_Array1OfBox2d(tmp);
}

OCBnd_Array1OfBox2d^ OCBnd_HArray1OfBox2d::ChangeArray1()
{
  Bnd_Array1OfBox2d* tmp = new Bnd_Array1OfBox2d(0, 0);
  *tmp = (*((Handle_Bnd_HArray1OfBox2d*)nativeHandle))->ChangeArray1();
  return gcnew OCBnd_Array1OfBox2d(tmp);
}



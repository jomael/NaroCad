// File generated by CPPExt (CPP file)
//

#include "BOPTools_CArray1OfPave.h"
#include "../Converter.h"
#include "BOPTools_Pave.h"


using namespace OCNaroWrappers;

OCBOPTools_CArray1OfPave::OCBOPTools_CArray1OfPave(BOPTools_CArray1OfPave* nativeHandle) 
{
  this->nativeHandle = nativeHandle;
}

OCBOPTools_CArray1OfPave::OCBOPTools_CArray1OfPave(Standard_Integer Length, Standard_Integer BlockLength) 
{
  nativeHandle = new BOPTools_CArray1OfPave(Length, BlockLength);
}

 void OCBOPTools_CArray1OfPave::Resize(Standard_Integer theNewLength)
{
  ((BOPTools_CArray1OfPave*)nativeHandle)->Resize(theNewLength);
}

 Standard_Integer OCBOPTools_CArray1OfPave::Length()
{
  return ((BOPTools_CArray1OfPave*)nativeHandle)->Length();
}

 Standard_Integer OCBOPTools_CArray1OfPave::Extent()
{
  return ((BOPTools_CArray1OfPave*)nativeHandle)->Extent();
}

 Standard_Integer OCBOPTools_CArray1OfPave::FactLength()
{
  return ((BOPTools_CArray1OfPave*)nativeHandle)->FactLength();
}

 Standard_Integer OCBOPTools_CArray1OfPave::Append(OCNaroWrappers::OCBOPTools_Pave^ Value)
{
  return ((BOPTools_CArray1OfPave*)nativeHandle)->Append(*((BOPTools_Pave*)Value->Handle));
}

 void OCBOPTools_CArray1OfPave::Remove(Standard_Integer Index)
{
  ((BOPTools_CArray1OfPave*)nativeHandle)->Remove(Index);
}

OCBOPTools_Pave^ OCBOPTools_CArray1OfPave::Value(Standard_Integer Index)
{
  BOPTools_Pave* tmp = new BOPTools_Pave();
  *tmp = ((BOPTools_CArray1OfPave*)nativeHandle)->Value(Index);
  return gcnew OCBOPTools_Pave(tmp);
}

OCBOPTools_Pave^ OCBOPTools_CArray1OfPave::ChangeValue(Standard_Integer Index)
{
  BOPTools_Pave* tmp = new BOPTools_Pave();
  *tmp = ((BOPTools_CArray1OfPave*)nativeHandle)->ChangeValue(Index);
  return gcnew OCBOPTools_Pave(tmp);
}

 void OCBOPTools_CArray1OfPave::SetBlockLength(Standard_Integer aBL)
{
  ((BOPTools_CArray1OfPave*)nativeHandle)->SetBlockLength(aBL);
}

 Standard_Integer OCBOPTools_CArray1OfPave::BlockLength()
{
  return ((BOPTools_CArray1OfPave*)nativeHandle)->BlockLength();
}

 void OCBOPTools_CArray1OfPave::Purge()
{
  ((BOPTools_CArray1OfPave*)nativeHandle)->Purge();
}



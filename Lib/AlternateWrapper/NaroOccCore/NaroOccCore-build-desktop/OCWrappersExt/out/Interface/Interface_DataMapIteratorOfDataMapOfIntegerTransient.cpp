// File generated by CPPExt (CPP file)
//

#include "Interface_DataMapIteratorOfDataMapOfIntegerTransient.h"
#include "../Converter.h"
#include "../Standard/Standard_Transient.h"
#include "../TColStd/TColStd_MapIntegerHasher.h"
#include "Interface_DataMapOfIntegerTransient.h"
#include "Interface_DataMapNodeOfDataMapOfIntegerTransient.h"


using namespace OCNaroWrappers;

OCInterface_DataMapIteratorOfDataMapOfIntegerTransient::OCInterface_DataMapIteratorOfDataMapOfIntegerTransient(Interface_DataMapIteratorOfDataMapOfIntegerTransient* nativeHandle) : OCTCollection_BasicMapIterator((OCDummy^)nullptr)

{
  this->nativeHandle = nativeHandle;
}

OCInterface_DataMapIteratorOfDataMapOfIntegerTransient::OCInterface_DataMapIteratorOfDataMapOfIntegerTransient() : OCTCollection_BasicMapIterator((OCDummy^)nullptr)

{
  nativeHandle = new Interface_DataMapIteratorOfDataMapOfIntegerTransient();
}

OCInterface_DataMapIteratorOfDataMapOfIntegerTransient::OCInterface_DataMapIteratorOfDataMapOfIntegerTransient(OCNaroWrappers::OCInterface_DataMapOfIntegerTransient^ aMap) : OCTCollection_BasicMapIterator((OCDummy^)nullptr)

{
  nativeHandle = new Interface_DataMapIteratorOfDataMapOfIntegerTransient(*((Interface_DataMapOfIntegerTransient*)aMap->Handle));
}

 void OCInterface_DataMapIteratorOfDataMapOfIntegerTransient::Initialize(OCNaroWrappers::OCInterface_DataMapOfIntegerTransient^ aMap)
{
  ((Interface_DataMapIteratorOfDataMapOfIntegerTransient*)nativeHandle)->Initialize(*((Interface_DataMapOfIntegerTransient*)aMap->Handle));
}

 Standard_Integer OCInterface_DataMapIteratorOfDataMapOfIntegerTransient::Key()
{
  return ((Interface_DataMapIteratorOfDataMapOfIntegerTransient*)nativeHandle)->Key();
}

OCStandard_Transient^ OCInterface_DataMapIteratorOfDataMapOfIntegerTransient::Value()
{
  Handle(Standard_Transient) tmp = ((Interface_DataMapIteratorOfDataMapOfIntegerTransient*)nativeHandle)->Value();
  return gcnew OCStandard_Transient(&tmp);
}



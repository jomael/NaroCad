// File generated by CPPExt (CPP file)
//

#include "TDF_LabelMap.h"
#include "../Converter.h"
#include "TDF_Label.h"
#include "TDF_LabelMapHasher.h"
#include "TDF_StdMapNodeOfLabelMap.h"
#include "TDF_MapIteratorOfLabelMap.h"


using namespace OCNaroWrappers;

OCTDF_LabelMap::OCTDF_LabelMap(TDF_LabelMap* nativeHandle) : OCTCollection_BasicMap((OCDummy^)nullptr)

{
  this->nativeHandle = nativeHandle;
}

OCTDF_LabelMap::OCTDF_LabelMap(Standard_Integer NbBuckets) : OCTCollection_BasicMap((OCDummy^)nullptr)

{
  nativeHandle = new TDF_LabelMap(NbBuckets);
}

OCTDF_LabelMap^ OCTDF_LabelMap::Assign(OCNaroWrappers::OCTDF_LabelMap^ Other)
{
  TDF_LabelMap* tmp = new TDF_LabelMap(0);
  *tmp = ((TDF_LabelMap*)nativeHandle)->Assign(*((TDF_LabelMap*)Other->Handle));
  return gcnew OCTDF_LabelMap(tmp);
}

 void OCTDF_LabelMap::ReSize(Standard_Integer NbBuckets)
{
  ((TDF_LabelMap*)nativeHandle)->ReSize(NbBuckets);
}

 System::Boolean OCTDF_LabelMap::Add(OCNaroWrappers::OCTDF_Label^ aKey)
{
  return OCConverter::StandardBooleanToBoolean(((TDF_LabelMap*)nativeHandle)->Add(*((TDF_Label*)aKey->Handle)));
}

 System::Boolean OCTDF_LabelMap::Contains(OCNaroWrappers::OCTDF_Label^ aKey)
{
  return OCConverter::StandardBooleanToBoolean(((TDF_LabelMap*)nativeHandle)->Contains(*((TDF_Label*)aKey->Handle)));
}

 System::Boolean OCTDF_LabelMap::Remove(OCNaroWrappers::OCTDF_Label^ aKey)
{
  return OCConverter::StandardBooleanToBoolean(((TDF_LabelMap*)nativeHandle)->Remove(*((TDF_Label*)aKey->Handle)));
}



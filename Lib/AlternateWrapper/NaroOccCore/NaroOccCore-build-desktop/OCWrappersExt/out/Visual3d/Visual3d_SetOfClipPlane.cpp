// File generated by CPPExt (CPP file)
//

#include "Visual3d_SetOfClipPlane.h"
#include "../Converter.h"
#include "Visual3d_SetIteratorOfSetOfClipPlane.h"
#include "Visual3d_ClipPlane.h"
#include "Visual3d_SetListOfSetOfClipPlane.h"
#include "Visual3d_ListNodeOfSetListOfSetOfClipPlane.h"
#include "Visual3d_ListIteratorOfSetListOfSetOfClipPlane.h"


using namespace OCNaroWrappers;

OCVisual3d_SetOfClipPlane::OCVisual3d_SetOfClipPlane(Visual3d_SetOfClipPlane* nativeHandle) 
{
  this->nativeHandle = nativeHandle;
}

OCVisual3d_SetOfClipPlane::OCVisual3d_SetOfClipPlane() 
{
  nativeHandle = new Visual3d_SetOfClipPlane();
}

 Standard_Integer OCVisual3d_SetOfClipPlane::Extent()
{
  return ((Visual3d_SetOfClipPlane*)nativeHandle)->Extent();
}

 System::Boolean OCVisual3d_SetOfClipPlane::IsEmpty()
{
  return OCConverter::StandardBooleanToBoolean(((Visual3d_SetOfClipPlane*)nativeHandle)->IsEmpty());
}

 void OCVisual3d_SetOfClipPlane::Clear()
{
  ((Visual3d_SetOfClipPlane*)nativeHandle)->Clear();
}

 System::Boolean OCVisual3d_SetOfClipPlane::Add(OCNaroWrappers::OCVisual3d_ClipPlane^ T)
{
  return OCConverter::StandardBooleanToBoolean(((Visual3d_SetOfClipPlane*)nativeHandle)->Add(*((Handle_Visual3d_ClipPlane*)T->Handle)));
}

 System::Boolean OCVisual3d_SetOfClipPlane::Remove(OCNaroWrappers::OCVisual3d_ClipPlane^ T)
{
  return OCConverter::StandardBooleanToBoolean(((Visual3d_SetOfClipPlane*)nativeHandle)->Remove(*((Handle_Visual3d_ClipPlane*)T->Handle)));
}

 void OCVisual3d_SetOfClipPlane::Union(OCNaroWrappers::OCVisual3d_SetOfClipPlane^ B)
{
  ((Visual3d_SetOfClipPlane*)nativeHandle)->Union(*((Visual3d_SetOfClipPlane*)B->Handle));
}

 void OCVisual3d_SetOfClipPlane::Intersection(OCNaroWrappers::OCVisual3d_SetOfClipPlane^ B)
{
  ((Visual3d_SetOfClipPlane*)nativeHandle)->Intersection(*((Visual3d_SetOfClipPlane*)B->Handle));
}

 void OCVisual3d_SetOfClipPlane::Difference(OCNaroWrappers::OCVisual3d_SetOfClipPlane^ B)
{
  ((Visual3d_SetOfClipPlane*)nativeHandle)->Difference(*((Visual3d_SetOfClipPlane*)B->Handle));
}

 System::Boolean OCVisual3d_SetOfClipPlane::Contains(OCNaroWrappers::OCVisual3d_ClipPlane^ T)
{
  return OCConverter::StandardBooleanToBoolean(((Visual3d_SetOfClipPlane*)nativeHandle)->Contains(*((Handle_Visual3d_ClipPlane*)T->Handle)));
}

 System::Boolean OCVisual3d_SetOfClipPlane::IsASubset(OCNaroWrappers::OCVisual3d_SetOfClipPlane^ S)
{
  return OCConverter::StandardBooleanToBoolean(((Visual3d_SetOfClipPlane*)nativeHandle)->IsASubset(*((Visual3d_SetOfClipPlane*)S->Handle)));
}

 System::Boolean OCVisual3d_SetOfClipPlane::IsAProperSubset(OCNaroWrappers::OCVisual3d_SetOfClipPlane^ S)
{
  return OCConverter::StandardBooleanToBoolean(((Visual3d_SetOfClipPlane*)nativeHandle)->IsAProperSubset(*((Visual3d_SetOfClipPlane*)S->Handle)));
}



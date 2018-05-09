// File generated by CPPExt (CPP file)
//

#include "Graphic3d_SetOfGroup.h"
#include "../Converter.h"
#include "Graphic3d_SetIteratorOfSetOfGroup.h"
#include "Graphic3d_Group.h"
#include "Graphic3d_SetListOfSetOfGroup.h"
#include "Graphic3d_ListNodeOfSetListOfSetOfGroup.h"
#include "Graphic3d_ListIteratorOfSetListOfSetOfGroup.h"


using namespace OCNaroWrappers;

OCGraphic3d_SetOfGroup::OCGraphic3d_SetOfGroup(Graphic3d_SetOfGroup* nativeHandle) 
{
  this->nativeHandle = nativeHandle;
}

OCGraphic3d_SetOfGroup::OCGraphic3d_SetOfGroup() 
{
  nativeHandle = new Graphic3d_SetOfGroup();
}

 Standard_Integer OCGraphic3d_SetOfGroup::Extent()
{
  return ((Graphic3d_SetOfGroup*)nativeHandle)->Extent();
}

 System::Boolean OCGraphic3d_SetOfGroup::IsEmpty()
{
  return OCConverter::StandardBooleanToBoolean(((Graphic3d_SetOfGroup*)nativeHandle)->IsEmpty());
}

 void OCGraphic3d_SetOfGroup::Clear()
{
  ((Graphic3d_SetOfGroup*)nativeHandle)->Clear();
}

 System::Boolean OCGraphic3d_SetOfGroup::Add(OCNaroWrappers::OCGraphic3d_Group^ T)
{
  return OCConverter::StandardBooleanToBoolean(((Graphic3d_SetOfGroup*)nativeHandle)->Add(*((Handle_Graphic3d_Group*)T->Handle)));
}

 System::Boolean OCGraphic3d_SetOfGroup::Remove(OCNaroWrappers::OCGraphic3d_Group^ T)
{
  return OCConverter::StandardBooleanToBoolean(((Graphic3d_SetOfGroup*)nativeHandle)->Remove(*((Handle_Graphic3d_Group*)T->Handle)));
}

 void OCGraphic3d_SetOfGroup::Union(OCNaroWrappers::OCGraphic3d_SetOfGroup^ B)
{
  ((Graphic3d_SetOfGroup*)nativeHandle)->Union(*((Graphic3d_SetOfGroup*)B->Handle));
}

 void OCGraphic3d_SetOfGroup::Intersection(OCNaroWrappers::OCGraphic3d_SetOfGroup^ B)
{
  ((Graphic3d_SetOfGroup*)nativeHandle)->Intersection(*((Graphic3d_SetOfGroup*)B->Handle));
}

 void OCGraphic3d_SetOfGroup::Difference(OCNaroWrappers::OCGraphic3d_SetOfGroup^ B)
{
  ((Graphic3d_SetOfGroup*)nativeHandle)->Difference(*((Graphic3d_SetOfGroup*)B->Handle));
}

 System::Boolean OCGraphic3d_SetOfGroup::Contains(OCNaroWrappers::OCGraphic3d_Group^ T)
{
  return OCConverter::StandardBooleanToBoolean(((Graphic3d_SetOfGroup*)nativeHandle)->Contains(*((Handle_Graphic3d_Group*)T->Handle)));
}

 System::Boolean OCGraphic3d_SetOfGroup::IsASubset(OCNaroWrappers::OCGraphic3d_SetOfGroup^ S)
{
  return OCConverter::StandardBooleanToBoolean(((Graphic3d_SetOfGroup*)nativeHandle)->IsASubset(*((Graphic3d_SetOfGroup*)S->Handle)));
}

 System::Boolean OCGraphic3d_SetOfGroup::IsAProperSubset(OCNaroWrappers::OCGraphic3d_SetOfGroup^ S)
{
  return OCConverter::StandardBooleanToBoolean(((Graphic3d_SetOfGroup*)nativeHandle)->IsAProperSubset(*((Graphic3d_SetOfGroup*)S->Handle)));
}



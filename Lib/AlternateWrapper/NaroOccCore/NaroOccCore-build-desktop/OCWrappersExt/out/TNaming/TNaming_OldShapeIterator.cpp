// File generated by CPPExt (CPP file)
//

#include "TNaming_OldShapeIterator.h"
#include "../Converter.h"
#include "TNaming_Tool.h"
#include "TNaming_Localizer.h"
#include "TNaming_Naming.h"
#include "../TopoDS/TopoDS_Shape.h"
#include "TNaming_UsedShapes.h"
#include "../TDF/TDF_Label.h"
#include "TNaming_Iterator.h"
#include "TNaming_NamedShape.h"


using namespace OCNaroWrappers;

OCTNaming_OldShapeIterator::OCTNaming_OldShapeIterator(TNaming_OldShapeIterator* nativeHandle) 
{
  this->nativeHandle = nativeHandle;
}

OCTNaming_OldShapeIterator::OCTNaming_OldShapeIterator(OCNaroWrappers::OCTopoDS_Shape^ aShape, Standard_Integer Transaction, OCNaroWrappers::OCTDF_Label^ access) 
{
  nativeHandle = new TNaming_OldShapeIterator(*((TopoDS_Shape*)aShape->Handle), Transaction, *((TDF_Label*)access->Handle));
}

OCTNaming_OldShapeIterator::OCTNaming_OldShapeIterator(OCNaroWrappers::OCTopoDS_Shape^ aShape, OCNaroWrappers::OCTDF_Label^ access) 
{
  nativeHandle = new TNaming_OldShapeIterator(*((TopoDS_Shape*)aShape->Handle), *((TDF_Label*)access->Handle));
}

OCTNaming_OldShapeIterator::OCTNaming_OldShapeIterator(OCNaroWrappers::OCTNaming_OldShapeIterator^ anIterator) 
{
  nativeHandle = new TNaming_OldShapeIterator(*((TNaming_OldShapeIterator*)anIterator->Handle));
}

OCTNaming_OldShapeIterator::OCTNaming_OldShapeIterator(OCNaroWrappers::OCTNaming_Iterator^ anIterator) 
{
  nativeHandle = new TNaming_OldShapeIterator(*((TNaming_Iterator*)anIterator->Handle));
}

 System::Boolean OCTNaming_OldShapeIterator::More()
{
  return OCConverter::StandardBooleanToBoolean(((TNaming_OldShapeIterator*)nativeHandle)->More());
}

 void OCTNaming_OldShapeIterator::Next()
{
  ((TNaming_OldShapeIterator*)nativeHandle)->Next();
}

OCTDF_Label^ OCTNaming_OldShapeIterator::Label()
{
  TDF_Label* tmp = new TDF_Label();
  *tmp = ((TNaming_OldShapeIterator*)nativeHandle)->Label();
  return gcnew OCTDF_Label(tmp);
}

OCTNaming_NamedShape^ OCTNaming_OldShapeIterator::NamedShape()
{
  Handle(TNaming_NamedShape) tmp = ((TNaming_OldShapeIterator*)nativeHandle)->NamedShape();
  return gcnew OCTNaming_NamedShape(&tmp);
}

OCTopoDS_Shape^ OCTNaming_OldShapeIterator::Shape()
{
  TopoDS_Shape* tmp = new TopoDS_Shape();
  *tmp = ((TNaming_OldShapeIterator*)nativeHandle)->Shape();
  return gcnew OCTopoDS_Shape(tmp);
}

 System::Boolean OCTNaming_OldShapeIterator::IsModification()
{
  return OCConverter::StandardBooleanToBoolean(((TNaming_OldShapeIterator*)nativeHandle)->IsModification());
}



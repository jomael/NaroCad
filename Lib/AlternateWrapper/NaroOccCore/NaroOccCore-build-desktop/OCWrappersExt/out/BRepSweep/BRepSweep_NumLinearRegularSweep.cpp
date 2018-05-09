// File generated by CPPExt (CPP file)
//

#include "BRepSweep_NumLinearRegularSweep.h"
#include "../Converter.h"
#include "../TopoDS/TopoDS_Shape.h"
#include "../Sweep/Sweep_NumShape.h"
#include "BRepSweep_Builder.h"
#include "BRepSweep_Tool.h"
#include "../Sweep/Sweep_NumShapeTool.h"
#include "BRepSweep_Iterator.h"
#include "../Sweep/Sweep_NumShapeIterator.h"
#include "BRepSweep_Array2OfShapesOfNumLinearRegularSweep.h"
#include "BRepSweep_SequenceOfShapesOfNumLinearRegularSweep.h"
#include "BRepSweep_SequenceNodeOfSequenceOfShapesOfNumLinearRegularSweep.h"


using namespace OCNaroWrappers;

OCBRepSweep_NumLinearRegularSweep::OCBRepSweep_NumLinearRegularSweep(BRepSweep_NumLinearRegularSweep* nativeHandle) 
{
  this->nativeHandle = nativeHandle;
}

OCBRepSweep_NumLinearRegularSweep::OCBRepSweep_NumLinearRegularSweep(OCNaroWrappers::OCBRepSweep_Builder^ aBuilder, OCNaroWrappers::OCTopoDS_Shape^ aGenShape, OCNaroWrappers::OCSweep_NumShape^ aDirWire) 
{}

OCTopoDS_Shape^ OCBRepSweep_NumLinearRegularSweep::SplitShell(OCNaroWrappers::OCTopoDS_Shape^ aNewShape)
{
  TopoDS_Shape* tmp = new TopoDS_Shape();
  *tmp = ((BRepSweep_NumLinearRegularSweep*)nativeHandle)->SplitShell(*((TopoDS_Shape*)aNewShape->Handle));
  return gcnew OCTopoDS_Shape(tmp);
}

OCTopoDS_Shape^ OCBRepSweep_NumLinearRegularSweep::Shape(OCNaroWrappers::OCTopoDS_Shape^ aGenS, OCNaroWrappers::OCSweep_NumShape^ aDirS)
{
  TopoDS_Shape* tmp = new TopoDS_Shape();
  *tmp = ((BRepSweep_NumLinearRegularSweep*)nativeHandle)->Shape(*((TopoDS_Shape*)aGenS->Handle), *((Sweep_NumShape*)aDirS->Handle));
  return gcnew OCTopoDS_Shape(tmp);
}

OCTopoDS_Shape^ OCBRepSweep_NumLinearRegularSweep::Shape(OCNaroWrappers::OCTopoDS_Shape^ aGenS)
{
  TopoDS_Shape* tmp = new TopoDS_Shape();
  *tmp = ((BRepSweep_NumLinearRegularSweep*)nativeHandle)->Shape(*((TopoDS_Shape*)aGenS->Handle));
  return gcnew OCTopoDS_Shape(tmp);
}

OCTopoDS_Shape^ OCBRepSweep_NumLinearRegularSweep::Shape()
{
  TopoDS_Shape* tmp = new TopoDS_Shape();
  *tmp = ((BRepSweep_NumLinearRegularSweep*)nativeHandle)->Shape();
  return gcnew OCTopoDS_Shape(tmp);
}

OCTopoDS_Shape^ OCBRepSweep_NumLinearRegularSweep::FirstShape()
{
  TopoDS_Shape* tmp = new TopoDS_Shape();
  *tmp = ((BRepSweep_NumLinearRegularSweep*)nativeHandle)->FirstShape();
  return gcnew OCTopoDS_Shape(tmp);
}

OCTopoDS_Shape^ OCBRepSweep_NumLinearRegularSweep::LastShape()
{
  TopoDS_Shape* tmp = new TopoDS_Shape();
  *tmp = ((BRepSweep_NumLinearRegularSweep*)nativeHandle)->LastShape();
  return gcnew OCTopoDS_Shape(tmp);
}

OCTopoDS_Shape^ OCBRepSweep_NumLinearRegularSweep::FirstShape(OCNaroWrappers::OCTopoDS_Shape^ aGenS)
{
  TopoDS_Shape* tmp = new TopoDS_Shape();
  *tmp = ((BRepSweep_NumLinearRegularSweep*)nativeHandle)->FirstShape(*((TopoDS_Shape*)aGenS->Handle));
  return gcnew OCTopoDS_Shape(tmp);
}

OCTopoDS_Shape^ OCBRepSweep_NumLinearRegularSweep::LastShape(OCNaroWrappers::OCTopoDS_Shape^ aGenS)
{
  TopoDS_Shape* tmp = new TopoDS_Shape();
  *tmp = ((BRepSweep_NumLinearRegularSweep*)nativeHandle)->LastShape(*((TopoDS_Shape*)aGenS->Handle));
  return gcnew OCTopoDS_Shape(tmp);
}

 System::Boolean OCBRepSweep_NumLinearRegularSweep::Closed()
{
  return OCConverter::StandardBooleanToBoolean(((BRepSweep_NumLinearRegularSweep*)nativeHandle)->Closed());
}



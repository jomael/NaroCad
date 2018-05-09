// File generated by CPPExt (CPP file)
//

#include "BRepCheck_Analyzer.h"
#include "../Converter.h"
#include "../TopoDS/TopoDS_Shape.h"
#include "BRepCheck_Result.h"


using namespace OCNaroWrappers;

OCBRepCheck_Analyzer::OCBRepCheck_Analyzer(BRepCheck_Analyzer* nativeHandle) 
{
  this->nativeHandle = nativeHandle;
}

OCBRepCheck_Analyzer::OCBRepCheck_Analyzer(OCNaroWrappers::OCTopoDS_Shape^ S, System::Boolean GeomControls) 
{
  nativeHandle = new BRepCheck_Analyzer(*((TopoDS_Shape*)S->Handle), OCConverter::BooleanToStandardBoolean(GeomControls));
}

 void OCBRepCheck_Analyzer::Init(OCNaroWrappers::OCTopoDS_Shape^ S, System::Boolean GeomControls)
{
  ((BRepCheck_Analyzer*)nativeHandle)->Init(*((TopoDS_Shape*)S->Handle), OCConverter::BooleanToStandardBoolean(GeomControls));
}

 System::Boolean OCBRepCheck_Analyzer::IsValid(OCNaroWrappers::OCTopoDS_Shape^ S)
{
  return OCConverter::StandardBooleanToBoolean(((BRepCheck_Analyzer*)nativeHandle)->IsValid(*((TopoDS_Shape*)S->Handle)));
}

 System::Boolean OCBRepCheck_Analyzer::IsValid()
{
  return OCConverter::StandardBooleanToBoolean(((BRepCheck_Analyzer*)nativeHandle)->IsValid());
}

OCBRepCheck_Result^ OCBRepCheck_Analyzer::Result(OCNaroWrappers::OCTopoDS_Shape^ SubS)
{
  Handle(BRepCheck_Result) tmp = ((BRepCheck_Analyzer*)nativeHandle)->Result(*((TopoDS_Shape*)SubS->Handle));
  return gcnew OCBRepCheck_Result(&tmp);
}



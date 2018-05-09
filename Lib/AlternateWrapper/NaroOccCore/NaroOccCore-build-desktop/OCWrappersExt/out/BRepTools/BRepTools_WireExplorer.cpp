// File generated by CPPExt (CPP file)
//

#include "BRepTools_WireExplorer.h"
#include "../Converter.h"
#include "../TopoDS/TopoDS_Wire.h"
#include "../TopoDS/TopoDS_Face.h"
#include "../TopoDS/TopoDS_Edge.h"
#include "../TopoDS/TopoDS_Vertex.h"


using namespace OCNaroWrappers;

OCBRepTools_WireExplorer::OCBRepTools_WireExplorer(BRepTools_WireExplorer* nativeHandle) 
{
  this->nativeHandle = nativeHandle;
}

OCBRepTools_WireExplorer::OCBRepTools_WireExplorer() 
{
  nativeHandle = new BRepTools_WireExplorer();
}

OCBRepTools_WireExplorer::OCBRepTools_WireExplorer(OCNaroWrappers::OCTopoDS_Wire^ W) 
{
  nativeHandle = new BRepTools_WireExplorer(*((TopoDS_Wire*)W->Handle));
}

OCBRepTools_WireExplorer::OCBRepTools_WireExplorer(OCNaroWrappers::OCTopoDS_Wire^ W, OCNaroWrappers::OCTopoDS_Face^ F) 
{
  nativeHandle = new BRepTools_WireExplorer(*((TopoDS_Wire*)W->Handle), *((TopoDS_Face*)F->Handle));
}

 void OCBRepTools_WireExplorer::Init(OCNaroWrappers::OCTopoDS_Wire^ W)
{
  ((BRepTools_WireExplorer*)nativeHandle)->Init(*((TopoDS_Wire*)W->Handle));
}

 void OCBRepTools_WireExplorer::Init(OCNaroWrappers::OCTopoDS_Wire^ W, OCNaroWrappers::OCTopoDS_Face^ F)
{
  ((BRepTools_WireExplorer*)nativeHandle)->Init(*((TopoDS_Wire*)W->Handle), *((TopoDS_Face*)F->Handle));
}

 System::Boolean OCBRepTools_WireExplorer::More()
{
  return OCConverter::StandardBooleanToBoolean(((BRepTools_WireExplorer*)nativeHandle)->More());
}

 void OCBRepTools_WireExplorer::Next()
{
  ((BRepTools_WireExplorer*)nativeHandle)->Next();
}

OCTopoDS_Edge^ OCBRepTools_WireExplorer::Current()
{
  TopoDS_Edge* tmp = new TopoDS_Edge();
  *tmp = ((BRepTools_WireExplorer*)nativeHandle)->Current();
  return gcnew OCTopoDS_Edge(tmp);
}

 OCTopAbs_Orientation OCBRepTools_WireExplorer::Orientation()
{
  return (OCTopAbs_Orientation)(((BRepTools_WireExplorer*)nativeHandle)->Orientation());
}

OCTopoDS_Vertex^ OCBRepTools_WireExplorer::CurrentVertex()
{
  TopoDS_Vertex* tmp = new TopoDS_Vertex();
  *tmp = ((BRepTools_WireExplorer*)nativeHandle)->CurrentVertex();
  return gcnew OCTopoDS_Vertex(tmp);
}

 void OCBRepTools_WireExplorer::Clear()
{
  ((BRepTools_WireExplorer*)nativeHandle)->Clear();
}



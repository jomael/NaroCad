// File generated by CPPExt (CPP file)
//

#include "TopOpeBRepTool_REGUW.h"
#include "../Converter.h"
#include "../TopoDS/TopoDS_Face.h"
#include "../TopTools/TopTools_DataMapOfShapeListOfShape.h"
#include "../TopoDS/TopoDS_Shape.h"
#include "../TopTools/TopTools_ListOfShape.h"
#include "../TopoDS/TopoDS_Edge.h"
#include "../TopoDS/TopoDS_Vertex.h"
#include "TopOpeBRepTool_connexity.h"


using namespace OCNaroWrappers;

OCTopOpeBRepTool_REGUW::OCTopOpeBRepTool_REGUW(TopOpeBRepTool_REGUW* nativeHandle) 
{
  this->nativeHandle = nativeHandle;
}

OCTopOpeBRepTool_REGUW::OCTopOpeBRepTool_REGUW(OCNaroWrappers::OCTopoDS_Face^ FRef) 
{
  nativeHandle = new TopOpeBRepTool_REGUW(*((TopoDS_Face*)FRef->Handle));
}

OCTopoDS_Face^ OCTopOpeBRepTool_REGUW::Fref()
{
  TopoDS_Face* tmp = new TopoDS_Face();
  *tmp = ((TopOpeBRepTool_REGUW*)nativeHandle)->Fref();
  return gcnew OCTopoDS_Face(tmp);
}

 void OCTopOpeBRepTool_REGUW::SetEsplits(OCNaroWrappers::OCTopTools_DataMapOfShapeListOfShape^ Esplits)
{
  ((TopOpeBRepTool_REGUW*)nativeHandle)->SetEsplits(*((TopTools_DataMapOfShapeListOfShape*)Esplits->Handle));
}

 void OCTopOpeBRepTool_REGUW::GetEsplits(OCNaroWrappers::OCTopTools_DataMapOfShapeListOfShape^ Esplits)
{
  ((TopOpeBRepTool_REGUW*)nativeHandle)->GetEsplits(*((TopTools_DataMapOfShapeListOfShape*)Esplits->Handle));
}

 void OCTopOpeBRepTool_REGUW::SetOwNw(OCNaroWrappers::OCTopTools_DataMapOfShapeListOfShape^ OwNw)
{
  ((TopOpeBRepTool_REGUW*)nativeHandle)->SetOwNw(*((TopTools_DataMapOfShapeListOfShape*)OwNw->Handle));
}

 void OCTopOpeBRepTool_REGUW::GetOwNw(OCNaroWrappers::OCTopTools_DataMapOfShapeListOfShape^ OwNw)
{
  ((TopOpeBRepTool_REGUW*)nativeHandle)->GetOwNw(*((TopTools_DataMapOfShapeListOfShape*)OwNw->Handle));
}

 System::Boolean OCTopOpeBRepTool_REGUW::SplitEds()
{
  return OCConverter::StandardBooleanToBoolean(((TopOpeBRepTool_REGUW*)nativeHandle)->SplitEds());
}

 void OCTopOpeBRepTool_REGUW::Init(OCNaroWrappers::OCTopoDS_Shape^ S)
{
  ((TopOpeBRepTool_REGUW*)nativeHandle)->Init(*((TopoDS_Shape*)S->Handle));
}

OCTopoDS_Shape^ OCTopOpeBRepTool_REGUW::S()
{
  TopoDS_Shape* tmp = new TopoDS_Shape();
  *tmp = ((TopOpeBRepTool_REGUW*)nativeHandle)->S();
  return gcnew OCTopoDS_Shape(tmp);
}

 System::Boolean OCTopOpeBRepTool_REGUW::HasInit()
{
  return OCConverter::StandardBooleanToBoolean(((TopOpeBRepTool_REGUW*)nativeHandle)->HasInit());
}

 System::Boolean OCTopOpeBRepTool_REGUW::MapS()
{
  return OCConverter::StandardBooleanToBoolean(((TopOpeBRepTool_REGUW*)nativeHandle)->MapS());
}

 System::Boolean OCTopOpeBRepTool_REGUW::REGU(Standard_Integer istep, OCNaroWrappers::OCTopoDS_Shape^ Scur, OCNaroWrappers::OCTopTools_ListOfShape^ Splits)
{
  return OCConverter::StandardBooleanToBoolean(((TopOpeBRepTool_REGUW*)nativeHandle)->REGU(istep, *((TopoDS_Shape*)Scur->Handle), *((TopTools_ListOfShape*)Splits->Handle)));
}

 System::Boolean OCTopOpeBRepTool_REGUW::REGU()
{
  return OCConverter::StandardBooleanToBoolean(((TopOpeBRepTool_REGUW*)nativeHandle)->REGU());
}

 System::Boolean OCTopOpeBRepTool_REGUW::GetSplits(OCNaroWrappers::OCTopTools_ListOfShape^ Splits)
{
  return OCConverter::StandardBooleanToBoolean(((TopOpeBRepTool_REGUW*)nativeHandle)->GetSplits(*((TopTools_ListOfShape*)Splits->Handle)));
}

 System::Boolean OCTopOpeBRepTool_REGUW::InitBlock()
{
  return OCConverter::StandardBooleanToBoolean(((TopOpeBRepTool_REGUW*)nativeHandle)->InitBlock());
}

 System::Boolean OCTopOpeBRepTool_REGUW::NextinBlock()
{
  return OCConverter::StandardBooleanToBoolean(((TopOpeBRepTool_REGUW*)nativeHandle)->NextinBlock());
}

 System::Boolean OCTopOpeBRepTool_REGUW::NearestE(OCNaroWrappers::OCTopTools_ListOfShape^ loe, OCNaroWrappers::OCTopoDS_Edge^ efound)
{
  return OCConverter::StandardBooleanToBoolean(((TopOpeBRepTool_REGUW*)nativeHandle)->NearestE(*((TopTools_ListOfShape*)loe->Handle), *((TopoDS_Edge*)efound->Handle)));
}

 System::Boolean OCTopOpeBRepTool_REGUW::Connexity(OCNaroWrappers::OCTopoDS_Vertex^ v, OCNaroWrappers::OCTopOpeBRepTool_connexity^ co)
{
  return OCConverter::StandardBooleanToBoolean(((TopOpeBRepTool_REGUW*)nativeHandle)->Connexity(*((TopoDS_Vertex*)v->Handle), *((TopOpeBRepTool_connexity*)co->Handle)));
}

 System::Boolean OCTopOpeBRepTool_REGUW::AddNewConnexity(OCNaroWrappers::OCTopoDS_Vertex^ v, Standard_Integer OriKey, OCNaroWrappers::OCTopoDS_Edge^ e)
{
  return OCConverter::StandardBooleanToBoolean(((TopOpeBRepTool_REGUW*)nativeHandle)->AddNewConnexity(*((TopoDS_Vertex*)v->Handle), OriKey, *((TopoDS_Edge*)e->Handle)));
}

 System::Boolean OCTopOpeBRepTool_REGUW::RemoveOldConnexity(OCNaroWrappers::OCTopoDS_Vertex^ v, Standard_Integer OriKey, OCNaroWrappers::OCTopoDS_Edge^ e)
{
  return OCConverter::StandardBooleanToBoolean(((TopOpeBRepTool_REGUW*)nativeHandle)->RemoveOldConnexity(*((TopoDS_Vertex*)v->Handle), OriKey, *((TopoDS_Edge*)e->Handle)));
}

 System::Boolean OCTopOpeBRepTool_REGUW::UpdateMultiple(OCNaroWrappers::OCTopoDS_Vertex^ v)
{
  return OCConverter::StandardBooleanToBoolean(((TopOpeBRepTool_REGUW*)nativeHandle)->UpdateMultiple(*((TopoDS_Vertex*)v->Handle)));
}



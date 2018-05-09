// File generated by CPPExt (CPP file)
//

#include "TopOpeBRep_EdgesFiller.h"
#include "../Converter.h"
#include "../TopOpeBRepDS/TopOpeBRepDS_HDataStructure.h"
#include "../TopoDS/TopoDS_Shape.h"
#include "TopOpeBRep_EdgesIntersector.h"
#include "../TopOpeBRepDS/TopOpeBRepDS_ListIteratorOfListOfInterference.h"
#include "TopOpeBRep_Point2d.h"
#include "../TopOpeBRepDS/TopOpeBRepDS_Transition.h"
#include "../TopOpeBRepDS/TopOpeBRepDS_Interference.h"
#include "../TopoDS/TopoDS_Edge.h"
#include "../TopOpeBRepDS/TopOpeBRepDS_ListOfInterference.h"


using namespace OCNaroWrappers;

OCTopOpeBRep_EdgesFiller::OCTopOpeBRep_EdgesFiller(TopOpeBRep_EdgesFiller* nativeHandle) 
{
  this->nativeHandle = nativeHandle;
}

OCTopOpeBRep_EdgesFiller::OCTopOpeBRep_EdgesFiller() 
{
  nativeHandle = new TopOpeBRep_EdgesFiller();
}

 void OCTopOpeBRep_EdgesFiller::Insert(OCNaroWrappers::OCTopoDS_Shape^ E1, OCNaroWrappers::OCTopoDS_Shape^ E2, OCNaroWrappers::OCTopOpeBRep_EdgesIntersector^ EI, OCNaroWrappers::OCTopOpeBRepDS_HDataStructure^ HDS)
{
  ((TopOpeBRep_EdgesFiller*)nativeHandle)->Insert(*((TopoDS_Shape*)E1->Handle), *((TopoDS_Shape*)E2->Handle), *((TopOpeBRep_EdgesIntersector*)EI->Handle), *((Handle_TopOpeBRepDS_HDataStructure*)HDS->Handle));
}

 void OCTopOpeBRep_EdgesFiller::Face(Standard_Integer I, OCNaroWrappers::OCTopoDS_Shape^ F)
{
  ((TopOpeBRep_EdgesFiller*)nativeHandle)->Face(I, *((TopoDS_Shape*)F->Handle));
}

OCTopoDS_Shape^ OCTopOpeBRep_EdgesFiller::Face(Standard_Integer I)
{
  TopoDS_Shape* tmp = new TopoDS_Shape();
  *tmp = ((TopOpeBRep_EdgesFiller*)nativeHandle)->Face(I);
  return gcnew OCTopoDS_Shape(tmp);
}



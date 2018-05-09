// File generated by CPPExt (CPP file)
//

#include "MAT_Node.h"
#include "../Converter.h"
#include "MAT_Arc.h"
#include "MAT_SequenceOfArc.h"
#include "MAT_SequenceOfBasicElt.h"


using namespace OCNaroWrappers;

OCMAT_Node::OCMAT_Node(Handle(MAT_Node)* nativeHandle) : OCMMgt_TShared((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_MAT_Node(*nativeHandle);
}

OCMAT_Node::OCMAT_Node(Standard_Integer GeomIndex, OCNaroWrappers::OCMAT_Arc^ LinkedArc, Standard_Real Distance) : OCMMgt_TShared((OCDummy^)nullptr)

{
  nativeHandle = new Handle_MAT_Node(new MAT_Node(GeomIndex, *((Handle_MAT_Arc*)LinkedArc->Handle), Distance));
}

 Standard_Integer OCMAT_Node::GeomIndex()
{
  return (*((Handle_MAT_Node*)nativeHandle))->GeomIndex();
}

 Standard_Integer OCMAT_Node::Index()
{
  return (*((Handle_MAT_Node*)nativeHandle))->Index();
}

 void OCMAT_Node::LinkedArcs(OCNaroWrappers::OCMAT_SequenceOfArc^ S)
{
  (*((Handle_MAT_Node*)nativeHandle))->LinkedArcs(*((MAT_SequenceOfArc*)S->Handle));
}

 void OCMAT_Node::NearElts(OCNaroWrappers::OCMAT_SequenceOfBasicElt^ S)
{
  (*((Handle_MAT_Node*)nativeHandle))->NearElts(*((MAT_SequenceOfBasicElt*)S->Handle));
}

 Standard_Real OCMAT_Node::Distance()
{
  return (*((Handle_MAT_Node*)nativeHandle))->Distance();
}

 System::Boolean OCMAT_Node::PendingNode()
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_MAT_Node*)nativeHandle))->PendingNode());
}

 System::Boolean OCMAT_Node::OnBasicElt()
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_MAT_Node*)nativeHandle))->OnBasicElt());
}

 System::Boolean OCMAT_Node::Infinite()
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_MAT_Node*)nativeHandle))->Infinite());
}

 void OCMAT_Node::SetIndex(Standard_Integer anIndex)
{
  (*((Handle_MAT_Node*)nativeHandle))->SetIndex(anIndex);
}

 void OCMAT_Node::SetLinkedArc(OCNaroWrappers::OCMAT_Arc^ anArc)
{
  (*((Handle_MAT_Node*)nativeHandle))->SetLinkedArc(*((Handle_MAT_Arc*)anArc->Handle));
}



// File generated by CPPExt (CPP file)
//

#include "TCollection_SeqNode.h"
#include "../Converter.h"


using namespace OCNaroWrappers;

OCTCollection_SeqNode::OCTCollection_SeqNode(Handle(TCollection_SeqNode)* nativeHandle) : OCMMgt_TShared((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_TCollection_SeqNode(*nativeHandle);
}

OCTCollection_SeqNode::OCTCollection_SeqNode(TCollection_SeqNodePtr n, TCollection_SeqNodePtr p) : OCMMgt_TShared((OCDummy^)nullptr)

{
  nativeHandle = new Handle_TCollection_SeqNode(new TCollection_SeqNode(n, p));
}

 TCollection_SeqNodePtr& OCTCollection_SeqNode::Next()
{
  return (*((Handle_TCollection_SeqNode*)nativeHandle))->Next();
}

 TCollection_SeqNodePtr& OCTCollection_SeqNode::Previous()
{
  return (*((Handle_TCollection_SeqNode*)nativeHandle))->Previous();
}



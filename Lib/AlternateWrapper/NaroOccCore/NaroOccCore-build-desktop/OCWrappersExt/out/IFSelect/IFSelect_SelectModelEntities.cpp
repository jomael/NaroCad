// File generated by CPPExt (CPP file)
//

#include "IFSelect_SelectModelEntities.h"
#include "../Converter.h"
#include "../Interface/Interface_EntityIterator.h"
#include "../Interface/Interface_Graph.h"
#include "../TCollection/TCollection_AsciiString.h"


using namespace OCNaroWrappers;

OCIFSelect_SelectModelEntities::OCIFSelect_SelectModelEntities(Handle(IFSelect_SelectModelEntities)* nativeHandle) : OCIFSelect_SelectBase((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_IFSelect_SelectModelEntities(*nativeHandle);
}

OCIFSelect_SelectModelEntities::OCIFSelect_SelectModelEntities() : OCIFSelect_SelectBase((OCDummy^)nullptr)

{
  nativeHandle = new Handle_IFSelect_SelectModelEntities(new IFSelect_SelectModelEntities());
}

OCInterface_EntityIterator^ OCIFSelect_SelectModelEntities::RootResult(OCNaroWrappers::OCInterface_Graph^ G)
{
  Interface_EntityIterator* tmp = new Interface_EntityIterator();
  *tmp = (*((Handle_IFSelect_SelectModelEntities*)nativeHandle))->RootResult(*((Interface_Graph*)G->Handle));
  return gcnew OCInterface_EntityIterator(tmp);
}

OCInterface_EntityIterator^ OCIFSelect_SelectModelEntities::CompleteResult(OCNaroWrappers::OCInterface_Graph^ G)
{
  Interface_EntityIterator* tmp = new Interface_EntityIterator();
  *tmp = (*((Handle_IFSelect_SelectModelEntities*)nativeHandle))->CompleteResult(*((Interface_Graph*)G->Handle));
  return gcnew OCInterface_EntityIterator(tmp);
}

OCTCollection_AsciiString^ OCIFSelect_SelectModelEntities::Label()
{
  TCollection_AsciiString* tmp = new TCollection_AsciiString();
  *tmp = (*((Handle_IFSelect_SelectModelEntities*)nativeHandle))->Label();
  return gcnew OCTCollection_AsciiString(tmp);
}



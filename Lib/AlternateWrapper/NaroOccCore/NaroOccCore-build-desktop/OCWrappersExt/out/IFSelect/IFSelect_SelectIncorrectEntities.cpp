// File generated by CPPExt (CPP file)
//

#include "IFSelect_SelectIncorrectEntities.h"
#include "../Converter.h"


using namespace OCNaroWrappers;

OCIFSelect_SelectIncorrectEntities::OCIFSelect_SelectIncorrectEntities(Handle(IFSelect_SelectIncorrectEntities)* nativeHandle) : OCIFSelect_SelectFlag((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_IFSelect_SelectIncorrectEntities(*nativeHandle);
}

OCIFSelect_SelectIncorrectEntities::OCIFSelect_SelectIncorrectEntities() : OCIFSelect_SelectFlag((OCDummy^)nullptr)

{
  nativeHandle = new Handle_IFSelect_SelectIncorrectEntities(new IFSelect_SelectIncorrectEntities());
}



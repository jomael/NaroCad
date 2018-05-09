// File generated by CPPExt (CPP file)
//

#include "TNaming_DeltaOnModification.h"
#include "../Converter.h"
#include "../TopTools/TopTools_HArray1OfShape.h"
#include "TNaming_NamedShape.h"


using namespace OCNaroWrappers;

OCTNaming_DeltaOnModification::OCTNaming_DeltaOnModification(Handle(TNaming_DeltaOnModification)* nativeHandle) : OCTDF_DeltaOnModification((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_TNaming_DeltaOnModification(*nativeHandle);
}

OCTNaming_DeltaOnModification::OCTNaming_DeltaOnModification(OCNaroWrappers::OCTNaming_NamedShape^ NS) : OCTDF_DeltaOnModification((OCDummy^)nullptr)

{
  nativeHandle = new Handle_TNaming_DeltaOnModification(new TNaming_DeltaOnModification(*((Handle_TNaming_NamedShape*)NS->Handle)));
}

 void OCTNaming_DeltaOnModification::Apply()
{
  (*((Handle_TNaming_DeltaOnModification*)nativeHandle))->Apply();
}



// File generated by CPPExt (CPP file)
//

#include "BRepAlgoAPI_Fuse.h"
#include "../Converter.h"
#include "../TopoDS/TopoDS_Shape.h"
#include "../BOPTools/BOPTools_DSFiller.h"


using namespace OCNaroWrappers;

OCBRepAlgoAPI_Fuse::OCBRepAlgoAPI_Fuse(BRepAlgoAPI_Fuse* nativeHandle) : OCBRepAlgoAPI_BooleanOperation((OCDummy^)nullptr)

{
  this->nativeHandle = nativeHandle;
}

OCBRepAlgoAPI_Fuse::OCBRepAlgoAPI_Fuse(OCNaroWrappers::OCTopoDS_Shape^ S1, OCNaroWrappers::OCTopoDS_Shape^ S2) : OCBRepAlgoAPI_BooleanOperation((OCDummy^)nullptr)

{
  nativeHandle = new BRepAlgoAPI_Fuse(*((TopoDS_Shape*)S1->Handle), *((TopoDS_Shape*)S2->Handle));
}

OCBRepAlgoAPI_Fuse::OCBRepAlgoAPI_Fuse(OCNaroWrappers::OCTopoDS_Shape^ S1, OCNaroWrappers::OCTopoDS_Shape^ S2, OCNaroWrappers::OCBOPTools_DSFiller^ aDSF) : OCBRepAlgoAPI_BooleanOperation((OCDummy^)nullptr)

{
  nativeHandle = new BRepAlgoAPI_Fuse(*((TopoDS_Shape*)S1->Handle), *((TopoDS_Shape*)S2->Handle), *((BOPTools_DSFiller*)aDSF->Handle));
}



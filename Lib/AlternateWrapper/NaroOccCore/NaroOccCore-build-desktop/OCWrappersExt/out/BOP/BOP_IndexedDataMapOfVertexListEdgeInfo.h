// File generated by CPPExt (MPV)
//
#ifndef _BOP_IndexedDataMapOfVertexListEdgeInfo_OCWrappers_HeaderFile
#define _BOP_IndexedDataMapOfVertexListEdgeInfo_OCWrappers_HeaderFile

// include native header
#include <BOP_IndexedDataMapOfVertexListEdgeInfo.hxx>
#include "../Converter.h"

#include "../TCollection/TCollection_BasicMap.h"

#include "../TCollection/TCollection_BasicMap.h"


namespace OCNaroWrappers
{

ref class OCTopoDS_Shape;
ref class OCBOP_ListOfEdgeInfo;
ref class OCTopTools_ShapeMapHasher;
ref class OCBOP_IndexedDataMapNodeOfIndexedDataMapOfVertexListEdgeInfo;



public ref class OCBOP_IndexedDataMapOfVertexListEdgeInfo  : public OCTCollection_BasicMap {

protected:
  // dummy constructor;
  OCBOP_IndexedDataMapOfVertexListEdgeInfo(OCDummy^) : OCTCollection_BasicMap((OCDummy^)nullptr) {};

public:

// constructor from native
OCBOP_IndexedDataMapOfVertexListEdgeInfo(BOP_IndexedDataMapOfVertexListEdgeInfo* nativeHandle);

// Methods PUBLIC


OCBOP_IndexedDataMapOfVertexListEdgeInfo(Standard_Integer NbBuckets);


 /*instead*/  OCBOP_IndexedDataMapOfVertexListEdgeInfo^ Assign(OCNaroWrappers::OCBOP_IndexedDataMapOfVertexListEdgeInfo^ Other) ;


 /*instead*/  void ReSize(Standard_Integer NbBuckets) ;


 /*instead*/  Standard_Integer Add(OCNaroWrappers::OCTopoDS_Shape^ K, OCNaroWrappers::OCBOP_ListOfEdgeInfo^ I) ;


 /*instead*/  void Substitute(Standard_Integer I, OCNaroWrappers::OCTopoDS_Shape^ K, OCNaroWrappers::OCBOP_ListOfEdgeInfo^ T) ;


 /*instead*/  void RemoveLast() ;


 /*instead*/  System::Boolean Contains(OCNaroWrappers::OCTopoDS_Shape^ K) ;


 /*instead*/  OCTopoDS_Shape^ FindKey(Standard_Integer I) ;


 /*instead*/  OCBOP_ListOfEdgeInfo^ FindFromIndex(Standard_Integer I) ;


 /*instead*/  OCBOP_ListOfEdgeInfo^ ChangeFromIndex(Standard_Integer I) ;


 /*instead*/  Standard_Integer FindIndex(OCNaroWrappers::OCTopoDS_Shape^ K) ;


 /*instead*/  OCBOP_ListOfEdgeInfo^ FindFromKey(OCNaroWrappers::OCTopoDS_Shape^ K) ;


 /*instead*/  OCBOP_ListOfEdgeInfo^ ChangeFromKey(OCNaroWrappers::OCTopoDS_Shape^ K) ;


 /*instead*/  Standard_Address FindFromKey1(OCNaroWrappers::OCTopoDS_Shape^ K) ;


 /*instead*/  Standard_Address ChangeFromKey1(OCNaroWrappers::OCTopoDS_Shape^ K) ;

~OCBOP_IndexedDataMapOfVertexListEdgeInfo()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif

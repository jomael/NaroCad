// File generated by CPPExt (MPV)
//
#ifndef _MeshAlgo_DataMapOfIntegerCirc_OCWrappers_HeaderFile
#define _MeshAlgo_DataMapOfIntegerCirc_OCWrappers_HeaderFile

// include native header
#include <MeshAlgo_DataMapOfIntegerCirc.hxx>
#include "../Converter.h"

#include "../TCollection/TCollection_BasicMap.h"

#include "../TCollection/TCollection_BasicMap.h"


namespace OCNaroWrappers
{

ref class OCMeshAlgo_Circ;
ref class OCTColStd_MapIntegerHasher;
ref class OCMeshAlgo_DataMapNodeOfDataMapOfIntegerCirc;
ref class OCMeshAlgo_DataMapIteratorOfDataMapOfIntegerCirc;



public ref class OCMeshAlgo_DataMapOfIntegerCirc  : public OCTCollection_BasicMap {

protected:
  // dummy constructor;
  OCMeshAlgo_DataMapOfIntegerCirc(OCDummy^) : OCTCollection_BasicMap((OCDummy^)nullptr) {};

public:

// constructor from native
OCMeshAlgo_DataMapOfIntegerCirc(MeshAlgo_DataMapOfIntegerCirc* nativeHandle);

// Methods PUBLIC


OCMeshAlgo_DataMapOfIntegerCirc(Standard_Integer NbBuckets);


 /*instead*/  OCMeshAlgo_DataMapOfIntegerCirc^ Assign(OCNaroWrappers::OCMeshAlgo_DataMapOfIntegerCirc^ Other) ;


 /*instead*/  void ReSize(Standard_Integer NbBuckets) ;


 /*instead*/  System::Boolean Bind(Standard_Integer K, OCNaroWrappers::OCMeshAlgo_Circ^ I) ;


 /*instead*/  System::Boolean IsBound(Standard_Integer K) ;


 /*instead*/  System::Boolean UnBind(Standard_Integer K) ;


 /*instead*/  OCMeshAlgo_Circ^ Find(Standard_Integer K) ;


 /*instead*/  OCMeshAlgo_Circ^ ChangeFind(Standard_Integer K) ;

~OCMeshAlgo_DataMapOfIntegerCirc()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif

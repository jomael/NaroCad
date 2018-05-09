// File generated by CPPExt (MPV)
//
#ifndef _TopTools_DataMapOfOrientedShapeInteger_OCWrappers_HeaderFile
#define _TopTools_DataMapOfOrientedShapeInteger_OCWrappers_HeaderFile

// include native header
#include <TopTools_DataMapOfOrientedShapeInteger.hxx>
#include "../Converter.h"

#include "../TCollection/TCollection_BasicMap.h"

#include "../TCollection/TCollection_BasicMap.h"


namespace OCNaroWrappers
{

ref class OCTopoDS_Shape;
ref class OCTopTools_OrientedShapeMapHasher;
ref class OCTopTools_DataMapNodeOfDataMapOfOrientedShapeInteger;
ref class OCTopTools_DataMapIteratorOfDataMapOfOrientedShapeInteger;



public ref class OCTopTools_DataMapOfOrientedShapeInteger  : public OCTCollection_BasicMap {

protected:
  // dummy constructor;
  OCTopTools_DataMapOfOrientedShapeInteger(OCDummy^) : OCTCollection_BasicMap((OCDummy^)nullptr) {};

public:

// constructor from native
OCTopTools_DataMapOfOrientedShapeInteger(TopTools_DataMapOfOrientedShapeInteger* nativeHandle);

// Methods PUBLIC


OCTopTools_DataMapOfOrientedShapeInteger(Standard_Integer NbBuckets);


 /*instead*/  OCTopTools_DataMapOfOrientedShapeInteger^ Assign(OCNaroWrappers::OCTopTools_DataMapOfOrientedShapeInteger^ Other) ;


 /*instead*/  void ReSize(Standard_Integer NbBuckets) ;


 /*instead*/  System::Boolean Bind(OCNaroWrappers::OCTopoDS_Shape^ K, Standard_Integer I) ;


 /*instead*/  System::Boolean IsBound(OCNaroWrappers::OCTopoDS_Shape^ K) ;


 /*instead*/  System::Boolean UnBind(OCNaroWrappers::OCTopoDS_Shape^ K) ;


 /*instead*/  Standard_Integer Find(OCNaroWrappers::OCTopoDS_Shape^ K) ;


 /*instead*/  Standard_Integer ChangeFind(OCNaroWrappers::OCTopoDS_Shape^ K) ;


 /*instead*/  Standard_Address Find1(OCNaroWrappers::OCTopoDS_Shape^ K) ;


 /*instead*/  Standard_Address ChangeFind1(OCNaroWrappers::OCTopoDS_Shape^ K) ;

~OCTopTools_DataMapOfOrientedShapeInteger()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif

// File generated by CPPExt (MPV)
//
#ifndef _AIS2D_DataMapOfLocStat_OCWrappers_HeaderFile
#define _AIS2D_DataMapOfLocStat_OCWrappers_HeaderFile

// include native header
#include <AIS2D_DataMapOfLocStat.hxx>
#include "../Converter.h"

#include "../TCollection/TCollection_BasicMap.h"

#include "../TCollection/TCollection_BasicMap.h"


namespace OCNaroWrappers
{

ref class OCAIS2D_InteractiveObject;
ref class OCAIS2D_LocalStatus;
ref class OCTColStd_MapTransientHasher;
ref class OCAIS2D_DataMapNodeOfDataMapOfLocStat;
ref class OCAIS2D_DataMapIteratorOfDataMapOfLocStat;



public ref class OCAIS2D_DataMapOfLocStat  : public OCTCollection_BasicMap {

protected:
  // dummy constructor;
  OCAIS2D_DataMapOfLocStat(OCDummy^) : OCTCollection_BasicMap((OCDummy^)nullptr) {};

public:

// constructor from native
OCAIS2D_DataMapOfLocStat(AIS2D_DataMapOfLocStat* nativeHandle);

// Methods PUBLIC


OCAIS2D_DataMapOfLocStat(Standard_Integer NbBuckets);


 /*instead*/  OCAIS2D_DataMapOfLocStat^ Assign(OCNaroWrappers::OCAIS2D_DataMapOfLocStat^ Other) ;


 /*instead*/  void ReSize(Standard_Integer NbBuckets) ;


 /*instead*/  System::Boolean Bind(OCNaroWrappers::OCAIS2D_InteractiveObject^ K, OCNaroWrappers::OCAIS2D_LocalStatus^ I) ;


 /*instead*/  System::Boolean IsBound(OCNaroWrappers::OCAIS2D_InteractiveObject^ K) ;


 /*instead*/  System::Boolean UnBind(OCNaroWrappers::OCAIS2D_InteractiveObject^ K) ;


 /*instead*/  OCAIS2D_LocalStatus^ Find(OCNaroWrappers::OCAIS2D_InteractiveObject^ K) ;


 /*instead*/  OCAIS2D_LocalStatus^ ChangeFind(OCNaroWrappers::OCAIS2D_InteractiveObject^ K) ;


 /*instead*/  Standard_Address Find1(OCNaroWrappers::OCAIS2D_InteractiveObject^ K) ;


 /*instead*/  Standard_Address ChangeFind1(OCNaroWrappers::OCAIS2D_InteractiveObject^ K) ;

~OCAIS2D_DataMapOfLocStat()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
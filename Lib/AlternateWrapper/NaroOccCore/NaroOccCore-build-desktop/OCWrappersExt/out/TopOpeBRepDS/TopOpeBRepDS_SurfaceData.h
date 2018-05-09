// File generated by CPPExt (MPV)
//
#ifndef _TopOpeBRepDS_SurfaceData_OCWrappers_HeaderFile
#define _TopOpeBRepDS_SurfaceData_OCWrappers_HeaderFile

// include native header
#include <TopOpeBRepDS_SurfaceData.hxx>
#include "../Converter.h"

#include "TopOpeBRepDS_GeometryData.h"

#include "TopOpeBRepDS_Surface.h"
#include "TopOpeBRepDS_GeometryData.h"


namespace OCNaroWrappers
{

ref class OCTopOpeBRepDS_DataStructure;
ref class OCTopOpeBRepDS_Surface;



public ref class OCTopOpeBRepDS_SurfaceData  : public OCTopOpeBRepDS_GeometryData {

protected:
  // dummy constructor;
  OCTopOpeBRepDS_SurfaceData(OCDummy^) : OCTopOpeBRepDS_GeometryData((OCDummy^)nullptr) {};

public:

// constructor from native
OCTopOpeBRepDS_SurfaceData(TopOpeBRepDS_SurfaceData* nativeHandle);

// Methods PUBLIC


OCTopOpeBRepDS_SurfaceData();


OCTopOpeBRepDS_SurfaceData(OCNaroWrappers::OCTopOpeBRepDS_Surface^ S);

~OCTopOpeBRepDS_SurfaceData()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif

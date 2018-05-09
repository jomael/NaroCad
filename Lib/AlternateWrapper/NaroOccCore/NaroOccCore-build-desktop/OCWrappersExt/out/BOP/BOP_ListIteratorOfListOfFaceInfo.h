// File generated by CPPExt (MPV)
//
#ifndef _BOP_ListIteratorOfListOfFaceInfo_OCWrappers_HeaderFile
#define _BOP_ListIteratorOfListOfFaceInfo_OCWrappers_HeaderFile

// include native header
#include <BOP_ListIteratorOfListOfFaceInfo.hxx>
#include "../Converter.h"




namespace OCNaroWrappers
{

ref class OCBOP_ListOfFaceInfo;
ref class OCBOP_FaceInfo;
ref class OCBOP_ListNodeOfListOfFaceInfo;



public ref class OCBOP_ListIteratorOfListOfFaceInfo  {

protected:
  BOP_ListIteratorOfListOfFaceInfo* nativeHandle;
  OCBOP_ListIteratorOfListOfFaceInfo(OCDummy^) {};

public:
  property BOP_ListIteratorOfListOfFaceInfo* Handle
  {
    BOP_ListIteratorOfListOfFaceInfo* get()
    {
      return nativeHandle;
    }
  }


// constructor from native
OCBOP_ListIteratorOfListOfFaceInfo(BOP_ListIteratorOfListOfFaceInfo* nativeHandle);

// Methods PUBLIC


OCBOP_ListIteratorOfListOfFaceInfo();


OCBOP_ListIteratorOfListOfFaceInfo(OCNaroWrappers::OCBOP_ListOfFaceInfo^ L);


 /*instead*/  void Initialize(OCNaroWrappers::OCBOP_ListOfFaceInfo^ L) ;


 /*instead*/  System::Boolean More() ;


 /*instead*/  void Next() ;


 /*instead*/  OCBOP_FaceInfo^ Value() ;

~OCBOP_ListIteratorOfListOfFaceInfo()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif

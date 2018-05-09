// File generated by CPPExt (MPV)
//
#ifndef _BOPTColStd_ListIteratorOfListOfListOfShape_OCWrappers_HeaderFile
#define _BOPTColStd_ListIteratorOfListOfListOfShape_OCWrappers_HeaderFile

// include native header
#include <BOPTColStd_ListIteratorOfListOfListOfShape.hxx>
#include "../Converter.h"




namespace OCNaroWrappers
{

ref class OCBOPTColStd_ListOfListOfShape;
ref class OCTopTools_ListOfShape;
ref class OCBOPTColStd_ListNodeOfListOfListOfShape;



public ref class OCBOPTColStd_ListIteratorOfListOfListOfShape  {

protected:
  BOPTColStd_ListIteratorOfListOfListOfShape* nativeHandle;
  OCBOPTColStd_ListIteratorOfListOfListOfShape(OCDummy^) {};

public:
  property BOPTColStd_ListIteratorOfListOfListOfShape* Handle
  {
    BOPTColStd_ListIteratorOfListOfListOfShape* get()
    {
      return nativeHandle;
    }
  }


// constructor from native
OCBOPTColStd_ListIteratorOfListOfListOfShape(BOPTColStd_ListIteratorOfListOfListOfShape* nativeHandle);

// Methods PUBLIC


OCBOPTColStd_ListIteratorOfListOfListOfShape();


OCBOPTColStd_ListIteratorOfListOfListOfShape(OCNaroWrappers::OCBOPTColStd_ListOfListOfShape^ L);


 /*instead*/  void Initialize(OCNaroWrappers::OCBOPTColStd_ListOfListOfShape^ L) ;


 /*instead*/  System::Boolean More() ;


 /*instead*/  void Next() ;


 /*instead*/  OCTopTools_ListOfShape^ Value() ;

~OCBOPTColStd_ListIteratorOfListOfListOfShape()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif

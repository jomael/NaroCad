// File generated by CPPExt (MPV)
//
#ifndef _TColStd_ListOfAsciiString_OCWrappers_HeaderFile
#define _TColStd_ListOfAsciiString_OCWrappers_HeaderFile

// include native header
#include <TColStd_ListOfAsciiString.hxx>
#include "../Converter.h"




namespace OCNaroWrappers
{

ref class OCTColStd_ListIteratorOfListOfAsciiString;
ref class OCTCollection_AsciiString;
ref class OCTColStd_ListNodeOfListOfAsciiString;



public ref class OCTColStd_ListOfAsciiString  {

protected:
  TColStd_ListOfAsciiString* nativeHandle;
  OCTColStd_ListOfAsciiString(OCDummy^) {};

public:
  property TColStd_ListOfAsciiString* Handle
  {
    TColStd_ListOfAsciiString* get()
    {
      return nativeHandle;
    }
  }


// constructor from native
OCTColStd_ListOfAsciiString(TColStd_ListOfAsciiString* nativeHandle);

// Methods PUBLIC


OCTColStd_ListOfAsciiString();


 /*instead*/  void Assign(OCNaroWrappers::OCTColStd_ListOfAsciiString^ Other) ;


 /*instead*/  Standard_Integer Extent() ;


 /*instead*/  System::Boolean IsEmpty() ;


 /*instead*/  void Prepend(OCNaroWrappers::OCTCollection_AsciiString^ I) ;


 /*instead*/  void Prepend(OCNaroWrappers::OCTCollection_AsciiString^ I, OCNaroWrappers::OCTColStd_ListIteratorOfListOfAsciiString^ theIt) ;


 /*instead*/  void Prepend(OCNaroWrappers::OCTColStd_ListOfAsciiString^ Other) ;


 /*instead*/  void Append(OCNaroWrappers::OCTCollection_AsciiString^ I) ;


 /*instead*/  void Append(OCNaroWrappers::OCTCollection_AsciiString^ I, OCNaroWrappers::OCTColStd_ListIteratorOfListOfAsciiString^ theIt) ;


 /*instead*/  void Append(OCNaroWrappers::OCTColStd_ListOfAsciiString^ Other) ;


 /*instead*/  OCTCollection_AsciiString^ First() ;


 /*instead*/  OCTCollection_AsciiString^ Last() ;


 /*instead*/  void RemoveFirst() ;


 /*instead*/  void Remove(OCNaroWrappers::OCTColStd_ListIteratorOfListOfAsciiString^ It) ;


 /*instead*/  void InsertBefore(OCNaroWrappers::OCTCollection_AsciiString^ I, OCNaroWrappers::OCTColStd_ListIteratorOfListOfAsciiString^ It) ;


 /*instead*/  void InsertBefore(OCNaroWrappers::OCTColStd_ListOfAsciiString^ Other, OCNaroWrappers::OCTColStd_ListIteratorOfListOfAsciiString^ It) ;


 /*instead*/  void InsertAfter(OCNaroWrappers::OCTCollection_AsciiString^ I, OCNaroWrappers::OCTColStd_ListIteratorOfListOfAsciiString^ It) ;


 /*instead*/  void InsertAfter(OCNaroWrappers::OCTColStd_ListOfAsciiString^ Other, OCNaroWrappers::OCTColStd_ListIteratorOfListOfAsciiString^ It) ;

~OCTColStd_ListOfAsciiString()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif

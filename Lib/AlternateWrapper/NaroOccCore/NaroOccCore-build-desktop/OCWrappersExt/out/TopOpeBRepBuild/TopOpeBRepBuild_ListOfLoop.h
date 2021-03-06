// File generated by CPPExt (MPV)
//
#ifndef _TopOpeBRepBuild_ListOfLoop_OCWrappers_HeaderFile
#define _TopOpeBRepBuild_ListOfLoop_OCWrappers_HeaderFile

// include native header
#include <TopOpeBRepBuild_ListOfLoop.hxx>
#include "../Converter.h"




namespace OCNaroWrappers
{

ref class OCTopOpeBRepBuild_ListIteratorOfListOfLoop;
ref class OCTopOpeBRepBuild_Loop;
ref class OCTopOpeBRepBuild_ListNodeOfListOfLoop;



public ref class OCTopOpeBRepBuild_ListOfLoop  {

protected:
  TopOpeBRepBuild_ListOfLoop* nativeHandle;
  OCTopOpeBRepBuild_ListOfLoop(OCDummy^) {};

public:
  property TopOpeBRepBuild_ListOfLoop* Handle
  {
    TopOpeBRepBuild_ListOfLoop* get()
    {
      return nativeHandle;
    }
  }


// constructor from native
OCTopOpeBRepBuild_ListOfLoop(TopOpeBRepBuild_ListOfLoop* nativeHandle);

// Methods PUBLIC


OCTopOpeBRepBuild_ListOfLoop();


 /*instead*/  void Assign(OCNaroWrappers::OCTopOpeBRepBuild_ListOfLoop^ Other) ;


 /*instead*/  Standard_Integer Extent() ;


 /*instead*/  System::Boolean IsEmpty() ;


 /*instead*/  void Prepend(OCNaroWrappers::OCTopOpeBRepBuild_Loop^ I) ;


 /*instead*/  void Prepend(OCNaroWrappers::OCTopOpeBRepBuild_Loop^ I, OCNaroWrappers::OCTopOpeBRepBuild_ListIteratorOfListOfLoop^ theIt) ;


 /*instead*/  void Prepend(OCNaroWrappers::OCTopOpeBRepBuild_ListOfLoop^ Other) ;


 /*instead*/  void Append(OCNaroWrappers::OCTopOpeBRepBuild_Loop^ I) ;


 /*instead*/  void Append(OCNaroWrappers::OCTopOpeBRepBuild_Loop^ I, OCNaroWrappers::OCTopOpeBRepBuild_ListIteratorOfListOfLoop^ theIt) ;


 /*instead*/  void Append(OCNaroWrappers::OCTopOpeBRepBuild_ListOfLoop^ Other) ;


 /*instead*/  OCTopOpeBRepBuild_Loop^ First() ;


 /*instead*/  OCTopOpeBRepBuild_Loop^ Last() ;


 /*instead*/  void RemoveFirst() ;


 /*instead*/  void Remove(OCNaroWrappers::OCTopOpeBRepBuild_ListIteratorOfListOfLoop^ It) ;


 /*instead*/  void InsertBefore(OCNaroWrappers::OCTopOpeBRepBuild_Loop^ I, OCNaroWrappers::OCTopOpeBRepBuild_ListIteratorOfListOfLoop^ It) ;


 /*instead*/  void InsertBefore(OCNaroWrappers::OCTopOpeBRepBuild_ListOfLoop^ Other, OCNaroWrappers::OCTopOpeBRepBuild_ListIteratorOfListOfLoop^ It) ;


 /*instead*/  void InsertAfter(OCNaroWrappers::OCTopOpeBRepBuild_Loop^ I, OCNaroWrappers::OCTopOpeBRepBuild_ListIteratorOfListOfLoop^ It) ;


 /*instead*/  void InsertAfter(OCNaroWrappers::OCTopOpeBRepBuild_ListOfLoop^ Other, OCNaroWrappers::OCTopOpeBRepBuild_ListIteratorOfListOfLoop^ It) ;

~OCTopOpeBRepBuild_ListOfLoop()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif

// File generated by CPPExt (MPV)
//
#ifndef _TopOpeBRepBuild_ListIteratorOfListOfShapeListOfShape_OCWrappers_HeaderFile
#define _TopOpeBRepBuild_ListIteratorOfListOfShapeListOfShape_OCWrappers_HeaderFile

// include native header
#include <TopOpeBRepBuild_ListIteratorOfListOfShapeListOfShape.hxx>
#include "../Converter.h"




namespace OCNaroWrappers
{

ref class OCTopOpeBRepBuild_ListOfShapeListOfShape;
ref class OCTopOpeBRepBuild_ShapeListOfShape;
ref class OCTopOpeBRepBuild_ListNodeOfListOfShapeListOfShape;



public ref class OCTopOpeBRepBuild_ListIteratorOfListOfShapeListOfShape  {

protected:
  TopOpeBRepBuild_ListIteratorOfListOfShapeListOfShape* nativeHandle;
  OCTopOpeBRepBuild_ListIteratorOfListOfShapeListOfShape(OCDummy^) {};

public:
  property TopOpeBRepBuild_ListIteratorOfListOfShapeListOfShape* Handle
  {
    TopOpeBRepBuild_ListIteratorOfListOfShapeListOfShape* get()
    {
      return nativeHandle;
    }
  }


// constructor from native
OCTopOpeBRepBuild_ListIteratorOfListOfShapeListOfShape(TopOpeBRepBuild_ListIteratorOfListOfShapeListOfShape* nativeHandle);

// Methods PUBLIC


OCTopOpeBRepBuild_ListIteratorOfListOfShapeListOfShape();


OCTopOpeBRepBuild_ListIteratorOfListOfShapeListOfShape(OCNaroWrappers::OCTopOpeBRepBuild_ListOfShapeListOfShape^ L);


 /*instead*/  void Initialize(OCNaroWrappers::OCTopOpeBRepBuild_ListOfShapeListOfShape^ L) ;


 /*instead*/  System::Boolean More() ;


 /*instead*/  void Next() ;


 /*instead*/  OCTopOpeBRepBuild_ShapeListOfShape^ Value() ;

~OCTopOpeBRepBuild_ListIteratorOfListOfShapeListOfShape()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif

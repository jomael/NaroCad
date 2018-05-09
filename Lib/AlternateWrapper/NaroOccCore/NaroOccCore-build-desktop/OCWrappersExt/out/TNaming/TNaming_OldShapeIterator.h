// File generated by CPPExt (MPV)
//
#ifndef _TNaming_OldShapeIterator_OCWrappers_HeaderFile
#define _TNaming_OldShapeIterator_OCWrappers_HeaderFile

// include native header
#include <TNaming_OldShapeIterator.hxx>
#include "../Converter.h"




namespace OCNaroWrappers
{

ref class OCTNaming_Tool;
ref class OCTNaming_Localizer;
ref class OCTNaming_Naming;
ref class OCTopoDS_Shape;
ref class OCTNaming_UsedShapes;
ref class OCTDF_Label;
ref class OCTNaming_Iterator;
ref class OCTNaming_NamedShape;


//! Iterates on all the ascendants of a shape <br>
public ref class OCTNaming_OldShapeIterator  {

protected:
  TNaming_OldShapeIterator* nativeHandle;
  OCTNaming_OldShapeIterator(OCDummy^) {};

public:
  property TNaming_OldShapeIterator* Handle
  {
    TNaming_OldShapeIterator* get()
    {
      return nativeHandle;
    }
  }


// constructor from native
OCTNaming_OldShapeIterator(TNaming_OldShapeIterator* nativeHandle);

// Methods PUBLIC


OCTNaming_OldShapeIterator(OCNaroWrappers::OCTopoDS_Shape^ aShape, Standard_Integer Transaction, OCNaroWrappers::OCTDF_Label^ access);


OCTNaming_OldShapeIterator(OCNaroWrappers::OCTopoDS_Shape^ aShape, OCNaroWrappers::OCTDF_Label^ access);

//! Iterates from the current Shape in <anIterator> <br>
OCTNaming_OldShapeIterator(OCNaroWrappers::OCTNaming_OldShapeIterator^ anIterator);

//! Iterates from the current Shape in <anIterator> <br>
OCTNaming_OldShapeIterator(OCNaroWrappers::OCTNaming_Iterator^ anIterator);


 /*instead*/  System::Boolean More() ;


 /*instead*/  void Next() ;


 /*instead*/  OCTDF_Label^ Label() ;


 /*instead*/  OCTNaming_NamedShape^ NamedShape() ;


 /*instead*/  OCTopoDS_Shape^ Shape() ;

//! True if the  new  shape is a modification  (split, <br>
//!          fuse,etc...) of the old shape. <br>
 /*instead*/  System::Boolean IsModification() ;

~OCTNaming_OldShapeIterator()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif

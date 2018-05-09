// File generated by CPPExt (MPV)
//
#ifndef _TColStd_SetOfTransient_OCWrappers_HeaderFile
#define _TColStd_SetOfTransient_OCWrappers_HeaderFile

// include native header
#include <TColStd_SetOfTransient.hxx>
#include "../Converter.h"


#include "TColStd_SetListOfSetOfTransient.h"


namespace OCNaroWrappers
{

ref class OCTColStd_SetIteratorOfSetOfTransient;
ref class OCStandard_Transient;
ref class OCTColStd_SetListOfSetOfTransient;
ref class OCTColStd_ListNodeOfSetListOfSetOfTransient;
ref class OCTColStd_ListIteratorOfSetListOfSetOfTransient;



public ref class OCTColStd_SetOfTransient  {

protected:
  TColStd_SetOfTransient* nativeHandle;
  OCTColStd_SetOfTransient(OCDummy^) {};

public:
  property TColStd_SetOfTransient* Handle
  {
    TColStd_SetOfTransient* get()
    {
      return nativeHandle;
    }
  }


// constructor from native
OCTColStd_SetOfTransient(TColStd_SetOfTransient* nativeHandle);

// Methods PUBLIC


OCTColStd_SetOfTransient();


 /*instead*/  Standard_Integer Extent() ;


 /*instead*/  System::Boolean IsEmpty() ;


 /*instead*/  void Clear() ;


 /*instead*/  System::Boolean Add(OCNaroWrappers::OCStandard_Transient^ T) ;


 /*instead*/  System::Boolean Remove(OCNaroWrappers::OCStandard_Transient^ T) ;


 /*instead*/  void Union(OCNaroWrappers::OCTColStd_SetOfTransient^ B) ;


 /*instead*/  void Intersection(OCNaroWrappers::OCTColStd_SetOfTransient^ B) ;


 /*instead*/  void Difference(OCNaroWrappers::OCTColStd_SetOfTransient^ B) ;


 /*instead*/  System::Boolean Contains(OCNaroWrappers::OCStandard_Transient^ T) ;


 /*instead*/  System::Boolean IsASubset(OCNaroWrappers::OCTColStd_SetOfTransient^ S) ;


 /*instead*/  System::Boolean IsAProperSubset(OCNaroWrappers::OCTColStd_SetOfTransient^ S) ;

~OCTColStd_SetOfTransient()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif

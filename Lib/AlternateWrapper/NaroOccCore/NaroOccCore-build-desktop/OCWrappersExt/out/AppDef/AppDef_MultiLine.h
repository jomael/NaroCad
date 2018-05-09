// File generated by CPPExt (MPV)
//
#ifndef _AppDef_MultiLine_OCWrappers_HeaderFile
#define _AppDef_MultiLine_OCWrappers_HeaderFile

// include native header
#include <AppDef_MultiLine.hxx>
#include "../Converter.h"




namespace OCNaroWrappers
{

ref class OCAppDef_HArray1OfMultiPointConstraint;
ref class OCAppDef_Array1OfMultiPointConstraint;
ref class OCTColgp_Array1OfPnt;
ref class OCTColgp_Array1OfPnt2d;
ref class OCAppDef_MultiPointConstraint;


//! This class describes the organized set of points used in the <br>
//!          approximations. A MultiLine is composed of n <br>
//!          MultiPointConstraints. <br>
//!          The approximation of the MultiLine will be done in the order <br>
//!          of the given n MultiPointConstraints. <br>
public ref class OCAppDef_MultiLine  {

protected:
  AppDef_MultiLine* nativeHandle;
  OCAppDef_MultiLine(OCDummy^) {};

public:
  property AppDef_MultiLine* Handle
  {
    AppDef_MultiLine* get()
    {
      return nativeHandle;
    }
  }


// constructor from native
OCAppDef_MultiLine(AppDef_MultiLine* nativeHandle);

// Methods PUBLIC

//! creates an undefined MultiLine. <br>
OCAppDef_MultiLine();

//! given the number NbMult of MultiPointConstraints of this <br>
//!          MultiLine , it initializes all the fields.SetValue must be <br>
//!  called in order for the values of the multipoint <br>
//!  constraint to be taken into account. <br>
//!          An exception is raised if NbMult < 0. <br>
OCAppDef_MultiLine(Standard_Integer NbMult);

//! Constructs a MultiLine with an array of MultiPointConstraints. <br>
OCAppDef_MultiLine(OCNaroWrappers::OCAppDef_Array1OfMultiPointConstraint^ tabMultiP);

//! The MultiLine constructed will have one line of <br>
//!          3d points without their tangencies. <br>
OCAppDef_MultiLine(OCNaroWrappers::OCTColgp_Array1OfPnt^ tabP3d);

//! The MultiLine constructed will have one line of <br>
//!          2d points without their tangencies. <br>
OCAppDef_MultiLine(OCNaroWrappers::OCTColgp_Array1OfPnt2d^ tabP2d);

//! returns the number of MultiPointConstraints of the <br>
//!          MultiLine. <br>
 /*instead*/  Standard_Integer NbMultiPoints() ;

//! returns the number of Points from MultiPoints composing <br>
//!          the MultiLine. <br>
 /*instead*/  Standard_Integer NbPoints() ;

//! Sets the value of the parameter for the <br>
//! MultiPointConstraint at position Index. <br>
//! Exceptions <br>
//! -   Standard_OutOfRange if Index is less <br>
//!   than 0 or Index is greater than the number <br>
//!   of Multipoint constraints in the MultiLine. <br>
 /*instead*/  void SetParameter(Standard_Integer Index, Standard_Real U) ;

//! It sets the MultiPointConstraint of range Index to the <br>
//!          value MPoint. <br>
//!          An exception is raised if Index < 0 or Index> MPoint. <br>
//!          An exception is raised if the dimensions of the <br>
//!          MultiPoints are different. <br>
 /*instead*/  void SetValue(Standard_Integer Index, OCNaroWrappers::OCAppDef_MultiPointConstraint^ MPoint) ;

//! returns the MultiPointConstraint of range Index <br>
//!          An exception is raised if Index<0 or Index>MPoint. <br>
 /*instead*/  OCAppDef_MultiPointConstraint^ Value(Standard_Integer Index) ;

//! Prints on the stream o information on the current <br>
//!          state of the object. <br>
//!          Is used to redefine the operator <<. <br>
 /*instead*/  void Dump(Standard_OStream& o) ;

~OCAppDef_MultiLine()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
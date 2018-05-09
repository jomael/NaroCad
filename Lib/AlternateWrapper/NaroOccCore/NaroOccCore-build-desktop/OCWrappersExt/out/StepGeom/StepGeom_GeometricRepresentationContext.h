// File generated by CPPExt (MPV)
//
#ifndef _StepGeom_GeometricRepresentationContext_OCWrappers_HeaderFile
#define _StepGeom_GeometricRepresentationContext_OCWrappers_HeaderFile

// include native header
#include <StepGeom_GeometricRepresentationContext.hxx>
#include "../Converter.h"




namespace OCNaroWrappers
{

ref class OCTCollection_HAsciiString;



public ref class OCStepGeom_GeometricRepresentationContext  {

protected:
  StepGeom_GeometricRepresentationContext* nativeHandle;
  OCStepGeom_GeometricRepresentationContext(OCDummy^) {};

public:
  property StepGeom_GeometricRepresentationContext* Handle
  {
    StepGeom_GeometricRepresentationContext* get()
    {
      return nativeHandle;
    }
  }


// constructor from native
OCStepGeom_GeometricRepresentationContext(StepGeom_GeometricRepresentationContext* nativeHandle);

// Methods PUBLIC

//! Returns a GeometricRepresentationContext <br>
OCStepGeom_GeometricRepresentationContext();


virtual /*instead*/  void Init(OCNaroWrappers::OCTCollection_HAsciiString^ aContextIdentifier, OCNaroWrappers::OCTCollection_HAsciiString^ aContextType) ;


virtual /*instead*/  void Init(OCNaroWrappers::OCTCollection_HAsciiString^ aContextIdentifier, OCNaroWrappers::OCTCollection_HAsciiString^ aContextType, Standard_Integer aCoordinateSpaceDimension) ;


 /*instead*/  void SetCoordinateSpaceDimension(Standard_Integer aCoordinateSpaceDimension) ;


 /*instead*/  Standard_Integer CoordinateSpaceDimension() ;

~OCStepGeom_GeometricRepresentationContext()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif

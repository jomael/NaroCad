// File generated by CPPExt (Transient)
//
#ifndef _StepVisual_TextStyle_OCWrappers_HeaderFile
#define _StepVisual_TextStyle_OCWrappers_HeaderFile

// include the wrapped class
#include <StepVisual_TextStyle.hxx>
#include "../Converter.h"

#include "../MMgt/MMgt_TShared.h"



namespace OCNaroWrappers
{

ref class OCTCollection_HAsciiString;
ref class OCStepVisual_TextStyleForDefinedFont;



public ref class OCStepVisual_TextStyle : OCMMgt_TShared {

protected:
  // dummy constructor;
  OCStepVisual_TextStyle(OCDummy^) : OCMMgt_TShared((OCDummy^)nullptr) {};

public:

// constructor from native
OCStepVisual_TextStyle(Handle(StepVisual_TextStyle)* nativeHandle);

// Methods PUBLIC

//! Returns a TextStyle <br>
OCStepVisual_TextStyle();


virtual /*instead*/  void Init(OCNaroWrappers::OCTCollection_HAsciiString^ aName, OCNaroWrappers::OCStepVisual_TextStyleForDefinedFont^ aCharacterAppearance) ;


 /*instead*/  void SetName(OCNaroWrappers::OCTCollection_HAsciiString^ aName) ;


 /*instead*/  OCTCollection_HAsciiString^ Name() ;


 /*instead*/  void SetCharacterAppearance(OCNaroWrappers::OCStepVisual_TextStyleForDefinedFont^ aCharacterAppearance) ;


 /*instead*/  OCStepVisual_TextStyleForDefinedFont^ CharacterAppearance() ;

~OCStepVisual_TextStyle()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif

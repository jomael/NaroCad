// File generated by CPPExt (Transient)
//
#ifndef _StepData_FileRecognizer_OCWrappers_HeaderFile
#define _StepData_FileRecognizer_OCWrappers_HeaderFile

// include the wrapped class
#include <StepData_FileRecognizer.hxx>
#include "../Converter.h"

#include "../Standard/Standard_Transient.h"



namespace OCNaroWrappers
{

ref class OCStandard_Transient;
ref class OCTCollection_AsciiString;



public ref class OCStepData_FileRecognizer : OCStandard_Transient {

protected:
  // dummy constructor;
  OCStepData_FileRecognizer(OCDummy^) : OCStandard_Transient((OCDummy^)nullptr) {};

public:

// constructor from native
OCStepData_FileRecognizer(Handle(StepData_FileRecognizer)* nativeHandle);

// Methods PUBLIC


OCStepData_FileRecognizer();


 /*instead*/  System::Boolean Evaluate(OCNaroWrappers::OCTCollection_AsciiString^ akey, OCNaroWrappers::OCStandard_Transient^ res) ;


 /*instead*/  OCStandard_Transient^ Result() ;


 /*instead*/  void Add(OCNaroWrappers::OCStepData_FileRecognizer^ reco) ;

~OCStepData_FileRecognizer()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif

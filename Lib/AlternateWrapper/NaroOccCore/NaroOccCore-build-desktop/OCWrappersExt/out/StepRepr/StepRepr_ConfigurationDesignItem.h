// File generated by CPPExt (MPV)
//
#ifndef _StepRepr_ConfigurationDesignItem_OCWrappers_HeaderFile
#define _StepRepr_ConfigurationDesignItem_OCWrappers_HeaderFile

// include native header
#include <StepRepr_ConfigurationDesignItem.hxx>
#include "../Converter.h"

#include "../StepData/StepData_SelectType.h"

#include "../StepData/StepData_SelectType.h"


namespace OCNaroWrappers
{

ref class OCStandard_Transient;
ref class OCStepBasic_ProductDefinition;
ref class OCStepBasic_ProductDefinitionFormation;


//! Representation of STEP SELECT type ConfigurationDesignItem <br>
public ref class OCStepRepr_ConfigurationDesignItem  : public OCStepData_SelectType {

protected:
  // dummy constructor;
  OCStepRepr_ConfigurationDesignItem(OCDummy^) : OCStepData_SelectType((OCDummy^)nullptr) {};

public:

// constructor from native
OCStepRepr_ConfigurationDesignItem(StepRepr_ConfigurationDesignItem* nativeHandle);

// Methods PUBLIC

//! Empty constructor <br>
OCStepRepr_ConfigurationDesignItem();

//! Recognizes a kind of ConfigurationDesignItem select type <br>
//!          1 -> ProductDefinition from StepBasic <br>
//!          2 -> ProductDefinitionFormation from StepBasic <br>
//!          0 else <br>
 /*instead*/  Standard_Integer CaseNum(OCNaroWrappers::OCStandard_Transient^ ent) ;

//! Returns Value as ProductDefinition (or Null if another type) <br>
 /*instead*/  OCStepBasic_ProductDefinition^ ProductDefinition() ;

//! Returns Value as ProductDefinitionFormation (or Null if another type) <br>
 /*instead*/  OCStepBasic_ProductDefinitionFormation^ ProductDefinitionFormation() ;

~OCStepRepr_ConfigurationDesignItem()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif

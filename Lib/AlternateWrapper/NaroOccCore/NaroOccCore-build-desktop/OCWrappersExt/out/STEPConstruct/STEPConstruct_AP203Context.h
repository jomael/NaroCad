// File generated by CPPExt (MPV)
//
#ifndef _STEPConstruct_AP203Context_OCWrappers_HeaderFile
#define _STEPConstruct_AP203Context_OCWrappers_HeaderFile

// include native header
#include <STEPConstruct_AP203Context.hxx>
#include "../Converter.h"




namespace OCNaroWrappers
{

ref class OCStepBasic_Approval;
ref class OCStepBasic_DateAndTime;
ref class OCStepBasic_PersonAndOrganization;
ref class OCStepBasic_SecurityClassificationLevel;
ref class OCStepBasic_PersonAndOrganizationRole;
ref class OCStepBasic_DateTimeRole;
ref class OCStepBasic_ApprovalRole;
ref class OCStepAP203_CcDesignPersonAndOrganizationAssignment;
ref class OCStepAP203_CcDesignSecurityClassification;
ref class OCStepAP203_CcDesignDateAndTimeAssignment;
ref class OCStepAP203_CcDesignApproval;
ref class OCStepBasic_ApprovalPersonOrganization;
ref class OCStepBasic_ApprovalDateTime;
ref class OCStepBasic_ProductCategoryRelationship;
ref class OCStepShape_ShapeDefinitionRepresentation;
ref class OCSTEPConstruct_Part;
ref class OCStepRepr_NextAssemblyUsageOccurrence;


//! Maintains context specific for AP203 (required data and <br>
//!          management information such as persons, dates, approvals etc.) <br>
//!          It contains static entities (which can be shared), default <br>
//!          values for person and organisation, and also provides <br>
//!          tool for creating management entities around specific part (SDR). <br>
public ref class OCSTEPConstruct_AP203Context  {

protected:
  STEPConstruct_AP203Context* nativeHandle;
  OCSTEPConstruct_AP203Context(OCDummy^) {};

public:
  property STEPConstruct_AP203Context* Handle
  {
    STEPConstruct_AP203Context* get()
    {
      return nativeHandle;
    }
  }


// constructor from native
OCSTEPConstruct_AP203Context(STEPConstruct_AP203Context* nativeHandle);

// Methods PUBLIC

//! Creates tool and fills constant fields <br>
OCSTEPConstruct_AP203Context();

//! Returns default approval entity which <br>
//!          is used when no other data are available <br>
 /*instead*/  OCStepBasic_Approval^ DefaultApproval() ;

//! Sets default approval <br>
 /*instead*/  void SetDefaultApproval(OCNaroWrappers::OCStepBasic_Approval^ app) ;

//! Returns default date_and_time entity which <br>
//!          is used when no other data are available <br>
 /*instead*/  OCStepBasic_DateAndTime^ DefaultDateAndTime() ;

//! Sets default date_and_time entity <br>
 /*instead*/  void SetDefaultDateAndTime(OCNaroWrappers::OCStepBasic_DateAndTime^ dt) ;

//! Returns default person_and_organization entity which <br>
//!          is used when no other data are available <br>
 /*instead*/  OCStepBasic_PersonAndOrganization^ DefaultPersonAndOrganization() ;

//! Sets default person_and_organization entity <br>
 /*instead*/  void SetDefaultPersonAndOrganization(OCNaroWrappers::OCStepBasic_PersonAndOrganization^ po) ;

//! Returns default security_classification_level entity which <br>
//!          is used when no other data are available <br>
 /*instead*/  OCStepBasic_SecurityClassificationLevel^ DefaultSecurityClassificationLevel() ;

//! Sets default security_classification_level <br>
 /*instead*/  void SetDefaultSecurityClassificationLevel(OCNaroWrappers::OCStepBasic_SecurityClassificationLevel^ sc) ;


 /*instead*/  OCStepBasic_PersonAndOrganizationRole^ RoleCreator() ;


 /*instead*/  OCStepBasic_PersonAndOrganizationRole^ RoleDesignOwner() ;


 /*instead*/  OCStepBasic_PersonAndOrganizationRole^ RoleDesignSupplier() ;


 /*instead*/  OCStepBasic_PersonAndOrganizationRole^ RoleClassificationOfficer() ;


 /*instead*/  OCStepBasic_DateTimeRole^ RoleCreationDate() ;


 /*instead*/  OCStepBasic_DateTimeRole^ RoleClassificationDate() ;

//! Return predefined PersonAndOrganizationRole and DateTimeRole <br>
//!          entities named 'creator', 'design owner', 'design supplier', <br>
//!          'classification officer', 'creation date', 'classification date', <br>
//!          'approver' <br>
 /*instead*/  OCStepBasic_ApprovalRole^ RoleApprover() ;

//! Takes SDR (part) which brings all standard data around part <br>
//!          (common for AP203 and AP214) and creates all the additional <br>
//!          entities required for AP203 <br>
 /*instead*/  void Init(OCNaroWrappers::OCStepShape_ShapeDefinitionRepresentation^ sdr) ;

//! Takes tool which describes standard data around part <br>
//!          (common for AP203 and AP214) and creates all the additional <br>
//!          entities required for AP203 <br>
 /*instead*/  void Init(OCNaroWrappers::OCSTEPConstruct_Part^ SDRTool) ;

//! Takes NAUO which describes assembly link to component <br>
//!          and creates the security_classification entity associated to <br>
//!          it as required by the AP203 <br>
//! <br>
//!          Instantiated (or existing previously) entities concerned <br>
//!          can be obtained by calls to methods <br>
//!          GetClassificationOfficer(), GetSecurity(), <br>
//!          GetClassificationDate(), GetApproval(), <br>
//!          GetApprover(), GetApprovalDateTime() <br>//! Takes tool which describes standard data around part <br>
//!          (common for AP203 and AP214) and takes from model (or creates <br>
//!          if missing) all the additional entities required by AP203 <br>
 /*instead*/  void Init(OCNaroWrappers::OCStepRepr_NextAssemblyUsageOccurrence^ nauo) ;


 /*instead*/  OCStepAP203_CcDesignPersonAndOrganizationAssignment^ GetCreator() ;


 /*instead*/  OCStepAP203_CcDesignPersonAndOrganizationAssignment^ GetDesignOwner() ;


 /*instead*/  OCStepAP203_CcDesignPersonAndOrganizationAssignment^ GetDesignSupplier() ;


 /*instead*/  OCStepAP203_CcDesignPersonAndOrganizationAssignment^ GetClassificationOfficer() ;


 /*instead*/  OCStepAP203_CcDesignSecurityClassification^ GetSecurity() ;


 /*instead*/  OCStepAP203_CcDesignDateAndTimeAssignment^ GetCreationDate() ;


 /*instead*/  OCStepAP203_CcDesignDateAndTimeAssignment^ GetClassificationDate() ;


 /*instead*/  OCStepAP203_CcDesignApproval^ GetApproval() ;


 /*instead*/  OCStepBasic_ApprovalPersonOrganization^ GetApprover() ;


 /*instead*/  OCStepBasic_ApprovalDateTime^ GetApprovalDateTime() ;

//! Return entities (roots) instantiated for the part by method Init <br>
 /*instead*/  OCStepBasic_ProductCategoryRelationship^ GetProductCategoryRelationship() ;

//! Clears all fields describing entities specific to each part <br>
 /*instead*/  void Clear() ;

//! Initializes constant fields (shared entities) <br>
 /*instead*/  void InitRoles() ;

//! Initializes all missing data which are required for assembly <br>
 /*instead*/  void InitAssembly(OCNaroWrappers::OCStepRepr_NextAssemblyUsageOccurrence^ nauo) ;

//! Initializes ClassificationOfficer and ClassificationDate <br>
//!          entities according to Security entity <br>
 /*instead*/  void InitSecurityRequisites() ;

//! Initializes Approver and ApprovalDateTime <br>
//!          entities according to Approval entity <br>
 /*instead*/  void InitApprovalRequisites() ;

~OCSTEPConstruct_AP203Context()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif

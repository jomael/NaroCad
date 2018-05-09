// File generated by CPPExt (MPV)
//
#ifndef _STEPConstruct_Assembly_OCWrappers_HeaderFile
#define _STEPConstruct_Assembly_OCWrappers_HeaderFile

// include native header
#include <STEPConstruct_Assembly.hxx>
#include "../Converter.h"


#include "../StepShape/StepShape_ShapeDefinitionRepresentation.h"
#include "../StepShape/StepShape_ShapeRepresentation.h"
#include "../StepGeom/StepGeom_Axis2Placement3d.h"


namespace OCNaroWrappers
{

ref class OCStandard_Transient;
ref class OCStepShape_ShapeDefinitionRepresentation;
ref class OCStepGeom_Axis2Placement3d;
ref class OCStepRepr_NextAssemblyUsageOccurrence;
ref class OCInterface_InterfaceModel;
ref class OCStepShape_ContextDependentShapeRepresentation;


//! This operator creates an item of an assembly, from its <br>
//!           basic data : a ShapeRepresentation, a Location ... <br>
//! <br>
//!           Three ways of coding such item from a ShapeRepresentation : <br>
//!           - do nothing : i.e. informations for assembly are ignored <br>
//!           - create a MappedItem <br>
//!           - create a RepresentationRelationship (WithTransformation) <br>
public ref class OCSTEPConstruct_Assembly  {

protected:
  STEPConstruct_Assembly* nativeHandle;
  OCSTEPConstruct_Assembly(OCDummy^) {};

public:
  property STEPConstruct_Assembly* Handle
  {
    STEPConstruct_Assembly* get()
    {
      return nativeHandle;
    }
  }


// constructor from native
OCSTEPConstruct_Assembly(STEPConstruct_Assembly* nativeHandle);

// Methods PUBLIC


OCSTEPConstruct_Assembly();

//! Initialises with starting values <br>
//!           Ax0 : origin axis (typically, standard XYZ) <br>
//!           Loc : location to which place the item <br>//! Makes a MappedItem <br>
//!           Resulting Value is returned by ItemValue <br>
 /*instead*/  void Init(OCNaroWrappers::OCStepShape_ShapeDefinitionRepresentation^ aSR, OCNaroWrappers::OCStepShape_ShapeDefinitionRepresentation^ SDR0, OCNaroWrappers::OCStepGeom_Axis2Placement3d^ Ax0, OCNaroWrappers::OCStepGeom_Axis2Placement3d^ Loc) ;

//! Make a (ShapeRepresentationRelationship,...WithTransformation) <br>
//!           Resulting Value is returned by ItemValue <br>
 /*instead*/  void MakeRelationship() ;

//! Returns the Value <br>
//!           If no Make... has been called, returns the starting SR <br>
 /*instead*/  OCStandard_Transient^ ItemValue() ;

//! Returns the location of the item, computed from starting aLoc <br>
 /*instead*/  OCStepGeom_Axis2Placement3d^ ItemLocation() ;

//! Returns NAUO object describing the assembly link <br>
 /*instead*/  OCStepRepr_NextAssemblyUsageOccurrence^ GetNAUO() ;

//! Checks whether SRR's definition of assembly and component contradicts <br>
//!          with NAUO definition or not, according to model schema (AP214 or AP203) <br>
//! <br>
static /*instead*/  System::Boolean CheckSRRReversesNAUO(OCNaroWrappers::OCInterface_InterfaceModel^ Model, OCNaroWrappers::OCStepShape_ContextDependentShapeRepresentation^ CDSR) ;

~OCSTEPConstruct_Assembly()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif

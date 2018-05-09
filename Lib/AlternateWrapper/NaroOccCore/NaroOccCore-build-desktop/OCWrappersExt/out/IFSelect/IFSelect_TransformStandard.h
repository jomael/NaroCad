// File generated by CPPExt (Transient)
//
#ifndef _IFSelect_TransformStandard_OCWrappers_HeaderFile
#define _IFSelect_TransformStandard_OCWrappers_HeaderFile

// include the wrapped class
#include <IFSelect_TransformStandard.hxx>
#include "../Converter.h"

#include "IFSelect_Transformer.h"

#include "IFSelect_SequenceOfGeneralModifier.h"


namespace OCNaroWrappers
{

ref class OCIFSelect_Selection;
ref class OCInterface_CopyControl;
ref class OCIFSelect_Modifier;
ref class OCInterface_Graph;
ref class OCInterface_Protocol;
ref class OCInterface_CheckIterator;
ref class OCInterface_InterfaceModel;
ref class OCInterface_CopyTool;
ref class OCStandard_Transient;
ref class OCTCollection_AsciiString;


//! This class runs transformations made by Modifiers, as <br>
//!           the ModelCopier does when it produces files (the same set <br>
//!           of Modifiers can then be used, as to transform the starting <br>
//!           Model, as at file sending time). <br>
//! <br>
//!           First, considering the resulting model, two options : <br>
//!           - modifications are made directly on the starting model <br>
//!             (OnTheSpot option), or <br>
//!           - data are copied by the standard service Copy, only the <br>
//!             remaining (not yet sent in a file) entities are copied <br>
//!             (StandardCopy option) <br>
//! <br>
//!           If a Selection is set, it forces the list of Entities on which <br>
//!           the Modifiers are applied. Else, each Modifier is considered <br>
//!           its Selection. By default, it is for the whole Model <br>
//! <br>
//!           Then, the Modifiers are sequentially applied <br>
//!           If at least one Modifier "May Change Graph", or if the option <br>
//!           StandardCopy is selected, the graph will be recomputed <br>
//!           (by the WorkSession, see method RunTransformer) <br>
//! <br>
//!           Remark that a TransformStandard with option StandardCopy <br>
//!           and no Modifier at all has the effect of computing the <br>
//!           remaining data (those not yet sent in any output file). <br>
//!           Moreover, the Protocol is not changed <br>
public ref class OCIFSelect_TransformStandard : OCIFSelect_Transformer {

protected:
  // dummy constructor;
  OCIFSelect_TransformStandard(OCDummy^) : OCIFSelect_Transformer((OCDummy^)nullptr) {};

public:

// constructor from native
OCIFSelect_TransformStandard(Handle(IFSelect_TransformStandard)* nativeHandle);

// Methods PUBLIC

//! Creates a TransformStandard, option StandardCopy, no Modifier <br>
OCIFSelect_TransformStandard();

//! Sets the Copy option to a new value : <br>
//!           - True for StandardCopy  - False for OnTheSpot <br>
 /*instead*/  void SetCopyOption(System::Boolean option) ;

//! Returns the Copy option <br>
 /*instead*/  System::Boolean CopyOption() ;

//! Sets a Selection (or unsets if Null) <br>
//!           This Selection then defines the list of entities on which the <br>
//!           Modifiers will be applied <br>
//!           If it is set, it has priority on Selections of Modifiers <br>
//!           Else, for each Modifier its Selection is evaluated <br>
//!           By default, all the Model is taken <br>
 /*instead*/  void SetSelection(OCNaroWrappers::OCIFSelect_Selection^ sel) ;

//! Returns the Selection, Null by default <br>
 /*instead*/  OCIFSelect_Selection^ Selection() ;

//! Returns the count of recorded Modifiers <br>
 /*instead*/  Standard_Integer NbModifiers() ;

//! Returns a Modifier given its rank in the list <br>
 /*instead*/  OCIFSelect_Modifier^ Modifier(Standard_Integer num) ;

//! Returns the rank of a Modifier in the list, 0 if unknown <br>
 /*instead*/  Standard_Integer ModifierRank(OCNaroWrappers::OCIFSelect_Modifier^ modif) ;

//! Adds a Modifier to the list : <br>
//!           - <atnum> = 0 (default) : at the end of the list <br>
//!           - <atnum> > 0 : at rank <atnum> <br>
//!           Returns True if done, False if <atnum> is out of range <br>
 /*instead*/  System::Boolean AddModifier(OCNaroWrappers::OCIFSelect_Modifier^ modif, Standard_Integer atnum) ;

//! Removes a Modifier from the list <br>
//!           Returns True if done, False if <modif> not in the list <br>
 /*instead*/  System::Boolean RemoveModifier(OCNaroWrappers::OCIFSelect_Modifier^ modif) ;

//! Removes a Modifier from the list, given its rank <br>
//!           Returns True if done, False if <num> is out of range <br>
 /*instead*/  System::Boolean RemoveModifier(Standard_Integer num) ;

//! Performs the Standard Transformation, by calling Copy then <br>
//!           ApplyModifiers (which can return an error status) <br>
 /*instead*/  System::Boolean Perform(OCNaroWrappers::OCInterface_Graph^ G, OCNaroWrappers::OCInterface_Protocol^ protocol, OCNaroWrappers::OCInterface_CheckIterator^ checks, OCNaroWrappers::OCInterface_InterfaceModel^ newmod) ;

//! This the first operation. It calls StandardCopy or OnTheSpot <br>
//!           according the option <br>
 /*instead*/  void Copy(OCNaroWrappers::OCInterface_Graph^ G, OCNaroWrappers::OCInterface_CopyTool^ TC, OCNaroWrappers::OCInterface_InterfaceModel^ newmod) ;

//! This is the standard action of Copy : its takes into account <br>
//!           only the remaining entities (noted by Graph Status positive) <br>
//!           and their proper dependances of course. Produces a new model. <br>
 /*instead*/  void StandardCopy(OCNaroWrappers::OCInterface_Graph^ G, OCNaroWrappers::OCInterface_CopyTool^ TC, OCNaroWrappers::OCInterface_InterfaceModel^ newmod) ;

//! This is the OnTheSpot action : each entity is bound with ... <br>
//!           itself. The produced model is the same as the starting one. <br>
 /*instead*/  void OnTheSpot(OCNaroWrappers::OCInterface_Graph^ G, OCNaroWrappers::OCInterface_CopyTool^ TC, OCNaroWrappers::OCInterface_InterfaceModel^ newmod) ;

//! Applies the modifiers sequencially. <br>
//!           For each one, prepares required data (if a Selection is <br>
//!           associated as a filter). <br>
//!           For the option OnTheSpot, it determines if the graph may be <br>
//!           changed and updates <newmod> if required <br>
//!           If a Modifier causes an error (check "HasFailed"), <br>
//!           ApplyModifier stops : the following Modifiers are ignored <br>
 /*instead*/  System::Boolean ApplyModifiers(OCNaroWrappers::OCInterface_Graph^ G, OCNaroWrappers::OCInterface_Protocol^ protocol, OCNaroWrappers::OCInterface_CopyTool^ TC, OCNaroWrappers::OCInterface_CheckIterator^ checks, OCNaroWrappers::OCInterface_InterfaceModel^ newmod) ;

//! This methods allows to know what happened to a starting <br>
//!           entity after the last Perform. It reads result from the map <br>
//!           which was filled by Perform. <br>
 /*instead*/  System::Boolean Updated(OCNaroWrappers::OCStandard_Transient^ entfrom, OCNaroWrappers::OCStandard_Transient^ entto) ;

//! Returns a text which defines the way a Transformer works : <br>
//!           "On the spot edition" or "Standard Copy" followed by <br>
//!           "<nn> Modifiers" <br>
 /*instead*/  OCTCollection_AsciiString^ Label() ;

~OCIFSelect_TransformStandard()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif

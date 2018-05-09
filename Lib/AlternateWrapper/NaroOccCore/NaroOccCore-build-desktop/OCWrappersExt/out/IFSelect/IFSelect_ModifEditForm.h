// File generated by CPPExt (Transient)
//
#ifndef _IFSelect_ModifEditForm_OCWrappers_HeaderFile
#define _IFSelect_ModifEditForm_OCWrappers_HeaderFile

// include the wrapped class
#include <IFSelect_ModifEditForm.hxx>
#include "../Converter.h"

#include "IFSelect_Modifier.h"



namespace OCNaroWrappers
{

ref class OCIFSelect_EditForm;
ref class OCIFSelect_ContextModif;
ref class OCInterface_InterfaceModel;
ref class OCInterface_Protocol;
ref class OCInterface_CopyTool;
ref class OCTCollection_AsciiString;


//! This modifier applies an EditForm on the entities selected <br>
public ref class OCIFSelect_ModifEditForm : OCIFSelect_Modifier {

protected:
  // dummy constructor;
  OCIFSelect_ModifEditForm(OCDummy^) : OCIFSelect_Modifier((OCDummy^)nullptr) {};

public:

// constructor from native
OCIFSelect_ModifEditForm(Handle(IFSelect_ModifEditForm)* nativeHandle);

// Methods PUBLIC

//! Creates a ModifEditForm. It may not change the graph <br>
OCIFSelect_ModifEditForm(OCNaroWrappers::OCIFSelect_EditForm^ editform);

//! Returns the EditForm <br>
 /*instead*/  OCIFSelect_EditForm^ EditForm() ;

//! Acts by applying an EditForm to entities, selected or all model <br>
 /*instead*/  void Perform(OCNaroWrappers::OCIFSelect_ContextModif^ ctx, OCNaroWrappers::OCInterface_InterfaceModel^ target, OCNaroWrappers::OCInterface_Protocol^ protocol, OCNaroWrappers::OCInterface_CopyTool^ TC) ;

//! Returns Label as "Apply EditForm <+ label of EditForm>" <br>
 /*instead*/  OCTCollection_AsciiString^ Label() ;

~OCIFSelect_ModifEditForm()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif

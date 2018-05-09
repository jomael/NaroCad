// File generated by CPPExt (Package)
//

#ifndef _StepData_OCWrappers_HeaderFile
#define _StepData_OCWrappers_HeaderFile

// Include the wrapped header
#include <StepData.hxx>

#include "StepData_StepModel.h"
#include "StepData_UndefinedEntity.h"
#include "StepData_SelectType.h"
#include "StepData_Field.h"
#include "StepData_SelectMember.h"
#include "StepData_SelectInt.h"
#include "StepData_SelectReal.h"
#include "StepData_SelectNamed.h"
#include "StepData_SelectArrReal.h"
#include "StepData_PDescr.h"
#include "StepData_FieldList.h"
#include "StepData_FieldList1.h"
#include "StepData_FieldListN.h"
#include "StepData_FieldListD.h"
#include "StepData_EDescr.h"
#include "StepData_ESDescr.h"
#include "StepData_ECDescr.h"
#include "StepData_Described.h"
#include "StepData_Simple.h"
#include "StepData_Plex.h"
#include "StepData_FreeFormEntity.h"
#include "StepData_Protocol.h"
#include "StepData_GeneralModule.h"
#include "StepData_FileRecognizer.h"
#include "StepData_FileProtocol.h"
#include "StepData_HeaderTool.h"
#include "StepData_EnumTool.h"
#include "StepData_DescrProtocol.h"
#include "StepData_DescrGeneral.h"
#include "StepData_DescrReadWrite.h"
#include "StepData_StepReaderData.h"
#include "StepData_StepReaderTool.h"
#include "StepData_ReadWriteModule.h"
#include "StepData_StepWriter.h"
#include "StepData_StepDumper.h"
#include "StepData_WriterLib.h"
#include "StepData_DefaultGeneral.h"
#include "StepData_Array1OfField.h"
#include "StepData_HArray1OfField.h"
#include "StepData_GlobalNodeOfWriterLib.h"
#include "StepData_NodeOfWriterLib.h"


namespace OCNaroWrappers
{
//! Gives basic data definition for Step Interface. <br>
//!           Any class of a data model described in EXPRESS Language <br>
//!           is candidate to be managed by a Step Interface <br>
public ref class OCStepData abstract sealed
{

public:
// Methods

//! Returns the recorded HeaderProtocol, which can be : <br>
//!           - a Null Handle if no Header Protocol was yet defined <br>
//!           - a simple Protocol if only one was defined <br>
//!           - a FileProtocol if more than one Protocol was yet defined <br>
static /*instead*/  OCStepData_Protocol^ HeaderProtocol() ;

//! Adds a new Header Protocol to the Header Definition <br>
static /*instead*/  void AddHeaderProtocol(OCNaroWrappers::OCStepData_Protocol^ headerproto) ;

//! Prepares General Data required to work with this package, <br>
//!           which are the Protocol and Modules to be loaded into Libraries <br>
static /*instead*/  void Init() ;

//! Returns a Protocol from StepData (avoids to create it) <br>
static /*instead*/  OCStepData_Protocol^ Protocol() ;


};

}; // OCNaroWrappers

#endif

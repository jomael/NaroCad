// File generated by CPPExt (Package)
//

#ifndef _MDF_OCWrappers_HeaderFile
#define _MDF_OCWrappers_HeaderFile

// Include the wrapped header
#include <MDF.hxx>

#include "MDF_ASDriver.h"
#include "MDF_ARDriver.h"
#include "MDF_RelocationTable.h"
#include "MDF_DriverTable.h"
#include "MDF_DriverList.h"
#include "MDF_TypeDriverListMap.h"
#include "MDF_Tool.h"
#include "MDF_TagSourceStorageDriver.h"
#include "MDF_TagSourceRetrievalDriver.h"
#include "MDF_ReferenceStorageDriver.h"
#include "MDF_ReferenceRetrievalDriver.h"
#include "MDF_ASDriverSequence.h"
#include "MDF_ASDriverHSequence.h"
#include "MDF_ARDriverSequence.h"
#include "MDF_ARDriverHSequence.h"
#include "MDF_SRelocationTable.h"
#include "MDF_RRelocationTable.h"
#include "MDF_TypeASDriverMap.h"
#include "MDF_TypeARDriverMap.h"
#include "MDF_ASDriverTable.h"
#include "MDF_ARDriverTable.h"
#include "MDF_SequenceNodeOfASDriverSequence.h"
#include "MDF_SequenceNodeOfARDriverSequence.h"
#include "MDF_DataMapNodeOfTypeASDriverMap.h"
#include "MDF_DataMapIteratorOfTypeASDriverMap.h"
#include "MDF_DataMapNodeOfTypeARDriverMap.h"
#include "MDF_DataMapIteratorOfTypeARDriverMap.h"
#include "MDF_ListNodeOfDriverListOfASDriverTable.h"
#include "MDF_ListIteratorOfDriverListOfASDriverTable.h"
#include "MDF_DriverListOfASDriverTable.h"
#include "MDF_DataMapNodeOfTypeDriverListMapOfASDriverTable.h"
#include "MDF_DataMapIteratorOfTypeDriverListMapOfASDriverTable.h"
#include "MDF_TypeDriverListMapOfASDriverTable.h"
#include "MDF_ListNodeOfDriverListOfARDriverTable.h"
#include "MDF_ListIteratorOfDriverListOfARDriverTable.h"
#include "MDF_DriverListOfARDriverTable.h"
#include "MDF_DataMapNodeOfTypeDriverListMapOfARDriverTable.h"
#include "MDF_DataMapIteratorOfTypeDriverListMapOfARDriverTable.h"
#include "MDF_TypeDriverListMapOfARDriverTable.h"


namespace OCNaroWrappers
{
//! This package provides classes and methods to <br>
//!          translate a transient DF into a persistent one and <br>
//!          vice versa. <br>
//! <br>
//!          Driver <br>
//! <br>
//!          A driver is a tool used to translate a transient <br>
//!          attribute into a persistent one and vice versa. <br>
//! <br>
//!          Relocation Table <br>
//! <br>
//!          A relocation table is a tool who provides services <br>
//!          to relocate transient objects into persistent ones <br>
//!          (or vice versa). It uses a map system to keep the <br>
//!          sharing. This service is used by the drivers. <br>
//! <br>
//!          Driver Table <br>
//! <br>
//!          A driver table is an object building links between <br>
//!          object types and object drivers. In the <br>
//!          translation process, a driver table is asked to <br>
//!          give a translation driver for each current object <br>
//!          to be translated. <br>
public ref class OCMDF abstract sealed
{

public:
// Methods

//! Translates a transient <aSource> into a persistent <br>
//!          <aTarget>. <br>
static /*instead*/  void FromTo(OCNaroWrappers::OCTDF_Data^ aSource, OCNaroWrappers::OCPDF_Data^ aTarget, OCNaroWrappers::OCMDF_ASDriverTable^ aDriverTable, OCNaroWrappers::OCMDF_SRelocationTable^ aReloc, Standard_Integer aVersion) ;

//! Translates a persistent <aSource> into a transient <br>
//!          <aTarget>. <br>
static /*instead*/  void FromTo(OCNaroWrappers::OCPDF_Data^ aSource, OCNaroWrappers::OCTDF_Data^ aTarget, OCNaroWrappers::OCMDF_ARDriverTable^ aDriverTable, OCNaroWrappers::OCMDF_RRelocationTable^ aReloc) ;

//! Adds the attribute storage drivers to <aDriverSeq>. <br>
static /*instead*/  void AddStorageDrivers(OCNaroWrappers::OCMDF_ASDriverHSequence^ aDriverSeq, OCNaroWrappers::OCCDM_MessageDriver^ theMessageDriver) ;

//! Adds the attribute retrieval drivers to <aDriverSeq>. <br>
static /*instead*/  void AddRetrievalDrivers(OCNaroWrappers::OCMDF_ARDriverHSequence^ aDriverSeq, OCNaroWrappers::OCCDM_MessageDriver^ theMessageDriver) ;


};

}; // OCNaroWrappers

#endif

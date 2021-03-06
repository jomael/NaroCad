// File generated by CPPExt (MPV)
//
#ifndef _TDF_ClosureTool_OCWrappers_HeaderFile
#define _TDF_ClosureTool_OCWrappers_HeaderFile

// include native header
#include <TDF_ClosureTool.hxx>
#include "../Converter.h"




namespace OCNaroWrappers
{

ref class OCTDF_DataSet;
ref class OCTDF_IDFilter;
ref class OCTDF_ClosureMode;
ref class OCTDF_Label;
ref class OCTDF_LabelMap;
ref class OCTDF_AttributeMap;


//! This class provides services to build the closure <br>
//!          of an information set. <br>
//! <br>
//!          You can set closure options by using IDFilter <br>
//!          (to select or exclude specific attribute IDs) and <br>
//!          CopyOption objects and by giving to Closure <br>
//!          method. <br>
//! <br>
public ref class OCTDF_ClosureTool  {

protected:
  TDF_ClosureTool* nativeHandle;
  OCTDF_ClosureTool(OCDummy^) {};

public:
  property TDF_ClosureTool* Handle
  {
    TDF_ClosureTool* get()
    {
      return nativeHandle;
    }
  }


// constructor from native
OCTDF_ClosureTool(TDF_ClosureTool* nativeHandle);

// Methods PUBLIC

//! Builds the transitive closure of label and <br>
//!          attribute sets into <aDataSet>. <br>
static /*instead*/  void Closure(OCNaroWrappers::OCTDF_DataSet^ aDataSet) ;

//! Builds the transitive closure of label and <br>
//!          attribute sets into <aDataSet>. Uses <aFilter> to <br>
//!          determine if an attribute has to be taken in <br>
//!          account or not. Uses <aMode> for various way of <br>
//!          closing. <br>
static /*instead*/  void Closure(OCNaroWrappers::OCTDF_DataSet^ aDataSet, OCNaroWrappers::OCTDF_IDFilter^ aFilter, OCNaroWrappers::OCTDF_ClosureMode^ aMode) ;

//! Builds the transitive closure of <aLabel>. <br>
static /*instead*/  void Closure(OCNaroWrappers::OCTDF_Label^ aLabel, OCNaroWrappers::OCTDF_LabelMap^ aLabMap, OCNaroWrappers::OCTDF_AttributeMap^ anAttMap, OCNaroWrappers::OCTDF_IDFilter^ aFilter, OCNaroWrappers::OCTDF_ClosureMode^ aMode) ;

~OCTDF_ClosureTool()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif

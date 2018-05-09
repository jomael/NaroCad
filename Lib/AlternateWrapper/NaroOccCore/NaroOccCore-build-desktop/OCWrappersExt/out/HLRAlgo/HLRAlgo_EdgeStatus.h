// File generated by CPPExt (MPV)
//
#ifndef _HLRAlgo_EdgeStatus_OCWrappers_HeaderFile
#define _HLRAlgo_EdgeStatus_OCWrappers_HeaderFile

// include native header
#include <HLRAlgo_EdgeStatus.hxx>
#include "../Converter.h"


#include "../Intrv/Intrv_Intervals.h"


namespace OCNaroWrappers
{



//! This class describes the Hidden  Line status of an <br>
//!          Edge. It contains : <br>
//! <br>
//!            The Bounds of the Edge and their tolerances <br>
//! <br>
//!            Two flags indicating if the edge is full visible <br>
//!            or full hidden. <br>
public ref class OCHLRAlgo_EdgeStatus  {

protected:
  HLRAlgo_EdgeStatus* nativeHandle;
  OCHLRAlgo_EdgeStatus(OCDummy^) {};

public:
  property HLRAlgo_EdgeStatus* Handle
  {
    HLRAlgo_EdgeStatus* get()
    {
      return nativeHandle;
    }
  }


// constructor from native
OCHLRAlgo_EdgeStatus(HLRAlgo_EdgeStatus* nativeHandle);

// Methods PUBLIC


OCHLRAlgo_EdgeStatus();

//! Creates a  new  EdgeStatus.  Default visible.  The <br>
//!          Edge is   bounded by the  interval  <Start>, <End> <br>
//!          with the tolerances <TolStart>, <TolEnd>. <br>
OCHLRAlgo_EdgeStatus(Standard_Real Start, Standard_ShortReal TolStart, Standard_Real End, Standard_ShortReal TolEnd);

//! Initialize  an  EdgeStatus.  Default visible.  The <br>
//!          Edge is   bounded by the  interval  <Start>, <End> <br>
//!          with the tolerances <TolStart>, <TolEnd>. <br>
 /*instead*/  void Initialize(Standard_Real Start, Standard_ShortReal TolStart, Standard_Real End, Standard_ShortReal TolEnd) ;


 /*instead*/  void Bounds(Standard_Real& Start, Standard_ShortReal& TolStart, Standard_Real& End, Standard_ShortReal& TolEnd) ;


 /*instead*/  Standard_Integer NbVisiblePart() ;


 /*instead*/  void VisiblePart(Standard_Integer Index, Standard_Real& Start, Standard_ShortReal& TolStart, Standard_Real& End, Standard_ShortReal& TolEnd) ;

//! Hides  the  interval  <Start>,    <End>   with the <br>
//!          tolerances <TolStart>,  <TolEnd>. This interval is <br>
//!          subtracted from the visible  parts.  If the hidden <br>
//!          part is on ( or under ) the face the flag <OnFace> <br>
//!          is True ( or False ).  If the hidden  part is on ( <br>
//!          or  inside  ) the boundary  of  the  face the flag <br>
//!          <OnBoundary> is True ( or False ). <br>
 /*instead*/  void Hide(Standard_Real Start, Standard_ShortReal TolStart, Standard_Real End, Standard_ShortReal TolEnd, System::Boolean OnFace, System::Boolean OnBoundary) ;

//! Hide the whole Edge. <br>
 /*instead*/  void HideAll() ;

//! Show the whole Edge. <br>
 /*instead*/  void ShowAll() ;


 /*instead*/  System::Boolean AllHidden() ;


 /*instead*/  void AllHidden(System::Boolean B) ;


 /*instead*/  System::Boolean AllVisible() ;


 /*instead*/  void AllVisible(System::Boolean B) ;

~OCHLRAlgo_EdgeStatus()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif

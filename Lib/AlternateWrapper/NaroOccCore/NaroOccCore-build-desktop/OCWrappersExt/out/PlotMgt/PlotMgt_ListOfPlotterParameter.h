// File generated by CPPExt (MPV)
//
#ifndef _PlotMgt_ListOfPlotterParameter_OCWrappers_HeaderFile
#define _PlotMgt_ListOfPlotterParameter_OCWrappers_HeaderFile

// include native header
#include <PlotMgt_ListOfPlotterParameter.hxx>
#include "../Converter.h"

#include "../TCollection/TCollection_BaseSequence.h"

#include "../TCollection/TCollection_BaseSequence.h"


namespace OCNaroWrappers
{

ref class OCPlotMgt_PlotterParameter;
ref class OCPlotMgt_SequenceNodeOfListOfPlotterParameter;



public ref class OCPlotMgt_ListOfPlotterParameter  : public OCTCollection_BaseSequence {

protected:
  // dummy constructor;
  OCPlotMgt_ListOfPlotterParameter(OCDummy^) : OCTCollection_BaseSequence((OCDummy^)nullptr) {};

public:

// constructor from native
OCPlotMgt_ListOfPlotterParameter(PlotMgt_ListOfPlotterParameter* nativeHandle);

// Methods PUBLIC


OCPlotMgt_ListOfPlotterParameter();


 /*instead*/  OCPlotMgt_ListOfPlotterParameter^ Assign(OCNaroWrappers::OCPlotMgt_ListOfPlotterParameter^ Other) ;


 /*instead*/  void Append(OCNaroWrappers::OCPlotMgt_PlotterParameter^ T) ;


 /*instead*/  void Append(OCNaroWrappers::OCPlotMgt_ListOfPlotterParameter^ S) ;


 /*instead*/  void Prepend(OCNaroWrappers::OCPlotMgt_PlotterParameter^ T) ;


 /*instead*/  void Prepend(OCNaroWrappers::OCPlotMgt_ListOfPlotterParameter^ S) ;


 /*instead*/  void InsertBefore(Standard_Integer Index, OCNaroWrappers::OCPlotMgt_PlotterParameter^ T) ;


 /*instead*/  void InsertBefore(Standard_Integer Index, OCNaroWrappers::OCPlotMgt_ListOfPlotterParameter^ S) ;


 /*instead*/  void InsertAfter(Standard_Integer Index, OCNaroWrappers::OCPlotMgt_PlotterParameter^ T) ;


 /*instead*/  void InsertAfter(Standard_Integer Index, OCNaroWrappers::OCPlotMgt_ListOfPlotterParameter^ S) ;


 /*instead*/  OCPlotMgt_PlotterParameter^ First() ;


 /*instead*/  OCPlotMgt_PlotterParameter^ Last() ;


 /*instead*/  void Split(Standard_Integer Index, OCNaroWrappers::OCPlotMgt_ListOfPlotterParameter^ Sub) ;


 /*instead*/  OCPlotMgt_PlotterParameter^ Value(Standard_Integer Index) ;


 /*instead*/  void SetValue(Standard_Integer Index, OCNaroWrappers::OCPlotMgt_PlotterParameter^ I) ;


 /*instead*/  OCPlotMgt_PlotterParameter^ ChangeValue(Standard_Integer Index) ;


 /*instead*/  void Remove(Standard_Integer Index) ;


 /*instead*/  void Remove(Standard_Integer FromIndex, Standard_Integer ToIndex) ;

~OCPlotMgt_ListOfPlotterParameter()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif

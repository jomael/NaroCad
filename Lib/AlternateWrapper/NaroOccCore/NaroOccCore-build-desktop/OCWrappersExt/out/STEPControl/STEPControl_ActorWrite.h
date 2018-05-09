// File generated by CPPExt (Transient)
//
#ifndef _STEPControl_ActorWrite_OCWrappers_HeaderFile
#define _STEPControl_ActorWrite_OCWrappers_HeaderFile

// include the wrapped class
#include <STEPControl_ActorWrite.hxx>
#include "../Converter.h"

#include "../Transfer/Transfer_ActorOfFinderProcess.h"

#include "../STEPConstruct/STEPConstruct_ContextTool.h"
#include "STEPControl_StepModelType.h"


namespace OCNaroWrappers
{

ref class OCTransfer_Finder;
ref class OCTransfer_Binder;
ref class OCTransfer_FinderProcess;
ref class OCStepShape_ShapeDefinitionRepresentation;
ref class OCStepGeom_Axis2Placement3d;
ref class OCTopTools_HSequenceOfShape;
ref class OCTopoDS_Shape;
ref class OCStepShape_NonManifoldSurfaceShapeRepresentation;


//! This class performs the transfer of a Shape from TopoDS <br>
//!           to AP203 or AP214 (CD2 or DIS) <br>
public ref class OCSTEPControl_ActorWrite : OCTransfer_ActorOfFinderProcess {

protected:
  // dummy constructor;
  OCSTEPControl_ActorWrite(OCDummy^) : OCTransfer_ActorOfFinderProcess((OCDummy^)nullptr) {};

public:

// constructor from native
OCSTEPControl_ActorWrite(Handle(STEPControl_ActorWrite)* nativeHandle);

// Methods PUBLIC


OCSTEPControl_ActorWrite();


virtual /*instead*/  System::Boolean Recognize(OCNaroWrappers::OCTransfer_Finder^ start) override;


virtual /*instead*/  OCTransfer_Binder^ Transfer(OCNaroWrappers::OCTransfer_Finder^ start, OCNaroWrappers::OCTransfer_FinderProcess^ FP) override;


 /*instead*/  OCTransfer_Binder^ TransferSubShape(OCNaroWrappers::OCTransfer_Finder^ start, OCNaroWrappers::OCStepShape_ShapeDefinitionRepresentation^ SDR, OCNaroWrappers::OCStepGeom_Axis2Placement3d^ AX1, OCNaroWrappers::OCTransfer_FinderProcess^ FP, OCNaroWrappers::OCTopTools_HSequenceOfShape^ shapeGroup, System::Boolean isManifold) ;


 /*instead*/  OCTransfer_Binder^ TransferShape(OCNaroWrappers::OCTransfer_Finder^ start, OCNaroWrappers::OCStepShape_ShapeDefinitionRepresentation^ SDR, OCNaroWrappers::OCTransfer_FinderProcess^ FP, OCNaroWrappers::OCTopTools_HSequenceOfShape^ shapeGroup, System::Boolean isManifold) ;


 /*instead*/  OCTransfer_Binder^ TransferCompound(OCNaroWrappers::OCTransfer_Finder^ start, OCNaroWrappers::OCStepShape_ShapeDefinitionRepresentation^ SDR, OCNaroWrappers::OCTransfer_FinderProcess^ FP) ;


 /*instead*/  void SetMode(OCSTEPControl_StepModelType M) ;


 /*instead*/  OCSTEPControl_StepModelType Mode() ;


 /*instead*/  void SetGroupMode(Standard_Integer mode) ;


 /*instead*/  Standard_Integer GroupMode() ;


 /*instead*/  void SetTolerance(Standard_Real Tol) ;

//! Customizable method to check whether shape S should <br>
//!          be written as assembly or not <br>
//!          Default implementation uses flag GroupMode and analyses <br>
//!          the shape itself <br>
//!          NOTE: this method can modify shape <br>
virtual /*instead*/  System::Boolean IsAssembly(OCNaroWrappers::OCTopoDS_Shape^ S) ;

~OCSTEPControl_ActorWrite()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif

// File generated by CPPExt (Transient)
//
#ifndef _Visual3d_ViewManager_OCWrappers_HeaderFile
#define _Visual3d_ViewManager_OCWrappers_HeaderFile

// include the wrapped class
#include <Visual3d_ViewManager.hxx>
#include "../Converter.h"

#include "../Graphic3d/Graphic3d_StructureManager.h"

#include "Visual3d_SetOfView.h"
#include "../Aspect/Aspect_GenId.h"
#include "../TColStd/TColStd_MapOfInteger.h"
#include "../TColStd/TColStd_SequenceOfInteger.h"
#include "../Aspect/Aspect_TypeOfHighlightMethod.h"


namespace OCNaroWrappers
{

ref class OCVisual3d_Layer;
ref class OCGraphic3d_GraphicDriver;
ref class OCVisual3d_View;
ref class OCAspect_GraphicDevice;
ref class OCVisual3d_HSetOfView;
ref class OCAspect_Window;
ref class OCGraphic3d_Vertex;
ref class OCGraphic3d_Vector;
ref class OCGraphic3d_Structure;
ref class OCTColStd_SequenceOfInteger;
ref class OCAspect_GenId;
ref class OCTColStd_Array2OfReal;
ref class OCGraphic3d_DataStructureManager;


//! This class allows the definition of a manager to <br>
//!	    which the views are associated. <br>
//!	    It allows them to be globally manipulated. <br>
//!	    It activates the pick. <br>
public ref class OCVisual3d_ViewManager : OCGraphic3d_StructureManager {

protected:
  // dummy constructor;
  OCVisual3d_ViewManager(OCDummy^) : OCGraphic3d_StructureManager((OCDummy^)nullptr) {};

public:

// constructor from native
OCVisual3d_ViewManager(Handle(Visual3d_ViewManager)* nativeHandle);

// Methods PUBLIC

//! Creates a 3D visualizer. <br>
OCVisual3d_ViewManager(OCNaroWrappers::OCAspect_GraphicDevice^ aDevice);

//! Activates all the views of the manager <me>. <br>
 /*instead*/  void Activate() ;

//! Deactivates all the views of the manager <me>. <br>
 /*instead*/  void Deactivate() ;

//! Erases all of the structures displayed in the <br>
//!	    visualiser <me>. <br>
 /*instead*/  void Erase() ;

//! Redraws all the displayed structures. <br>
 /*instead*/  void Redraw() ;

//! Deletes and erases the 3D visualiser <me>. <br>
 /*instead*/  void Remove() ;

//! Updates screen in function of modifications of <br>
//!	    the structures. <br>
//!  Category: Methods to modify the class definition <br>
//!  Warning: Not necessary if the update mode is TOU_ASAP. <br>
virtual /*instead*/  void Update() ;

//! Returns the group of views activated in the visualiser <me>. <br>
 /*instead*/  OCVisual3d_HSetOfView^ ActivatedView() ;

//! Applies the view orientation transformation, the <br>
//!	    view mapping transformation and view clip, the <br>
//!	    display transformation to the vertex <AVertex>. <br>
//!	    Returns the pixel coordinates <AU>, <AV>. <br>
//!  Warning: Returns <AU> = <AV> = IntegerLast () if the <br>
//!	    evaluation is impossible. <br>
//!	    -- Bad Window, Numeric error... <br>
 /*instead*/  void ConvertCoord(OCNaroWrappers::OCAspect_Window^ AWindow, OCNaroWrappers::OCGraphic3d_Vertex^ AVertex, Standard_Integer& AU, Standard_Integer& AV) ;

//! Applies the inverse of the display transformation, the <br>
//!	    inverse of the view mapping transformation and view clip, <br>
//!	    the inverse of the view orientation transformation to <br>
//!	    the pixel coordinates <AU>, <AV>. <br>
//!	    Returns the world coordinates <AVertex>. <br>
//!  Warning: Returns AVertex (X, Y, Z) with X = Y = Z = RealLast () <br>
//!	    if the evaluation is impossible. <br>
//!	    -- Bad Window, Numeric error... <br>
 /*instead*/  OCGraphic3d_Vertex^ ConvertCoord(OCNaroWrappers::OCAspect_Window^ AWindow, Standard_Integer AU, Standard_Integer AV) ;

//! Applies the inverse of the display transformation, the <br>
//!	    inverse of the view mapping transformation and view clip, <br>
//!	    the inverse of the view orientation transformation to <br>
//!	    the pixel coordinates <AU>, <AV>. <br>
//!	    Returns the world coordinates <AVertex> and projection ray <AVector>. <br>
//!  Warning: Returns AVertex (X, Y, Z) with X = Y = Z = RealLast () and <br>
//!          AVector (VX, VY, VZ) with VX = VY = VZ = 0. <br>
//!	    if the evaluation is impossible. <br>
//!	    -- Bad Window, Numeric error... <br>
 /*instead*/  void ConvertCoordWithProj(OCNaroWrappers::OCAspect_Window^ AWindow, Standard_Integer AU, Standard_Integer AV, OCNaroWrappers::OCGraphic3d_Vertex^ Point, OCNaroWrappers::OCGraphic3d_Vector^ Proj) ;

//! Returns the group of views defined in the visualiser <me>. <br>
 /*instead*/  OCVisual3d_HSetOfView^ DefinedView() ;

//! Returns the theoretical maximum number of <br>
//!	    definable views in the view manager <me>. <br>
//!  Warning: It's not possible to accept an infinite <br>
//!	    number of definable views because each <br>
//!	    view must have an identification and we <br>
//!	    have different view managers. <br>
 /*instead*/  Standard_Integer MaxNumOfViews() ;

//! Returns : <br>
//!	    a new identification number for a new view <br>
//!	    in the visualiser. <br>
 /*instead*/  Standard_Integer Identification(OCNaroWrappers::OCVisual3d_View^ AView) ;

//! Release a unique ID of the view reserved for the view on its creation. <br>
 /*instead*/  void UnIdentification(Standard_Integer aViewId) ;

//! Returns the structure with the identification number <AId>. <br>
virtual /*instead*/  OCGraphic3d_Structure^ Identification(Standard_Integer AId) override;

//! Returns the identification number of the visualiser. <br>
virtual /*instead*/  Standard_Integer Identification() override;

//! Changes the display priority of the structure <AStructure>. <br>
virtual /*instead*/  void ChangeDisplayPriority(OCNaroWrappers::OCGraphic3d_Structure^ AStructure, Standard_Integer OldPriority, Standard_Integer NewPriority) ;

//! Change Z layer for structure. The layer mechanism allows <br>
//! to display structures in higher layers in overlay of structures in <br>
//! lower layers. <br>
virtual /*instead*/  void ChangeZLayer(OCNaroWrappers::OCGraphic3d_Structure^ theStructure, Standard_Integer theLayerId) ;

//! Get Z layer ID assigned for the structure. <br>
virtual /*instead*/  Standard_Integer GetZLayer(OCNaroWrappers::OCGraphic3d_Structure^ theStructure) ;

//! Add a new top-level Z layer and get its ID as <br>
//! <theLayerId> value. The method returns Standard_False if the layer <br>
//! can not be created. The layer mechanism allows to display <br>
//! structures in higher layers in overlay of structures in lower layers. <br>
virtual /*instead*/  System::Boolean AddZLayer(Standard_Integer& theLayerId) ;

//! Remove Z layer with ID <theLayerId>. Method returns <br>
//! Standard_False if the layer can not be removed or doesn't exists. <br>
//! By default, there are always default bottom-level layer that can't <br>
//! be removed. <br>
virtual /*instead*/  System::Boolean RemoveZLayer(Standard_Integer theLayerId) ;

//! Return all Z layer ids in sequence ordered by overlay level <br>
//! from lowest layer to highest ( foreground ). The first layer ID <br>
//! in sequence is the default layer that can't be removed. <br>
virtual /*instead*/  void GetAllZLayers(OCNaroWrappers::OCTColStd_SequenceOfInteger^ theLayerSeq) ;

//! Clears the structure <AStructure>. <br>
virtual /*instead*/  void Clear(OCNaroWrappers::OCGraphic3d_Structure^ AStructure, System::Boolean WithDestruction) ;

//! Connects the structures <AMother> and <ADaughter>. <br>
virtual /*instead*/  void Connect(OCNaroWrappers::OCGraphic3d_Structure^ AMother, OCNaroWrappers::OCGraphic3d_Structure^ ADaughter) ;

//! Disconnects the structures <AMother> and <ADaughter>. <br>
virtual /*instead*/  void Disconnect(OCNaroWrappers::OCGraphic3d_Structure^ AMother, OCNaroWrappers::OCGraphic3d_Structure^ ADaughter) ;

//! Display of the structure <AStructure>. <br>
virtual /*instead*/  void Display(OCNaroWrappers::OCGraphic3d_Structure^ AStructure) ;

//! Erases the structure <AStructure>. <br>
virtual /*instead*/  void Erase(OCNaroWrappers::OCGraphic3d_Structure^ AStructure) ;

//! Highlights the structure <AStructure>. <br>
virtual /*instead*/  void Highlight(OCNaroWrappers::OCGraphic3d_Structure^ AStructure, OCAspect_TypeOfHighlightMethod AMethod) ;


virtual /*instead*/  void SetTransform(OCNaroWrappers::OCGraphic3d_Structure^ AStructure, OCNaroWrappers::OCTColStd_Array2OfReal^ ATrsf) ;

//! Suppress the highlighting on all the structures. <br>
virtual /*instead*/  void UnHighlight() ;

//! Suppress the highlighting on the structure <AStructure>. <br>
virtual /*instead*/  void UnHighlight(OCNaroWrappers::OCGraphic3d_Structure^ AStructure) ;

//! Returns Standard_True if the view associated to the <br>
//!	    window <AWindow> exists and is activated. <br>
//!	    <TheViewId> contains the internal identification of <br>
//!	    the associated view. <br>
 /*instead*/  System::Boolean ViewExists(OCNaroWrappers::OCAspect_Window^ AWindow, Graphic3d_CView& TheCView) ;

//! Returns the underlay of the viewer <me>. <br>
 /*instead*/  OCVisual3d_Layer^ UnderLayer() ;

//! Returns the underlay of the viewer <me>. <br>
 /*instead*/  OCVisual3d_Layer^ OverLayer() ;

//! Forces a new construction of the structure <AStructure> <br>
//!	    if <AStructure> is displayed and TOS_COMPUTED. <br>
virtual /*instead*/  void ReCompute(OCNaroWrappers::OCGraphic3d_Structure^ AStructure) ;

//! Forces a new construction of the structure <AStructure> <br>
//!	    if <AStructure> is displayed in <AProjector> and TOS_COMPUTED. <br>
virtual /*instead*/  void ReCompute(OCNaroWrappers::OCGraphic3d_Structure^ AStructure, OCNaroWrappers::OCGraphic3d_DataStructureManager^ AProjector) ;

//! Returns Standard_True if the transparency <br>
//!	    is activated in all activated views. <br>
//!	    Default Standard_False <br>
 /*instead*/  System::Boolean Transparency() ;

//! if <AFlag> is Standard_True then the transparency <br>
//!	    is managed. <br>
//!	    Default Standard_False <br>
 /*instead*/  void SetTransparency(System::Boolean AFlag) ;

//! Returns Standard_True if the zbuffer activity <br>
//!	    is managed automatically. <br>
//!	    Default Standard_False <br>
 /*instead*/  System::Boolean ZBufferAuto() ;

//! if <AFlag> is  Standard_True then the zbuffer activity <br>
//!	    is managed automatically. <br>
//!	    Default Standard_False <br>
 /*instead*/  void SetZBufferAuto(System::Boolean AFlag) ;

~OCVisual3d_ViewManager()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif

// File generated by CPPExt (Package)
//

#ifndef _V3d_OCWrappers_HeaderFile
#define _V3d_OCWrappers_HeaderFile

// Include the wrapped header
#include <V3d.hxx>

#include "V3d_Viewer.h"
#include "V3d_View.h"
#include "V3d_OrthographicView.h"
#include "V3d_PerspectiveView.h"
#include "V3d_LayerMgr.h"
#include "V3d_Light.h"
#include "V3d_AmbientLight.h"
#include "V3d_PositionLight.h"
#include "V3d_PositionalLight.h"
#include "V3d_DirectionalLight.h"
#include "V3d_SpotLight.h"
#include "V3d_Plane.h"
#include "V3d_ListOfTransient.h"
#include "V3d_RectangularGrid.h"
#include "V3d_CircularGrid.h"
#include "V3d_ColorScale.h"
#include "V3d_ColorScaleLayerItem.h"


namespace OCNaroWrappers
{
//! This package contains the set of commands and services <br>
//!          of the 3D Viewer. It provides a set of high level commands <br>
//!          to control the views and viewing modes. This package is <br>
//!          complementary to the Visual3D graphic package. <br>
//!    Warning <br>
//! The CSF_WALKTHROUGH variable enables you to <br>
//! manage the perspective of the view in the viewer by <br>
//! defining setenv CSF_WALKTHROUGH "Yes". <br>
//! If you use the syntax unsetenv <br>
//! CSF_WALKTHROUGH, you undefine the variable <br>
//! (you make sure that the variable is deactivated). In <br>
//! this case, the eye is located outside the 3D bounding <br>
//! box of the view. This is the default behavior for <br>
//! managing the view perspective. <br>
public ref class OCV3d abstract sealed
{

public:
// Methods

//! Determines the orientation vector corresponding <br>
//!          to the predefined orientation type. <br>
static /*instead*/  OCGraphic3d_Vector^ GetProjAxis(OCV3d_TypeOfOrientation Orientation) ;

//! Compute the graphic structure of arrow. <br>
//!          X0,Y0,Z0 : coordinate of the arrow. <br>
//!          DX,DY,DZ : Direction of the arrow. <br>
//!          Alpha    : Angle of arrow. <br>
//!          Lng      : Length of arrow. <br>
static /*instead*/  void ArrowOfRadius(OCNaroWrappers::OCGraphic3d_Group^ garrow, V3d_Coordinate X0, V3d_Coordinate Y0, V3d_Coordinate Z0, V3d_Parameter DX, V3d_Parameter DY, V3d_Parameter DZ, Quantity_PlaneAngle Alpha, V3d_Parameter Lng) ;

//! Compute the graphic structure of circle. <br>
//!          X0,Y0,Z0 : Center of circle. <br>
//!          VX,VY,VZ : Axis of circle. <br>
//!          Radius   : Radius of circle. <br>
static /*instead*/  void CircleInPlane(OCNaroWrappers::OCGraphic3d_Group^ gcircle, V3d_Coordinate X0, V3d_Coordinate Y0, V3d_Coordinate Z0, V3d_Parameter VX, V3d_Parameter VY, V3d_Parameter VZ, V3d_Parameter Radius) ;


static /*instead*/  void SwitchViewsinWindow(OCNaroWrappers::OCV3d_View^ aPreviousView, OCNaroWrappers::OCV3d_View^ aNextView) ;

//! test. <br>
static /*instead*/  void DrawSphere(OCNaroWrappers::OCV3d_Viewer^ aViewer, Quantity_Length aRadius) ;

//! test. <br>
static /*instead*/  void PickGrid(OCNaroWrappers::OCV3d_Viewer^ aViewer, Quantity_Length aRadius) ;

//! test. <br>
static /*instead*/  void SetPlane(OCNaroWrappers::OCV3d_Viewer^ aViewer, Quantity_Length x1, Quantity_Length y1, Quantity_Length z1, Quantity_Length x2, Quantity_Length y2, Quantity_Length z2) ;


};

}; // OCNaroWrappers

#endif

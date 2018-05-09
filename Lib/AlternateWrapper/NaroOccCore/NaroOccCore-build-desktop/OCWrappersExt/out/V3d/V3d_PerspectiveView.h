// File generated by CPPExt (Transient)
//
#ifndef _V3d_PerspectiveView_OCWrappers_HeaderFile
#define _V3d_PerspectiveView_OCWrappers_HeaderFile

// include the wrapped class
#include <V3d_PerspectiveView.hxx>
#include "../Converter.h"

#include "V3d_View.h"



namespace OCNaroWrappers
{

ref class OCV3d_Viewer;
ref class OCV3d_OrthographicView;


//! Creates and modifies a perspective <br>
//!           See the methods of the class View <br>
public ref class OCV3d_PerspectiveView : OCV3d_View {

protected:
  // dummy constructor;
  OCV3d_PerspectiveView(OCDummy^) : OCV3d_View((OCDummy^)nullptr) {};

public:

// constructor from native
OCV3d_PerspectiveView(Handle(V3d_PerspectiveView)* nativeHandle);

// Methods PUBLIC

//! Defines a perspective view in a viewer VM. <br>
//!          The default angle of opening is given <br>
//!          by the viewer. <br>
OCV3d_PerspectiveView(OCNaroWrappers::OCV3d_Viewer^ VM);

//! Creates a perspective view from the parameters <br>
//!	    of an orthographic view. <br>
//!          The parameters of the original view are duplicated <br>
//!          in the resulting view (Projection,Mapping,Context) . <br>
//!          The view thus created must be activated in a new window. <br>
//!          The default angle of opening is given <br>
//!          by the viewer. <br>
OCV3d_PerspectiveView(OCNaroWrappers::OCV3d_Viewer^ VM, OCNaroWrappers::OCV3d_OrthographicView^ V);

//! Creates one perspective view from another. <br>
//!          The parameters of the original view are duplicated <br>
//!          in the resulting view (Projection,Mapping,Context) . <br>
//!          The view thus created must be activated in a new window. <br>
OCV3d_PerspectiveView(OCNaroWrappers::OCV3d_Viewer^ VM, OCNaroWrappers::OCV3d_PerspectiveView^ V);


 /*instead*/  OCV3d_PerspectiveView^ Copy() ;

//! Modifies the angle of opening of the perspective in RADIANS. <br>
//!	    The projection window is resized according to the <br>
//!	    formula : <br>
//!	    TAN(Angle/2) = Size/Length <br>
//!	    	Size expresses the smallest dimension of the window. <br>
//!	        Length expresses the focal length. <br>//!  Warning! raises BadValue from Viewer <br>
//!	    if the opening angle is <= 0 or >= PI <br>
 /*instead*/  void SetAngle(Quantity_PlaneAngle Angle) ;

//! Returns the value of the angle of opening. <br>
 /*instead*/  Quantity_PlaneAngle Angle() ;

//! Modifies the viewing perspective volume by given <br>
//!		angle of opening of the perspective in RADIANS, <br>
//!      aspect ratio of window width to its height and <br>
//!      near and far clipping planes <br>
 /*instead*/  void SetPerspective(Quantity_PlaneAngle Angle, Standard_Real UVRatio, Standard_Real ZNear, Standard_Real ZFar) ;

~OCV3d_PerspectiveView()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
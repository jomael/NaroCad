// File generated by CPPExt (Enum)

#ifndef _Visual3d_TypeOfOrder_OCWrappers_HeaderFile
#define _Visual3d_TypeOfOrder_OCWrappers_HeaderFile

namespace OCNaroWrappers
{

//! Definition of the rendering (colour shading) model <br>
//!  TOM_NONE        No interpolation, constant shading <br>
//!              (FLAT Shading) <br>
//!  TOM_INTERP_COLOR    Linear interpolation of color <br>
//!              (Gouraud Shading) <br>
//!  TOM_FACET       Interpolation of color based on <br>
//!              dot products <br>
//!              (Quick Phong Shading) <br>
//!  TOM_VERTEX      Interpolation of color based on <br>
//!              normals <br>
//!              (Phong Shading) <br>
public enum class OCVisual3d_TypeOfOrder
{ 
 Visual3d_TOO_TOPFIRST,
Visual3d_TOO_BOTTOMFIRST
};

}; // OCNaroWrappers

#endif
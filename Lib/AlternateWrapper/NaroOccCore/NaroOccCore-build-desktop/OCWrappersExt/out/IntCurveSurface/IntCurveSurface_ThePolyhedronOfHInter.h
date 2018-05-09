// File generated by CPPExt (MPV)
//
#ifndef _IntCurveSurface_ThePolyhedronOfHInter_OCWrappers_HeaderFile
#define _IntCurveSurface_ThePolyhedronOfHInter_OCWrappers_HeaderFile

// include native header
#include <IntCurveSurface_ThePolyhedronOfHInter.hxx>
#include "../Converter.h"


#include "../Bnd/Bnd_Box.h"


namespace OCNaroWrappers
{

ref class OCBnd_HArray1OfBox;
ref class OCAdaptor3d_HSurface;
ref class OCAdaptor3d_HSurfaceTool;
ref class OCTColStd_Array1OfReal;
ref class OCgp_Pnt;
ref class OCBnd_Box;
ref class OCgp_XYZ;



public ref class OCIntCurveSurface_ThePolyhedronOfHInter  {

protected:
  IntCurveSurface_ThePolyhedronOfHInter* nativeHandle;
  OCIntCurveSurface_ThePolyhedronOfHInter(OCDummy^) {};

public:
  property IntCurveSurface_ThePolyhedronOfHInter* Handle
  {
    IntCurveSurface_ThePolyhedronOfHInter* get()
    {
      return nativeHandle;
    }
  }


// constructor from native
OCIntCurveSurface_ThePolyhedronOfHInter(IntCurveSurface_ThePolyhedronOfHInter* nativeHandle);

// Methods PUBLIC


OCIntCurveSurface_ThePolyhedronOfHInter(OCNaroWrappers::OCAdaptor3d_HSurface^ Surface, Standard_Integer nbdU, Standard_Integer nbdV, Standard_Real U1, Standard_Real V1, Standard_Real U2, Standard_Real V2);


OCIntCurveSurface_ThePolyhedronOfHInter(OCNaroWrappers::OCAdaptor3d_HSurface^ Surface, OCNaroWrappers::OCTColStd_Array1OfReal^ Upars, OCNaroWrappers::OCTColStd_Array1OfReal^ Vpars);


 /*instead*/  void DeflectionOverEstimation(Standard_Real flec) ;


 /*instead*/  Standard_Real DeflectionOnTriangle(OCNaroWrappers::OCAdaptor3d_HSurface^ Surface, Standard_Integer Index) ;


 /*instead*/  void UMinSingularity(System::Boolean Sing) ;


 /*instead*/  void UMaxSingularity(System::Boolean Sing) ;


 /*instead*/  void VMinSingularity(System::Boolean Sing) ;


 /*instead*/  void VMaxSingularity(System::Boolean Sing) ;


 /*instead*/  void Size(Standard_Integer& nbdu, Standard_Integer& nbdv) ;


 /*instead*/  Standard_Integer NbTriangles() ;


 /*instead*/  void Triangle(Standard_Integer Index, Standard_Integer& P1, Standard_Integer& P2, Standard_Integer& P3) ;


 /*instead*/  Standard_Integer TriConnex(Standard_Integer Triang, Standard_Integer Pivot, Standard_Integer Pedge, Standard_Integer& TriCon, Standard_Integer& OtherP) ;


 /*instead*/  Standard_Integer NbPoints() ;


 /*instead*/  void Point(OCNaroWrappers::OCgp_Pnt^ thePnt, Standard_Integer lig, Standard_Integer col, Standard_Real U, Standard_Real V) ;


 /*instead*/  OCgp_Pnt^ Point(Standard_Integer Index, Standard_Real& U, Standard_Real& V) ;


 /*instead*/  OCgp_Pnt^ Point(Standard_Integer Index) ;


 /*instead*/  void Point(Standard_Integer Index, OCNaroWrappers::OCgp_Pnt^ P) ;


 /*instead*/  OCBnd_Box^ Bounding() ;


 /*instead*/  void FillBounding() ;


 /*instead*/  OCBnd_HArray1OfBox^ ComponentsBounding() ;


 /*instead*/  Standard_Real DeflectionOverEstimation() ;


 /*instead*/  System::Boolean HasUMinSingularity() ;


 /*instead*/  System::Boolean HasUMaxSingularity() ;


 /*instead*/  System::Boolean HasVMinSingularity() ;


 /*instead*/  System::Boolean HasVMaxSingularity() ;


 /*instead*/  void PlaneEquation(Standard_Integer Triang, OCNaroWrappers::OCgp_XYZ^ NormalVector, Standard_Real& PolarDistance) ;


 /*instead*/  System::Boolean Contain(Standard_Integer Triang, OCNaroWrappers::OCgp_Pnt^ ThePnt) ;


 /*instead*/  void Parameters(Standard_Integer Index, Standard_Real& U, Standard_Real& V) ;


 /*instead*/  System::Boolean IsOnBound(Standard_Integer Index1, Standard_Integer Index2) ;


 /*instead*/  Standard_Real GetBorderDeflection() ;


 /*instead*/  void Dump() ;

~OCIntCurveSurface_ThePolyhedronOfHInter()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif

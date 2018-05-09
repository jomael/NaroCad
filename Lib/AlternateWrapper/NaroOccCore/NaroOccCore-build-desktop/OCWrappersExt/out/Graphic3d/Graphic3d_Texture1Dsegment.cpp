// File generated by CPPExt (CPP file)
//

#include "Graphic3d_Texture1Dsegment.h"
#include "../Converter.h"
#include "Graphic3d_StructureManager.h"


using namespace OCNaroWrappers;

OCGraphic3d_Texture1Dsegment::OCGraphic3d_Texture1Dsegment(Handle(Graphic3d_Texture1Dsegment)* nativeHandle) : OCGraphic3d_Texture1D((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_Graphic3d_Texture1Dsegment(*nativeHandle);
}

OCGraphic3d_Texture1Dsegment::OCGraphic3d_Texture1Dsegment(OCNaroWrappers::OCGraphic3d_StructureManager^ VM, System::String^ FileName) : OCGraphic3d_Texture1D((OCDummy^)nullptr)

{
  nativeHandle = new Handle_Graphic3d_Texture1Dsegment(new Graphic3d_Texture1Dsegment(*((Handle_Graphic3d_StructureManager*)VM->Handle), OCConverter::StringToStandardCString(FileName)));
}

OCGraphic3d_Texture1Dsegment::OCGraphic3d_Texture1Dsegment(OCNaroWrappers::OCGraphic3d_StructureManager^ VM, OCGraphic3d_NameOfTexture1D NOT) : OCGraphic3d_Texture1D((OCDummy^)nullptr)

{
  nativeHandle = new Handle_Graphic3d_Texture1Dsegment(new Graphic3d_Texture1Dsegment(*((Handle_Graphic3d_StructureManager*)VM->Handle), (Graphic3d_NameOfTexture1D)NOT));
}

 void OCGraphic3d_Texture1Dsegment::SetSegment(Standard_ShortReal X1, Standard_ShortReal Y1, Standard_ShortReal Z1, Standard_ShortReal X2, Standard_ShortReal Y2, Standard_ShortReal Z2)
{
  (*((Handle_Graphic3d_Texture1Dsegment*)nativeHandle))->SetSegment(X1, Y1, Z1, X2, Y2, Z2);
}

 void OCGraphic3d_Texture1Dsegment::Segment(Standard_ShortReal& X1, Standard_ShortReal& Y1, Standard_ShortReal& Z1, Standard_ShortReal& X2, Standard_ShortReal& Y2, Standard_ShortReal& Z2)
{
  (*((Handle_Graphic3d_Texture1Dsegment*)nativeHandle))->Segment(X1, Y1, Z1, X2, Y2, Z2);
}



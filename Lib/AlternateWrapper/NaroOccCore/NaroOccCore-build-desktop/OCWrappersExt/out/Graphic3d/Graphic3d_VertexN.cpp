// File generated by CPPExt (CPP file)
//

#include "Graphic3d_VertexN.h"
#include "../Converter.h"
#include "Graphic3d_Vertex.h"
#include "Graphic3d_Vector.h"


using namespace OCNaroWrappers;

OCGraphic3d_VertexN::OCGraphic3d_VertexN(Graphic3d_VertexN* nativeHandle) : OCGraphic3d_Vertex((OCDummy^)nullptr)

{
  this->nativeHandle = nativeHandle;
}

OCGraphic3d_VertexN::OCGraphic3d_VertexN() : OCGraphic3d_Vertex((OCDummy^)nullptr)

{
  nativeHandle = new Graphic3d_VertexN();
}

OCGraphic3d_VertexN::OCGraphic3d_VertexN(Standard_Real AX, Standard_Real AY, Standard_Real AZ, Standard_Real ANX, Standard_Real ANY, Standard_Real ANZ, System::Boolean FlagNormalise) : OCGraphic3d_Vertex((OCDummy^)nullptr)

{
  nativeHandle = new Graphic3d_VertexN(AX, AY, AZ, ANX, ANY, ANZ, OCConverter::BooleanToStandardBoolean(FlagNormalise));
}

OCGraphic3d_VertexN::OCGraphic3d_VertexN(OCNaroWrappers::OCGraphic3d_Vertex^ APoint, OCNaroWrappers::OCGraphic3d_Vector^ AVector, System::Boolean FlagNormalise) : OCGraphic3d_Vertex((OCDummy^)nullptr)

{
  nativeHandle = new Graphic3d_VertexN(*((Graphic3d_Vertex*)APoint->Handle), *((Graphic3d_Vector*)AVector->Handle), OCConverter::BooleanToStandardBoolean(FlagNormalise));
}

 void OCGraphic3d_VertexN::SetNormal(Standard_Real NXnew, Standard_Real NYnew, Standard_Real NZnew, System::Boolean FlagNormalise)
{
  ((Graphic3d_VertexN*)nativeHandle)->SetNormal(NXnew, NYnew, NZnew, OCConverter::BooleanToStandardBoolean(FlagNormalise));
}

 void OCGraphic3d_VertexN::Normal(Standard_Real& ANX, Standard_Real& ANY, Standard_Real& ANZ)
{
  ((Graphic3d_VertexN*)nativeHandle)->Normal(ANX, ANY, ANZ);
}



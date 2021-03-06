// File generated by CPPExt (CPP file)
//

#include "Prs3d_Projector.h"
#include "../Converter.h"
#include "../HLRAlgo/HLRAlgo_Projector.h"


using namespace OCNaroWrappers;

OCPrs3d_Projector::OCPrs3d_Projector(Handle(Prs3d_Projector)* nativeHandle) : OCMMgt_TShared((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_Prs3d_Projector(*nativeHandle);
}

OCPrs3d_Projector::OCPrs3d_Projector(OCNaroWrappers::OCHLRAlgo_Projector^ Pr) : OCMMgt_TShared((OCDummy^)nullptr)

{
  nativeHandle = new Handle_Prs3d_Projector(new Prs3d_Projector(*((HLRAlgo_Projector*)Pr->Handle)));
}

OCPrs3d_Projector::OCPrs3d_Projector(System::Boolean Pers, Quantity_Length Focus, Quantity_Length DX, Quantity_Length DY, Quantity_Length DZ, Quantity_Length XAt, Quantity_Length YAt, Quantity_Length ZAt, Quantity_Length XUp, Quantity_Length YUp, Quantity_Length ZUp) : OCMMgt_TShared((OCDummy^)nullptr)

{
  nativeHandle = new Handle_Prs3d_Projector(new Prs3d_Projector(OCConverter::BooleanToStandardBoolean(Pers), Focus, DX, DY, DZ, XAt, YAt, ZAt, XUp, YUp, ZUp));
}

OCHLRAlgo_Projector^ OCPrs3d_Projector::Projector()
{
  HLRAlgo_Projector* tmp = new HLRAlgo_Projector();
  *tmp = (*((Handle_Prs3d_Projector*)nativeHandle))->Projector();
  return gcnew OCHLRAlgo_Projector(tmp);
}



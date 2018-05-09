// File generated by CPPExt (CPP file)
//

#include "Transfer_ActorOfProcessForTransient.h"
#include "../Converter.h"
#include "../Standard/Standard_Transient.h"
#include "../TColStd/TColStd_MapTransientHasher.h"
#include "../TColStd/TColStd_HSequenceOfTransient.h"
#include "Transfer_ProcessForTransient.h"
#include "Transfer_TransferMapOfProcessForTransient.h"
#include "Transfer_IndexedDataMapNodeOfTransferMapOfProcessForTransient.h"
#include "Transfer_IteratorOfProcessForTransient.h"
#include "Transfer_Binder.h"
#include "Transfer_SimpleBinderOfTransient.h"


using namespace OCNaroWrappers;

OCTransfer_ActorOfProcessForTransient::OCTransfer_ActorOfProcessForTransient(Handle(Transfer_ActorOfProcessForTransient)* nativeHandle) : OCMMgt_TShared((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_Transfer_ActorOfProcessForTransient(*nativeHandle);
}

OCTransfer_ActorOfProcessForTransient::OCTransfer_ActorOfProcessForTransient() : OCMMgt_TShared((OCDummy^)nullptr)

{
  nativeHandle = new Handle_Transfer_ActorOfProcessForTransient(new Transfer_ActorOfProcessForTransient());
}

 System::Boolean OCTransfer_ActorOfProcessForTransient::Recognize(OCNaroWrappers::OCStandard_Transient^ start)
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_Transfer_ActorOfProcessForTransient*)nativeHandle))->Recognize(*((Handle_Standard_Transient*)start->Handle)));
}

OCTransfer_Binder^ OCTransfer_ActorOfProcessForTransient::Transferring(OCNaroWrappers::OCStandard_Transient^ start, OCNaroWrappers::OCTransfer_ProcessForTransient^ TP)
{
  Handle(Transfer_Binder) tmp = (*((Handle_Transfer_ActorOfProcessForTransient*)nativeHandle))->Transferring(*((Handle_Standard_Transient*)start->Handle), *((Handle_Transfer_ProcessForTransient*)TP->Handle));
  return gcnew OCTransfer_Binder(&tmp);
}

OCTransfer_SimpleBinderOfTransient^ OCTransfer_ActorOfProcessForTransient::TransientResult(OCNaroWrappers::OCStandard_Transient^ res)
{
  Handle(Transfer_SimpleBinderOfTransient) tmp = (*((Handle_Transfer_ActorOfProcessForTransient*)nativeHandle))->TransientResult(*((Handle_Standard_Transient*)res->Handle));
  return gcnew OCTransfer_SimpleBinderOfTransient(&tmp);
}

OCTransfer_Binder^ OCTransfer_ActorOfProcessForTransient::NullResult()
{
  Handle(Transfer_Binder) tmp = (*((Handle_Transfer_ActorOfProcessForTransient*)nativeHandle))->NullResult();
  return gcnew OCTransfer_Binder(&tmp);
}

 void OCTransfer_ActorOfProcessForTransient::SetLast(System::Boolean mode)
{
  (*((Handle_Transfer_ActorOfProcessForTransient*)nativeHandle))->SetLast(OCConverter::BooleanToStandardBoolean(mode));
}

 System::Boolean OCTransfer_ActorOfProcessForTransient::IsLast()
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_Transfer_ActorOfProcessForTransient*)nativeHandle))->IsLast());
}

 void OCTransfer_ActorOfProcessForTransient::SetNext(OCNaroWrappers::OCTransfer_ActorOfProcessForTransient^ next)
{
  (*((Handle_Transfer_ActorOfProcessForTransient*)nativeHandle))->SetNext(*((Handle_Transfer_ActorOfProcessForTransient*)next->Handle));
}

OCTransfer_ActorOfProcessForTransient^ OCTransfer_ActorOfProcessForTransient::Next()
{
  Handle(Transfer_ActorOfProcessForTransient) tmp = (*((Handle_Transfer_ActorOfProcessForTransient*)nativeHandle))->Next();
  return gcnew OCTransfer_ActorOfProcessForTransient(&tmp);
}


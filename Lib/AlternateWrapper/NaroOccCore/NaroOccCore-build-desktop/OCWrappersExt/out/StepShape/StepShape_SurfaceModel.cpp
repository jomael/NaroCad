// File generated by CPPExt (CPP file)
//

#include "StepShape_SurfaceModel.h"
#include "../Converter.h"
#include "../Standard/Standard_Transient.h"
#include "StepShape_ShellBasedSurfaceModel.h"


using namespace OCNaroWrappers;

OCStepShape_SurfaceModel::OCStepShape_SurfaceModel(StepShape_SurfaceModel* nativeHandle) : OCStepData_SelectType((OCDummy^)nullptr)

{
  this->nativeHandle = nativeHandle;
}

OCStepShape_SurfaceModel::OCStepShape_SurfaceModel() : OCStepData_SelectType((OCDummy^)nullptr)

{
  nativeHandle = new StepShape_SurfaceModel();
}

 Standard_Integer OCStepShape_SurfaceModel::CaseNum(OCNaroWrappers::OCStandard_Transient^ ent)
{
  return ((StepShape_SurfaceModel*)nativeHandle)->CaseNum(*((Handle_Standard_Transient*)ent->Handle));
}

OCStepShape_ShellBasedSurfaceModel^ OCStepShape_SurfaceModel::ShellBasedSurfaceModel()
{
  StepShape_ShellBasedSurfaceModel* tmp = new StepShape_ShellBasedSurfaceModel();
  *tmp = ((StepShape_SurfaceModel*)nativeHandle)->ShellBasedSurfaceModel();
  return gcnew OCStepShape_ShellBasedSurfaceModel(tmp);
}



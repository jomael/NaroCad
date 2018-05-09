// File generated by CPPExt (CPP file)
//

#include "StepVisual_CameraModelD3.h"
#include "../Converter.h"
#include "StepVisual_ViewVolume.h"
#include "../TCollection/TCollection_HAsciiString.h"
#include "../StepGeom/StepGeom_Axis2Placement3d.h"


using namespace OCNaroWrappers;

OCStepVisual_CameraModelD3::OCStepVisual_CameraModelD3(StepVisual_CameraModelD3* nativeHandle) : OCStepVisual_CameraModel((OCDummy^)nullptr)

{
  this->nativeHandle = nativeHandle;
}

OCStepVisual_CameraModelD3::OCStepVisual_CameraModelD3() : OCStepVisual_CameraModel((OCDummy^)nullptr)

{
  nativeHandle = new StepVisual_CameraModelD3();
}

 void OCStepVisual_CameraModelD3::Init(OCNaroWrappers::OCTCollection_HAsciiString^ aName)
{
  ((StepVisual_CameraModelD3*)nativeHandle)->Init(*((Handle_TCollection_HAsciiString*)aName->Handle));
}

 void OCStepVisual_CameraModelD3::Init(OCNaroWrappers::OCTCollection_HAsciiString^ aName, OCNaroWrappers::OCStepGeom_Axis2Placement3d^ aViewReferenceSystem, OCNaroWrappers::OCStepVisual_ViewVolume^ aPerspectiveOfVolume)
{
  ((StepVisual_CameraModelD3*)nativeHandle)->Init(*((Handle_TCollection_HAsciiString*)aName->Handle), *((StepGeom_Axis2Placement3d*)aViewReferenceSystem->Handle), *((Handle_StepVisual_ViewVolume*)aPerspectiveOfVolume->Handle));
}

 void OCStepVisual_CameraModelD3::SetViewReferenceSystem(OCNaroWrappers::OCStepGeom_Axis2Placement3d^ aViewReferenceSystem)
{
  ((StepVisual_CameraModelD3*)nativeHandle)->SetViewReferenceSystem(*((StepGeom_Axis2Placement3d*)aViewReferenceSystem->Handle));
}

OCStepGeom_Axis2Placement3d^ OCStepVisual_CameraModelD3::ViewReferenceSystem()
{
  StepGeom_Axis2Placement3d* tmp = new StepGeom_Axis2Placement3d();
  *tmp = ((StepVisual_CameraModelD3*)nativeHandle)->ViewReferenceSystem();
  return gcnew OCStepGeom_Axis2Placement3d(tmp);
}

 void OCStepVisual_CameraModelD3::SetPerspectiveOfVolume(OCNaroWrappers::OCStepVisual_ViewVolume^ aPerspectiveOfVolume)
{
  ((StepVisual_CameraModelD3*)nativeHandle)->SetPerspectiveOfVolume(*((Handle_StepVisual_ViewVolume*)aPerspectiveOfVolume->Handle));
}

OCStepVisual_ViewVolume^ OCStepVisual_CameraModelD3::PerspectiveOfVolume()
{
  Handle(StepVisual_ViewVolume) tmp = ((StepVisual_CameraModelD3*)nativeHandle)->PerspectiveOfVolume();
  return gcnew OCStepVisual_ViewVolume(&tmp);
}


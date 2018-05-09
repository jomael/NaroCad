// File generated by CPPExt (CPP file)
//

#include "Aspect_WindowDriver.h"
#include "../Converter.h"
#include "Aspect_Window.h"
#include "../TCollection/TCollection_ExtendedString.h"


using namespace OCNaroWrappers;

OCAspect_WindowDriver::OCAspect_WindowDriver(Handle(Aspect_WindowDriver)* nativeHandle) : OCAspect_Driver((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_Aspect_WindowDriver(*nativeHandle);
}

OCAspect_WindowDriver::OCAspect_WindowDriver(OCNaroWrappers::OCAspect_Window^ aWindow) : OCAspect_Driver((OCDummy^)nullptr)

{}

OCAspect_Window^ OCAspect_WindowDriver::Window()
{
  Handle(Aspect_Window) tmp = (*((Handle_Aspect_WindowDriver*)nativeHandle))->Window();
  return gcnew OCAspect_Window(&tmp);
}


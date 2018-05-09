// File generated by CPPExt (CPP file)
//

#include "CDF_Timer.h"
#include "../Converter.h"


using namespace OCNaroWrappers;

OCCDF_Timer::OCCDF_Timer(CDF_Timer* nativeHandle) 
{
  this->nativeHandle = nativeHandle;
}

OCCDF_Timer::OCCDF_Timer() 
{
  nativeHandle = new CDF_Timer();
}

 void OCCDF_Timer::ShowAndRestart(System::String^ aMessage)
{
  ((CDF_Timer*)nativeHandle)->ShowAndRestart(OCConverter::StringToStandardCString(aMessage));
}

 void OCCDF_Timer::ShowAndStop(System::String^ aMessage)
{
  ((CDF_Timer*)nativeHandle)->ShowAndStop(OCConverter::StringToStandardCString(aMessage));
}

 System::Boolean OCCDF_Timer::MustShow()
{
  return OCConverter::StandardBooleanToBoolean(((CDF_Timer*)nativeHandle)->MustShow());
}



// File generated by CPPExt (CPP file)
//

#include "Approx_MCurvesToBSpCurve.h"
#include "../Converter.h"
#include "../AppParCurves/AppParCurves_MultiCurve.h"
#include "../AppParCurves/AppParCurves_SequenceOfMultiCurve.h"
#include "../AppParCurves/AppParCurves_MultiBSpCurve.h"


using namespace OCNaroWrappers;

OCApprox_MCurvesToBSpCurve::OCApprox_MCurvesToBSpCurve(Approx_MCurvesToBSpCurve* nativeHandle) 
{
  this->nativeHandle = nativeHandle;
}

OCApprox_MCurvesToBSpCurve::OCApprox_MCurvesToBSpCurve() 
{
  nativeHandle = new Approx_MCurvesToBSpCurve();
}

 void OCApprox_MCurvesToBSpCurve::Reset()
{
  ((Approx_MCurvesToBSpCurve*)nativeHandle)->Reset();
}

 void OCApprox_MCurvesToBSpCurve::Append(OCNaroWrappers::OCAppParCurves_MultiCurve^ MC)
{
  ((Approx_MCurvesToBSpCurve*)nativeHandle)->Append(*((AppParCurves_MultiCurve*)MC->Handle));
}

 void OCApprox_MCurvesToBSpCurve::Perform()
{
  ((Approx_MCurvesToBSpCurve*)nativeHandle)->Perform();
}

 void OCApprox_MCurvesToBSpCurve::Perform(OCNaroWrappers::OCAppParCurves_SequenceOfMultiCurve^ TheSeq)
{
  ((Approx_MCurvesToBSpCurve*)nativeHandle)->Perform(*((AppParCurves_SequenceOfMultiCurve*)TheSeq->Handle));
}

OCAppParCurves_MultiBSpCurve^ OCApprox_MCurvesToBSpCurve::Value()
{
  AppParCurves_MultiBSpCurve* tmp = new AppParCurves_MultiBSpCurve();
  *tmp = ((Approx_MCurvesToBSpCurve*)nativeHandle)->Value();
  return gcnew OCAppParCurves_MultiBSpCurve(tmp);
}

OCAppParCurves_MultiBSpCurve^ OCApprox_MCurvesToBSpCurve::ChangeValue()
{
  AppParCurves_MultiBSpCurve* tmp = new AppParCurves_MultiBSpCurve();
  *tmp = ((Approx_MCurvesToBSpCurve*)nativeHandle)->ChangeValue();
  return gcnew OCAppParCurves_MultiBSpCurve(tmp);
}



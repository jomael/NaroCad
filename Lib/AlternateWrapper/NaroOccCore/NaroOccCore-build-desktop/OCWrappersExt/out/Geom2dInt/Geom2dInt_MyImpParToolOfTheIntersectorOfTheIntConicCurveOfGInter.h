// File generated by CPPExt (MPV)
//
#ifndef _Geom2dInt_MyImpParToolOfTheIntersectorOfTheIntConicCurveOfGInter_OCWrappers_HeaderFile
#define _Geom2dInt_MyImpParToolOfTheIntersectorOfTheIntConicCurveOfGInter_OCWrappers_HeaderFile

// include native header
#include <Geom2dInt_MyImpParToolOfTheIntersectorOfTheIntConicCurveOfGInter.hxx>
#include "../Converter.h"

#include "../math/math_FunctionWithDerivative.h"

#include "../IntCurve/IntCurve_IConicTool.h"
#include "../math/math_FunctionWithDerivative.h"


namespace OCNaroWrappers
{

ref class OCIntCurve_IConicTool;
ref class OCAdaptor2d_Curve2d;
ref class OCGeom2dInt_Geom2dCurveTool;



public ref class OCGeom2dInt_MyImpParToolOfTheIntersectorOfTheIntConicCurveOfGInter  : public OCmath_FunctionWithDerivative {

protected:
  // dummy constructor;
  OCGeom2dInt_MyImpParToolOfTheIntersectorOfTheIntConicCurveOfGInter(OCDummy^) : OCmath_FunctionWithDerivative((OCDummy^)nullptr) {};

public:

// constructor from native
OCGeom2dInt_MyImpParToolOfTheIntersectorOfTheIntConicCurveOfGInter(Geom2dInt_MyImpParToolOfTheIntersectorOfTheIntConicCurveOfGInter* nativeHandle);

// Methods PUBLIC


OCGeom2dInt_MyImpParToolOfTheIntersectorOfTheIntConicCurveOfGInter(OCNaroWrappers::OCIntCurve_IConicTool^ IT, OCNaroWrappers::OCAdaptor2d_Curve2d^ PC);


virtual /*instead*/  System::Boolean Value(Standard_Real Param, Standard_Real& F) ;


virtual /*instead*/  System::Boolean Derivative(Standard_Real Param, Standard_Real& D) ;


virtual /*instead*/  System::Boolean Values(Standard_Real Param, Standard_Real& F, Standard_Real& D) ;

~OCGeom2dInt_MyImpParToolOfTheIntersectorOfTheIntConicCurveOfGInter()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif

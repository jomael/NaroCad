// File generated by CPPExt (Package)
//

#ifndef _PLib_OCWrappers_HeaderFile
#define _PLib_OCWrappers_HeaderFile

// Include the wrapped header
#include <PLib.hxx>

#include "PLib_Base.h"
#include "PLib_JacobiPolynomial.h"
#include "PLib_HermitJacobi.h"
#include "PLib_DoubleJacobiPolynomial.h"


namespace OCNaroWrappers
{
//! PLib means Polynomial  functions library.  This pk <br>
//!          provides  basic       computation    functions for <br>
//!          polynomial functions. <br>
//! <br>
public ref class OCPLib abstract sealed
{

public:
// Methods

//! Used as argument for a non rational functions <br>
//! <br>
static /*instead*/  OCTColStd_Array1OfReal^ NoWeights() ;

//! Used as argument for a non rational functions <br>
//! <br>
static /*instead*/  OCTColStd_Array2OfReal^ NoWeights2() ;

//! Copy in FP the coordinates of the poles. <br>
static /*instead*/  void SetPoles(OCNaroWrappers::OCTColgp_Array1OfPnt^ Poles, OCNaroWrappers::OCTColStd_Array1OfReal^ FP) ;

//! Copy in FP the coordinates of the poles. <br>
static /*instead*/  void SetPoles(OCNaroWrappers::OCTColgp_Array1OfPnt^ Poles, OCNaroWrappers::OCTColStd_Array1OfReal^ Weights, OCNaroWrappers::OCTColStd_Array1OfReal^ FP) ;

//! Get from FP the coordinates of the poles. <br>
static /*instead*/  void GetPoles(OCNaroWrappers::OCTColStd_Array1OfReal^ FP, OCNaroWrappers::OCTColgp_Array1OfPnt^ Poles) ;

//! Get from FP the coordinates of the poles. <br>
static /*instead*/  void GetPoles(OCNaroWrappers::OCTColStd_Array1OfReal^ FP, OCNaroWrappers::OCTColgp_Array1OfPnt^ Poles, OCNaroWrappers::OCTColStd_Array1OfReal^ Weights) ;

//! Copy in FP the coordinates of the poles. <br>
static /*instead*/  void SetPoles(OCNaroWrappers::OCTColgp_Array1OfPnt2d^ Poles, OCNaroWrappers::OCTColStd_Array1OfReal^ FP) ;

//! Copy in FP the coordinates of the poles. <br>
static /*instead*/  void SetPoles(OCNaroWrappers::OCTColgp_Array1OfPnt2d^ Poles, OCNaroWrappers::OCTColStd_Array1OfReal^ Weights, OCNaroWrappers::OCTColStd_Array1OfReal^ FP) ;

//! Get from FP the coordinates of the poles. <br>
static /*instead*/  void GetPoles(OCNaroWrappers::OCTColStd_Array1OfReal^ FP, OCNaroWrappers::OCTColgp_Array1OfPnt2d^ Poles) ;

//! Get from FP the coordinates of the poles. <br>
static /*instead*/  void GetPoles(OCNaroWrappers::OCTColStd_Array1OfReal^ FP, OCNaroWrappers::OCTColgp_Array1OfPnt2d^ Poles, OCNaroWrappers::OCTColStd_Array1OfReal^ Weights) ;

//! Returns the Binomial Cnp. N should be <= BSplCLib::MaxDegree(). <br>
static /*instead*/  Standard_Real Bin(Standard_Integer N, Standard_Integer P) ;

//! Computes the derivatives of a ratio at order <br>
//!          <N> in dimension <Dimension>. <br>
//! <br>
//!          <Ders> is an  array containing the  values  of the <br>
//!          input   derivatives from  0 to  Min(<N>,<Degree>). <br>
//!          For   orders   higher  than <Degree>    the  inputcd /s2d1/BMDL/ <br>
//!          derivatives   are assumed to be  0. <br>
//! <br>
//!          Content of <Ders> : <br>
//! <br>
//!          x(1),x(2),...,x(Dimension),w <br>
//!          x'(1),x'(2),...,x'(Dimension),w' <br>
//!          x''(1),x''(2),...,x''(Dimension),w'' <br>
//! <br>
//!          If  <All> is false, only the   derivative at order <br>
//!          <N> is computed.  <RDers>  is an array   of length <br>
//!          Dimension which will contain the result : <br>
//! <br>
//!          x(1)/w , x(2)/w ,  ... derivated <N> times <br>
//! <br>
//!          If <All> is  true all the  derivatives up to order <br>
//!          <N> are computed.   <RDers> is an array of  length <br>
//!          Dimension * (N+1) which will contains : <br>
//! <br>
//!          x(1)/w , x(2)/w ,  ... <br>
//!          x(1)/w , x(2)/w ,  ... derivated <1> times <br>
//!          x(1)/w , x(2)/w ,  ... derivated <2> times <br>
//!          ... <br>
//!          x(1)/w , x(2)/w ,  ... derivated <N> times <br>
//! <br>
//!  Warning: <RDers> must be dimensionned properly. <br>
static /*instead*/  void RationalDerivative(Standard_Integer Degree, Standard_Integer N, Standard_Integer Dimension, Standard_Real& Ders, Standard_Real& RDers, System::Boolean All) ;

//! Computes DerivativesRequest derivatives of a ratio at <br>
//!          of a BSpline function of degree <Degree> <br>
//!          dimension <Dimension>. <br>
//! <br>
//!          <PolesDerivatives> is an  array containing the  values <br>
//!          of the input   derivatives from  0 to  <DerivativeRequest> <br>
//!          For   orders   higher  than <Degree>    the  input <br>
//!          derivatives   are assumed to be  0. <br>
//! <br>
//!          Content of <PoleasDerivatives> : <br>
//! <br>
//!          x(1),x(2),...,x(Dimension) <br>
//!          x'(1),x'(2),...,x'(Dimension) <br>
//!          x''(1),x''(2),...,x''(Dimension) <br>
//! <br>
//! <br>
//!          WeightsDerivatives is an array that contains derivatives <br>
//!          from 0 to  <DerivativeRequest> <br>
//!          After returning from the routine the array <br>
//!          RationalDerivatives contains the following <br>
//!          x(1)/w , x(2)/w ,  ... <br>
//!          x(1)/w , x(2)/w ,  ...   derivated once <br>
//!          x(1)/w , x(2)/w ,  ...   twice <br>
//!          x(1)/w , x(2)/w ,  ... derivated <DerivativeRequest> times <br>
//! <br>
//!          The array RationalDerivatives and PolesDerivatives <br>
//!          can be same since the overwrite is non destructive within <br>
//!          the algorithm <br>
//! <br>
//!  Warning: <RationalDerivates> must be dimensionned properly. <br>
static /*instead*/  void RationalDerivatives(Standard_Integer DerivativesRequest, Standard_Integer Dimension, Standard_Real& PolesDerivatives, Standard_Real& WeightsDerivatives, Standard_Real& RationalDerivates) ;

//! Performs Horner method with synthethic division <br>
//!          for derivatives <br>
//!          parameter <U>, with <Degree> and <Dimension>. <br>
//!          PolynomialCoeff are stored in the following fashion <br>
//!          c0(1)      c0(2) ....       c0(Dimension) <br>
//!          c1(1)      c1(2) ....       c1(Dimension) <br>
//! <br>
//! <br>
//!          cDegree(1) cDegree(2) ....  cDegree(Dimension) <br>
//!          where the polynomial is defined as : <br>
//! <br>
//!                          2                     Degree <br>
//!          c0 + c1 X + c2 X  +  ....   cDegree X <br>
//! <br>
//!          Results stores the result in the following format <br>
//! <br>
//!          f(1)             f(2)  ....     f(Dimension) <br>
//!           (1)           (1)              (1) <br>
//!          f  (1)        f   (2) ....     f   (Dimension) <br>
//! <br>
//!           (DerivativeRequest)            (DerivativeRequest) <br>
//!          f  (1)                         f   (Dimension) <br>
//! <br>
//!          this just evaluates the point at parameter U <br>
//! <br>
//!  Warning: <Results> and <PolynomialCoeff> must be dimensioned properly <br>
//! <br>
//! <br>
static /*instead*/  void EvalPolynomial(Standard_Real U, Standard_Integer DerivativeOrder, Standard_Integer Degree, Standard_Integer Dimension, Standard_Real& PolynomialCoeff, Standard_Real& Results) ;

//! Same as above with DerivativeOrder = 0; <br>
static /*instead*/  void NoDerivativeEvalPolynomial(Standard_Real U, Standard_Integer Degree, Standard_Integer Dimension, Standard_Integer DegreeDimension, Standard_Real& PolynomialCoeff, Standard_Real& Results) ;

//! Applies EvalPolynomial twice to evaluate the derivative <br>
//!          of orders UDerivativeOrder in U, VDerivativeOrder in V <br>
//!          at parameters U,V <br>
//! <br>
//! <br>
//!          PolynomialCoeff are stored in the following fashion <br>
//!          c00(1)  ....       c00(Dimension) <br>
//!          c10(1)  ....       c10(Dimension) <br>
//!          .... <br>
//!          cm0(1)  ....       cm0(Dimension) <br>
//!          .... <br>
//!          c01(1)  ....       c01(Dimension) <br>
//!          c11(1)  ....       c11(Dimension) <br>
//!          .... <br>
//!          cm1(1)  ....       cm1(Dimension) <br>
//!          .... <br>
//!          c0n(1)  ....       c0n(Dimension) <br>
//!          c1n(1)  ....       c1n(Dimension) <br>
//!          .... <br>
//!          cmn(1)  ....       cmn(Dimension) <br>
//! <br>
//! <br>
//!          where the polynomial is defined as : <br>
//!                             2                 m <br>
//!          c00 + c10 U + c20 U  +  ....  + cm0 U <br>
//!                                  2                   m <br>
//!          + c01 V + c11 UV + c21 U V  +  ....  + cm1 U  V <br>
//!                         n               m n <br>
//!          + .... + c0n V +  ....  + cmn U V <br>
//! <br>
//!          with m = UDegree and n = VDegree <br>
//! <br>
//!          Results stores the result in the following format <br>
//! <br>
//!          f(1)             f(2)  ....     f(Dimension) <br>
//! <br>
//!  Warning: <Results> and <PolynomialCoeff> must be dimensioned properly <br>
//! <br>
//! <br>
static /*instead*/  void EvalPoly2Var(Standard_Real U, Standard_Real V, Standard_Integer UDerivativeOrder, Standard_Integer VDerivativeOrder, Standard_Integer UDegree, Standard_Integer VDegree, Standard_Integer Dimension, Standard_Real& PolynomialCoeff, Standard_Real& Results) ;

//! Performs the Lagrange Interpolation of <br>
//!          given series of points with given parameters <br>
//!          with the requested derivative order <br>
//!          Results will store things in the following format <br>
//!          with d = DerivativeOrder <br>
//! <br>
//! [0],             [Dimension-1]              : value <br>
//! [Dimension],     [Dimension  + Dimension-1] : first derivative <br>
//! <br>
//! [d *Dimension],  [d*Dimension + Dimension-1]: dth   derivative <br>
static /*instead*/  Standard_Integer EvalLagrange(Standard_Real U, Standard_Integer DerivativeOrder, Standard_Integer Degree, Standard_Integer Dimension, Standard_Real& ValueArray, Standard_Real& ParameterArray, Standard_Real& Results) ;

//! Performs the Cubic Hermite Interpolation of <br>
//!          given series of points with given parameters <br>
//!          with the requested derivative order. <br>
//!          ValueArray stores the value at the first and <br>
//!          last parameter. It has the following format : <br>
//! [0],             [Dimension-1]              : value at first param <br>
//! [Dimension],     [Dimension  + Dimension-1] : value at last param <br>
//!           Derivative array stores the value of the derivatives <br>
//!           at the first parameter and at the last parameter <br>
//!           in the following format <br>
//! [0],             [Dimension-1]              : derivative at <br>
//!                                               first param <br>
//! [Dimension],     [Dimension  + Dimension-1] : derivative at <br>
//!                                               last param <br>
//! <br>
//!          ParameterArray  stores the first and last parameter <br>
//!          in the following format : <br>
//!          [0] : first parameter <br>
//!          [1] : last  parameter <br>
//! <br>
//!          Results will store things in the following format <br>
//!          with d = DerivativeOrder <br>
//! <br>
//! [0],             [Dimension-1]              : value <br>
//! [Dimension],     [Dimension  + Dimension-1] : first derivative <br>
//! <br>
//! [d *Dimension],  [d*Dimension + Dimension-1]: dth   derivative <br>
static /*instead*/  Standard_Integer EvalCubicHermite(Standard_Real U, Standard_Integer DerivativeOrder, Standard_Integer Dimension, Standard_Real& ValueArray, Standard_Real& DerivativeArray, Standard_Real& ParameterArray, Standard_Real& Results) ;


static /*instead*/  System::Boolean HermiteCoefficients(Standard_Real FirstParameter, Standard_Real LastParameter, Standard_Integer FirstOrder, Standard_Integer LastOrder, OCNaroWrappers::OCmath_Matrix^ MatrixCoefs) ;


static /*instead*/  void CoefficientsPoles(OCNaroWrappers::OCTColgp_Array1OfPnt^ Coefs, OCNaroWrappers::OCTColStd_Array1OfReal^ WCoefs, OCNaroWrappers::OCTColgp_Array1OfPnt^ Poles, OCNaroWrappers::OCTColStd_Array1OfReal^ WPoles) ;


static /*instead*/  void CoefficientsPoles(OCNaroWrappers::OCTColgp_Array1OfPnt2d^ Coefs, OCNaroWrappers::OCTColStd_Array1OfReal^ WCoefs, OCNaroWrappers::OCTColgp_Array1OfPnt2d^ Poles, OCNaroWrappers::OCTColStd_Array1OfReal^ WPoles) ;


static /*instead*/  void CoefficientsPoles(OCNaroWrappers::OCTColStd_Array1OfReal^ Coefs, OCNaroWrappers::OCTColStd_Array1OfReal^ WCoefs, OCNaroWrappers::OCTColStd_Array1OfReal^ Poles, OCNaroWrappers::OCTColStd_Array1OfReal^ WPoles) ;


static /*instead*/  void CoefficientsPoles(Standard_Integer dim, OCNaroWrappers::OCTColStd_Array1OfReal^ Coefs, OCNaroWrappers::OCTColStd_Array1OfReal^ WCoefs, OCNaroWrappers::OCTColStd_Array1OfReal^ Poles, OCNaroWrappers::OCTColStd_Array1OfReal^ WPoles) ;


static /*instead*/  void Trimming(Standard_Real U1, Standard_Real U2, OCNaroWrappers::OCTColgp_Array1OfPnt^ Coeffs, OCNaroWrappers::OCTColStd_Array1OfReal^ WCoeffs) ;


static /*instead*/  void Trimming(Standard_Real U1, Standard_Real U2, OCNaroWrappers::OCTColgp_Array1OfPnt2d^ Coeffs, OCNaroWrappers::OCTColStd_Array1OfReal^ WCoeffs) ;


static /*instead*/  void Trimming(Standard_Real U1, Standard_Real U2, OCNaroWrappers::OCTColStd_Array1OfReal^ Coeffs, OCNaroWrappers::OCTColStd_Array1OfReal^ WCoeffs) ;


static /*instead*/  void Trimming(Standard_Real U1, Standard_Real U2, Standard_Integer dim, OCNaroWrappers::OCTColStd_Array1OfReal^ Coeffs, OCNaroWrappers::OCTColStd_Array1OfReal^ WCoeffs) ;


static /*instead*/  void CoefficientsPoles(OCNaroWrappers::OCTColgp_Array2OfPnt^ Coefs, OCNaroWrappers::OCTColStd_Array2OfReal^ WCoefs, OCNaroWrappers::OCTColgp_Array2OfPnt^ Poles, OCNaroWrappers::OCTColStd_Array2OfReal^ WPoles) ;


static /*instead*/  void UTrimming(Standard_Real U1, Standard_Real U2, OCNaroWrappers::OCTColgp_Array2OfPnt^ Coeffs, OCNaroWrappers::OCTColStd_Array2OfReal^ WCoeffs) ;


static /*instead*/  void VTrimming(Standard_Real V1, Standard_Real V2, OCNaroWrappers::OCTColgp_Array2OfPnt^ Coeffs, OCNaroWrappers::OCTColStd_Array2OfReal^ WCoeffs) ;

//! Compute the coefficients in the canonical base of the <br>
//!         polynomial satisfying the given constraints <br>
//!         at the given parameters <br>
//!         The array FirstContr(i,j) i=1,Dimension j=0,FirstOrder <br>
//!         contains the values of the constraint at parameter FirstParameter <br>
//!         idem for LastConstr <br>
static /*instead*/  System::Boolean HermiteInterpolate(Standard_Integer Dimension, Standard_Real FirstParameter, Standard_Real LastParameter, Standard_Integer FirstOrder, Standard_Integer LastOrder, OCNaroWrappers::OCTColStd_Array2OfReal^ FirstConstr, OCNaroWrappers::OCTColStd_Array2OfReal^ LastConstr, OCNaroWrappers::OCTColStd_Array1OfReal^ Coefficients) ;


static /*instead*/  void JacobiParameters(OCGeomAbs_Shape ConstraintOrder, Standard_Integer MaxDegree, Standard_Integer Code, Standard_Integer& NbGaussPoints, Standard_Integer& WorkDegree) ;


static /*instead*/  Standard_Integer NivConstr(OCGeomAbs_Shape ConstraintOrder) ;


static /*instead*/  OCGeomAbs_Shape ConstraintOrder(Standard_Integer NivConstr) ;


static /*instead*/  void EvalLength(Standard_Integer Degree, Standard_Integer Dimension, Standard_Real& PolynomialCoeff, Standard_Real U1, Standard_Real U2, Standard_Real& Length) ;


static /*instead*/  void EvalLength(Standard_Integer Degree, Standard_Integer Dimension, Standard_Real& PolynomialCoeff, Standard_Real U1, Standard_Real U2, Standard_Real Tol, Standard_Real& Length, Standard_Real& Error) ;


};

}; // OCNaroWrappers

#endif

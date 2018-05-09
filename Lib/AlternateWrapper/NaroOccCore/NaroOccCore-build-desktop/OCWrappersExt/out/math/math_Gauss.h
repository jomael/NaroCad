// File generated by CPPExt (MPV)
//
#ifndef _math_Gauss_OCWrappers_HeaderFile
#define _math_Gauss_OCWrappers_HeaderFile

// include native header
#include <math_Gauss.hxx>
#include "../Converter.h"


#include "math_Matrix.h"
#include "math_IntegerVector.h"


namespace OCNaroWrappers
{

ref class OCmath_Matrix;
ref class OCmath_Vector;



//! This class implements the Gauss LU decomposition (Crout algorithm) <br>
//! with partial pivoting (rows interchange) of a square matrix and <br>
//! the different possible derived calculation : <br>
//!    - solution of a set of linear equations. <br>
//!    - inverse of a matrix. <br>
//!    - determinant of a matrix. <br>
public ref class OCmath_Gauss  {

protected:
  math_Gauss* nativeHandle;
  OCmath_Gauss(OCDummy^) {};

public:
  property math_Gauss* Handle
  {
    math_Gauss* get()
    {
      return nativeHandle;
    }
  }


// constructor from native
OCmath_Gauss(math_Gauss* nativeHandle);

// Methods PUBLIC


//! Given an input n X n matrix A this constructor performs its LU <br>
//! decomposition with partial pivoting (interchange of rows). <br>
//! This LU decomposition is stored internally and may be used to <br>
//! do subsequent calculation. <br>
//! If the largest pivot found is less than MinPivot the matrix A is <br>
//! considered as singular. <br>
//! Exception NotSquare is raised if A is not a square matrix. <br>
OCmath_Gauss(OCNaroWrappers::OCmath_Matrix^ A, Standard_Real MinPivot);

//! Returns true if the computations are successful, otherwise returns false <br>
 /*instead*/  System::Boolean IsDone() ;


//! Given the input Vector B this routine returns the solution X of the set <br>
//! of linear equations A . X = B. <br>
//! Exception NotDone is raised if the decomposition of A was not done <br>
//! successfully. <br>
//! Exception DimensionError is raised if the range of B is not <br>
//! equal to the number of rows of A. <br>
 /*instead*/  void Solve(OCNaroWrappers::OCmath_Vector^ B, OCNaroWrappers::OCmath_Vector^ X) ;


//! Given the input Vector B this routine solves the set of linear <br>
//! equations A . X = B. B is replaced by the vector solution X. <br>
//! Exception NotDone is raised if the decomposition of A was not done <br>
//! successfully. <br>
//! Exception DimensionError is raised if the range of B is not <br>
//! equal to the number of rows of A. <br>
 /*instead*/  void Solve(OCNaroWrappers::OCmath_Vector^ B) ;


//! This routine returns the value of the determinant of the previously LU <br>
//! decomposed matrix A. <br>
//! Exception NotDone may be raised if the decomposition of A was not done <br>
//! successfully, zero is returned if the matrix A was considered as singular. <br>
 /*instead*/  Standard_Real Determinant() ;


//! This routine outputs Inv the inverse of the previously LU decomposed <br>
//! matrix A. <br>
//! Exception DimensionError is raised if the ranges of B are not <br>
//! equal to the ranges of A. <br>
 /*instead*/  void Invert(OCNaroWrappers::OCmath_Matrix^ Inv) ;

//! Prints on the stream o information on the current state <br>
//!          of the object. <br>
//!          Is used to redefine the operator <<. <br>
 /*instead*/  void Dump(Standard_OStream& o) ;

~OCmath_Gauss()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif

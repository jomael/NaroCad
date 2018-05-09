// File generated by CPPExt (Transient)
//
#ifndef _TDataStd_Constraint_OCWrappers_HeaderFile
#define _TDataStd_Constraint_OCWrappers_HeaderFile

// include the wrapped class
#include <TDataStd_Constraint.hxx>
#include "../Converter.h"

#include "../TDF/TDF_Attribute.h"

#include "TDataStd_ConstraintEnum.h"


namespace OCNaroWrappers
{

ref class OCTDataStd_Real;
ref class OCTDF_Attribute;
ref class OCStandard_GUID;
ref class OCTDF_Label;
ref class OCTNaming_NamedShape;
ref class OCTDF_LabelList;
ref class OCTDF_RelocationTable;
ref class OCTDF_DataSet;


//! The groundwork to define constraint attributes. <br>
//! The constraint attribute contains the following sorts of data: <br>
//! -   Type whether the constraint attribute is a <br>
//!   geometric constraint or a dimension <br>
//! -   Value the real number value of a numeric <br>
//!   constraint such as an angle or a radius <br>
//! -   Geometries to identify the geometries <br>
//!   underlying the topological attributes which <br>
//!   define the constraint (up to 4) <br>
//! -   Plane for 2D constraints. <br>
public ref class OCTDataStd_Constraint : OCTDF_Attribute {

protected:
  // dummy constructor;
  OCTDataStd_Constraint(OCDummy^) : OCTDF_Attribute((OCDummy^)nullptr) {};

public:

// constructor from native
OCTDataStd_Constraint(Handle(TDataStd_Constraint)* nativeHandle);

// Methods PUBLIC

//! Returns the GUID for constraints. <br>
static /*instead*/  OCStandard_GUID^ GetID() ;

//!  Finds or creates the 2D constraint attribute <br>
//! defined by the planar topological attribute plane <br>
//! and the label label. <br>//! Constraint methods <br>
//!          ================== <br>
static /*instead*/  OCTDataStd_Constraint^ Set(OCNaroWrappers::OCTDF_Label^ label) ;


OCTDataStd_Constraint();


//! Finds or creates the constraint attribute defined <br>
//! by the topological attribute G1 and the constraint type type. <br>
 /*instead*/  void Set(OCTDataStd_ConstraintEnum type, OCNaroWrappers::OCTNaming_NamedShape^ G1) ;


//! Finds or creates the constraint attribute defined <br>
//! by the topological attributes G1 and G2, and by <br>
//! the constraint type type. <br>
 /*instead*/  void Set(OCTDataStd_ConstraintEnum type, OCNaroWrappers::OCTNaming_NamedShape^ G1, OCNaroWrappers::OCTNaming_NamedShape^ G2) ;


//! Finds or creates the constraint attribute defined <br>
//! by the topological attributes G1, G2 and G3, and <br>
//! by the constraint type type. <br>
 /*instead*/  void Set(OCTDataStd_ConstraintEnum type, OCNaroWrappers::OCTNaming_NamedShape^ G1, OCNaroWrappers::OCTNaming_NamedShape^ G2, OCNaroWrappers::OCTNaming_NamedShape^ G3) ;


//! Finds or creates the constraint attribute defined <br>
//! by the topological attributes G1, G2, G3 and G4, <br>
//! and by the constraint type type. <br>//! methods to read constraint fields <br>
//!          ================================= <br>
 /*instead*/  void Set(OCTDataStd_ConstraintEnum type, OCNaroWrappers::OCTNaming_NamedShape^ G1, OCNaroWrappers::OCTNaming_NamedShape^ G2, OCNaroWrappers::OCTNaming_NamedShape^ G3, OCNaroWrappers::OCTNaming_NamedShape^ G4) ;


//! Returns true if this constraint attribute is valid. <br>
//! By default, true is returned. <br>
//! When the value of a dimension is changed or <br>
//! when a geometry is moved, false is returned <br>
//! until the solver sets it back to true. <br>
 /*instead*/  System::Boolean Verified() ;


//! Returns the type of constraint. <br>
//! This will be an element of the <br>
//! TDataStd_ConstraintEnum enumeration. <br>
 /*instead*/  OCTDataStd_ConstraintEnum GetType() ;

//!    Returns true if this constraint attribute is <br>
//! two-dimensional. <br>
 /*instead*/  System::Boolean IsPlanar() ;

//! Returns the topological attribute of the plane <br>
//! used for planar - i.e., 2D - constraints. <br>
//! This plane is attached to another label. <br>
//! If the constraint is not planar, in other words, 3D, <br>
//! this function will return a null handle. <br>
 /*instead*/  OCTNaming_NamedShape^ GetPlane() ;

//! Returns true if this constraint attribute is a <br>
//! dimension, and therefore has a value. <br>
 /*instead*/  System::Boolean IsDimension() ;

//! Returns the value of a dimension. <br>
//! This value is a reference to a TDataStd_Real attribute. <br>
//! If the attribute is not a dimension, this value will <br>
//! be 0. Use IsDimension to test this condition. <br>
 /*instead*/  OCTDataStd_Real^ GetValue() ;


//! Returns the number of geometry attributes in this constraint attribute. <br>
//! This number will be between 1 and 4. <br>
 /*instead*/  Standard_Integer NbGeometries() ;

//! Returns the integer index Index used to access <br>
//! the array of the constraint or stored geometries of a dimension <br>
//!  Index has a value between 1 and 4. <br>//! methods to write constraint fields (use builder) <br>
//!          ================================== <br>
 /*instead*/  OCTNaming_NamedShape^ GetGeometry(Standard_Integer Index) ;

//! Removes the geometries involved in the <br>
//! constraint or dimension from the array of <br>
//! topological attributes where they are stored. <br>
 /*instead*/  void ClearGeometries() ;

//! Finds or creates the type of constraint CTR. <br>
 /*instead*/  void SetType(OCTDataStd_ConstraintEnum CTR) ;

//! Finds or creates the plane of the 2D constraint <br>
//! attribute, defined by the planar topological attribute plane. <br>
 /*instead*/  void SetPlane(OCNaroWrappers::OCTNaming_NamedShape^ plane) ;


//! Finds or creates the real number value V of the dimension constraint attribute. <br>
 /*instead*/  void SetValue(OCNaroWrappers::OCTDataStd_Real^ V) ;


//! Finds or creates the underlying geometry of the <br>
//! constraint defined by the topological attribute G <br>
//! and the integer index Index. <br>
 /*instead*/  void SetGeometry(Standard_Integer Index, OCNaroWrappers::OCTNaming_NamedShape^ G) ;


//! Returns true if this constraint attribute defined by status is valid. <br>
//! By default, true is returned. <br>
//! When the value of a dimension is changed or <br>
//! when a geometry is moved, false is returned until <br>
//! the solver sets it back to true. <br>
//! If status is false, Verified is set to false. <br>
 /*instead*/  void Verified(System::Boolean status) ;


 /*instead*/  void Inverted(System::Boolean status) ;


 /*instead*/  System::Boolean Inverted() ;


 /*instead*/  void Reversed(System::Boolean status) ;


 /*instead*/  System::Boolean Reversed() ;

//! collects constraints on Childs for label <aLabel> <br>
static /*instead*/  void CollectChildConstraints(OCNaroWrappers::OCTDF_Label^ aLabel, OCNaroWrappers::OCTDF_LabelList^ TheList) ;


 /*instead*/  OCStandard_GUID^ ID() ;


 /*instead*/  void Restore(OCNaroWrappers::OCTDF_Attribute^ With) ;


 /*instead*/  OCTDF_Attribute^ NewEmpty() ;


 /*instead*/  void Paste(OCNaroWrappers::OCTDF_Attribute^ Into, OCNaroWrappers::OCTDF_RelocationTable^ RT) ;


virtual /*instead*/  Standard_OStream& Dump(Standard_OStream& anOS) override;


virtual /*instead*/  void References(OCNaroWrappers::OCTDF_DataSet^ DS) override;

~OCTDataStd_Constraint()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif

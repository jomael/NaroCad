// File generated by CPPExt (MPV)
//
#ifndef _MeshShape_Edge_OCWrappers_HeaderFile
#define _MeshShape_Edge_OCWrappers_HeaderFile

// include native header
#include <MeshShape_Edge.hxx>
#include "../Converter.h"


#include "../MeshDS/MeshDS_DegreeOfFreedom.h"


namespace OCNaroWrappers
{




public ref class OCMeshShape_Edge  {

protected:
  MeshShape_Edge* nativeHandle;
  OCMeshShape_Edge(OCDummy^) {};

public:
  property MeshShape_Edge* Handle
  {
    MeshShape_Edge* get()
    {
      return nativeHandle;
    }
  }


// constructor from native
OCMeshShape_Edge(MeshShape_Edge* nativeHandle);

// Methods PUBLIC

//! Contructs a link beetween to vertices. <br>
OCMeshShape_Edge(Standard_Integer vDebut, Standard_Integer vFin, OCMeshDS_DegreeOfFreedom canMove);

//! Give the index of first node of the Link. <br>
 /*instead*/  Standard_Integer FirstNode() ;

//! Give the index of Last node of the Link. <br>
 /*instead*/  Standard_Integer LastNode() ;


 /*instead*/  OCMeshDS_DegreeOfFreedom Movability() ;


 /*instead*/  void SetMovability(OCMeshDS_DegreeOfFreedom Move) ;


 /*instead*/  Standard_Integer HashCode(Standard_Integer Upper) ;


 /*instead*/  System::Boolean SameOrientation(OCNaroWrappers::OCMeshShape_Edge^ Other) ;


 /*instead*/  System::Boolean IsEqual(OCNaroWrappers::OCMeshShape_Edge^ Other) ;

~OCMeshShape_Edge()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif

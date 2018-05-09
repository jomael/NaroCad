// File generated by CPPExt (CPP file)
//

#include "TopOpeBRepDS_PointExplorer.h"
#include "../Converter.h"
#include "TopOpeBRepDS_DataStructure.h"
#include "TopOpeBRepDS_Point.h"


using namespace OCNaroWrappers;

OCTopOpeBRepDS_PointExplorer::OCTopOpeBRepDS_PointExplorer(TopOpeBRepDS_PointExplorer* nativeHandle) 
{
  this->nativeHandle = nativeHandle;
}

OCTopOpeBRepDS_PointExplorer::OCTopOpeBRepDS_PointExplorer() 
{
  nativeHandle = new TopOpeBRepDS_PointExplorer();
}

OCTopOpeBRepDS_PointExplorer::OCTopOpeBRepDS_PointExplorer(OCNaroWrappers::OCTopOpeBRepDS_DataStructure^ DS, System::Boolean FindOnlyKeep) 
{
  nativeHandle = new TopOpeBRepDS_PointExplorer(*((TopOpeBRepDS_DataStructure*)DS->Handle), OCConverter::BooleanToStandardBoolean(FindOnlyKeep));
}

 void OCTopOpeBRepDS_PointExplorer::Init(OCNaroWrappers::OCTopOpeBRepDS_DataStructure^ DS, System::Boolean FindOnlyKeep)
{
  ((TopOpeBRepDS_PointExplorer*)nativeHandle)->Init(*((TopOpeBRepDS_DataStructure*)DS->Handle), OCConverter::BooleanToStandardBoolean(FindOnlyKeep));
}

 System::Boolean OCTopOpeBRepDS_PointExplorer::More()
{
  return OCConverter::StandardBooleanToBoolean(((TopOpeBRepDS_PointExplorer*)nativeHandle)->More());
}

 void OCTopOpeBRepDS_PointExplorer::Next()
{
  ((TopOpeBRepDS_PointExplorer*)nativeHandle)->Next();
}

OCTopOpeBRepDS_Point^ OCTopOpeBRepDS_PointExplorer::Point()
{
  TopOpeBRepDS_Point* tmp = new TopOpeBRepDS_Point();
  *tmp = ((TopOpeBRepDS_PointExplorer*)nativeHandle)->Point();
  return gcnew OCTopOpeBRepDS_Point(tmp);
}

 System::Boolean OCTopOpeBRepDS_PointExplorer::IsPoint(Standard_Integer I)
{
  return OCConverter::StandardBooleanToBoolean(((TopOpeBRepDS_PointExplorer*)nativeHandle)->IsPoint(I));
}

 System::Boolean OCTopOpeBRepDS_PointExplorer::IsPointKeep(Standard_Integer I)
{
  return OCConverter::StandardBooleanToBoolean(((TopOpeBRepDS_PointExplorer*)nativeHandle)->IsPointKeep(I));
}

OCTopOpeBRepDS_Point^ OCTopOpeBRepDS_PointExplorer::Point(Standard_Integer I)
{
  TopOpeBRepDS_Point* tmp = new TopOpeBRepDS_Point();
  *tmp = ((TopOpeBRepDS_PointExplorer*)nativeHandle)->Point(I);
  return gcnew OCTopOpeBRepDS_Point(tmp);
}

 Standard_Integer OCTopOpeBRepDS_PointExplorer::NbPoint()
{
  return ((TopOpeBRepDS_PointExplorer*)nativeHandle)->NbPoint();
}

 Standard_Integer OCTopOpeBRepDS_PointExplorer::Index()
{
  return ((TopOpeBRepDS_PointExplorer*)nativeHandle)->Index();
}



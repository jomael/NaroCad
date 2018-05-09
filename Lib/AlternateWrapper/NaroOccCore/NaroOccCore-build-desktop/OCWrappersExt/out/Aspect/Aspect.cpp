// File generated by CPPExt (CPP file)
//

#include "Aspect.h"
#include "../Converter.h"


using namespace OCNaroWrappers;



 System::String^ OCAspect::ValuesOfFOSP(OCAspect_FormatOfSheetPaper aFOSP, Quantity_Length& aWidth, Quantity_Length& aHeight)
{
  return OCConverter::StandardCStringToString(Aspect::ValuesOfFOSP((Aspect_FormatOfSheetPaper)aFOSP, aWidth, aHeight));
}

 System::String^ OCAspect::ToCString(OCNaroWrappers::OCTCollection_ExtendedString^ aString)
{
  return OCConverter::StandardCStringToString(Aspect::ToCString(*((TCollection_ExtendedString*)aString->Handle)));
}

 System::Boolean OCAspect::Inverse(OCNaroWrappers::OCTColStd_Array2OfReal^ aMat, OCNaroWrappers::OCTColStd_Array2OfReal^ Inv)
{
  return OCConverter::StandardBooleanToBoolean(Aspect::Inverse(*((TColStd_Array2OfReal*)aMat->Handle), *((TColStd_Array2OfReal*)Inv->Handle)));
}



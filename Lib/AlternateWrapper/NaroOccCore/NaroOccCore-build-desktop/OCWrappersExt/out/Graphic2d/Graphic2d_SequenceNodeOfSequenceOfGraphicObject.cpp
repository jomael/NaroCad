// File generated by CPPExt (CPP file)
//

#include "Graphic2d_SequenceNodeOfSequenceOfGraphicObject.h"
#include "../Converter.h"
#include "Graphic2d_GraphicObject.h"
#include "Graphic2d_SequenceOfGraphicObject.h"


using namespace OCNaroWrappers;

OCGraphic2d_SequenceNodeOfSequenceOfGraphicObject::OCGraphic2d_SequenceNodeOfSequenceOfGraphicObject(Handle(Graphic2d_SequenceNodeOfSequenceOfGraphicObject)* nativeHandle) : OCTCollection_SeqNode((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_Graphic2d_SequenceNodeOfSequenceOfGraphicObject(*nativeHandle);
}

OCGraphic2d_SequenceNodeOfSequenceOfGraphicObject::OCGraphic2d_SequenceNodeOfSequenceOfGraphicObject(OCNaroWrappers::OCGraphic2d_GraphicObject^ I, TCollection_SeqNodePtr n, TCollection_SeqNodePtr p) : OCTCollection_SeqNode((OCDummy^)nullptr)

{
  nativeHandle = new Handle_Graphic2d_SequenceNodeOfSequenceOfGraphicObject(new Graphic2d_SequenceNodeOfSequenceOfGraphicObject(*((Handle_Graphic2d_GraphicObject*)I->Handle), n, p));
}

OCGraphic2d_GraphicObject^ OCGraphic2d_SequenceNodeOfSequenceOfGraphicObject::Value()
{
  Handle(Graphic2d_GraphicObject) tmp = (*((Handle_Graphic2d_SequenceNodeOfSequenceOfGraphicObject*)nativeHandle))->Value();
  return gcnew OCGraphic2d_GraphicObject(&tmp);
}



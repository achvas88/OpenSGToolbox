/*---------------------------------------------------------------------------*\
 *                     OpenSG ToolBox UserInterface                          *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                         www.vrac.iastate.edu                              *
 *                                                                           *
 *                          Authors: David Kabala                            *
 *                                                                           *
\*---------------------------------------------------------------------------*/
/*---------------------------------------------------------------------------*\
 *                                License                                    *
 *                                                                           *
 * This library is free software; you can redistribute it and/or modify it   *
 * under the terms of the GNU Library General Public License as published    *
 * by the Free Software Foundation, version 2.                               *
 *                                                                           *
 * This library is distributed in the hope that it will be useful, but       *
 * WITHOUT ANY WARRANTY; without even the implied warranty of                *
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU         *
 * Library General Public License for more details.                          *
 *                                                                           *
 * You should have received a copy of the GNU Library General Public         *
 * License along with this library; if not, write to the Free Software       *
 * Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.                 *
 *                                                                           *
\*---------------------------------------------------------------------------*/
/*---------------------------------------------------------------------------*\
 *                                Changes                                    *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                                                                           *
\*---------------------------------------------------------------------------*/

/*****************************************************************************\
 *****************************************************************************
 **                                                                         **
 **                  This file is automatically generated.                  **
 **                                                                         **
 **          Any changes made to this file WILL be lost when it is          **
 **           regenerated, which can become necessary at any time.          **
 **                                                                         **
 **     Do not change this file, changes should be done in the derived      **
 **     class TableColumn!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#define OSG_COMPILETABLECOLUMNINST

#include <stdlib.h>
#include <stdio.h>

#include <OpenSG/OSGConfig.h>

#include "OSGTableColumnBase.h"
#include "OSGTableColumn.h"


OSG_BEGIN_NAMESPACE

const OSG::BitVector  TableColumnBase::MaxWidthFieldMask = 
    (TypeTraits<BitVector>::One << TableColumnBase::MaxWidthFieldId);

const OSG::BitVector  TableColumnBase::MinWidthFieldMask = 
    (TypeTraits<BitVector>::One << TableColumnBase::MinWidthFieldId);

const OSG::BitVector  TableColumnBase::ModelIndexFieldMask = 
    (TypeTraits<BitVector>::One << TableColumnBase::ModelIndexFieldId);

const OSG::BitVector  TableColumnBase::PreferredWidthFieldMask = 
    (TypeTraits<BitVector>::One << TableColumnBase::PreferredWidthFieldId);

const OSG::BitVector  TableColumnBase::WidthFieldMask = 
    (TypeTraits<BitVector>::One << TableColumnBase::WidthFieldId);

const OSG::BitVector  TableColumnBase::ResizableFieldMask = 
    (TypeTraits<BitVector>::One << TableColumnBase::ResizableFieldId);

const OSG::BitVector  TableColumnBase::CellEditorFieldMask = 
    (TypeTraits<BitVector>::One << TableColumnBase::CellEditorFieldId);

const OSG::BitVector  TableColumnBase::EventProducerFieldMask =
    (TypeTraits<BitVector>::One << TableColumnBase::EventProducerFieldId);

const OSG::BitVector TableColumnBase::MTInfluenceMask = 
    (Inherited::MTInfluenceMask) | 
    (static_cast<BitVector>(0x0) << Inherited::NextFieldId); 


// Field descriptions

/*! \var UInt32          TableColumnBase::_sfMaxWidth
    
*/
/*! \var UInt32          TableColumnBase::_sfMinWidth
    
*/
/*! \var UInt32          TableColumnBase::_sfModelIndex
    
*/
/*! \var UInt32          TableColumnBase::_sfPreferredWidth
    
*/
/*! \var UInt32          TableColumnBase::_sfWidth
    
*/
/*! \var bool            TableColumnBase::_sfResizable
    
*/
/*! \var TableCellEditorPtr TableColumnBase::_sfCellEditor
    
*/

//! TableColumn description

FieldDescription *TableColumnBase::_desc[] = 
{
    new FieldDescription(SFUInt32::getClassType(), 
                     "MaxWidth", 
                     MaxWidthFieldId, MaxWidthFieldMask,
                     false,
                     reinterpret_cast<FieldAccessMethod>(&TableColumnBase::editSFMaxWidth)),
    new FieldDescription(SFUInt32::getClassType(), 
                     "MinWidth", 
                     MinWidthFieldId, MinWidthFieldMask,
                     false,
                     reinterpret_cast<FieldAccessMethod>(&TableColumnBase::editSFMinWidth)),
    new FieldDescription(SFUInt32::getClassType(), 
                     "ModelIndex", 
                     ModelIndexFieldId, ModelIndexFieldMask,
                     false,
                     reinterpret_cast<FieldAccessMethod>(&TableColumnBase::editSFModelIndex)),
    new FieldDescription(SFUInt32::getClassType(), 
                     "PreferredWidth", 
                     PreferredWidthFieldId, PreferredWidthFieldMask,
                     false,
                     reinterpret_cast<FieldAccessMethod>(&TableColumnBase::editSFPreferredWidth)),
    new FieldDescription(SFUInt32::getClassType(), 
                     "Width", 
                     WidthFieldId, WidthFieldMask,
                     false,
                     reinterpret_cast<FieldAccessMethod>(&TableColumnBase::editSFWidth)),
    new FieldDescription(SFBool::getClassType(), 
                     "Resizable", 
                     ResizableFieldId, ResizableFieldMask,
                     false,
                     reinterpret_cast<FieldAccessMethod>(&TableColumnBase::editSFResizable)),
    new FieldDescription(SFTableCellEditorPtr::getClassType(), 
                     "CellEditor", 
                     CellEditorFieldId, CellEditorFieldMask,
                     false,
                     reinterpret_cast<FieldAccessMethod>(&TableColumnBase::editSFCellEditor))
    , 
    new FieldDescription(SFEventProducerPtr::getClassType(), 
                     "EventProducer", 
                     EventProducerFieldId,EventProducerFieldMask,
                     true,
                     FieldAccessMethod(NULL))
};


FieldContainerType TableColumnBase::_type(
    "TableColumn",
    "FieldContainer",
    NULL,
    reinterpret_cast<PrototypeCreateF>(&TableColumnBase::createEmpty),
    TableColumn::initMethod,
    _desc,
    sizeof(_desc));

//! TableColumn Produced Methods

MethodDescription *TableColumnBase::_methodDesc[] =
{
    new MethodDescription("FieldChanged", 
                     FieldChangedMethodId, 
                     SFEventPtr::getClassType(),
                     FunctorAccessMethod())
};

EventProducerType TableColumnBase::_producerType(
    "TableColumnProducerType",
    "EventProducerType",
    NULL,
    InitEventProducerFunctor(),
    _methodDesc,
    sizeof(_methodDesc));
//OSG_FIELD_CONTAINER_DEF(TableColumnBase, TableColumnPtr)

/*------------------------------ get -----------------------------------*/

FieldContainerType &TableColumnBase::getType(void) 
{
    return _type; 
} 

const FieldContainerType &TableColumnBase::getType(void) const 
{
    return _type;
} 

const EventProducerType &TableColumnBase::getProducerType(void) const
{
    return _producerType;
}


FieldContainerPtr TableColumnBase::shallowCopy(void) const 
{ 
    TableColumnPtr returnValue; 

    newPtr(returnValue, dynamic_cast<const TableColumn *>(this)); 

    return returnValue; 
}

UInt32 TableColumnBase::getContainerSize(void) const 
{ 
    return sizeof(TableColumn); 
}


#if !defined(OSG_FIXED_MFIELDSYNC)
void TableColumnBase::executeSync(      FieldContainer &other,
                                    const BitVector      &whichField)
{
    this->executeSyncImpl(static_cast<TableColumnBase *>(&other),
                          whichField);
}
#else
void TableColumnBase::executeSync(      FieldContainer &other,
                                    const BitVector      &whichField,                                    const SyncInfo       &sInfo     )
{
    this->executeSyncImpl((TableColumnBase *) &other, whichField, sInfo);
}
void TableColumnBase::execBeginEdit(const BitVector &whichField, 
                                            UInt32     uiAspect,
                                            UInt32     uiContainerSize) 
{
    this->execBeginEditImpl(whichField, uiAspect, uiContainerSize);
}

void TableColumnBase::onDestroyAspect(UInt32 uiId, UInt32 uiAspect)
{
    Inherited::onDestroyAspect(uiId, uiAspect);

}
#endif

/*------------------------- constructors ----------------------------------*/

#ifdef OSG_WIN32_ICL
#pragma warning (disable : 383)
#endif

TableColumnBase::TableColumnBase(void) :
    _Producer(&getProducerType()),
    _sfMaxWidth               (UInt32(1000)), 
    _sfMinWidth               (UInt32(1)), 
    _sfModelIndex             (UInt32(0)), 
    _sfPreferredWidth         (UInt32(100)), 
    _sfWidth                  (UInt32(100)), 
    _sfResizable              (bool(true)), 
    _sfCellEditor             (TableCellEditorPtr(NullFC)), 
    _sfEventProducer(&_Producer),
    Inherited() 
{
}

#ifdef OSG_WIN32_ICL
#pragma warning (default : 383)
#endif

TableColumnBase::TableColumnBase(const TableColumnBase &source) :
    _Producer(&getProducerType()),
    _sfMaxWidth               (source._sfMaxWidth               ), 
    _sfMinWidth               (source._sfMinWidth               ), 
    _sfModelIndex             (source._sfModelIndex             ), 
    _sfPreferredWidth         (source._sfPreferredWidth         ), 
    _sfWidth                  (source._sfWidth                  ), 
    _sfResizable              (source._sfResizable              ), 
    _sfCellEditor             (source._sfCellEditor             ), 
    _sfEventProducer(&_Producer),
    Inherited                 (source)
{
}

/*-------------------------- destructors ----------------------------------*/

TableColumnBase::~TableColumnBase(void)
{
}

/*------------------------------ access -----------------------------------*/

UInt32 TableColumnBase::getBinSize(const BitVector &whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (MaxWidthFieldMask & whichField))
    {
        returnValue += _sfMaxWidth.getBinSize();
    }

    if(FieldBits::NoField != (MinWidthFieldMask & whichField))
    {
        returnValue += _sfMinWidth.getBinSize();
    }

    if(FieldBits::NoField != (ModelIndexFieldMask & whichField))
    {
        returnValue += _sfModelIndex.getBinSize();
    }

    if(FieldBits::NoField != (PreferredWidthFieldMask & whichField))
    {
        returnValue += _sfPreferredWidth.getBinSize();
    }

    if(FieldBits::NoField != (WidthFieldMask & whichField))
    {
        returnValue += _sfWidth.getBinSize();
    }

    if(FieldBits::NoField != (ResizableFieldMask & whichField))
    {
        returnValue += _sfResizable.getBinSize();
    }

    if(FieldBits::NoField != (CellEditorFieldMask & whichField))
    {
        returnValue += _sfCellEditor.getBinSize();
    }

    if(FieldBits::NoField != (EventProducerFieldMask & whichField))
    {
        returnValue += _sfEventProducer.getBinSize();
    }


    return returnValue;
}

void TableColumnBase::copyToBin(      BinaryDataHandler &pMem,
                                  const BitVector         &whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (MaxWidthFieldMask & whichField))
    {
        _sfMaxWidth.copyToBin(pMem);
    }

    if(FieldBits::NoField != (MinWidthFieldMask & whichField))
    {
        _sfMinWidth.copyToBin(pMem);
    }

    if(FieldBits::NoField != (ModelIndexFieldMask & whichField))
    {
        _sfModelIndex.copyToBin(pMem);
    }

    if(FieldBits::NoField != (PreferredWidthFieldMask & whichField))
    {
        _sfPreferredWidth.copyToBin(pMem);
    }

    if(FieldBits::NoField != (WidthFieldMask & whichField))
    {
        _sfWidth.copyToBin(pMem);
    }

    if(FieldBits::NoField != (ResizableFieldMask & whichField))
    {
        _sfResizable.copyToBin(pMem);
    }

    if(FieldBits::NoField != (CellEditorFieldMask & whichField))
    {
        _sfCellEditor.copyToBin(pMem);
    }

    if(FieldBits::NoField != (EventProducerFieldMask & whichField))
    {
        _sfEventProducer.copyToBin(pMem);
    }


}

void TableColumnBase::copyFromBin(      BinaryDataHandler &pMem,
                                    const BitVector    &whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (MaxWidthFieldMask & whichField))
    {
        _sfMaxWidth.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (MinWidthFieldMask & whichField))
    {
        _sfMinWidth.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (ModelIndexFieldMask & whichField))
    {
        _sfModelIndex.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (PreferredWidthFieldMask & whichField))
    {
        _sfPreferredWidth.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (WidthFieldMask & whichField))
    {
        _sfWidth.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (ResizableFieldMask & whichField))
    {
        _sfResizable.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (CellEditorFieldMask & whichField))
    {
        _sfCellEditor.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (EventProducerFieldMask & whichField))
    {
        _sfEventProducer.copyFromBin(pMem);
    }


}

#if !defined(OSG_FIXED_MFIELDSYNC)
void TableColumnBase::executeSyncImpl(      TableColumnBase *pOther,
                                        const BitVector         &whichField)
{

    Inherited::executeSyncImpl(pOther, whichField);

    if(FieldBits::NoField != (MaxWidthFieldMask & whichField))
        _sfMaxWidth.syncWith(pOther->_sfMaxWidth);

    if(FieldBits::NoField != (MinWidthFieldMask & whichField))
        _sfMinWidth.syncWith(pOther->_sfMinWidth);

    if(FieldBits::NoField != (ModelIndexFieldMask & whichField))
        _sfModelIndex.syncWith(pOther->_sfModelIndex);

    if(FieldBits::NoField != (PreferredWidthFieldMask & whichField))
        _sfPreferredWidth.syncWith(pOther->_sfPreferredWidth);

    if(FieldBits::NoField != (WidthFieldMask & whichField))
        _sfWidth.syncWith(pOther->_sfWidth);

    if(FieldBits::NoField != (ResizableFieldMask & whichField))
        _sfResizable.syncWith(pOther->_sfResizable);

    if(FieldBits::NoField != (CellEditorFieldMask & whichField))
        _sfCellEditor.syncWith(pOther->_sfCellEditor);

    if(FieldBits::NoField != (EventProducerFieldMask & whichField))
        _sfEventProducer.syncWith(pOther->_sfEventProducer);


}
#else
void TableColumnBase::executeSyncImpl(      TableColumnBase *pOther,
                                        const BitVector         &whichField,
                                        const SyncInfo          &sInfo      )
{

    Inherited::executeSyncImpl(pOther, whichField, sInfo);

    if(FieldBits::NoField != (MaxWidthFieldMask & whichField))
        _sfMaxWidth.syncWith(pOther->_sfMaxWidth);

    if(FieldBits::NoField != (MinWidthFieldMask & whichField))
        _sfMinWidth.syncWith(pOther->_sfMinWidth);

    if(FieldBits::NoField != (ModelIndexFieldMask & whichField))
        _sfModelIndex.syncWith(pOther->_sfModelIndex);

    if(FieldBits::NoField != (PreferredWidthFieldMask & whichField))
        _sfPreferredWidth.syncWith(pOther->_sfPreferredWidth);

    if(FieldBits::NoField != (WidthFieldMask & whichField))
        _sfWidth.syncWith(pOther->_sfWidth);

    if(FieldBits::NoField != (ResizableFieldMask & whichField))
        _sfResizable.syncWith(pOther->_sfResizable);

    if(FieldBits::NoField != (CellEditorFieldMask & whichField))
        _sfCellEditor.syncWith(pOther->_sfCellEditor);



}

void TableColumnBase::execBeginEditImpl (const BitVector &whichField, 
                                                 UInt32     uiAspect,
                                                 UInt32     uiContainerSize)
{
    Inherited::execBeginEditImpl(whichField, uiAspect, uiContainerSize);

}
#endif



OSG_END_NAMESPACE

#include <OpenSG/OSGSFieldTypeDef.inl>
#include <OpenSG/OSGMFieldTypeDef.inl>

OSG_BEGIN_NAMESPACE

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldDataTraits<TableColumnPtr>::_type("TableColumnPtr", "FieldContainerPtr");
#endif

OSG_DLLEXPORT_SFIELD_DEF1(TableColumnPtr, OSG_USERINTERFACELIB_DLLTMPLMAPPING);
OSG_DLLEXPORT_MFIELD_DEF1(TableColumnPtr, OSG_USERINTERFACELIB_DLLTMPLMAPPING);


OSG_END_NAMESPACE


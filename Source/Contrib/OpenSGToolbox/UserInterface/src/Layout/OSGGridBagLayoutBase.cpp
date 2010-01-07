/*---------------------------------------------------------------------------*\
 *                     OpenSG ToolBox UserInterface                          *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                         www.vrac.iastate.edu                              *
 *                                                                           *
 *   Authors: David Kabala, Alden Peterson, Lee Zaniewski, Jonathan Flory    *
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
 **     class GridBagLayout!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#define OSG_COMPILEGRIDBAGLAYOUTINST

#include <stdlib.h>
#include <stdio.h>

#include <OpenSG/OSGConfig.h>

#include "OSGGridBagLayoutBase.h"
#include "OSGGridBagLayout.h"


OSG_BEGIN_NAMESPACE

const OSG::BitVector  GridBagLayoutBase::RowsFieldMask = 
    (TypeTraits<BitVector>::One << GridBagLayoutBase::RowsFieldId);

const OSG::BitVector  GridBagLayoutBase::ColumnsFieldMask = 
    (TypeTraits<BitVector>::One << GridBagLayoutBase::ColumnsFieldId);

const OSG::BitVector  GridBagLayoutBase::ColumnWeightsFieldMask = 
    (TypeTraits<BitVector>::One << GridBagLayoutBase::ColumnWeightsFieldId);

const OSG::BitVector  GridBagLayoutBase::ColumnWidthsFieldMask = 
    (TypeTraits<BitVector>::One << GridBagLayoutBase::ColumnWidthsFieldId);

const OSG::BitVector  GridBagLayoutBase::RowWeightsFieldMask = 
    (TypeTraits<BitVector>::One << GridBagLayoutBase::RowWeightsFieldId);

const OSG::BitVector  GridBagLayoutBase::RowHeightsFieldMask = 
    (TypeTraits<BitVector>::One << GridBagLayoutBase::RowHeightsFieldId);

const OSG::BitVector GridBagLayoutBase::MTInfluenceMask = 
    (Inherited::MTInfluenceMask) | 
    (static_cast<BitVector>(0x0) << Inherited::NextFieldId); 


// Field descriptions

/*! \var UInt32          GridBagLayoutBase::_sfRows
    This field holds the number of rows
*/
/*! \var UInt32          GridBagLayoutBase::_sfColumns
    This field holds the number of columns
*/
/*! \var Real32          GridBagLayoutBase::_mfColumnWeights
    This field holds the overrides to the column weights
*/
/*! \var Real32          GridBagLayoutBase::_mfColumnWidths
    This field holds the overrides to the column minimum widths
*/
/*! \var Real32          GridBagLayoutBase::_mfRowWeights
    This field holds the overrides to the row weights
*/
/*! \var Real32          GridBagLayoutBase::_mfRowHeights
    This field holds the overrides to the row minimum Heights
*/

//! GridBagLayout description

FieldDescription *GridBagLayoutBase::_desc[] = 
{
    new FieldDescription(SFUInt32::getClassType(), 
                     "Rows", 
                     RowsFieldId, RowsFieldMask,
                     false,
                     (FieldAccessMethod) &GridBagLayoutBase::getSFRows),
    new FieldDescription(SFUInt32::getClassType(), 
                     "Columns", 
                     ColumnsFieldId, ColumnsFieldMask,
                     false,
                     (FieldAccessMethod) &GridBagLayoutBase::getSFColumns),
    new FieldDescription(MFReal32::getClassType(), 
                     "ColumnWeights", 
                     ColumnWeightsFieldId, ColumnWeightsFieldMask,
                     false,
                     (FieldAccessMethod) &GridBagLayoutBase::getMFColumnWeights),
    new FieldDescription(MFReal32::getClassType(), 
                     "ColumnWidths", 
                     ColumnWidthsFieldId, ColumnWidthsFieldMask,
                     false,
                     (FieldAccessMethod) &GridBagLayoutBase::getMFColumnWidths),
    new FieldDescription(MFReal32::getClassType(), 
                     "RowWeights", 
                     RowWeightsFieldId, RowWeightsFieldMask,
                     false,
                     (FieldAccessMethod) &GridBagLayoutBase::getMFRowWeights),
    new FieldDescription(MFReal32::getClassType(), 
                     "RowHeights", 
                     RowHeightsFieldId, RowHeightsFieldMask,
                     false,
                     (FieldAccessMethod) &GridBagLayoutBase::getMFRowHeights)
};


FieldContainerType GridBagLayoutBase::_type(
    "GridBagLayout",
    "Layout",
    NULL,
    (PrototypeCreateF) &GridBagLayoutBase::createEmpty,
    GridBagLayout::initMethod,
    _desc,
    sizeof(_desc));

//OSG_FIELD_CONTAINER_DEF(GridBagLayoutBase, GridBagLayoutPtr)

/*------------------------------ get -----------------------------------*/

FieldContainerType &GridBagLayoutBase::getType(void) 
{
    return _type; 
} 

const FieldContainerType &GridBagLayoutBase::getType(void) const 
{
    return _type;
} 


FieldContainerPtr GridBagLayoutBase::shallowCopy(void) const 
{ 
    GridBagLayoutPtr returnValue; 

    newPtr(returnValue, dynamic_cast<const GridBagLayout *>(this)); 

    return returnValue; 
}

UInt32 GridBagLayoutBase::getContainerSize(void) const 
{ 
    return sizeof(GridBagLayout); 
}


#if !defined(OSG_FIXED_MFIELDSYNC)
void GridBagLayoutBase::executeSync(      FieldContainer &other,
                                    const BitVector      &whichField)
{
    this->executeSyncImpl((GridBagLayoutBase *) &other, whichField);
}
#else
void GridBagLayoutBase::executeSync(      FieldContainer &other,
                                    const BitVector      &whichField,                                    const SyncInfo       &sInfo     )
{
    this->executeSyncImpl((GridBagLayoutBase *) &other, whichField, sInfo);
}
void GridBagLayoutBase::execBeginEdit(const BitVector &whichField, 
                                            UInt32     uiAspect,
                                            UInt32     uiContainerSize) 
{
    this->execBeginEditImpl(whichField, uiAspect, uiContainerSize);
}

void GridBagLayoutBase::onDestroyAspect(UInt32 uiId, UInt32 uiAspect)
{
    Inherited::onDestroyAspect(uiId, uiAspect);

    _mfColumnWeights.terminateShare(uiAspect, this->getContainerSize());
    _mfColumnWidths.terminateShare(uiAspect, this->getContainerSize());
    _mfRowWeights.terminateShare(uiAspect, this->getContainerSize());
    _mfRowHeights.terminateShare(uiAspect, this->getContainerSize());
}
#endif

/*------------------------- constructors ----------------------------------*/

#ifdef OSG_WIN32_ICL
#pragma warning (disable : 383)
#endif

GridBagLayoutBase::GridBagLayoutBase(void) :
    _sfRows                   (), 
    _sfColumns                (), 
    _mfColumnWeights          (), 
    _mfColumnWidths           (), 
    _mfRowWeights             (), 
    _mfRowHeights             (), 
    Inherited() 
{
}

#ifdef OSG_WIN32_ICL
#pragma warning (default : 383)
#endif

GridBagLayoutBase::GridBagLayoutBase(const GridBagLayoutBase &source) :
    _sfRows                   (source._sfRows                   ), 
    _sfColumns                (source._sfColumns                ), 
    _mfColumnWeights          (source._mfColumnWeights          ), 
    _mfColumnWidths           (source._mfColumnWidths           ), 
    _mfRowWeights             (source._mfRowWeights             ), 
    _mfRowHeights             (source._mfRowHeights             ), 
    Inherited                 (source)
{
}

/*-------------------------- destructors ----------------------------------*/

GridBagLayoutBase::~GridBagLayoutBase(void)
{
}

/*------------------------------ access -----------------------------------*/

UInt32 GridBagLayoutBase::getBinSize(const BitVector &whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (RowsFieldMask & whichField))
    {
        returnValue += _sfRows.getBinSize();
    }

    if(FieldBits::NoField != (ColumnsFieldMask & whichField))
    {
        returnValue += _sfColumns.getBinSize();
    }

    if(FieldBits::NoField != (ColumnWeightsFieldMask & whichField))
    {
        returnValue += _mfColumnWeights.getBinSize();
    }

    if(FieldBits::NoField != (ColumnWidthsFieldMask & whichField))
    {
        returnValue += _mfColumnWidths.getBinSize();
    }

    if(FieldBits::NoField != (RowWeightsFieldMask & whichField))
    {
        returnValue += _mfRowWeights.getBinSize();
    }

    if(FieldBits::NoField != (RowHeightsFieldMask & whichField))
    {
        returnValue += _mfRowHeights.getBinSize();
    }


    return returnValue;
}

void GridBagLayoutBase::copyToBin(      BinaryDataHandler &pMem,
                                  const BitVector         &whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (RowsFieldMask & whichField))
    {
        _sfRows.copyToBin(pMem);
    }

    if(FieldBits::NoField != (ColumnsFieldMask & whichField))
    {
        _sfColumns.copyToBin(pMem);
    }

    if(FieldBits::NoField != (ColumnWeightsFieldMask & whichField))
    {
        _mfColumnWeights.copyToBin(pMem);
    }

    if(FieldBits::NoField != (ColumnWidthsFieldMask & whichField))
    {
        _mfColumnWidths.copyToBin(pMem);
    }

    if(FieldBits::NoField != (RowWeightsFieldMask & whichField))
    {
        _mfRowWeights.copyToBin(pMem);
    }

    if(FieldBits::NoField != (RowHeightsFieldMask & whichField))
    {
        _mfRowHeights.copyToBin(pMem);
    }


}

void GridBagLayoutBase::copyFromBin(      BinaryDataHandler &pMem,
                                    const BitVector    &whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (RowsFieldMask & whichField))
    {
        _sfRows.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (ColumnsFieldMask & whichField))
    {
        _sfColumns.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (ColumnWeightsFieldMask & whichField))
    {
        _mfColumnWeights.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (ColumnWidthsFieldMask & whichField))
    {
        _mfColumnWidths.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (RowWeightsFieldMask & whichField))
    {
        _mfRowWeights.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (RowHeightsFieldMask & whichField))
    {
        _mfRowHeights.copyFromBin(pMem);
    }


}

#if !defined(OSG_FIXED_MFIELDSYNC)
void GridBagLayoutBase::executeSyncImpl(      GridBagLayoutBase *pOther,
                                        const BitVector         &whichField)
{

    Inherited::executeSyncImpl(pOther, whichField);

    if(FieldBits::NoField != (RowsFieldMask & whichField))
        _sfRows.syncWith(pOther->_sfRows);

    if(FieldBits::NoField != (ColumnsFieldMask & whichField))
        _sfColumns.syncWith(pOther->_sfColumns);

    if(FieldBits::NoField != (ColumnWeightsFieldMask & whichField))
        _mfColumnWeights.syncWith(pOther->_mfColumnWeights);

    if(FieldBits::NoField != (ColumnWidthsFieldMask & whichField))
        _mfColumnWidths.syncWith(pOther->_mfColumnWidths);

    if(FieldBits::NoField != (RowWeightsFieldMask & whichField))
        _mfRowWeights.syncWith(pOther->_mfRowWeights);

    if(FieldBits::NoField != (RowHeightsFieldMask & whichField))
        _mfRowHeights.syncWith(pOther->_mfRowHeights);


}
#else
void GridBagLayoutBase::executeSyncImpl(      GridBagLayoutBase *pOther,
                                        const BitVector         &whichField,
                                        const SyncInfo          &sInfo      )
{

    Inherited::executeSyncImpl(pOther, whichField, sInfo);

    if(FieldBits::NoField != (RowsFieldMask & whichField))
        _sfRows.syncWith(pOther->_sfRows);

    if(FieldBits::NoField != (ColumnsFieldMask & whichField))
        _sfColumns.syncWith(pOther->_sfColumns);


    if(FieldBits::NoField != (ColumnWeightsFieldMask & whichField))
        _mfColumnWeights.syncWith(pOther->_mfColumnWeights, sInfo);

    if(FieldBits::NoField != (ColumnWidthsFieldMask & whichField))
        _mfColumnWidths.syncWith(pOther->_mfColumnWidths, sInfo);

    if(FieldBits::NoField != (RowWeightsFieldMask & whichField))
        _mfRowWeights.syncWith(pOther->_mfRowWeights, sInfo);

    if(FieldBits::NoField != (RowHeightsFieldMask & whichField))
        _mfRowHeights.syncWith(pOther->_mfRowHeights, sInfo);


}

void GridBagLayoutBase::execBeginEditImpl (const BitVector &whichField, 
                                                 UInt32     uiAspect,
                                                 UInt32     uiContainerSize)
{
    Inherited::execBeginEditImpl(whichField, uiAspect, uiContainerSize);

    if(FieldBits::NoField != (ColumnWeightsFieldMask & whichField))
        _mfColumnWeights.beginEdit(uiAspect, uiContainerSize);

    if(FieldBits::NoField != (ColumnWidthsFieldMask & whichField))
        _mfColumnWidths.beginEdit(uiAspect, uiContainerSize);

    if(FieldBits::NoField != (RowWeightsFieldMask & whichField))
        _mfRowWeights.beginEdit(uiAspect, uiContainerSize);

    if(FieldBits::NoField != (RowHeightsFieldMask & whichField))
        _mfRowHeights.beginEdit(uiAspect, uiContainerSize);

}
#endif



OSG_END_NAMESPACE

#include <OpenSG/OSGSFieldTypeDef.inl>
#include <OpenSG/OSGMFieldTypeDef.inl>

OSG_BEGIN_NAMESPACE

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldDataTraits<GridBagLayoutPtr>::_type("GridBagLayoutPtr", "LayoutPtr");
#endif

OSG_DLLEXPORT_SFIELD_DEF1(GridBagLayoutPtr, OSG_USERINTERFACELIB_DLLTMPLMAPPING);
OSG_DLLEXPORT_MFIELD_DEF1(GridBagLayoutPtr, OSG_USERINTERFACELIB_DLLTMPLMAPPING);


/*------------------------------------------------------------------------*/
/*                              cvs id's                                  */

#ifdef OSG_SGI_CC
#pragma set woff 1174
#endif

#ifdef OSG_LINUX_ICC
#pragma warning( disable : 177 )
#endif

namespace
{
    static Char8 cvsid_cpp       [] = "@(#)$Id: FCBaseTemplate_cpp.h,v 1.47 2006/03/17 17:03:19 pdaehne Exp $";
    static Char8 cvsid_hpp       [] = OSGGRIDBAGLAYOUTBASE_HEADER_CVSID;
    static Char8 cvsid_inl       [] = OSGGRIDBAGLAYOUTBASE_INLINE_CVSID;

    static Char8 cvsid_fields_hpp[] = OSGGRIDBAGLAYOUTFIELDS_HEADER_CVSID;
}

OSG_END_NAMESPACE

/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *               Copyright (C) 2000-2002 by the OpenSG Forum                 *
 *                                                                           *
 *                            www.opensg.org                                 *
 *                                                                           *
 *   contact: dirk@opensg.org, gerrit.voss@vossg.org, jbehr@zgdv.de          *
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
 **     class GridBagLayoutConstraints!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#define OSG_COMPILEGRIDBAGLAYOUTCONSTRAINTSINST

#include <stdlib.h>
#include <stdio.h>

#include <OpenSG/OSGConfig.h>

#include "OSGGridBagLayoutConstraintsBase.h"
#include "OSGGridBagLayoutConstraints.h"


OSG_BEGIN_NAMESPACE

const OSG::BitVector  GridBagLayoutConstraintsBase::GridXFieldMask = 
    (TypeTraits<BitVector>::One << GridBagLayoutConstraintsBase::GridXFieldId);

const OSG::BitVector  GridBagLayoutConstraintsBase::GridYFieldMask = 
    (TypeTraits<BitVector>::One << GridBagLayoutConstraintsBase::GridYFieldId);

const OSG::BitVector  GridBagLayoutConstraintsBase::GridWidthFieldMask = 
    (TypeTraits<BitVector>::One << GridBagLayoutConstraintsBase::GridWidthFieldId);

const OSG::BitVector  GridBagLayoutConstraintsBase::GridHeightFieldMask = 
    (TypeTraits<BitVector>::One << GridBagLayoutConstraintsBase::GridHeightFieldId);

const OSG::BitVector  GridBagLayoutConstraintsBase::FillFieldMask = 
    (TypeTraits<BitVector>::One << GridBagLayoutConstraintsBase::FillFieldId);

const OSG::BitVector  GridBagLayoutConstraintsBase::AnchorFieldMask = 
    (TypeTraits<BitVector>::One << GridBagLayoutConstraintsBase::AnchorFieldId);

const OSG::BitVector  GridBagLayoutConstraintsBase::WeightXFieldMask = 
    (TypeTraits<BitVector>::One << GridBagLayoutConstraintsBase::WeightXFieldId);

const OSG::BitVector  GridBagLayoutConstraintsBase::WeightYFieldMask = 
    (TypeTraits<BitVector>::One << GridBagLayoutConstraintsBase::WeightYFieldId);

const OSG::BitVector  GridBagLayoutConstraintsBase::InternalPadXFieldMask = 
    (TypeTraits<BitVector>::One << GridBagLayoutConstraintsBase::InternalPadXFieldId);

const OSG::BitVector  GridBagLayoutConstraintsBase::InternalPadYFieldMask = 
    (TypeTraits<BitVector>::One << GridBagLayoutConstraintsBase::InternalPadYFieldId);

const OSG::BitVector  GridBagLayoutConstraintsBase::PadLeftFieldMask = 
    (TypeTraits<BitVector>::One << GridBagLayoutConstraintsBase::PadLeftFieldId);

const OSG::BitVector  GridBagLayoutConstraintsBase::PadRightFieldMask = 
    (TypeTraits<BitVector>::One << GridBagLayoutConstraintsBase::PadRightFieldId);

const OSG::BitVector  GridBagLayoutConstraintsBase::PadTopFieldMask = 
    (TypeTraits<BitVector>::One << GridBagLayoutConstraintsBase::PadTopFieldId);

const OSG::BitVector  GridBagLayoutConstraintsBase::PadBottomFieldMask = 
    (TypeTraits<BitVector>::One << GridBagLayoutConstraintsBase::PadBottomFieldId);

const OSG::BitVector GridBagLayoutConstraintsBase::MTInfluenceMask = 
    (Inherited::MTInfluenceMask) | 
    (static_cast<BitVector>(0x0) << Inherited::NextFieldId); 


// Field descriptions

/*! \var UInt16          GridBagLayoutConstraintsBase::_sfGridX
    Specifies the cell containing the leading corner of the component's display area
*/
/*! \var UInt16          GridBagLayoutConstraintsBase::_sfGridY
    Specifies the cell containing the leading corner of the component's display area
*/
/*! \var UInt16          GridBagLayoutConstraintsBase::_sfGridWidth
    Specifies the number of cells in a row in the component's display area
*/
/*! \var UInt16          GridBagLayoutConstraintsBase::_sfGridHeight
    Specifies the number of cells in a column in the component's display area
*/
/*! \var UInt32          GridBagLayoutConstraintsBase::_sfFill
    Used when the component's display area is larger than the component's requested size to determine whether (and how) to resize the component
*/
/*! \var UInt32          GridBagLayoutConstraintsBase::_sfAnchor
    Used when the component is smaller than its display area to determine where (within the display area) to place the component
*/
/*! \var Real32          GridBagLayoutConstraintsBase::_sfWeightX
    Used to determine how to distribute space, which is important for specifying resizing behavior
*/
/*! \var Real32          GridBagLayoutConstraintsBase::_sfWeightY
    Used to determine how to distribute space, which is important for specifying resizing behavior
*/
/*! \var UInt32          GridBagLayoutConstraintsBase::_sfInternalPadX
    Specifies the component's internal padding within the layout, how much to add to the minimum size of the component. The width of the component will be at least its minimum width plus (ipadx * 2) pixels (since the padding applies to both sides of the component)
*/
/*! \var UInt32          GridBagLayoutConstraintsBase::_sfInternalPadY
    Specifies the component's internal padding within the layout, how much to add to the minimum size of the component. The height of the component will be at least its minimum height plus (ipady * 2) pixels (since the padding applies to both sides of the component)
*/
/*! \var UInt32          GridBagLayoutConstraintsBase::_sfPadLeft
    This field specifies the external padding of the component, the minimum amount of space between the component and the Left edge of its display area.
*/
/*! \var UInt32          GridBagLayoutConstraintsBase::_sfPadRight
    This field specifies the external padding of the component, the minimum amount of space between the component and the Right edge of its display area.
*/
/*! \var UInt32          GridBagLayoutConstraintsBase::_sfPadTop
    This field specifies the external padding of the component, the minimum amount of space between the component and the Top edge of its display area.
*/
/*! \var UInt32          GridBagLayoutConstraintsBase::_sfPadBottom
    This field specifies the external padding of the component, the minimum amount of space between the component and the Bottom edge of its display area.
*/

//! GridBagLayoutConstraints description

FieldDescription *GridBagLayoutConstraintsBase::_desc[] = 
{
    new FieldDescription(SFUInt16::getClassType(), 
                     "GridX", 
                     GridXFieldId, GridXFieldMask,
                     false,
                     (FieldAccessMethod) &GridBagLayoutConstraintsBase::getSFGridX),
    new FieldDescription(SFUInt16::getClassType(), 
                     "GridY", 
                     GridYFieldId, GridYFieldMask,
                     false,
                     (FieldAccessMethod) &GridBagLayoutConstraintsBase::getSFGridY),
    new FieldDescription(SFUInt16::getClassType(), 
                     "GridWidth", 
                     GridWidthFieldId, GridWidthFieldMask,
                     false,
                     (FieldAccessMethod) &GridBagLayoutConstraintsBase::getSFGridWidth),
    new FieldDescription(SFUInt16::getClassType(), 
                     "GridHeight", 
                     GridHeightFieldId, GridHeightFieldMask,
                     false,
                     (FieldAccessMethod) &GridBagLayoutConstraintsBase::getSFGridHeight),
    new FieldDescription(SFUInt32::getClassType(), 
                     "Fill", 
                     FillFieldId, FillFieldMask,
                     false,
                     (FieldAccessMethod) &GridBagLayoutConstraintsBase::getSFFill),
    new FieldDescription(SFUInt32::getClassType(), 
                     "Anchor", 
                     AnchorFieldId, AnchorFieldMask,
                     false,
                     (FieldAccessMethod) &GridBagLayoutConstraintsBase::getSFAnchor),
    new FieldDescription(SFReal32::getClassType(), 
                     "WeightX", 
                     WeightXFieldId, WeightXFieldMask,
                     false,
                     (FieldAccessMethod) &GridBagLayoutConstraintsBase::getSFWeightX),
    new FieldDescription(SFReal32::getClassType(), 
                     "WeightY", 
                     WeightYFieldId, WeightYFieldMask,
                     false,
                     (FieldAccessMethod) &GridBagLayoutConstraintsBase::getSFWeightY),
    new FieldDescription(SFUInt32::getClassType(), 
                     "InternalPadX", 
                     InternalPadXFieldId, InternalPadXFieldMask,
                     false,
                     (FieldAccessMethod) &GridBagLayoutConstraintsBase::getSFInternalPadX),
    new FieldDescription(SFUInt32::getClassType(), 
                     "InternalPadY", 
                     InternalPadYFieldId, InternalPadYFieldMask,
                     false,
                     (FieldAccessMethod) &GridBagLayoutConstraintsBase::getSFInternalPadY),
    new FieldDescription(SFUInt32::getClassType(), 
                     "PadLeft", 
                     PadLeftFieldId, PadLeftFieldMask,
                     false,
                     (FieldAccessMethod) &GridBagLayoutConstraintsBase::getSFPadLeft),
    new FieldDescription(SFUInt32::getClassType(), 
                     "PadRight", 
                     PadRightFieldId, PadRightFieldMask,
                     false,
                     (FieldAccessMethod) &GridBagLayoutConstraintsBase::getSFPadRight),
    new FieldDescription(SFUInt32::getClassType(), 
                     "PadTop", 
                     PadTopFieldId, PadTopFieldMask,
                     false,
                     (FieldAccessMethod) &GridBagLayoutConstraintsBase::getSFPadTop),
    new FieldDescription(SFUInt32::getClassType(), 
                     "PadBottom", 
                     PadBottomFieldId, PadBottomFieldMask,
                     false,
                     (FieldAccessMethod) &GridBagLayoutConstraintsBase::getSFPadBottom)
};


FieldContainerType GridBagLayoutConstraintsBase::_type(
    "GridBagLayoutConstraints",
    "LayoutConstraints",
    NULL,
    (PrototypeCreateF) &GridBagLayoutConstraintsBase::createEmpty,
    GridBagLayoutConstraints::initMethod,
    _desc,
    sizeof(_desc));

//OSG_FIELD_CONTAINER_DEF(GridBagLayoutConstraintsBase, GridBagLayoutConstraintsPtr)

/*------------------------------ get -----------------------------------*/

FieldContainerType &GridBagLayoutConstraintsBase::getType(void) 
{
    return _type; 
} 

const FieldContainerType &GridBagLayoutConstraintsBase::getType(void) const 
{
    return _type;
} 


FieldContainerPtr GridBagLayoutConstraintsBase::shallowCopy(void) const 
{ 
    GridBagLayoutConstraintsPtr returnValue; 

    newPtr(returnValue, dynamic_cast<const GridBagLayoutConstraints *>(this)); 

    return returnValue; 
}

UInt32 GridBagLayoutConstraintsBase::getContainerSize(void) const 
{ 
    return sizeof(GridBagLayoutConstraints); 
}


#if !defined(OSG_FIXED_MFIELDSYNC)
void GridBagLayoutConstraintsBase::executeSync(      FieldContainer &other,
                                    const BitVector      &whichField)
{
    this->executeSyncImpl((GridBagLayoutConstraintsBase *) &other, whichField);
}
#else
void GridBagLayoutConstraintsBase::executeSync(      FieldContainer &other,
                                    const BitVector      &whichField,                                    const SyncInfo       &sInfo     )
{
    this->executeSyncImpl((GridBagLayoutConstraintsBase *) &other, whichField, sInfo);
}
void GridBagLayoutConstraintsBase::execBeginEdit(const BitVector &whichField, 
                                            UInt32     uiAspect,
                                            UInt32     uiContainerSize) 
{
    this->execBeginEditImpl(whichField, uiAspect, uiContainerSize);
}

void GridBagLayoutConstraintsBase::onDestroyAspect(UInt32 uiId, UInt32 uiAspect)
{
    Inherited::onDestroyAspect(uiId, uiAspect);

}
#endif

/*------------------------- constructors ----------------------------------*/

#ifdef OSG_WIN32_ICL
#pragma warning (disable : 383)
#endif

GridBagLayoutConstraintsBase::GridBagLayoutConstraintsBase(void) :
    _sfGridX                  (UInt16(0)), 
    _sfGridY                  (UInt16(0)), 
    _sfGridWidth              (UInt16(1)), 
    _sfGridHeight             (UInt16(1)), 
    _sfFill                   (), 
    _sfAnchor                 (), 
    _sfWeightX                (Real32(1.0)), 
    _sfWeightY                (Real32(1.0)), 
    _sfInternalPadX           (UInt32(0)), 
    _sfInternalPadY           (UInt32(0)), 
    _sfPadLeft                (UInt32(0)), 
    _sfPadRight               (UInt32(0)), 
    _sfPadTop                 (UInt32(0)), 
    _sfPadBottom              (UInt32(0)), 
    Inherited() 
{
}

#ifdef OSG_WIN32_ICL
#pragma warning (default : 383)
#endif

GridBagLayoutConstraintsBase::GridBagLayoutConstraintsBase(const GridBagLayoutConstraintsBase &source) :
    _sfGridX                  (source._sfGridX                  ), 
    _sfGridY                  (source._sfGridY                  ), 
    _sfGridWidth              (source._sfGridWidth              ), 
    _sfGridHeight             (source._sfGridHeight             ), 
    _sfFill                   (source._sfFill                   ), 
    _sfAnchor                 (source._sfAnchor                 ), 
    _sfWeightX                (source._sfWeightX                ), 
    _sfWeightY                (source._sfWeightY                ), 
    _sfInternalPadX           (source._sfInternalPadX           ), 
    _sfInternalPadY           (source._sfInternalPadY           ), 
    _sfPadLeft                (source._sfPadLeft                ), 
    _sfPadRight               (source._sfPadRight               ), 
    _sfPadTop                 (source._sfPadTop                 ), 
    _sfPadBottom              (source._sfPadBottom              ), 
    Inherited                 (source)
{
}

/*-------------------------- destructors ----------------------------------*/

GridBagLayoutConstraintsBase::~GridBagLayoutConstraintsBase(void)
{
}

/*------------------------------ access -----------------------------------*/

UInt32 GridBagLayoutConstraintsBase::getBinSize(const BitVector &whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (GridXFieldMask & whichField))
    {
        returnValue += _sfGridX.getBinSize();
    }

    if(FieldBits::NoField != (GridYFieldMask & whichField))
    {
        returnValue += _sfGridY.getBinSize();
    }

    if(FieldBits::NoField != (GridWidthFieldMask & whichField))
    {
        returnValue += _sfGridWidth.getBinSize();
    }

    if(FieldBits::NoField != (GridHeightFieldMask & whichField))
    {
        returnValue += _sfGridHeight.getBinSize();
    }

    if(FieldBits::NoField != (FillFieldMask & whichField))
    {
        returnValue += _sfFill.getBinSize();
    }

    if(FieldBits::NoField != (AnchorFieldMask & whichField))
    {
        returnValue += _sfAnchor.getBinSize();
    }

    if(FieldBits::NoField != (WeightXFieldMask & whichField))
    {
        returnValue += _sfWeightX.getBinSize();
    }

    if(FieldBits::NoField != (WeightYFieldMask & whichField))
    {
        returnValue += _sfWeightY.getBinSize();
    }

    if(FieldBits::NoField != (InternalPadXFieldMask & whichField))
    {
        returnValue += _sfInternalPadX.getBinSize();
    }

    if(FieldBits::NoField != (InternalPadYFieldMask & whichField))
    {
        returnValue += _sfInternalPadY.getBinSize();
    }

    if(FieldBits::NoField != (PadLeftFieldMask & whichField))
    {
        returnValue += _sfPadLeft.getBinSize();
    }

    if(FieldBits::NoField != (PadRightFieldMask & whichField))
    {
        returnValue += _sfPadRight.getBinSize();
    }

    if(FieldBits::NoField != (PadTopFieldMask & whichField))
    {
        returnValue += _sfPadTop.getBinSize();
    }

    if(FieldBits::NoField != (PadBottomFieldMask & whichField))
    {
        returnValue += _sfPadBottom.getBinSize();
    }


    return returnValue;
}

void GridBagLayoutConstraintsBase::copyToBin(      BinaryDataHandler &pMem,
                                  const BitVector         &whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (GridXFieldMask & whichField))
    {
        _sfGridX.copyToBin(pMem);
    }

    if(FieldBits::NoField != (GridYFieldMask & whichField))
    {
        _sfGridY.copyToBin(pMem);
    }

    if(FieldBits::NoField != (GridWidthFieldMask & whichField))
    {
        _sfGridWidth.copyToBin(pMem);
    }

    if(FieldBits::NoField != (GridHeightFieldMask & whichField))
    {
        _sfGridHeight.copyToBin(pMem);
    }

    if(FieldBits::NoField != (FillFieldMask & whichField))
    {
        _sfFill.copyToBin(pMem);
    }

    if(FieldBits::NoField != (AnchorFieldMask & whichField))
    {
        _sfAnchor.copyToBin(pMem);
    }

    if(FieldBits::NoField != (WeightXFieldMask & whichField))
    {
        _sfWeightX.copyToBin(pMem);
    }

    if(FieldBits::NoField != (WeightYFieldMask & whichField))
    {
        _sfWeightY.copyToBin(pMem);
    }

    if(FieldBits::NoField != (InternalPadXFieldMask & whichField))
    {
        _sfInternalPadX.copyToBin(pMem);
    }

    if(FieldBits::NoField != (InternalPadYFieldMask & whichField))
    {
        _sfInternalPadY.copyToBin(pMem);
    }

    if(FieldBits::NoField != (PadLeftFieldMask & whichField))
    {
        _sfPadLeft.copyToBin(pMem);
    }

    if(FieldBits::NoField != (PadRightFieldMask & whichField))
    {
        _sfPadRight.copyToBin(pMem);
    }

    if(FieldBits::NoField != (PadTopFieldMask & whichField))
    {
        _sfPadTop.copyToBin(pMem);
    }

    if(FieldBits::NoField != (PadBottomFieldMask & whichField))
    {
        _sfPadBottom.copyToBin(pMem);
    }


}

void GridBagLayoutConstraintsBase::copyFromBin(      BinaryDataHandler &pMem,
                                    const BitVector    &whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (GridXFieldMask & whichField))
    {
        _sfGridX.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (GridYFieldMask & whichField))
    {
        _sfGridY.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (GridWidthFieldMask & whichField))
    {
        _sfGridWidth.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (GridHeightFieldMask & whichField))
    {
        _sfGridHeight.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (FillFieldMask & whichField))
    {
        _sfFill.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (AnchorFieldMask & whichField))
    {
        _sfAnchor.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (WeightXFieldMask & whichField))
    {
        _sfWeightX.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (WeightYFieldMask & whichField))
    {
        _sfWeightY.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (InternalPadXFieldMask & whichField))
    {
        _sfInternalPadX.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (InternalPadYFieldMask & whichField))
    {
        _sfInternalPadY.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (PadLeftFieldMask & whichField))
    {
        _sfPadLeft.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (PadRightFieldMask & whichField))
    {
        _sfPadRight.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (PadTopFieldMask & whichField))
    {
        _sfPadTop.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (PadBottomFieldMask & whichField))
    {
        _sfPadBottom.copyFromBin(pMem);
    }


}

#if !defined(OSG_FIXED_MFIELDSYNC)
void GridBagLayoutConstraintsBase::executeSyncImpl(      GridBagLayoutConstraintsBase *pOther,
                                        const BitVector         &whichField)
{

    Inherited::executeSyncImpl(pOther, whichField);

    if(FieldBits::NoField != (GridXFieldMask & whichField))
        _sfGridX.syncWith(pOther->_sfGridX);

    if(FieldBits::NoField != (GridYFieldMask & whichField))
        _sfGridY.syncWith(pOther->_sfGridY);

    if(FieldBits::NoField != (GridWidthFieldMask & whichField))
        _sfGridWidth.syncWith(pOther->_sfGridWidth);

    if(FieldBits::NoField != (GridHeightFieldMask & whichField))
        _sfGridHeight.syncWith(pOther->_sfGridHeight);

    if(FieldBits::NoField != (FillFieldMask & whichField))
        _sfFill.syncWith(pOther->_sfFill);

    if(FieldBits::NoField != (AnchorFieldMask & whichField))
        _sfAnchor.syncWith(pOther->_sfAnchor);

    if(FieldBits::NoField != (WeightXFieldMask & whichField))
        _sfWeightX.syncWith(pOther->_sfWeightX);

    if(FieldBits::NoField != (WeightYFieldMask & whichField))
        _sfWeightY.syncWith(pOther->_sfWeightY);

    if(FieldBits::NoField != (InternalPadXFieldMask & whichField))
        _sfInternalPadX.syncWith(pOther->_sfInternalPadX);

    if(FieldBits::NoField != (InternalPadYFieldMask & whichField))
        _sfInternalPadY.syncWith(pOther->_sfInternalPadY);

    if(FieldBits::NoField != (PadLeftFieldMask & whichField))
        _sfPadLeft.syncWith(pOther->_sfPadLeft);

    if(FieldBits::NoField != (PadRightFieldMask & whichField))
        _sfPadRight.syncWith(pOther->_sfPadRight);

    if(FieldBits::NoField != (PadTopFieldMask & whichField))
        _sfPadTop.syncWith(pOther->_sfPadTop);

    if(FieldBits::NoField != (PadBottomFieldMask & whichField))
        _sfPadBottom.syncWith(pOther->_sfPadBottom);


}
#else
void GridBagLayoutConstraintsBase::executeSyncImpl(      GridBagLayoutConstraintsBase *pOther,
                                        const BitVector         &whichField,
                                        const SyncInfo          &sInfo      )
{

    Inherited::executeSyncImpl(pOther, whichField, sInfo);

    if(FieldBits::NoField != (GridXFieldMask & whichField))
        _sfGridX.syncWith(pOther->_sfGridX);

    if(FieldBits::NoField != (GridYFieldMask & whichField))
        _sfGridY.syncWith(pOther->_sfGridY);

    if(FieldBits::NoField != (GridWidthFieldMask & whichField))
        _sfGridWidth.syncWith(pOther->_sfGridWidth);

    if(FieldBits::NoField != (GridHeightFieldMask & whichField))
        _sfGridHeight.syncWith(pOther->_sfGridHeight);

    if(FieldBits::NoField != (FillFieldMask & whichField))
        _sfFill.syncWith(pOther->_sfFill);

    if(FieldBits::NoField != (AnchorFieldMask & whichField))
        _sfAnchor.syncWith(pOther->_sfAnchor);

    if(FieldBits::NoField != (WeightXFieldMask & whichField))
        _sfWeightX.syncWith(pOther->_sfWeightX);

    if(FieldBits::NoField != (WeightYFieldMask & whichField))
        _sfWeightY.syncWith(pOther->_sfWeightY);

    if(FieldBits::NoField != (InternalPadXFieldMask & whichField))
        _sfInternalPadX.syncWith(pOther->_sfInternalPadX);

    if(FieldBits::NoField != (InternalPadYFieldMask & whichField))
        _sfInternalPadY.syncWith(pOther->_sfInternalPadY);

    if(FieldBits::NoField != (PadLeftFieldMask & whichField))
        _sfPadLeft.syncWith(pOther->_sfPadLeft);

    if(FieldBits::NoField != (PadRightFieldMask & whichField))
        _sfPadRight.syncWith(pOther->_sfPadRight);

    if(FieldBits::NoField != (PadTopFieldMask & whichField))
        _sfPadTop.syncWith(pOther->_sfPadTop);

    if(FieldBits::NoField != (PadBottomFieldMask & whichField))
        _sfPadBottom.syncWith(pOther->_sfPadBottom);



}

void GridBagLayoutConstraintsBase::execBeginEditImpl (const BitVector &whichField, 
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
DataType FieldDataTraits<GridBagLayoutConstraintsPtr>::_type("GridBagLayoutConstraintsPtr", "LayoutConstraintsPtr");
#endif

OSG_DLLEXPORT_SFIELD_DEF1(GridBagLayoutConstraintsPtr, );
OSG_DLLEXPORT_MFIELD_DEF1(GridBagLayoutConstraintsPtr, );


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
    static Char8 cvsid_hpp       [] = OSGGRIDBAGLAYOUTCONSTRAINTSBASE_HEADER_CVSID;
    static Char8 cvsid_inl       [] = OSGGRIDBAGLAYOUTCONSTRAINTSBASE_INLINE_CVSID;

    static Char8 cvsid_fields_hpp[] = OSGGRIDBAGLAYOUTCONSTRAINTSFIELDS_HEADER_CVSID;
}

OSG_END_NAMESPACE

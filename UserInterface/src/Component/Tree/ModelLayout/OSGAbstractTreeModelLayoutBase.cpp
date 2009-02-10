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
 **     class AbstractTreeModelLayout!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#define OSG_COMPILEABSTRACTTREEMODELLAYOUTINST

#include <stdlib.h>
#include <stdio.h>

#include <OpenSG/OSGConfig.h>

#include "OSGAbstractTreeModelLayoutBase.h"
#include "OSGAbstractTreeModelLayout.h"


OSG_BEGIN_NAMESPACE

const OSG::BitVector  AbstractTreeModelLayoutBase::RootVisibleInternalFieldMask = 
    (TypeTraits<BitVector>::One << AbstractTreeModelLayoutBase::RootVisibleInternalFieldId);

const OSG::BitVector  AbstractTreeModelLayoutBase::RowHeightInternalFieldMask = 
    (TypeTraits<BitVector>::One << AbstractTreeModelLayoutBase::RowHeightInternalFieldId);

const OSG::BitVector  AbstractTreeModelLayoutBase::DepthOffsetInternalFieldMask = 
    (TypeTraits<BitVector>::One << AbstractTreeModelLayoutBase::DepthOffsetInternalFieldId);

const OSG::BitVector AbstractTreeModelLayoutBase::MTInfluenceMask = 
    (Inherited::MTInfluenceMask) | 
    (static_cast<BitVector>(0x0) << Inherited::NextFieldId); 


// Field descriptions

/*! \var bool            AbstractTreeModelLayoutBase::_sfRootVisibleInternal
    Is the tree model root visible.
*/
/*! \var Real32          AbstractTreeModelLayoutBase::_sfRowHeightInternal
    The Row Height.
*/
/*! \var Real32          AbstractTreeModelLayoutBase::_sfDepthOffsetInternal
    The Depth Offset.
*/

//! AbstractTreeModelLayout description

FieldDescription *AbstractTreeModelLayoutBase::_desc[] = 
{
    new FieldDescription(SFBool::getClassType(), 
                     "RootVisibleInternal", 
                     RootVisibleInternalFieldId, RootVisibleInternalFieldMask,
                     false,
                     (FieldAccessMethod) &AbstractTreeModelLayoutBase::getSFRootVisibleInternal),
    new FieldDescription(SFReal32::getClassType(), 
                     "RowHeightInternal", 
                     RowHeightInternalFieldId, RowHeightInternalFieldMask,
                     false,
                     (FieldAccessMethod) &AbstractTreeModelLayoutBase::getSFRowHeightInternal),
    new FieldDescription(SFReal32::getClassType(), 
                     "DepthOffsetInternal", 
                     DepthOffsetInternalFieldId, DepthOffsetInternalFieldMask,
                     false,
                     (FieldAccessMethod) &AbstractTreeModelLayoutBase::getSFDepthOffsetInternal)
};


FieldContainerType AbstractTreeModelLayoutBase::_type(
    "AbstractTreeModelLayout",
    "TreeModelLayout",
    NULL,
    NULL, 
    AbstractTreeModelLayout::initMethod,
    _desc,
    sizeof(_desc));

//OSG_FIELD_CONTAINER_DEF(AbstractTreeModelLayoutBase, AbstractTreeModelLayoutPtr)

/*------------------------------ get -----------------------------------*/

FieldContainerType &AbstractTreeModelLayoutBase::getType(void) 
{
    return _type; 
} 

const FieldContainerType &AbstractTreeModelLayoutBase::getType(void) const 
{
    return _type;
} 


UInt32 AbstractTreeModelLayoutBase::getContainerSize(void) const 
{ 
    return sizeof(AbstractTreeModelLayout); 
}


#if !defined(OSG_FIXED_MFIELDSYNC)
void AbstractTreeModelLayoutBase::executeSync(      FieldContainer &other,
                                    const BitVector      &whichField)
{
    this->executeSyncImpl((AbstractTreeModelLayoutBase *) &other, whichField);
}
#else
void AbstractTreeModelLayoutBase::executeSync(      FieldContainer &other,
                                    const BitVector      &whichField,                                    const SyncInfo       &sInfo     )
{
    this->executeSyncImpl((AbstractTreeModelLayoutBase *) &other, whichField, sInfo);
}
void AbstractTreeModelLayoutBase::execBeginEdit(const BitVector &whichField, 
                                            UInt32     uiAspect,
                                            UInt32     uiContainerSize) 
{
    this->execBeginEditImpl(whichField, uiAspect, uiContainerSize);
}

void AbstractTreeModelLayoutBase::onDestroyAspect(UInt32 uiId, UInt32 uiAspect)
{
    Inherited::onDestroyAspect(uiId, uiAspect);

}
#endif

/*------------------------- constructors ----------------------------------*/

#ifdef OSG_WIN32_ICL
#pragma warning (disable : 383)
#endif

AbstractTreeModelLayoutBase::AbstractTreeModelLayoutBase(void) :
    _sfRootVisibleInternal    (bool(false)), 
    _sfRowHeightInternal      (Real32(13.0)), 
    _sfDepthOffsetInternal    (Real32(15.0)), 
    Inherited() 
{
}

#ifdef OSG_WIN32_ICL
#pragma warning (default : 383)
#endif

AbstractTreeModelLayoutBase::AbstractTreeModelLayoutBase(const AbstractTreeModelLayoutBase &source) :
    _sfRootVisibleInternal    (source._sfRootVisibleInternal    ), 
    _sfRowHeightInternal      (source._sfRowHeightInternal      ), 
    _sfDepthOffsetInternal    (source._sfDepthOffsetInternal    ), 
    Inherited                 (source)
{
}

/*-------------------------- destructors ----------------------------------*/

AbstractTreeModelLayoutBase::~AbstractTreeModelLayoutBase(void)
{
}

/*------------------------------ access -----------------------------------*/

UInt32 AbstractTreeModelLayoutBase::getBinSize(const BitVector &whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (RootVisibleInternalFieldMask & whichField))
    {
        returnValue += _sfRootVisibleInternal.getBinSize();
    }

    if(FieldBits::NoField != (RowHeightInternalFieldMask & whichField))
    {
        returnValue += _sfRowHeightInternal.getBinSize();
    }

    if(FieldBits::NoField != (DepthOffsetInternalFieldMask & whichField))
    {
        returnValue += _sfDepthOffsetInternal.getBinSize();
    }


    return returnValue;
}

void AbstractTreeModelLayoutBase::copyToBin(      BinaryDataHandler &pMem,
                                  const BitVector         &whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (RootVisibleInternalFieldMask & whichField))
    {
        _sfRootVisibleInternal.copyToBin(pMem);
    }

    if(FieldBits::NoField != (RowHeightInternalFieldMask & whichField))
    {
        _sfRowHeightInternal.copyToBin(pMem);
    }

    if(FieldBits::NoField != (DepthOffsetInternalFieldMask & whichField))
    {
        _sfDepthOffsetInternal.copyToBin(pMem);
    }


}

void AbstractTreeModelLayoutBase::copyFromBin(      BinaryDataHandler &pMem,
                                    const BitVector    &whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (RootVisibleInternalFieldMask & whichField))
    {
        _sfRootVisibleInternal.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (RowHeightInternalFieldMask & whichField))
    {
        _sfRowHeightInternal.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (DepthOffsetInternalFieldMask & whichField))
    {
        _sfDepthOffsetInternal.copyFromBin(pMem);
    }


}

#if !defined(OSG_FIXED_MFIELDSYNC)
void AbstractTreeModelLayoutBase::executeSyncImpl(      AbstractTreeModelLayoutBase *pOther,
                                        const BitVector         &whichField)
{

    Inherited::executeSyncImpl(pOther, whichField);

    if(FieldBits::NoField != (RootVisibleInternalFieldMask & whichField))
        _sfRootVisibleInternal.syncWith(pOther->_sfRootVisibleInternal);

    if(FieldBits::NoField != (RowHeightInternalFieldMask & whichField))
        _sfRowHeightInternal.syncWith(pOther->_sfRowHeightInternal);

    if(FieldBits::NoField != (DepthOffsetInternalFieldMask & whichField))
        _sfDepthOffsetInternal.syncWith(pOther->_sfDepthOffsetInternal);


}
#else
void AbstractTreeModelLayoutBase::executeSyncImpl(      AbstractTreeModelLayoutBase *pOther,
                                        const BitVector         &whichField,
                                        const SyncInfo          &sInfo      )
{

    Inherited::executeSyncImpl(pOther, whichField, sInfo);

    if(FieldBits::NoField != (RootVisibleInternalFieldMask & whichField))
        _sfRootVisibleInternal.syncWith(pOther->_sfRootVisibleInternal);

    if(FieldBits::NoField != (RowHeightInternalFieldMask & whichField))
        _sfRowHeightInternal.syncWith(pOther->_sfRowHeightInternal);

    if(FieldBits::NoField != (DepthOffsetInternalFieldMask & whichField))
        _sfDepthOffsetInternal.syncWith(pOther->_sfDepthOffsetInternal);



}

void AbstractTreeModelLayoutBase::execBeginEditImpl (const BitVector &whichField, 
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
DataType FieldDataTraits<AbstractTreeModelLayoutPtr>::_type("AbstractTreeModelLayoutPtr", "TreeModelLayoutPtr");
#endif

OSG_DLLEXPORT_SFIELD_DEF1(AbstractTreeModelLayoutPtr, OSG_USERINTERFACELIB_DLLTMPLMAPPING);
OSG_DLLEXPORT_MFIELD_DEF1(AbstractTreeModelLayoutPtr, OSG_USERINTERFACELIB_DLLTMPLMAPPING);


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
    static Char8 cvsid_hpp       [] = OSGABSTRACTTREEMODELLAYOUTBASE_HEADER_CVSID;
    static Char8 cvsid_inl       [] = OSGABSTRACTTREEMODELLAYOUTBASE_INLINE_CVSID;

    static Char8 cvsid_fields_hpp[] = OSGABSTRACTTREEMODELLAYOUTFIELDS_HEADER_CVSID;
}

OSG_END_NAMESPACE


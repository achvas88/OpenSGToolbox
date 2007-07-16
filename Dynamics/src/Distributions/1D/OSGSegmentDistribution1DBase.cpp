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
 **     class SegmentDistribution1D!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#define OSG_COMPILESEGMENTDISTRIBUTION1DINST

#include <stdlib.h>
#include <stdio.h>

#include <OpenSG/OSGConfig.h>

#include "OSGSegmentDistribution1DBase.h"
#include "OSGSegmentDistribution1D.h"


OSG_BEGIN_NAMESPACE

const OSG::BitVector  SegmentDistribution1DBase::SegmentFieldMask = 
    (TypeTraits<BitVector>::One << SegmentDistribution1DBase::SegmentFieldId);

const OSG::BitVector SegmentDistribution1DBase::MTInfluenceMask = 
    (Inherited::MTInfluenceMask) | 
    (static_cast<BitVector>(0x0) << Inherited::NextFieldId); 


// Field descriptions

/*! \var Vec2f           SegmentDistribution1DBase::_sfSegment
    
*/

//! SegmentDistribution1D description

FieldDescription *SegmentDistribution1DBase::_desc[] = 
{
    new FieldDescription(SFVec2f::getClassType(), 
                     "Segment", 
                     SegmentFieldId, SegmentFieldMask,
                     false,
                     (FieldAccessMethod) &SegmentDistribution1DBase::getSFSegment)
};


FieldContainerType SegmentDistribution1DBase::_type(
    "SegmentDistribution1D",
    "Distribution1D",
    NULL,
    (PrototypeCreateF) &SegmentDistribution1DBase::createEmpty,
    SegmentDistribution1D::initMethod,
    _desc,
    sizeof(_desc));

//OSG_FIELD_CONTAINER_DEF(SegmentDistribution1DBase, SegmentDistribution1DPtr)

/*------------------------------ get -----------------------------------*/

FieldContainerType &SegmentDistribution1DBase::getType(void) 
{
    return _type; 
} 

const FieldContainerType &SegmentDistribution1DBase::getType(void) const 
{
    return _type;
} 


FieldContainerPtr SegmentDistribution1DBase::shallowCopy(void) const 
{ 
    SegmentDistribution1DPtr returnValue; 

    newPtr(returnValue, dynamic_cast<const SegmentDistribution1D *>(this)); 

    return returnValue; 
}

UInt32 SegmentDistribution1DBase::getContainerSize(void) const 
{ 
    return sizeof(SegmentDistribution1D); 
}


#if !defined(OSG_FIXED_MFIELDSYNC)
void SegmentDistribution1DBase::executeSync(      FieldContainer &other,
                                    const BitVector      &whichField)
{
    this->executeSyncImpl((SegmentDistribution1DBase *) &other, whichField);
}
#else
void SegmentDistribution1DBase::executeSync(      FieldContainer &other,
                                    const BitVector      &whichField,                                    const SyncInfo       &sInfo     )
{
    this->executeSyncImpl((SegmentDistribution1DBase *) &other, whichField, sInfo);
}
void SegmentDistribution1DBase::execBeginEdit(const BitVector &whichField, 
                                            UInt32     uiAspect,
                                            UInt32     uiContainerSize) 
{
    this->execBeginEditImpl(whichField, uiAspect, uiContainerSize);
}

void SegmentDistribution1DBase::onDestroyAspect(UInt32 uiId, UInt32 uiAspect)
{
    Inherited::onDestroyAspect(uiId, uiAspect);

}
#endif

/*------------------------- constructors ----------------------------------*/

#ifdef OSG_WIN32_ICL
#pragma warning (disable : 383)
#endif

SegmentDistribution1DBase::SegmentDistribution1DBase(void) :
    _sfSegment                (Vec2f(0.0,1.0)), 
    Inherited() 
{
}

#ifdef OSG_WIN32_ICL
#pragma warning (default : 383)
#endif

SegmentDistribution1DBase::SegmentDistribution1DBase(const SegmentDistribution1DBase &source) :
    _sfSegment                (source._sfSegment                ), 
    Inherited                 (source)
{
}

/*-------------------------- destructors ----------------------------------*/

SegmentDistribution1DBase::~SegmentDistribution1DBase(void)
{
}

/*------------------------------ access -----------------------------------*/

UInt32 SegmentDistribution1DBase::getBinSize(const BitVector &whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (SegmentFieldMask & whichField))
    {
        returnValue += _sfSegment.getBinSize();
    }


    return returnValue;
}

void SegmentDistribution1DBase::copyToBin(      BinaryDataHandler &pMem,
                                  const BitVector         &whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (SegmentFieldMask & whichField))
    {
        _sfSegment.copyToBin(pMem);
    }


}

void SegmentDistribution1DBase::copyFromBin(      BinaryDataHandler &pMem,
                                    const BitVector    &whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (SegmentFieldMask & whichField))
    {
        _sfSegment.copyFromBin(pMem);
    }


}

#if !defined(OSG_FIXED_MFIELDSYNC)
void SegmentDistribution1DBase::executeSyncImpl(      SegmentDistribution1DBase *pOther,
                                        const BitVector         &whichField)
{

    Inherited::executeSyncImpl(pOther, whichField);

    if(FieldBits::NoField != (SegmentFieldMask & whichField))
        _sfSegment.syncWith(pOther->_sfSegment);


}
#else
void SegmentDistribution1DBase::executeSyncImpl(      SegmentDistribution1DBase *pOther,
                                        const BitVector         &whichField,
                                        const SyncInfo          &sInfo      )
{

    Inherited::executeSyncImpl(pOther, whichField, sInfo);

    if(FieldBits::NoField != (SegmentFieldMask & whichField))
        _sfSegment.syncWith(pOther->_sfSegment);



}

void SegmentDistribution1DBase::execBeginEditImpl (const BitVector &whichField, 
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
DataType FieldDataTraits<SegmentDistribution1DPtr>::_type("SegmentDistribution1DPtr", "Distribution1DPtr");
#endif

OSG_DLLEXPORT_SFIELD_DEF1(SegmentDistribution1DPtr, OSG_DYNAMICSLIB_DLLTMPLMAPPING);
OSG_DLLEXPORT_MFIELD_DEF1(SegmentDistribution1DPtr, OSG_DYNAMICSLIB_DLLTMPLMAPPING);


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
    static Char8 cvsid_hpp       [] = OSGSEGMENTDISTRIBUTION1DBASE_HEADER_CVSID;
    static Char8 cvsid_inl       [] = OSGSEGMENTDISTRIBUTION1DBASE_INLINE_CVSID;

    static Char8 cvsid_fields_hpp[] = OSGSEGMENTDISTRIBUTION1DFIELDS_HEADER_CVSID;
}

OSG_END_NAMESPACE


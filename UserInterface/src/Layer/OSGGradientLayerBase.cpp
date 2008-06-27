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
 **     class GradientLayer!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#define OSG_COMPILEGRADIENTLAYERINST

#include <stdlib.h>
#include <stdio.h>

#include <OpenSG/OSGConfig.h>

#include "OSGGradientLayerBase.h"
#include "OSGGradientLayer.h"


OSG_BEGIN_NAMESPACE

const OSG::BitVector  GradientLayerBase::ColorsFieldMask = 
    (TypeTraits<BitVector>::One << GradientLayerBase::ColorsFieldId);

const OSG::BitVector  GradientLayerBase::PositionsFieldMask = 
    (TypeTraits<BitVector>::One << GradientLayerBase::PositionsFieldId);

const OSG::BitVector  GradientLayerBase::SpreadMethodFieldMask = 
    (TypeTraits<BitVector>::One << GradientLayerBase::SpreadMethodFieldId);

const OSG::BitVector  GradientLayerBase::OrientationFieldMask = 
    (TypeTraits<BitVector>::One << GradientLayerBase::OrientationFieldId);

const OSG::BitVector  GradientLayerBase::AngleFieldMask = 
    (TypeTraits<BitVector>::One << GradientLayerBase::AngleFieldId);

const OSG::BitVector GradientLayerBase::MTInfluenceMask = 
    (Inherited::MTInfluenceMask) | 
    (static_cast<BitVector>(0x0) << Inherited::NextFieldId); 


// Field descriptions

/*! \var Color4f         GradientLayerBase::_mfColors
    
*/
/*! \var Real32          GradientLayerBase::_mfPositions
    
*/
/*! \var UInt32          GradientLayerBase::_sfSpreadMethod
    
*/
/*! \var UInt32          GradientLayerBase::_sfOrientation
    
*/
/*! \var Real32          GradientLayerBase::_sfAngle
    
*/

//! GradientLayer description

FieldDescription *GradientLayerBase::_desc[] = 
{
    new FieldDescription(MFColor4f::getClassType(), 
                     "Colors", 
                     ColorsFieldId, ColorsFieldMask,
                     false,
                     (FieldAccessMethod) &GradientLayerBase::getMFColors),
    new FieldDescription(MFReal32::getClassType(), 
                     "Positions", 
                     PositionsFieldId, PositionsFieldMask,
                     false,
                     (FieldAccessMethod) &GradientLayerBase::getMFPositions),
    new FieldDescription(SFUInt32::getClassType(), 
                     "SpreadMethod", 
                     SpreadMethodFieldId, SpreadMethodFieldMask,
                     false,
                     (FieldAccessMethod) &GradientLayerBase::getSFSpreadMethod),
    new FieldDescription(SFUInt32::getClassType(), 
                     "Orientation", 
                     OrientationFieldId, OrientationFieldMask,
                     false,
                     (FieldAccessMethod) &GradientLayerBase::getSFOrientation),
    new FieldDescription(SFReal32::getClassType(), 
                     "Angle", 
                     AngleFieldId, AngleFieldMask,
                     false,
                     (FieldAccessMethod) &GradientLayerBase::getSFAngle)
};


FieldContainerType GradientLayerBase::_type(
    "GradientLayer",
    "Layer",
    NULL,
    (PrototypeCreateF) &GradientLayerBase::createEmpty,
    GradientLayer::initMethod,
    _desc,
    sizeof(_desc));

//OSG_FIELD_CONTAINER_DEF(GradientLayerBase, GradientLayerPtr)

/*------------------------------ get -----------------------------------*/

FieldContainerType &GradientLayerBase::getType(void) 
{
    return _type; 
} 

const FieldContainerType &GradientLayerBase::getType(void) const 
{
    return _type;
} 


FieldContainerPtr GradientLayerBase::shallowCopy(void) const 
{ 
    GradientLayerPtr returnValue; 

    newPtr(returnValue, dynamic_cast<const GradientLayer *>(this)); 

    return returnValue; 
}

UInt32 GradientLayerBase::getContainerSize(void) const 
{ 
    return sizeof(GradientLayer); 
}


#if !defined(OSG_FIXED_MFIELDSYNC)
void GradientLayerBase::executeSync(      FieldContainer &other,
                                    const BitVector      &whichField)
{
    this->executeSyncImpl((GradientLayerBase *) &other, whichField);
}
#else
void GradientLayerBase::executeSync(      FieldContainer &other,
                                    const BitVector      &whichField,                                    const SyncInfo       &sInfo     )
{
    this->executeSyncImpl((GradientLayerBase *) &other, whichField, sInfo);
}
void GradientLayerBase::execBeginEdit(const BitVector &whichField, 
                                            UInt32     uiAspect,
                                            UInt32     uiContainerSize) 
{
    this->execBeginEditImpl(whichField, uiAspect, uiContainerSize);
}

void GradientLayerBase::onDestroyAspect(UInt32 uiId, UInt32 uiAspect)
{
    Inherited::onDestroyAspect(uiId, uiAspect);

    _mfColors.terminateShare(uiAspect, this->getContainerSize());
    _mfPositions.terminateShare(uiAspect, this->getContainerSize());
}
#endif

/*------------------------- constructors ----------------------------------*/

#ifdef OSG_WIN32_ICL
#pragma warning (disable : 383)
#endif

GradientLayerBase::GradientLayerBase(void) :
    _mfColors                 (), 
    _mfPositions              (), 
    _sfSpreadMethod           (UInt32(GradientLayer::SPREAD_PAD)), 
    _sfOrientation            (UInt32(GradientLayer::VERTICAL_ORIENTATION)), 
    _sfAngle                  (Real32(0.0f)), 
    Inherited() 
{
}

#ifdef OSG_WIN32_ICL
#pragma warning (default : 383)
#endif

GradientLayerBase::GradientLayerBase(const GradientLayerBase &source) :
    _mfColors                 (source._mfColors                 ), 
    _mfPositions              (source._mfPositions              ), 
    _sfSpreadMethod           (source._sfSpreadMethod           ), 
    _sfOrientation            (source._sfOrientation            ), 
    _sfAngle                  (source._sfAngle                  ), 
    Inherited                 (source)
{
}

/*-------------------------- destructors ----------------------------------*/

GradientLayerBase::~GradientLayerBase(void)
{
}

/*------------------------------ access -----------------------------------*/

UInt32 GradientLayerBase::getBinSize(const BitVector &whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (ColorsFieldMask & whichField))
    {
        returnValue += _mfColors.getBinSize();
    }

    if(FieldBits::NoField != (PositionsFieldMask & whichField))
    {
        returnValue += _mfPositions.getBinSize();
    }

    if(FieldBits::NoField != (SpreadMethodFieldMask & whichField))
    {
        returnValue += _sfSpreadMethod.getBinSize();
    }

    if(FieldBits::NoField != (OrientationFieldMask & whichField))
    {
        returnValue += _sfOrientation.getBinSize();
    }

    if(FieldBits::NoField != (AngleFieldMask & whichField))
    {
        returnValue += _sfAngle.getBinSize();
    }


    return returnValue;
}

void GradientLayerBase::copyToBin(      BinaryDataHandler &pMem,
                                  const BitVector         &whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (ColorsFieldMask & whichField))
    {
        _mfColors.copyToBin(pMem);
    }

    if(FieldBits::NoField != (PositionsFieldMask & whichField))
    {
        _mfPositions.copyToBin(pMem);
    }

    if(FieldBits::NoField != (SpreadMethodFieldMask & whichField))
    {
        _sfSpreadMethod.copyToBin(pMem);
    }

    if(FieldBits::NoField != (OrientationFieldMask & whichField))
    {
        _sfOrientation.copyToBin(pMem);
    }

    if(FieldBits::NoField != (AngleFieldMask & whichField))
    {
        _sfAngle.copyToBin(pMem);
    }


}

void GradientLayerBase::copyFromBin(      BinaryDataHandler &pMem,
                                    const BitVector    &whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (ColorsFieldMask & whichField))
    {
        _mfColors.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (PositionsFieldMask & whichField))
    {
        _mfPositions.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (SpreadMethodFieldMask & whichField))
    {
        _sfSpreadMethod.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (OrientationFieldMask & whichField))
    {
        _sfOrientation.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (AngleFieldMask & whichField))
    {
        _sfAngle.copyFromBin(pMem);
    }


}

#if !defined(OSG_FIXED_MFIELDSYNC)
void GradientLayerBase::executeSyncImpl(      GradientLayerBase *pOther,
                                        const BitVector         &whichField)
{

    Inherited::executeSyncImpl(pOther, whichField);

    if(FieldBits::NoField != (ColorsFieldMask & whichField))
        _mfColors.syncWith(pOther->_mfColors);

    if(FieldBits::NoField != (PositionsFieldMask & whichField))
        _mfPositions.syncWith(pOther->_mfPositions);

    if(FieldBits::NoField != (SpreadMethodFieldMask & whichField))
        _sfSpreadMethod.syncWith(pOther->_sfSpreadMethod);

    if(FieldBits::NoField != (OrientationFieldMask & whichField))
        _sfOrientation.syncWith(pOther->_sfOrientation);

    if(FieldBits::NoField != (AngleFieldMask & whichField))
        _sfAngle.syncWith(pOther->_sfAngle);


}
#else
void GradientLayerBase::executeSyncImpl(      GradientLayerBase *pOther,
                                        const BitVector         &whichField,
                                        const SyncInfo          &sInfo      )
{

    Inherited::executeSyncImpl(pOther, whichField, sInfo);

    if(FieldBits::NoField != (SpreadMethodFieldMask & whichField))
        _sfSpreadMethod.syncWith(pOther->_sfSpreadMethod);

    if(FieldBits::NoField != (OrientationFieldMask & whichField))
        _sfOrientation.syncWith(pOther->_sfOrientation);

    if(FieldBits::NoField != (AngleFieldMask & whichField))
        _sfAngle.syncWith(pOther->_sfAngle);


    if(FieldBits::NoField != (ColorsFieldMask & whichField))
        _mfColors.syncWith(pOther->_mfColors, sInfo);

    if(FieldBits::NoField != (PositionsFieldMask & whichField))
        _mfPositions.syncWith(pOther->_mfPositions, sInfo);


}

void GradientLayerBase::execBeginEditImpl (const BitVector &whichField, 
                                                 UInt32     uiAspect,
                                                 UInt32     uiContainerSize)
{
    Inherited::execBeginEditImpl(whichField, uiAspect, uiContainerSize);

    if(FieldBits::NoField != (ColorsFieldMask & whichField))
        _mfColors.beginEdit(uiAspect, uiContainerSize);

    if(FieldBits::NoField != (PositionsFieldMask & whichField))
        _mfPositions.beginEdit(uiAspect, uiContainerSize);

}
#endif



OSG_END_NAMESPACE

#include <OpenSG/OSGSFieldTypeDef.inl>
#include <OpenSG/OSGMFieldTypeDef.inl>

OSG_BEGIN_NAMESPACE

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldDataTraits<GradientLayerPtr>::_type("GradientLayerPtr", "LayerPtr");
#endif

OSG_DLLEXPORT_SFIELD_DEF1(GradientLayerPtr, OSG_USERINTERFACELIB_DLLTMPLMAPPING);
OSG_DLLEXPORT_MFIELD_DEF1(GradientLayerPtr, OSG_USERINTERFACELIB_DLLTMPLMAPPING);


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
    static Char8 cvsid_hpp       [] = OSGGRADIENTLAYERBASE_HEADER_CVSID;
    static Char8 cvsid_inl       [] = OSGGRADIENTLAYERBASE_INLINE_CVSID;

    static Char8 cvsid_fields_hpp[] = OSGGRADIENTLAYERFIELDS_HEADER_CVSID;
}

OSG_END_NAMESPACE


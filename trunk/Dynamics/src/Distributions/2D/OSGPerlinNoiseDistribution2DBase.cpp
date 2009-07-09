/*---------------------------------------------------------------------------*\
 *                        OpenSG ToolBox Dynamics                            *
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
 **     class PerlinNoiseDistribution2D!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#define OSG_COMPILEPERLINNOISEDISTRIBUTION2DINST

#include <stdlib.h>
#include <stdio.h>

#include <OpenSG/OSGConfig.h>

#include "OSGPerlinNoiseDistribution2DBase.h"
#include "OSGPerlinNoiseDistribution2D.h"


OSG_BEGIN_NAMESPACE

const OSG::BitVector  PerlinNoiseDistribution2DBase::FrequencyFieldMask = 
    (TypeTraits<BitVector>::One << PerlinNoiseDistribution2DBase::FrequencyFieldId);

const OSG::BitVector  PerlinNoiseDistribution2DBase::PersistanceFieldMask = 
    (TypeTraits<BitVector>::One << PerlinNoiseDistribution2DBase::PersistanceFieldId);

const OSG::BitVector  PerlinNoiseDistribution2DBase::OctavesFieldMask = 
    (TypeTraits<BitVector>::One << PerlinNoiseDistribution2DBase::OctavesFieldId);

const OSG::BitVector  PerlinNoiseDistribution2DBase::AmplitudeFieldMask = 
    (TypeTraits<BitVector>::One << PerlinNoiseDistribution2DBase::AmplitudeFieldId);

const OSG::BitVector  PerlinNoiseDistribution2DBase::InterpolationTypeFieldMask = 
    (TypeTraits<BitVector>::One << PerlinNoiseDistribution2DBase::InterpolationTypeFieldId);

const OSG::BitVector PerlinNoiseDistribution2DBase::MTInfluenceMask = 
    (Inherited::MTInfluenceMask) | 
    (static_cast<BitVector>(0x0) << Inherited::NextFieldId); 


// Field descriptions

/*! \var Real32          PerlinNoiseDistribution2DBase::_sfFrequency
    
*/
/*! \var Real32          PerlinNoiseDistribution2DBase::_sfPersistance
    
*/
/*! \var UInt32          PerlinNoiseDistribution2DBase::_sfOctaves
    
*/
/*! \var Real32          PerlinNoiseDistribution2DBase::_sfAmplitude
    
*/
/*! \var UInt32          PerlinNoiseDistribution2DBase::_sfInterpolationType
    This enum is used to determine the interpolation method used for the distribution 	COSINE uses cosine interpolation 	LINEAR uses linear interpolation
*/

//! PerlinNoiseDistribution2D description

FieldDescription *PerlinNoiseDistribution2DBase::_desc[] = 
{
    new FieldDescription(SFReal32::getClassType(), 
                     "Frequency", 
                     FrequencyFieldId, FrequencyFieldMask,
                     false,
                     (FieldAccessMethod) &PerlinNoiseDistribution2DBase::getSFFrequency),
    new FieldDescription(SFReal32::getClassType(), 
                     "Persistance", 
                     PersistanceFieldId, PersistanceFieldMask,
                     false,
                     (FieldAccessMethod) &PerlinNoiseDistribution2DBase::getSFPersistance),
    new FieldDescription(SFUInt32::getClassType(), 
                     "Octaves", 
                     OctavesFieldId, OctavesFieldMask,
                     false,
                     (FieldAccessMethod) &PerlinNoiseDistribution2DBase::getSFOctaves),
    new FieldDescription(SFReal32::getClassType(), 
                     "Amplitude", 
                     AmplitudeFieldId, AmplitudeFieldMask,
                     false,
                     (FieldAccessMethod) &PerlinNoiseDistribution2DBase::getSFAmplitude),
    new FieldDescription(SFUInt32::getClassType(), 
                     "InterpolationType", 
                     InterpolationTypeFieldId, InterpolationTypeFieldMask,
                     false,
                     (FieldAccessMethod) &PerlinNoiseDistribution2DBase::getSFInterpolationType)
};


FieldContainerType PerlinNoiseDistribution2DBase::_type(
    "PerlinNoiseDistribution2D",
    "Function",
    NULL,
    (PrototypeCreateF) &PerlinNoiseDistribution2DBase::createEmpty,
    PerlinNoiseDistribution2D::initMethod,
    _desc,
    sizeof(_desc));

//OSG_FIELD_CONTAINER_DEF(PerlinNoiseDistribution2DBase, PerlinNoiseDistribution2DPtr)

/*------------------------------ get -----------------------------------*/

FieldContainerType &PerlinNoiseDistribution2DBase::getType(void) 
{
    return _type; 
} 

const FieldContainerType &PerlinNoiseDistribution2DBase::getType(void) const 
{
    return _type;
} 


FieldContainerPtr PerlinNoiseDistribution2DBase::shallowCopy(void) const 
{ 
    PerlinNoiseDistribution2DPtr returnValue; 

    newPtr(returnValue, dynamic_cast<const PerlinNoiseDistribution2D *>(this)); 

    return returnValue; 
}

UInt32 PerlinNoiseDistribution2DBase::getContainerSize(void) const 
{ 
    return sizeof(PerlinNoiseDistribution2D); 
}


#if !defined(OSG_FIXED_MFIELDSYNC)
void PerlinNoiseDistribution2DBase::executeSync(      FieldContainer &other,
                                    const BitVector      &whichField)
{
    this->executeSyncImpl((PerlinNoiseDistribution2DBase *) &other, whichField);
}
#else
void PerlinNoiseDistribution2DBase::executeSync(      FieldContainer &other,
                                    const BitVector      &whichField,                                    const SyncInfo       &sInfo     )
{
    this->executeSyncImpl((PerlinNoiseDistribution2DBase *) &other, whichField, sInfo);
}
void PerlinNoiseDistribution2DBase::execBeginEdit(const BitVector &whichField, 
                                            UInt32     uiAspect,
                                            UInt32     uiContainerSize) 
{
    this->execBeginEditImpl(whichField, uiAspect, uiContainerSize);
}

void PerlinNoiseDistribution2DBase::onDestroyAspect(UInt32 uiId, UInt32 uiAspect)
{
    Inherited::onDestroyAspect(uiId, uiAspect);

}
#endif

/*------------------------- constructors ----------------------------------*/

#ifdef OSG_WIN32_ICL
#pragma warning (disable : 383)
#endif

PerlinNoiseDistribution2DBase::PerlinNoiseDistribution2DBase(void) :
    _sfFrequency              (Real32(1.0f)), 
    _sfPersistance            (Real32(0.25)), 
    _sfOctaves                (UInt32(4)), 
    _sfAmplitude              (Real32(1.0)), 
    _sfInterpolationType      (UInt32(PerlinNoiseDistribution2D::COSINE)), 
    Inherited() 
{
}

#ifdef OSG_WIN32_ICL
#pragma warning (default : 383)
#endif

PerlinNoiseDistribution2DBase::PerlinNoiseDistribution2DBase(const PerlinNoiseDistribution2DBase &source) :
    _sfFrequency              (source._sfFrequency              ), 
    _sfPersistance            (source._sfPersistance            ), 
    _sfOctaves                (source._sfOctaves                ), 
    _sfAmplitude              (source._sfAmplitude              ), 
    _sfInterpolationType      (source._sfInterpolationType      ), 
    Inherited                 (source)
{
}

/*-------------------------- destructors ----------------------------------*/

PerlinNoiseDistribution2DBase::~PerlinNoiseDistribution2DBase(void)
{
}

/*------------------------------ access -----------------------------------*/

UInt32 PerlinNoiseDistribution2DBase::getBinSize(const BitVector &whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (FrequencyFieldMask & whichField))
    {
        returnValue += _sfFrequency.getBinSize();
    }

    if(FieldBits::NoField != (PersistanceFieldMask & whichField))
    {
        returnValue += _sfPersistance.getBinSize();
    }

    if(FieldBits::NoField != (OctavesFieldMask & whichField))
    {
        returnValue += _sfOctaves.getBinSize();
    }

    if(FieldBits::NoField != (AmplitudeFieldMask & whichField))
    {
        returnValue += _sfAmplitude.getBinSize();
    }

    if(FieldBits::NoField != (InterpolationTypeFieldMask & whichField))
    {
        returnValue += _sfInterpolationType.getBinSize();
    }


    return returnValue;
}

void PerlinNoiseDistribution2DBase::copyToBin(      BinaryDataHandler &pMem,
                                  const BitVector         &whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (FrequencyFieldMask & whichField))
    {
        _sfFrequency.copyToBin(pMem);
    }

    if(FieldBits::NoField != (PersistanceFieldMask & whichField))
    {
        _sfPersistance.copyToBin(pMem);
    }

    if(FieldBits::NoField != (OctavesFieldMask & whichField))
    {
        _sfOctaves.copyToBin(pMem);
    }

    if(FieldBits::NoField != (AmplitudeFieldMask & whichField))
    {
        _sfAmplitude.copyToBin(pMem);
    }

    if(FieldBits::NoField != (InterpolationTypeFieldMask & whichField))
    {
        _sfInterpolationType.copyToBin(pMem);
    }


}

void PerlinNoiseDistribution2DBase::copyFromBin(      BinaryDataHandler &pMem,
                                    const BitVector    &whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (FrequencyFieldMask & whichField))
    {
        _sfFrequency.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (PersistanceFieldMask & whichField))
    {
        _sfPersistance.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (OctavesFieldMask & whichField))
    {
        _sfOctaves.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (AmplitudeFieldMask & whichField))
    {
        _sfAmplitude.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (InterpolationTypeFieldMask & whichField))
    {
        _sfInterpolationType.copyFromBin(pMem);
    }


}

#if !defined(OSG_FIXED_MFIELDSYNC)
void PerlinNoiseDistribution2DBase::executeSyncImpl(      PerlinNoiseDistribution2DBase *pOther,
                                        const BitVector         &whichField)
{

    Inherited::executeSyncImpl(pOther, whichField);

    if(FieldBits::NoField != (FrequencyFieldMask & whichField))
        _sfFrequency.syncWith(pOther->_sfFrequency);

    if(FieldBits::NoField != (PersistanceFieldMask & whichField))
        _sfPersistance.syncWith(pOther->_sfPersistance);

    if(FieldBits::NoField != (OctavesFieldMask & whichField))
        _sfOctaves.syncWith(pOther->_sfOctaves);

    if(FieldBits::NoField != (AmplitudeFieldMask & whichField))
        _sfAmplitude.syncWith(pOther->_sfAmplitude);

    if(FieldBits::NoField != (InterpolationTypeFieldMask & whichField))
        _sfInterpolationType.syncWith(pOther->_sfInterpolationType);


}
#else
void PerlinNoiseDistribution2DBase::executeSyncImpl(      PerlinNoiseDistribution2DBase *pOther,
                                        const BitVector         &whichField,
                                        const SyncInfo          &sInfo      )
{

    Inherited::executeSyncImpl(pOther, whichField, sInfo);

    if(FieldBits::NoField != (FrequencyFieldMask & whichField))
        _sfFrequency.syncWith(pOther->_sfFrequency);

    if(FieldBits::NoField != (PersistanceFieldMask & whichField))
        _sfPersistance.syncWith(pOther->_sfPersistance);

    if(FieldBits::NoField != (OctavesFieldMask & whichField))
        _sfOctaves.syncWith(pOther->_sfOctaves);

    if(FieldBits::NoField != (AmplitudeFieldMask & whichField))
        _sfAmplitude.syncWith(pOther->_sfAmplitude);

    if(FieldBits::NoField != (InterpolationTypeFieldMask & whichField))
        _sfInterpolationType.syncWith(pOther->_sfInterpolationType);



}

void PerlinNoiseDistribution2DBase::execBeginEditImpl (const BitVector &whichField, 
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
DataType FieldDataTraits<PerlinNoiseDistribution2DPtr>::_type("PerlinNoiseDistribution2DPtr", "FunctionPtr");
#endif

OSG_DLLEXPORT_SFIELD_DEF1(PerlinNoiseDistribution2DPtr, OSG_DYNAMICSLIB_DLLTMPLMAPPING);
OSG_DLLEXPORT_MFIELD_DEF1(PerlinNoiseDistribution2DPtr, OSG_DYNAMICSLIB_DLLTMPLMAPPING);


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
    static Char8 cvsid_hpp       [] = OSGPERLINNOISEDISTRIBUTION2DBASE_HEADER_CVSID;
    static Char8 cvsid_inl       [] = OSGPERLINNOISEDISTRIBUTION2DBASE_INLINE_CVSID;

    static Char8 cvsid_fields_hpp[] = OSGPERLINNOISEDISTRIBUTION2DFIELDS_HEADER_CVSID;
}

OSG_END_NAMESPACE


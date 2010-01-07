/*---------------------------------------------------------------------------*\
 *                     OpenSG ToolBox Particle System                        *
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
 **     class TurbulenceParticleAffector!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#define OSG_COMPILETURBULENCEPARTICLEAFFECTORINST

#include <stdlib.h>
#include <stdio.h>

#include <OpenSG/OSGConfig.h>

#include "OSGTurbulenceParticleAffectorBase.h"
#include "OSGTurbulenceParticleAffector.h"

#include <Distributions/1D/OSGPerlinNoiseDistribution1D.h>   // InterpolationType default header

OSG_BEGIN_NAMESPACE

const OSG::BitVector  TurbulenceParticleAffectorBase::PerlinDistributionFieldMask = 
    (TypeTraits<BitVector>::One << TurbulenceParticleAffectorBase::PerlinDistributionFieldId);

const OSG::BitVector  TurbulenceParticleAffectorBase::AmplitudeFieldMask = 
    (TypeTraits<BitVector>::One << TurbulenceParticleAffectorBase::AmplitudeFieldId);

const OSG::BitVector  TurbulenceParticleAffectorBase::InterpolationTypeFieldMask = 
    (TypeTraits<BitVector>::One << TurbulenceParticleAffectorBase::InterpolationTypeFieldId);

const OSG::BitVector  TurbulenceParticleAffectorBase::PhaseFieldMask = 
    (TypeTraits<BitVector>::One << TurbulenceParticleAffectorBase::PhaseFieldId);

const OSG::BitVector  TurbulenceParticleAffectorBase::PersistanceFieldMask = 
    (TypeTraits<BitVector>::One << TurbulenceParticleAffectorBase::PersistanceFieldId);

const OSG::BitVector  TurbulenceParticleAffectorBase::FrequencyFieldMask = 
    (TypeTraits<BitVector>::One << TurbulenceParticleAffectorBase::FrequencyFieldId);

const OSG::BitVector  TurbulenceParticleAffectorBase::OctavesFieldMask = 
    (TypeTraits<BitVector>::One << TurbulenceParticleAffectorBase::OctavesFieldId);

const OSG::BitVector  TurbulenceParticleAffectorBase::BeaconFieldMask = 
    (TypeTraits<BitVector>::One << TurbulenceParticleAffectorBase::BeaconFieldId);

const OSG::BitVector  TurbulenceParticleAffectorBase::AttenuationFieldMask = 
    (TypeTraits<BitVector>::One << TurbulenceParticleAffectorBase::AttenuationFieldId);

const OSG::BitVector  TurbulenceParticleAffectorBase::MaxDistanceFieldMask = 
    (TypeTraits<BitVector>::One << TurbulenceParticleAffectorBase::MaxDistanceFieldId);

const OSG::BitVector TurbulenceParticleAffectorBase::MTInfluenceMask = 
    (Inherited::MTInfluenceMask) | 
    (static_cast<BitVector>(0x0) << Inherited::NextFieldId); 


// Field descriptions

/*! \var PerlinNoiseDistribution1DPtr TurbulenceParticleAffectorBase::_sfPerlinDistribution
    
*/
/*! \var Real32          TurbulenceParticleAffectorBase::_sfAmplitude
    
*/
/*! \var UInt32          TurbulenceParticleAffectorBase::_sfInterpolationType
    
*/
/*! \var Vec3f           TurbulenceParticleAffectorBase::_sfPhase
    
*/
/*! \var Real32          TurbulenceParticleAffectorBase::_sfPersistance
    
*/
/*! \var Real32          TurbulenceParticleAffectorBase::_sfFrequency
    
*/
/*! \var UInt32          TurbulenceParticleAffectorBase::_sfOctaves
    
*/
/*! \var NodePtr         TurbulenceParticleAffectorBase::_sfBeacon
    
*/
/*! \var Real32          TurbulenceParticleAffectorBase::_sfAttenuation
    
*/
/*! \var Real32          TurbulenceParticleAffectorBase::_sfMaxDistance
    
*/

//! TurbulenceParticleAffector description

FieldDescription *TurbulenceParticleAffectorBase::_desc[] = 
{
    new FieldDescription(SFPerlinNoiseDistribution1DPtr::getClassType(), 
                     "PerlinDistribution", 
                     PerlinDistributionFieldId, PerlinDistributionFieldMask,
                     false,
                     reinterpret_cast<FieldAccessMethod>(&TurbulenceParticleAffectorBase::editSFPerlinDistribution)),
    new FieldDescription(SFReal32::getClassType(), 
                     "Amplitude", 
                     AmplitudeFieldId, AmplitudeFieldMask,
                     false,
                     reinterpret_cast<FieldAccessMethod>(&TurbulenceParticleAffectorBase::editSFAmplitude)),
    new FieldDescription(SFUInt32::getClassType(), 
                     "InterpolationType", 
                     InterpolationTypeFieldId, InterpolationTypeFieldMask,
                     false,
                     reinterpret_cast<FieldAccessMethod>(&TurbulenceParticleAffectorBase::editSFInterpolationType)),
    new FieldDescription(SFVec3f::getClassType(), 
                     "Phase", 
                     PhaseFieldId, PhaseFieldMask,
                     false,
                     reinterpret_cast<FieldAccessMethod>(&TurbulenceParticleAffectorBase::editSFPhase)),
    new FieldDescription(SFReal32::getClassType(), 
                     "Persistance", 
                     PersistanceFieldId, PersistanceFieldMask,
                     false,
                     reinterpret_cast<FieldAccessMethod>(&TurbulenceParticleAffectorBase::editSFPersistance)),
    new FieldDescription(SFReal32::getClassType(), 
                     "Frequency", 
                     FrequencyFieldId, FrequencyFieldMask,
                     false,
                     reinterpret_cast<FieldAccessMethod>(&TurbulenceParticleAffectorBase::editSFFrequency)),
    new FieldDescription(SFUInt32::getClassType(), 
                     "Octaves", 
                     OctavesFieldId, OctavesFieldMask,
                     false,
                     reinterpret_cast<FieldAccessMethod>(&TurbulenceParticleAffectorBase::editSFOctaves)),
    new FieldDescription(SFNodePtr::getClassType(), 
                     "Beacon", 
                     BeaconFieldId, BeaconFieldMask,
                     false,
                     reinterpret_cast<FieldAccessMethod>(&TurbulenceParticleAffectorBase::editSFBeacon)),
    new FieldDescription(SFReal32::getClassType(), 
                     "Attenuation", 
                     AttenuationFieldId, AttenuationFieldMask,
                     false,
                     reinterpret_cast<FieldAccessMethod>(&TurbulenceParticleAffectorBase::editSFAttenuation)),
    new FieldDescription(SFReal32::getClassType(), 
                     "MaxDistance", 
                     MaxDistanceFieldId, MaxDistanceFieldMask,
                     false,
                     reinterpret_cast<FieldAccessMethod>(&TurbulenceParticleAffectorBase::editSFMaxDistance))
};


FieldContainerType TurbulenceParticleAffectorBase::_type(
    "TurbulenceParticleAffector",
    "ParticleAffector",
    NULL,
    reinterpret_cast<PrototypeCreateF>(&TurbulenceParticleAffectorBase::createEmpty),
    TurbulenceParticleAffector::initMethod,
    _desc,
    sizeof(_desc));

//OSG_FIELD_CONTAINER_DEF(TurbulenceParticleAffectorBase, TurbulenceParticleAffectorPtr)

/*------------------------------ get -----------------------------------*/

FieldContainerType &TurbulenceParticleAffectorBase::getType(void) 
{
    return _type; 
} 

const FieldContainerType &TurbulenceParticleAffectorBase::getType(void) const 
{
    return _type;
} 


FieldContainerPtr TurbulenceParticleAffectorBase::shallowCopy(void) const 
{ 
    TurbulenceParticleAffectorPtr returnValue; 

    newPtr(returnValue, dynamic_cast<const TurbulenceParticleAffector *>(this)); 

    return returnValue; 
}

UInt32 TurbulenceParticleAffectorBase::getContainerSize(void) const 
{ 
    return sizeof(TurbulenceParticleAffector); 
}


#if !defined(OSG_FIXED_MFIELDSYNC)
void TurbulenceParticleAffectorBase::executeSync(      FieldContainer &other,
                                    const BitVector      &whichField)
{
    this->executeSyncImpl(static_cast<TurbulenceParticleAffectorBase *>(&other),
                          whichField);
}
#else
void TurbulenceParticleAffectorBase::executeSync(      FieldContainer &other,
                                    const BitVector      &whichField,                                    const SyncInfo       &sInfo     )
{
    this->executeSyncImpl((TurbulenceParticleAffectorBase *) &other, whichField, sInfo);
}
void TurbulenceParticleAffectorBase::execBeginEdit(const BitVector &whichField, 
                                            UInt32     uiAspect,
                                            UInt32     uiContainerSize) 
{
    this->execBeginEditImpl(whichField, uiAspect, uiContainerSize);
}

void TurbulenceParticleAffectorBase::onDestroyAspect(UInt32 uiId, UInt32 uiAspect)
{
    Inherited::onDestroyAspect(uiId, uiAspect);

}
#endif

/*------------------------- constructors ----------------------------------*/

#ifdef OSG_WIN32_ICL
#pragma warning (disable : 383)
#endif

TurbulenceParticleAffectorBase::TurbulenceParticleAffectorBase(void) :
    _sfPerlinDistribution     (PerlinNoiseDistribution1DPtr(NullFC)), 
    _sfAmplitude              (Real32(3.000)), 
    _sfInterpolationType      (UInt32(PerlinNoiseDistribution1D::LINEAR)), 
    _sfPhase                  (Vec3f(0.0,0.0,0.0)), 
    _sfPersistance            (Real32(0.25f)), 
    _sfFrequency              (Real32(1.0f)), 
    _sfOctaves                (UInt32(4)), 
    _sfBeacon                 (NodePtr(NullFC)), 
    _sfAttenuation            (Real32(1.0)), 
    _sfMaxDistance            (Real32(-1.0f)), 
    Inherited() 
{
}

#ifdef OSG_WIN32_ICL
#pragma warning (default : 383)
#endif

TurbulenceParticleAffectorBase::TurbulenceParticleAffectorBase(const TurbulenceParticleAffectorBase &source) :
    _sfPerlinDistribution     (source._sfPerlinDistribution     ), 
    _sfAmplitude              (source._sfAmplitude              ), 
    _sfInterpolationType      (source._sfInterpolationType      ), 
    _sfPhase                  (source._sfPhase                  ), 
    _sfPersistance            (source._sfPersistance            ), 
    _sfFrequency              (source._sfFrequency              ), 
    _sfOctaves                (source._sfOctaves                ), 
    _sfBeacon                 (source._sfBeacon                 ), 
    _sfAttenuation            (source._sfAttenuation            ), 
    _sfMaxDistance            (source._sfMaxDistance            ), 
    Inherited                 (source)
{
}

/*-------------------------- destructors ----------------------------------*/

TurbulenceParticleAffectorBase::~TurbulenceParticleAffectorBase(void)
{
}

/*------------------------------ access -----------------------------------*/

UInt32 TurbulenceParticleAffectorBase::getBinSize(const BitVector &whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (PerlinDistributionFieldMask & whichField))
    {
        returnValue += _sfPerlinDistribution.getBinSize();
    }

    if(FieldBits::NoField != (AmplitudeFieldMask & whichField))
    {
        returnValue += _sfAmplitude.getBinSize();
    }

    if(FieldBits::NoField != (InterpolationTypeFieldMask & whichField))
    {
        returnValue += _sfInterpolationType.getBinSize();
    }

    if(FieldBits::NoField != (PhaseFieldMask & whichField))
    {
        returnValue += _sfPhase.getBinSize();
    }

    if(FieldBits::NoField != (PersistanceFieldMask & whichField))
    {
        returnValue += _sfPersistance.getBinSize();
    }

    if(FieldBits::NoField != (FrequencyFieldMask & whichField))
    {
        returnValue += _sfFrequency.getBinSize();
    }

    if(FieldBits::NoField != (OctavesFieldMask & whichField))
    {
        returnValue += _sfOctaves.getBinSize();
    }

    if(FieldBits::NoField != (BeaconFieldMask & whichField))
    {
        returnValue += _sfBeacon.getBinSize();
    }

    if(FieldBits::NoField != (AttenuationFieldMask & whichField))
    {
        returnValue += _sfAttenuation.getBinSize();
    }

    if(FieldBits::NoField != (MaxDistanceFieldMask & whichField))
    {
        returnValue += _sfMaxDistance.getBinSize();
    }


    return returnValue;
}

void TurbulenceParticleAffectorBase::copyToBin(      BinaryDataHandler &pMem,
                                  const BitVector         &whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (PerlinDistributionFieldMask & whichField))
    {
        _sfPerlinDistribution.copyToBin(pMem);
    }

    if(FieldBits::NoField != (AmplitudeFieldMask & whichField))
    {
        _sfAmplitude.copyToBin(pMem);
    }

    if(FieldBits::NoField != (InterpolationTypeFieldMask & whichField))
    {
        _sfInterpolationType.copyToBin(pMem);
    }

    if(FieldBits::NoField != (PhaseFieldMask & whichField))
    {
        _sfPhase.copyToBin(pMem);
    }

    if(FieldBits::NoField != (PersistanceFieldMask & whichField))
    {
        _sfPersistance.copyToBin(pMem);
    }

    if(FieldBits::NoField != (FrequencyFieldMask & whichField))
    {
        _sfFrequency.copyToBin(pMem);
    }

    if(FieldBits::NoField != (OctavesFieldMask & whichField))
    {
        _sfOctaves.copyToBin(pMem);
    }

    if(FieldBits::NoField != (BeaconFieldMask & whichField))
    {
        _sfBeacon.copyToBin(pMem);
    }

    if(FieldBits::NoField != (AttenuationFieldMask & whichField))
    {
        _sfAttenuation.copyToBin(pMem);
    }

    if(FieldBits::NoField != (MaxDistanceFieldMask & whichField))
    {
        _sfMaxDistance.copyToBin(pMem);
    }


}

void TurbulenceParticleAffectorBase::copyFromBin(      BinaryDataHandler &pMem,
                                    const BitVector    &whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (PerlinDistributionFieldMask & whichField))
    {
        _sfPerlinDistribution.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (AmplitudeFieldMask & whichField))
    {
        _sfAmplitude.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (InterpolationTypeFieldMask & whichField))
    {
        _sfInterpolationType.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (PhaseFieldMask & whichField))
    {
        _sfPhase.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (PersistanceFieldMask & whichField))
    {
        _sfPersistance.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (FrequencyFieldMask & whichField))
    {
        _sfFrequency.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (OctavesFieldMask & whichField))
    {
        _sfOctaves.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (BeaconFieldMask & whichField))
    {
        _sfBeacon.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (AttenuationFieldMask & whichField))
    {
        _sfAttenuation.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (MaxDistanceFieldMask & whichField))
    {
        _sfMaxDistance.copyFromBin(pMem);
    }


}

#if !defined(OSG_FIXED_MFIELDSYNC)
void TurbulenceParticleAffectorBase::executeSyncImpl(      TurbulenceParticleAffectorBase *pOther,
                                        const BitVector         &whichField)
{

    Inherited::executeSyncImpl(pOther, whichField);

    if(FieldBits::NoField != (PerlinDistributionFieldMask & whichField))
        _sfPerlinDistribution.syncWith(pOther->_sfPerlinDistribution);

    if(FieldBits::NoField != (AmplitudeFieldMask & whichField))
        _sfAmplitude.syncWith(pOther->_sfAmplitude);

    if(FieldBits::NoField != (InterpolationTypeFieldMask & whichField))
        _sfInterpolationType.syncWith(pOther->_sfInterpolationType);

    if(FieldBits::NoField != (PhaseFieldMask & whichField))
        _sfPhase.syncWith(pOther->_sfPhase);

    if(FieldBits::NoField != (PersistanceFieldMask & whichField))
        _sfPersistance.syncWith(pOther->_sfPersistance);

    if(FieldBits::NoField != (FrequencyFieldMask & whichField))
        _sfFrequency.syncWith(pOther->_sfFrequency);

    if(FieldBits::NoField != (OctavesFieldMask & whichField))
        _sfOctaves.syncWith(pOther->_sfOctaves);

    if(FieldBits::NoField != (BeaconFieldMask & whichField))
        _sfBeacon.syncWith(pOther->_sfBeacon);

    if(FieldBits::NoField != (AttenuationFieldMask & whichField))
        _sfAttenuation.syncWith(pOther->_sfAttenuation);

    if(FieldBits::NoField != (MaxDistanceFieldMask & whichField))
        _sfMaxDistance.syncWith(pOther->_sfMaxDistance);


}
#else
void TurbulenceParticleAffectorBase::executeSyncImpl(      TurbulenceParticleAffectorBase *pOther,
                                        const BitVector         &whichField,
                                        const SyncInfo          &sInfo      )
{

    Inherited::executeSyncImpl(pOther, whichField, sInfo);

    if(FieldBits::NoField != (PerlinDistributionFieldMask & whichField))
        _sfPerlinDistribution.syncWith(pOther->_sfPerlinDistribution);

    if(FieldBits::NoField != (AmplitudeFieldMask & whichField))
        _sfAmplitude.syncWith(pOther->_sfAmplitude);

    if(FieldBits::NoField != (InterpolationTypeFieldMask & whichField))
        _sfInterpolationType.syncWith(pOther->_sfInterpolationType);

    if(FieldBits::NoField != (PhaseFieldMask & whichField))
        _sfPhase.syncWith(pOther->_sfPhase);

    if(FieldBits::NoField != (PersistanceFieldMask & whichField))
        _sfPersistance.syncWith(pOther->_sfPersistance);

    if(FieldBits::NoField != (FrequencyFieldMask & whichField))
        _sfFrequency.syncWith(pOther->_sfFrequency);

    if(FieldBits::NoField != (OctavesFieldMask & whichField))
        _sfOctaves.syncWith(pOther->_sfOctaves);

    if(FieldBits::NoField != (BeaconFieldMask & whichField))
        _sfBeacon.syncWith(pOther->_sfBeacon);

    if(FieldBits::NoField != (AttenuationFieldMask & whichField))
        _sfAttenuation.syncWith(pOther->_sfAttenuation);

    if(FieldBits::NoField != (MaxDistanceFieldMask & whichField))
        _sfMaxDistance.syncWith(pOther->_sfMaxDistance);



}

void TurbulenceParticleAffectorBase::execBeginEditImpl (const BitVector &whichField, 
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
DataType FieldDataTraits<TurbulenceParticleAffectorPtr>::_type("TurbulenceParticleAffectorPtr", "ParticleAffectorPtr");
#endif

OSG_DLLEXPORT_SFIELD_DEF1(TurbulenceParticleAffectorPtr, OSG_PARTICLESYSTEMLIB_DLLTMPLMAPPING);
OSG_DLLEXPORT_MFIELD_DEF1(TurbulenceParticleAffectorPtr, OSG_PARTICLESYSTEMLIB_DLLTMPLMAPPING);


OSG_END_NAMESPACE

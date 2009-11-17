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
 **     class AnimationGroup!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#define OSG_COMPILEANIMATIONGROUPINST

#include <stdlib.h>
#include <stdio.h>

#include <OpenSG/OSGConfig.h>

#include "OSGAnimationGroupBase.h"
#include "OSGAnimationGroup.h"


OSG_BEGIN_NAMESPACE

const OSG::BitVector  AnimationGroupBase::AnimationsFieldMask = 
    (TypeTraits<BitVector>::One << AnimationGroupBase::AnimationsFieldId);

const OSG::BitVector  AnimationGroupBase::ScaleFieldMask = 
    (TypeTraits<BitVector>::One << AnimationGroupBase::ScaleFieldId);

const OSG::BitVector  AnimationGroupBase::OffsetFieldMask = 
    (TypeTraits<BitVector>::One << AnimationGroupBase::OffsetFieldId);

const OSG::BitVector  AnimationGroupBase::EventProducerFieldMask =
    (TypeTraits<BitVector>::One << AnimationGroupBase::EventProducerFieldId);

const OSG::BitVector AnimationGroupBase::MTInfluenceMask = 
    (Inherited::MTInfluenceMask) | 
    (static_cast<BitVector>(0x0) << Inherited::NextFieldId); 


// Field descriptions

/*! \var AnimationPtr    AnimationGroupBase::_mfAnimations
    
*/
/*! \var Real32          AnimationGroupBase::_sfScale
    
*/
/*! \var Real32          AnimationGroupBase::_sfOffset
    
*/

//! AnimationGroup description

FieldDescription *AnimationGroupBase::_desc[] = 
{
    new FieldDescription(MFAnimationPtr::getClassType(), 
                     "Animations", 
                     AnimationsFieldId, AnimationsFieldMask,
                     false,
                     reinterpret_cast<FieldAccessMethod>(&AnimationGroupBase::editMFAnimations)),
    new FieldDescription(SFReal32::getClassType(), 
                     "Scale", 
                     ScaleFieldId, ScaleFieldMask,
                     false,
                     reinterpret_cast<FieldAccessMethod>(&AnimationGroupBase::editSFScale)),
    new FieldDescription(SFReal32::getClassType(), 
                     "Offset", 
                     OffsetFieldId, OffsetFieldMask,
                     false,
                     reinterpret_cast<FieldAccessMethod>(&AnimationGroupBase::editSFOffset))
    , 
    new FieldDescription(SFEventProducerPtr::getClassType(), 
                     "EventProducer", 
                     EventProducerFieldId,EventProducerFieldMask,
                     true,
                     reinterpret_cast<FieldAccessMethod>(&AnimationGroupBase::editSFEventProducer))
};


FieldContainerType AnimationGroupBase::_type(
    "AnimationGroup",
    "AttachmentContainer",
    NULL,
    reinterpret_cast<PrototypeCreateF>(&AnimationGroupBase::createEmpty),
    AnimationGroup::initMethod,
    _desc,
    sizeof(_desc));

//! AnimationGroup Produced Methods

MethodDescription *AnimationGroupBase::_methodDesc[] =
{
    new MethodDescription("AnimationsStarted", 
                     AnimationsStartedMethodId, 
                     SFEventPtr::getClassType(),
                     FunctorAccessMethod()),
    new MethodDescription("AnimationsStopped", 
                     AnimationsStoppedMethodId, 
                     SFEventPtr::getClassType(),
                     FunctorAccessMethod()),
    new MethodDescription("AnimationsPaused", 
                     AnimationsPausedMethodId, 
                     SFEventPtr::getClassType(),
                     FunctorAccessMethod()),
    new MethodDescription("AnimationsUnpaused", 
                     AnimationsUnpausedMethodId, 
                     SFEventPtr::getClassType(),
                     FunctorAccessMethod()),
    new MethodDescription("AnimationsEnded", 
                     AnimationsEndedMethodId, 
                     SFEventPtr::getClassType(),
                     FunctorAccessMethod()),
    new MethodDescription("AnimationsCycled", 
                     AnimationsCycledMethodId, 
                     SFEventPtr::getClassType(),
                     FunctorAccessMethod())
};

EventProducerType AnimationGroupBase::_producerType(
    "AnimationGroupProducerType",
    "EventProducerType",
    NULL,
    InitEventProducerFunctor(),
    _methodDesc,
    sizeof(_methodDesc));
//OSG_FIELD_CONTAINER_DEF(AnimationGroupBase, AnimationGroupPtr)

/*------------------------------ get -----------------------------------*/

FieldContainerType &AnimationGroupBase::getType(void) 
{
    return _type; 
} 

const FieldContainerType &AnimationGroupBase::getType(void) const 
{
    return _type;
} 

const EventProducerType &AnimationGroupBase::getProducerType(void) const
{
    return _producerType;
}


FieldContainerPtr AnimationGroupBase::shallowCopy(void) const 
{ 
    AnimationGroupPtr returnValue; 

    newPtr(returnValue, dynamic_cast<const AnimationGroup *>(this)); 

    return returnValue; 
}

UInt32 AnimationGroupBase::getContainerSize(void) const 
{ 
    return sizeof(AnimationGroup); 
}


#if !defined(OSG_FIXED_MFIELDSYNC)
void AnimationGroupBase::executeSync(      FieldContainer &other,
                                    const BitVector      &whichField)
{
    this->executeSyncImpl(static_cast<AnimationGroupBase *>(&other),
                          whichField);
}
#else
void AnimationGroupBase::executeSync(      FieldContainer &other,
                                    const BitVector      &whichField,                                    const SyncInfo       &sInfo     )
{
    this->executeSyncImpl((AnimationGroupBase *) &other, whichField, sInfo);
}
void AnimationGroupBase::execBeginEdit(const BitVector &whichField, 
                                            UInt32     uiAspect,
                                            UInt32     uiContainerSize) 
{
    this->execBeginEditImpl(whichField, uiAspect, uiContainerSize);
}

void AnimationGroupBase::onDestroyAspect(UInt32 uiId, UInt32 uiAspect)
{
    Inherited::onDestroyAspect(uiId, uiAspect);

    _mfAnimations.terminateShare(uiAspect, this->getContainerSize());
}
#endif

/*------------------------- constructors ----------------------------------*/

#ifdef OSG_WIN32_ICL
#pragma warning (disable : 383)
#endif

AnimationGroupBase::AnimationGroupBase(void) :
    _Producer(&getProducerType()),
    _mfAnimations             (), 
    _sfScale                  (Real32(1.0)), 
    _sfOffset                 (Real32(0.0)), 
    _sfEventProducer(&_Producer),
    Inherited() 
{
}

#ifdef OSG_WIN32_ICL
#pragma warning (default : 383)
#endif

AnimationGroupBase::AnimationGroupBase(const AnimationGroupBase &source) :
    _Producer(&source.getProducerType()),
    _mfAnimations             (source._mfAnimations             ), 
    _sfScale                  (source._sfScale                  ), 
    _sfOffset                 (source._sfOffset                 ), 
    _sfEventProducer(&_Producer),
    Inherited                 (source)
{
}

/*-------------------------- destructors ----------------------------------*/

AnimationGroupBase::~AnimationGroupBase(void)
{
}

/*------------------------------ access -----------------------------------*/

UInt32 AnimationGroupBase::getBinSize(const BitVector &whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (AnimationsFieldMask & whichField))
    {
        returnValue += _mfAnimations.getBinSize();
    }

    if(FieldBits::NoField != (ScaleFieldMask & whichField))
    {
        returnValue += _sfScale.getBinSize();
    }

    if(FieldBits::NoField != (OffsetFieldMask & whichField))
    {
        returnValue += _sfOffset.getBinSize();
    }

    if(FieldBits::NoField != (EventProducerFieldMask & whichField))
    {
        returnValue += _sfEventProducer.getBinSize();
    }


    return returnValue;
}

void AnimationGroupBase::copyToBin(      BinaryDataHandler &pMem,
                                  const BitVector         &whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (AnimationsFieldMask & whichField))
    {
        _mfAnimations.copyToBin(pMem);
    }

    if(FieldBits::NoField != (ScaleFieldMask & whichField))
    {
        _sfScale.copyToBin(pMem);
    }

    if(FieldBits::NoField != (OffsetFieldMask & whichField))
    {
        _sfOffset.copyToBin(pMem);
    }

    if(FieldBits::NoField != (EventProducerFieldMask & whichField))
    {
        _sfEventProducer.copyToBin(pMem);
    }


}

void AnimationGroupBase::copyFromBin(      BinaryDataHandler &pMem,
                                    const BitVector    &whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (AnimationsFieldMask & whichField))
    {
        _mfAnimations.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (ScaleFieldMask & whichField))
    {
        _sfScale.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (OffsetFieldMask & whichField))
    {
        _sfOffset.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (EventProducerFieldMask & whichField))
    {
        _sfEventProducer.copyFromBin(pMem);
    }


}

#if !defined(OSG_FIXED_MFIELDSYNC)
void AnimationGroupBase::executeSyncImpl(      AnimationGroupBase *pOther,
                                        const BitVector         &whichField)
{

    Inherited::executeSyncImpl(pOther, whichField);

    if(FieldBits::NoField != (AnimationsFieldMask & whichField))
        _mfAnimations.syncWith(pOther->_mfAnimations);

    if(FieldBits::NoField != (ScaleFieldMask & whichField))
        _sfScale.syncWith(pOther->_sfScale);

    if(FieldBits::NoField != (OffsetFieldMask & whichField))
        _sfOffset.syncWith(pOther->_sfOffset);

    if(FieldBits::NoField != (EventProducerFieldMask & whichField))
        _sfEventProducer.syncWith(pOther->_sfEventProducer);


}
#else
void AnimationGroupBase::executeSyncImpl(      AnimationGroupBase *pOther,
                                        const BitVector         &whichField,
                                        const SyncInfo          &sInfo      )
{

    Inherited::executeSyncImpl(pOther, whichField, sInfo);

    if(FieldBits::NoField != (ScaleFieldMask & whichField))
        _sfScale.syncWith(pOther->_sfScale);

    if(FieldBits::NoField != (OffsetFieldMask & whichField))
        _sfOffset.syncWith(pOther->_sfOffset);


    if(FieldBits::NoField != (AnimationsFieldMask & whichField))
        _mfAnimations.syncWith(pOther->_mfAnimations, sInfo);


}

void AnimationGroupBase::execBeginEditImpl (const BitVector &whichField, 
                                                 UInt32     uiAspect,
                                                 UInt32     uiContainerSize)
{
    Inherited::execBeginEditImpl(whichField, uiAspect, uiContainerSize);

    if(FieldBits::NoField != (AnimationsFieldMask & whichField))
        _mfAnimations.beginEdit(uiAspect, uiContainerSize);

}
#endif



OSG_END_NAMESPACE

#include <OpenSG/OSGSFieldTypeDef.inl>
#include <OpenSG/OSGMFieldTypeDef.inl>

OSG_BEGIN_NAMESPACE

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldDataTraits<AnimationGroupPtr>::_type("AnimationGroupPtr", "AttachmentContainerPtr");
#endif

OSG_DLLEXPORT_SFIELD_DEF1(AnimationGroupPtr, OSG_ANIMATIONLIB_DLLTMPLMAPPING);
OSG_DLLEXPORT_MFIELD_DEF1(AnimationGroupPtr, OSG_ANIMATIONLIB_DLLTMPLMAPPING);


OSG_END_NAMESPACE

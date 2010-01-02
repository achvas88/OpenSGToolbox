/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *               Copyright (C) 2000-2006 by the OpenSG Forum                 *
 *                                                                           *
 *                            www.opensg.org                                 *
 *                                                                           *
 *   contact:  David Kabala (djkabala@gmail.com)                             *
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
 **     class FieldAnimation!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <cstdlib>
#include <cstdio>
#include <boost/assign/list_of.hpp>

#include "OSGConfig.h"


#include "OSGAnimator.h"                  // InterpolationType default header
#include "OSGAnimator.h"                  // ReplacementPolicy default header

#include "OSGAnimator.h"                // Animator Class
#include "OSGFieldContainer.h"          // Container Class

#include "OSGFieldAnimationBase.h"
#include "OSGFieldAnimation.h"

#include <boost/bind.hpp>

#ifdef WIN32 // turn off 'this' : used in base member initializer list warning
#pragma warning(disable:4355)
#endif

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::FieldAnimation
    Field Animation Class.
 */

/***************************************************************************\
 *                        Field Documentation                              *
\***************************************************************************/

/*! \var Animator *      FieldAnimationBase::_sfAnimator
    
*/

/*! \var FieldContainer * FieldAnimationBase::_sfContainer
    
*/

/*! \var UInt32          FieldAnimationBase::_sfFieldId
    
*/

/*! \var std::string     FieldAnimationBase::_sfFieldName
    
*/

/*! \var Int64           FieldAnimationBase::_sfIndex
    
*/

/*! \var UInt32          FieldAnimationBase::_sfInterpolationType
    
*/

/*! \var UInt32          FieldAnimationBase::_sfReplacementPolicy
    
*/


/***************************************************************************\
 *                      FieldType/FieldTrait Instantiation                 *
\***************************************************************************/

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldTraits<FieldAnimation *>::_type("FieldAnimationPtr", "AnimationPtr");
#endif

OSG_FIELDTRAITS_GETTYPE(FieldAnimation *)

OSG_EXPORT_PTR_SFIELD_FULL(PointerSField,
                           FieldAnimation *,
                           0);

OSG_EXPORT_PTR_MFIELD_FULL(PointerMField,
                           FieldAnimation *,
                           0);

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

void FieldAnimationBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


    pDesc = new SFUnrecAnimatorPtr::Description(
        SFUnrecAnimatorPtr::getClassType(),
        "Animator",
        "",
        AnimatorFieldId, AnimatorFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&FieldAnimation::editHandleAnimator),
        static_cast<FieldGetMethodSig >(&FieldAnimation::getHandleAnimator));

    oType.addInitialDesc(pDesc);


    pDesc = new SFUnrecFieldContainerPtr::Description(
        SFUnrecFieldContainerPtr::getClassType(),
        "Container",
        "",
        ContainerFieldId, ContainerFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&FieldAnimation::editHandleContainer),
        static_cast<FieldGetMethodSig >(&FieldAnimation::getHandleContainer));

    oType.addInitialDesc(pDesc);


    pDesc = new SFUInt32::Description(
        SFUInt32::getClassType(),
        "FieldId",
        "",
        FieldIdFieldId, FieldIdFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&FieldAnimation::editHandleFieldId),
        static_cast<FieldGetMethodSig >(&FieldAnimation::getHandleFieldId));

    oType.addInitialDesc(pDesc);


    pDesc = new SFString::Description(
        SFString::getClassType(),
        "FieldName",
        "",
        FieldNameFieldId, FieldNameFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&FieldAnimation::editHandleFieldName),
        static_cast<FieldGetMethodSig >(&FieldAnimation::getHandleFieldName));

    oType.addInitialDesc(pDesc);


    pDesc = new SFInt64::Description(
        SFInt64::getClassType(),
        "Index",
        "",
        IndexFieldId, IndexFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&FieldAnimation::editHandleIndex),
        static_cast<FieldGetMethodSig >(&FieldAnimation::getHandleIndex));

    oType.addInitialDesc(pDesc);


    pDesc = new SFUInt32::Description(
        SFUInt32::getClassType(),
        "InterpolationType",
        "",
        InterpolationTypeFieldId, InterpolationTypeFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&FieldAnimation::editHandleInterpolationType),
        static_cast<FieldGetMethodSig >(&FieldAnimation::getHandleInterpolationType));

    oType.addInitialDesc(pDesc);


    pDesc = new SFUInt32::Description(
        SFUInt32::getClassType(),
        "ReplacementPolicy",
        "",
        ReplacementPolicyFieldId, ReplacementPolicyFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&FieldAnimation::editHandleReplacementPolicy),
        static_cast<FieldGetMethodSig >(&FieldAnimation::getHandleReplacementPolicy));

    oType.addInitialDesc(pDesc);

}


FieldAnimationBase::TypeObject FieldAnimationBase::_type(
    FieldAnimationBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    0,
    reinterpret_cast<PrototypeCreateF>(&FieldAnimationBase::createEmptyLocal),
    FieldAnimation::initMethod,
    FieldAnimation::exitMethod,
    reinterpret_cast<InitalInsertDescFunc>(&FieldAnimation::classDescInserter),
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "\tname=\"FieldAnimation\"\n"
    "\tparent=\"Animation\"\n"
    "    library=\"Dynamics\"\n"
    "\tpointerfieldtypes=\"both\"\n"
    "\tstructure=\"concrete\"\n"
    "\tsystemcomponent=\"true\"\n"
    "\tparentsystemcomponent=\"true\"\n"
    "\tdecoratable=\"false\"\n"
    "    isNodeCore=\"false\"\n"
    "    authors=\"David Kabala (djkabala@gmail.com)                             \"\n"
    ">\n"
    "Field Animation Class.\n"
    "\t<Field\n"
    "\t\tname=\"Animator\"\n"
    "\t\ttype=\"Animator\"\n"
    "        category=\"pointer\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"Container\"\n"
    "\t\ttype=\"FieldContainer\"\n"
    "        category=\"pointer\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\taccess=\"protected\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"FieldId\"\n"
    "\t\ttype=\"UInt32\"\n"
    "        category=\"data\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\taccess=\"protected\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"FieldName\"\n"
    "\t\ttype=\"std::string\"\n"
    "        category=\"data\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\taccess=\"protected\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"Index\"\n"
    "\t\ttype=\"Int64\"\n"
    "        category=\"data\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\taccess=\"protected\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"InterpolationType\"\n"
    "\t\ttype=\"UInt32\"\n"
    "        category=\"data\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\taccess=\"public\"\n"
    "\t\tdefaultValue=\"Animator::LINEAR_INTERPOLATION\"\n"
    "\t\tdefaultHeader=\"OSGAnimator.h\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"ReplacementPolicy\"\n"
    "\t\ttype=\"UInt32\"\n"
    "        category=\"data\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\taccess=\"public\"\n"
    "\t\tdefaultValue=\"Animator::OVERWRITE\"\n"
    "\t\tdefaultHeader=\"OSGAnimator.h\"\n"
    "\t>\n"
    "\t</Field>\n"
    "</FieldContainer>\n",
    "Field Animation Class.\n"
    );


/*------------------------------ get -----------------------------------*/

FieldContainerType &FieldAnimationBase::getType(void)
{
    return _type;
}

const FieldContainerType &FieldAnimationBase::getType(void) const
{
    return _type;
}

UInt32 FieldAnimationBase::getContainerSize(void) const
{
    return sizeof(FieldAnimation);
}

/*------------------------- decorator get ------------------------------*/


//! Get the FieldAnimation::_sfAnimator field.
const SFUnrecAnimatorPtr *FieldAnimationBase::getSFAnimator(void) const
{
    return &_sfAnimator;
}

SFUnrecAnimatorPtr  *FieldAnimationBase::editSFAnimator       (void)
{
    editSField(AnimatorFieldMask);

    return &_sfAnimator;
}

//! Get the FieldAnimation::_sfContainer field.
const SFUnrecFieldContainerPtr *FieldAnimationBase::getSFContainer(void) const
{
    return &_sfContainer;
}

SFUnrecFieldContainerPtr *FieldAnimationBase::editSFContainer      (void)
{
    editSField(ContainerFieldMask);

    return &_sfContainer;
}

SFUInt32 *FieldAnimationBase::editSFFieldId(void)
{
    editSField(FieldIdFieldMask);

    return &_sfFieldId;
}

const SFUInt32 *FieldAnimationBase::getSFFieldId(void) const
{
    return &_sfFieldId;
}


SFString *FieldAnimationBase::editSFFieldName(void)
{
    editSField(FieldNameFieldMask);

    return &_sfFieldName;
}

const SFString *FieldAnimationBase::getSFFieldName(void) const
{
    return &_sfFieldName;
}


SFInt64 *FieldAnimationBase::editSFIndex(void)
{
    editSField(IndexFieldMask);

    return &_sfIndex;
}

const SFInt64 *FieldAnimationBase::getSFIndex(void) const
{
    return &_sfIndex;
}


SFUInt32 *FieldAnimationBase::editSFInterpolationType(void)
{
    editSField(InterpolationTypeFieldMask);

    return &_sfInterpolationType;
}

const SFUInt32 *FieldAnimationBase::getSFInterpolationType(void) const
{
    return &_sfInterpolationType;
}


SFUInt32 *FieldAnimationBase::editSFReplacementPolicy(void)
{
    editSField(ReplacementPolicyFieldMask);

    return &_sfReplacementPolicy;
}

const SFUInt32 *FieldAnimationBase::getSFReplacementPolicy(void) const
{
    return &_sfReplacementPolicy;
}






/*------------------------------ access -----------------------------------*/

UInt32 FieldAnimationBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (AnimatorFieldMask & whichField))
    {
        returnValue += _sfAnimator.getBinSize();
    }
    if(FieldBits::NoField != (ContainerFieldMask & whichField))
    {
        returnValue += _sfContainer.getBinSize();
    }
    if(FieldBits::NoField != (FieldIdFieldMask & whichField))
    {
        returnValue += _sfFieldId.getBinSize();
    }
    if(FieldBits::NoField != (FieldNameFieldMask & whichField))
    {
        returnValue += _sfFieldName.getBinSize();
    }
    if(FieldBits::NoField != (IndexFieldMask & whichField))
    {
        returnValue += _sfIndex.getBinSize();
    }
    if(FieldBits::NoField != (InterpolationTypeFieldMask & whichField))
    {
        returnValue += _sfInterpolationType.getBinSize();
    }
    if(FieldBits::NoField != (ReplacementPolicyFieldMask & whichField))
    {
        returnValue += _sfReplacementPolicy.getBinSize();
    }

    return returnValue;
}

void FieldAnimationBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (AnimatorFieldMask & whichField))
    {
        _sfAnimator.copyToBin(pMem);
    }
    if(FieldBits::NoField != (ContainerFieldMask & whichField))
    {
        _sfContainer.copyToBin(pMem);
    }
    if(FieldBits::NoField != (FieldIdFieldMask & whichField))
    {
        _sfFieldId.copyToBin(pMem);
    }
    if(FieldBits::NoField != (FieldNameFieldMask & whichField))
    {
        _sfFieldName.copyToBin(pMem);
    }
    if(FieldBits::NoField != (IndexFieldMask & whichField))
    {
        _sfIndex.copyToBin(pMem);
    }
    if(FieldBits::NoField != (InterpolationTypeFieldMask & whichField))
    {
        _sfInterpolationType.copyToBin(pMem);
    }
    if(FieldBits::NoField != (ReplacementPolicyFieldMask & whichField))
    {
        _sfReplacementPolicy.copyToBin(pMem);
    }
}

void FieldAnimationBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (AnimatorFieldMask & whichField))
    {
        _sfAnimator.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (ContainerFieldMask & whichField))
    {
        _sfContainer.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (FieldIdFieldMask & whichField))
    {
        _sfFieldId.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (FieldNameFieldMask & whichField))
    {
        _sfFieldName.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (IndexFieldMask & whichField))
    {
        _sfIndex.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (InterpolationTypeFieldMask & whichField))
    {
        _sfInterpolationType.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (ReplacementPolicyFieldMask & whichField))
    {
        _sfReplacementPolicy.copyFromBin(pMem);
    }
}

//! create a new instance of the class
FieldAnimationTransitPtr FieldAnimationBase::createLocal(BitVector bFlags)
{
    FieldAnimationTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyLocal(bFlags);

        fc = dynamic_pointer_cast<FieldAnimation>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class, copy the container flags
FieldAnimationTransitPtr FieldAnimationBase::createDependent(BitVector bFlags)
{
    FieldAnimationTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyDependent(bFlags);

        fc = dynamic_pointer_cast<FieldAnimation>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class
FieldAnimationTransitPtr FieldAnimationBase::create(void)
{
    FieldAnimationTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopy();

        fc = dynamic_pointer_cast<FieldAnimation>(tmpPtr);
    }

    return fc;
}

FieldAnimation *FieldAnimationBase::createEmptyLocal(BitVector bFlags)
{
    FieldAnimation *returnValue;

    newPtr<FieldAnimation>(returnValue, bFlags);

    returnValue->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

//! create an empty new instance of the class, do not copy the prototype
FieldAnimation *FieldAnimationBase::createEmpty(void)
{
    FieldAnimation *returnValue;

    newPtr<FieldAnimation>(returnValue, Thread::getCurrentLocalFlags());

    returnValue->_pFieldFlags->_bNamespaceMask &=
        ~Thread::getCurrentLocalFlags();

    return returnValue;
}


FieldContainerTransitPtr FieldAnimationBase::shallowCopyLocal(
    BitVector bFlags) const
{
    FieldAnimation *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const FieldAnimation *>(this), bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

FieldContainerTransitPtr FieldAnimationBase::shallowCopyDependent(
    BitVector bFlags) const
{
    FieldAnimation *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const FieldAnimation *>(this), ~bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask = bFlags;

    return returnValue;
}

FieldContainerTransitPtr FieldAnimationBase::shallowCopy(void) const
{
    FieldAnimation *tmpPtr;

    newPtr(tmpPtr,
           dynamic_cast<const FieldAnimation *>(this),
           Thread::getCurrentLocalFlags());

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~Thread::getCurrentLocalFlags();

    FieldContainerTransitPtr returnValue(tmpPtr);

    return returnValue;
}




/*------------------------- constructors ----------------------------------*/

FieldAnimationBase::FieldAnimationBase(void) :
    Inherited(),
    _sfAnimator               (NULL),
    _sfContainer              (NULL),
    _sfFieldId                (),
    _sfFieldName              (),
    _sfIndex                  (),
    _sfInterpolationType      (UInt32(Animator::LINEAR_INTERPOLATION)),
    _sfReplacementPolicy      (UInt32(Animator::OVERWRITE))
{
}

FieldAnimationBase::FieldAnimationBase(const FieldAnimationBase &source) :
    Inherited(source),
    _sfAnimator               (NULL),
    _sfContainer              (NULL),
    _sfFieldId                (source._sfFieldId                ),
    _sfFieldName              (source._sfFieldName              ),
    _sfIndex                  (source._sfIndex                  ),
    _sfInterpolationType      (source._sfInterpolationType      ),
    _sfReplacementPolicy      (source._sfReplacementPolicy      )
{
}


/*-------------------------- destructors ----------------------------------*/

FieldAnimationBase::~FieldAnimationBase(void)
{
}

void FieldAnimationBase::onCreate(const FieldAnimation *source)
{
    Inherited::onCreate(source);

    if(source != NULL)
    {
        FieldAnimation *pThis = static_cast<FieldAnimation *>(this);

        pThis->setAnimator(source->getAnimator());

        pThis->setContainer(source->getContainer());
    }
}

GetFieldHandlePtr FieldAnimationBase::getHandleAnimator        (void) const
{
    SFUnrecAnimatorPtr::GetHandlePtr returnValue(
        new  SFUnrecAnimatorPtr::GetHandle(
             &_sfAnimator,
             this->getType().getFieldDesc(AnimatorFieldId),
             const_cast<FieldAnimationBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr FieldAnimationBase::editHandleAnimator       (void)
{
    SFUnrecAnimatorPtr::EditHandlePtr returnValue(
        new  SFUnrecAnimatorPtr::EditHandle(
             &_sfAnimator,
             this->getType().getFieldDesc(AnimatorFieldId),
             this));

    returnValue->setSetMethod(
        boost::bind(&FieldAnimation::setAnimator,
                    static_cast<FieldAnimation *>(this), _1));

    editSField(AnimatorFieldMask);

    return returnValue;
}

GetFieldHandlePtr FieldAnimationBase::getHandleContainer       (void) const
{
    SFUnrecFieldContainerPtr::GetHandlePtr returnValue(
        new  SFUnrecFieldContainerPtr::GetHandle(
             &_sfContainer,
             this->getType().getFieldDesc(ContainerFieldId),
             const_cast<FieldAnimationBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr FieldAnimationBase::editHandleContainer      (void)
{
    SFUnrecFieldContainerPtr::EditHandlePtr returnValue(
        new  SFUnrecFieldContainerPtr::EditHandle(
             &_sfContainer,
             this->getType().getFieldDesc(ContainerFieldId),
             this));

    returnValue->setSetMethod(
        boost::bind(&FieldAnimation::setContainer,
                    static_cast<FieldAnimation *>(this), _1));

    editSField(ContainerFieldMask);

    return returnValue;
}

GetFieldHandlePtr FieldAnimationBase::getHandleFieldId         (void) const
{
    SFUInt32::GetHandlePtr returnValue(
        new  SFUInt32::GetHandle(
             &_sfFieldId,
             this->getType().getFieldDesc(FieldIdFieldId),
             const_cast<FieldAnimationBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr FieldAnimationBase::editHandleFieldId        (void)
{
    SFUInt32::EditHandlePtr returnValue(
        new  SFUInt32::EditHandle(
             &_sfFieldId,
             this->getType().getFieldDesc(FieldIdFieldId),
             this));


    editSField(FieldIdFieldMask);

    return returnValue;
}

GetFieldHandlePtr FieldAnimationBase::getHandleFieldName       (void) const
{
    SFString::GetHandlePtr returnValue(
        new  SFString::GetHandle(
             &_sfFieldName,
             this->getType().getFieldDesc(FieldNameFieldId),
             const_cast<FieldAnimationBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr FieldAnimationBase::editHandleFieldName      (void)
{
    SFString::EditHandlePtr returnValue(
        new  SFString::EditHandle(
             &_sfFieldName,
             this->getType().getFieldDesc(FieldNameFieldId),
             this));


    editSField(FieldNameFieldMask);

    return returnValue;
}

GetFieldHandlePtr FieldAnimationBase::getHandleIndex           (void) const
{
    SFInt64::GetHandlePtr returnValue(
        new  SFInt64::GetHandle(
             &_sfIndex,
             this->getType().getFieldDesc(IndexFieldId),
             const_cast<FieldAnimationBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr FieldAnimationBase::editHandleIndex          (void)
{
    SFInt64::EditHandlePtr returnValue(
        new  SFInt64::EditHandle(
             &_sfIndex,
             this->getType().getFieldDesc(IndexFieldId),
             this));


    editSField(IndexFieldMask);

    return returnValue;
}

GetFieldHandlePtr FieldAnimationBase::getHandleInterpolationType (void) const
{
    SFUInt32::GetHandlePtr returnValue(
        new  SFUInt32::GetHandle(
             &_sfInterpolationType,
             this->getType().getFieldDesc(InterpolationTypeFieldId),
             const_cast<FieldAnimationBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr FieldAnimationBase::editHandleInterpolationType(void)
{
    SFUInt32::EditHandlePtr returnValue(
        new  SFUInt32::EditHandle(
             &_sfInterpolationType,
             this->getType().getFieldDesc(InterpolationTypeFieldId),
             this));


    editSField(InterpolationTypeFieldMask);

    return returnValue;
}

GetFieldHandlePtr FieldAnimationBase::getHandleReplacementPolicy (void) const
{
    SFUInt32::GetHandlePtr returnValue(
        new  SFUInt32::GetHandle(
             &_sfReplacementPolicy,
             this->getType().getFieldDesc(ReplacementPolicyFieldId),
             const_cast<FieldAnimationBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr FieldAnimationBase::editHandleReplacementPolicy(void)
{
    SFUInt32::EditHandlePtr returnValue(
        new  SFUInt32::EditHandle(
             &_sfReplacementPolicy,
             this->getType().getFieldDesc(ReplacementPolicyFieldId),
             this));


    editSField(ReplacementPolicyFieldMask);

    return returnValue;
}


#ifdef OSG_MT_CPTR_ASPECT
void FieldAnimationBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    FieldAnimation *pThis = static_cast<FieldAnimation *>(this);

    pThis->execSync(static_cast<FieldAnimation *>(&oFrom),
                    whichField,
                    oOffsets,
                    syncMode,
                    uiSyncInfo);
}
#endif


#ifdef OSG_MT_CPTR_ASPECT
FieldContainer *FieldAnimationBase::createAspectCopy(
    const FieldContainer *pRefAspect) const
{
    FieldAnimation *returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const FieldAnimation *>(pRefAspect),
                  dynamic_cast<const FieldAnimation *>(this));

    return returnValue;
}
#endif

void FieldAnimationBase::resolveLinks(void)
{
    Inherited::resolveLinks();

    static_cast<FieldAnimation *>(this)->setAnimator(NULL);

    static_cast<FieldAnimation *>(this)->setContainer(NULL);


}


OSG_END_NAMESPACE

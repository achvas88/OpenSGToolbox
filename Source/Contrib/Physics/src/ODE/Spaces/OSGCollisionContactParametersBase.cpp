/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *               Copyright (C) 2000-2006 by the OpenSG Forum                 *
 *                                                                           *
 *                            www.opensg.org                                 *
 *                                                                           *
 *   contact:  David Kabala (djkabala@gmail.com),                            *
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
 **     class CollisionContactParameters!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <cstdlib>
#include <cstdio>
#include <boost/assign/list_of.hpp>

#include "OSGConfig.h"




#include "OSGCollisionContactParametersBase.h"
#include "OSGCollisionContactParameters.h"

#include <boost/bind.hpp>

#ifdef WIN32 // turn off 'this' : used in base member initializer list warning
#pragma warning(disable:4355)
#endif

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::CollisionContactParameters
    
 */

/***************************************************************************\
 *                        Field Documentation                              *
\***************************************************************************/

/*! \var Int32           CollisionContactParametersBase::_sfMode
    
*/

/*! \var Real32          CollisionContactParametersBase::_sfMu
    
*/

/*! \var Real32          CollisionContactParametersBase::_sfMu2
    
*/

/*! \var Real32          CollisionContactParametersBase::_sfBounce
    
*/

/*! \var Real32          CollisionContactParametersBase::_sfBounceSpeedThreshold
    
*/

/*! \var Real32          CollisionContactParametersBase::_sfSoftCFM
    
*/

/*! \var Real32          CollisionContactParametersBase::_sfSoftERP
    
*/

/*! \var Real32          CollisionContactParametersBase::_sfMotion1
    
*/

/*! \var Real32          CollisionContactParametersBase::_sfMotion2
    
*/

/*! \var Real32          CollisionContactParametersBase::_sfMotionN
    
*/

/*! \var Real32          CollisionContactParametersBase::_sfSlip1
    
*/

/*! \var Real32          CollisionContactParametersBase::_sfSlip2
    
*/


/***************************************************************************\
 *                      FieldType/FieldTrait Instantiation                 *
\***************************************************************************/

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldTraits<CollisionContactParameters *>::_type("CollisionContactParametersPtr", "AttachmentContainerPtr");
#endif

OSG_FIELDTRAITS_GETTYPE(CollisionContactParameters *)

OSG_EXPORT_PTR_SFIELD_FULL(PointerSField,
                           CollisionContactParameters *,
                           0);

OSG_EXPORT_PTR_MFIELD_FULL(PointerMField,
                           CollisionContactParameters *,
                           0);

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

void CollisionContactParametersBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


    pDesc = new SFInt32::Description(
        SFInt32::getClassType(),
        "mode",
        "",
        ModeFieldId, ModeFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&CollisionContactParameters::editHandleMode),
        static_cast<FieldGetMethodSig >(&CollisionContactParameters::getHandleMode));

    oType.addInitialDesc(pDesc);

    pDesc = new SFReal32::Description(
        SFReal32::getClassType(),
        "mu",
        "",
        MuFieldId, MuFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&CollisionContactParameters::editHandleMu),
        static_cast<FieldGetMethodSig >(&CollisionContactParameters::getHandleMu));

    oType.addInitialDesc(pDesc);

    pDesc = new SFReal32::Description(
        SFReal32::getClassType(),
        "mu2",
        "",
        Mu2FieldId, Mu2FieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&CollisionContactParameters::editHandleMu2),
        static_cast<FieldGetMethodSig >(&CollisionContactParameters::getHandleMu2));

    oType.addInitialDesc(pDesc);

    pDesc = new SFReal32::Description(
        SFReal32::getClassType(),
        "bounce",
        "",
        BounceFieldId, BounceFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&CollisionContactParameters::editHandleBounce),
        static_cast<FieldGetMethodSig >(&CollisionContactParameters::getHandleBounce));

    oType.addInitialDesc(pDesc);

    pDesc = new SFReal32::Description(
        SFReal32::getClassType(),
        "bounceSpeedThreshold",
        "",
        BounceSpeedThresholdFieldId, BounceSpeedThresholdFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&CollisionContactParameters::editHandleBounceSpeedThreshold),
        static_cast<FieldGetMethodSig >(&CollisionContactParameters::getHandleBounceSpeedThreshold));

    oType.addInitialDesc(pDesc);

    pDesc = new SFReal32::Description(
        SFReal32::getClassType(),
        "softCFM",
        "",
        SoftCFMFieldId, SoftCFMFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&CollisionContactParameters::editHandleSoftCFM),
        static_cast<FieldGetMethodSig >(&CollisionContactParameters::getHandleSoftCFM));

    oType.addInitialDesc(pDesc);

    pDesc = new SFReal32::Description(
        SFReal32::getClassType(),
        "softERP",
        "",
        SoftERPFieldId, SoftERPFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&CollisionContactParameters::editHandleSoftERP),
        static_cast<FieldGetMethodSig >(&CollisionContactParameters::getHandleSoftERP));

    oType.addInitialDesc(pDesc);

    pDesc = new SFReal32::Description(
        SFReal32::getClassType(),
        "motion1",
        "",
        Motion1FieldId, Motion1FieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&CollisionContactParameters::editHandleMotion1),
        static_cast<FieldGetMethodSig >(&CollisionContactParameters::getHandleMotion1));

    oType.addInitialDesc(pDesc);

    pDesc = new SFReal32::Description(
        SFReal32::getClassType(),
        "motion2",
        "",
        Motion2FieldId, Motion2FieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&CollisionContactParameters::editHandleMotion2),
        static_cast<FieldGetMethodSig >(&CollisionContactParameters::getHandleMotion2));

    oType.addInitialDesc(pDesc);

    pDesc = new SFReal32::Description(
        SFReal32::getClassType(),
        "motionN",
        "",
        MotionNFieldId, MotionNFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&CollisionContactParameters::editHandleMotionN),
        static_cast<FieldGetMethodSig >(&CollisionContactParameters::getHandleMotionN));

    oType.addInitialDesc(pDesc);

    pDesc = new SFReal32::Description(
        SFReal32::getClassType(),
        "slip1",
        "",
        Slip1FieldId, Slip1FieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&CollisionContactParameters::editHandleSlip1),
        static_cast<FieldGetMethodSig >(&CollisionContactParameters::getHandleSlip1));

    oType.addInitialDesc(pDesc);

    pDesc = new SFReal32::Description(
        SFReal32::getClassType(),
        "slip2",
        "",
        Slip2FieldId, Slip2FieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&CollisionContactParameters::editHandleSlip2),
        static_cast<FieldGetMethodSig >(&CollisionContactParameters::getHandleSlip2));

    oType.addInitialDesc(pDesc);
}


CollisionContactParametersBase::TypeObject CollisionContactParametersBase::_type(
    CollisionContactParametersBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    0,
    reinterpret_cast<PrototypeCreateF>(&CollisionContactParametersBase::createEmptyLocal),
    CollisionContactParameters::initMethod,
    CollisionContactParameters::exitMethod,
    reinterpret_cast<InitalInsertDescFunc>(&CollisionContactParameters::classDescInserter),
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "\tname=\"CollisionContactParameters\"\n"
    "\tparent=\"AttachmentContainer\"\n"
    "    library=\"ContribPhysics\"\n"
    "    pointerfieldtypes=\"both\"\n"
    "    structure=\"concrete\"\n"
    "    systemcomponent=\"true\"\n"
    "    parentsystemcomponent=\"true\"\n"
    "    decoratable=\"false\"\n"
    "    useLocalIncludes=\"false\"\n"
    "    isNodeCore=\"false\"\n"
    "    authors=\"David Kabala (djkabala@gmail.com),                            \"\n"
    ">\n"
    "\t<Field\n"
    "\t\tname=\"mode\"\n"
    "\t\ttype=\"Int32\"\n"
    "        category=\"data\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"mu\"\n"
    "\t\ttype=\"Real32\"\n"
    "        category=\"data\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"mu2\"\n"
    "\t\ttype=\"Real32\"\n"
    "        category=\"data\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"bounce\"\n"
    "\t\ttype=\"Real32\"\n"
    "        category=\"data\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"bounceSpeedThreshold\"\n"
    "\t\ttype=\"Real32\"\n"
    "        category=\"data\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"softCFM\"\n"
    "\t\ttype=\"Real32\"\n"
    "        category=\"data\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"softERP\"\n"
    "\t\ttype=\"Real32\"\n"
    "        category=\"data\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"motion1\"\n"
    "\t\ttype=\"Real32\"\n"
    "        category=\"data\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"motion2\"\n"
    "\t\ttype=\"Real32\"\n"
    "        category=\"data\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"motionN\"\n"
    "\t\ttype=\"Real32\"\n"
    "        category=\"data\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"slip1\"\n"
    "\t\ttype=\"Real32\"\n"
    "        category=\"data\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"slip2\"\n"
    "\t\ttype=\"Real32\"\n"
    "        category=\"data\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\t</Field>\n"
    "</FieldContainer>\n",
    ""
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &CollisionContactParametersBase::getType(void)
{
    return _type;
}

const FieldContainerType &CollisionContactParametersBase::getType(void) const
{
    return _type;
}

UInt32 CollisionContactParametersBase::getContainerSize(void) const
{
    return sizeof(CollisionContactParameters);
}

/*------------------------- decorator get ------------------------------*/


SFInt32 *CollisionContactParametersBase::editSFMode(void)
{
    editSField(ModeFieldMask);

    return &_sfMode;
}

const SFInt32 *CollisionContactParametersBase::getSFMode(void) const
{
    return &_sfMode;
}


SFReal32 *CollisionContactParametersBase::editSFMu(void)
{
    editSField(MuFieldMask);

    return &_sfMu;
}

const SFReal32 *CollisionContactParametersBase::getSFMu(void) const
{
    return &_sfMu;
}


SFReal32 *CollisionContactParametersBase::editSFMu2(void)
{
    editSField(Mu2FieldMask);

    return &_sfMu2;
}

const SFReal32 *CollisionContactParametersBase::getSFMu2(void) const
{
    return &_sfMu2;
}


SFReal32 *CollisionContactParametersBase::editSFBounce(void)
{
    editSField(BounceFieldMask);

    return &_sfBounce;
}

const SFReal32 *CollisionContactParametersBase::getSFBounce(void) const
{
    return &_sfBounce;
}


SFReal32 *CollisionContactParametersBase::editSFBounceSpeedThreshold(void)
{
    editSField(BounceSpeedThresholdFieldMask);

    return &_sfBounceSpeedThreshold;
}

const SFReal32 *CollisionContactParametersBase::getSFBounceSpeedThreshold(void) const
{
    return &_sfBounceSpeedThreshold;
}


SFReal32 *CollisionContactParametersBase::editSFSoftCFM(void)
{
    editSField(SoftCFMFieldMask);

    return &_sfSoftCFM;
}

const SFReal32 *CollisionContactParametersBase::getSFSoftCFM(void) const
{
    return &_sfSoftCFM;
}


SFReal32 *CollisionContactParametersBase::editSFSoftERP(void)
{
    editSField(SoftERPFieldMask);

    return &_sfSoftERP;
}

const SFReal32 *CollisionContactParametersBase::getSFSoftERP(void) const
{
    return &_sfSoftERP;
}


SFReal32 *CollisionContactParametersBase::editSFMotion1(void)
{
    editSField(Motion1FieldMask);

    return &_sfMotion1;
}

const SFReal32 *CollisionContactParametersBase::getSFMotion1(void) const
{
    return &_sfMotion1;
}


SFReal32 *CollisionContactParametersBase::editSFMotion2(void)
{
    editSField(Motion2FieldMask);

    return &_sfMotion2;
}

const SFReal32 *CollisionContactParametersBase::getSFMotion2(void) const
{
    return &_sfMotion2;
}


SFReal32 *CollisionContactParametersBase::editSFMotionN(void)
{
    editSField(MotionNFieldMask);

    return &_sfMotionN;
}

const SFReal32 *CollisionContactParametersBase::getSFMotionN(void) const
{
    return &_sfMotionN;
}


SFReal32 *CollisionContactParametersBase::editSFSlip1(void)
{
    editSField(Slip1FieldMask);

    return &_sfSlip1;
}

const SFReal32 *CollisionContactParametersBase::getSFSlip1(void) const
{
    return &_sfSlip1;
}


SFReal32 *CollisionContactParametersBase::editSFSlip2(void)
{
    editSField(Slip2FieldMask);

    return &_sfSlip2;
}

const SFReal32 *CollisionContactParametersBase::getSFSlip2(void) const
{
    return &_sfSlip2;
}






/*------------------------------ access -----------------------------------*/

UInt32 CollisionContactParametersBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (ModeFieldMask & whichField))
    {
        returnValue += _sfMode.getBinSize();
    }
    if(FieldBits::NoField != (MuFieldMask & whichField))
    {
        returnValue += _sfMu.getBinSize();
    }
    if(FieldBits::NoField != (Mu2FieldMask & whichField))
    {
        returnValue += _sfMu2.getBinSize();
    }
    if(FieldBits::NoField != (BounceFieldMask & whichField))
    {
        returnValue += _sfBounce.getBinSize();
    }
    if(FieldBits::NoField != (BounceSpeedThresholdFieldMask & whichField))
    {
        returnValue += _sfBounceSpeedThreshold.getBinSize();
    }
    if(FieldBits::NoField != (SoftCFMFieldMask & whichField))
    {
        returnValue += _sfSoftCFM.getBinSize();
    }
    if(FieldBits::NoField != (SoftERPFieldMask & whichField))
    {
        returnValue += _sfSoftERP.getBinSize();
    }
    if(FieldBits::NoField != (Motion1FieldMask & whichField))
    {
        returnValue += _sfMotion1.getBinSize();
    }
    if(FieldBits::NoField != (Motion2FieldMask & whichField))
    {
        returnValue += _sfMotion2.getBinSize();
    }
    if(FieldBits::NoField != (MotionNFieldMask & whichField))
    {
        returnValue += _sfMotionN.getBinSize();
    }
    if(FieldBits::NoField != (Slip1FieldMask & whichField))
    {
        returnValue += _sfSlip1.getBinSize();
    }
    if(FieldBits::NoField != (Slip2FieldMask & whichField))
    {
        returnValue += _sfSlip2.getBinSize();
    }

    return returnValue;
}

void CollisionContactParametersBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (ModeFieldMask & whichField))
    {
        _sfMode.copyToBin(pMem);
    }
    if(FieldBits::NoField != (MuFieldMask & whichField))
    {
        _sfMu.copyToBin(pMem);
    }
    if(FieldBits::NoField != (Mu2FieldMask & whichField))
    {
        _sfMu2.copyToBin(pMem);
    }
    if(FieldBits::NoField != (BounceFieldMask & whichField))
    {
        _sfBounce.copyToBin(pMem);
    }
    if(FieldBits::NoField != (BounceSpeedThresholdFieldMask & whichField))
    {
        _sfBounceSpeedThreshold.copyToBin(pMem);
    }
    if(FieldBits::NoField != (SoftCFMFieldMask & whichField))
    {
        _sfSoftCFM.copyToBin(pMem);
    }
    if(FieldBits::NoField != (SoftERPFieldMask & whichField))
    {
        _sfSoftERP.copyToBin(pMem);
    }
    if(FieldBits::NoField != (Motion1FieldMask & whichField))
    {
        _sfMotion1.copyToBin(pMem);
    }
    if(FieldBits::NoField != (Motion2FieldMask & whichField))
    {
        _sfMotion2.copyToBin(pMem);
    }
    if(FieldBits::NoField != (MotionNFieldMask & whichField))
    {
        _sfMotionN.copyToBin(pMem);
    }
    if(FieldBits::NoField != (Slip1FieldMask & whichField))
    {
        _sfSlip1.copyToBin(pMem);
    }
    if(FieldBits::NoField != (Slip2FieldMask & whichField))
    {
        _sfSlip2.copyToBin(pMem);
    }
}

void CollisionContactParametersBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (ModeFieldMask & whichField))
    {
        _sfMode.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (MuFieldMask & whichField))
    {
        _sfMu.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (Mu2FieldMask & whichField))
    {
        _sfMu2.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (BounceFieldMask & whichField))
    {
        _sfBounce.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (BounceSpeedThresholdFieldMask & whichField))
    {
        _sfBounceSpeedThreshold.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (SoftCFMFieldMask & whichField))
    {
        _sfSoftCFM.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (SoftERPFieldMask & whichField))
    {
        _sfSoftERP.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (Motion1FieldMask & whichField))
    {
        _sfMotion1.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (Motion2FieldMask & whichField))
    {
        _sfMotion2.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (MotionNFieldMask & whichField))
    {
        _sfMotionN.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (Slip1FieldMask & whichField))
    {
        _sfSlip1.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (Slip2FieldMask & whichField))
    {
        _sfSlip2.copyFromBin(pMem);
    }
}

//! create a new instance of the class
CollisionContactParametersTransitPtr CollisionContactParametersBase::createLocal(BitVector bFlags)
{
    CollisionContactParametersTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyLocal(bFlags);

        fc = dynamic_pointer_cast<CollisionContactParameters>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class, copy the container flags
CollisionContactParametersTransitPtr CollisionContactParametersBase::createDependent(BitVector bFlags)
{
    CollisionContactParametersTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyDependent(bFlags);

        fc = dynamic_pointer_cast<CollisionContactParameters>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class
CollisionContactParametersTransitPtr CollisionContactParametersBase::create(void)
{
    CollisionContactParametersTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopy();

        fc = dynamic_pointer_cast<CollisionContactParameters>(tmpPtr);
    }

    return fc;
}

CollisionContactParameters *CollisionContactParametersBase::createEmptyLocal(BitVector bFlags)
{
    CollisionContactParameters *returnValue;

    newPtr<CollisionContactParameters>(returnValue, bFlags);

    returnValue->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

//! create an empty new instance of the class, do not copy the prototype
CollisionContactParameters *CollisionContactParametersBase::createEmpty(void)
{
    CollisionContactParameters *returnValue;

    newPtr<CollisionContactParameters>(returnValue, Thread::getCurrentLocalFlags());

    returnValue->_pFieldFlags->_bNamespaceMask &=
        ~Thread::getCurrentLocalFlags();

    return returnValue;
}

FieldContainerTransitPtr CollisionContactParametersBase::shallowCopyLocal(
    BitVector bFlags) const
{
    CollisionContactParameters *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const CollisionContactParameters *>(this), bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

FieldContainerTransitPtr CollisionContactParametersBase::shallowCopyDependent(
    BitVector bFlags) const
{
    CollisionContactParameters *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const CollisionContactParameters *>(this), ~bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask = bFlags;

    return returnValue;
}

FieldContainerTransitPtr CollisionContactParametersBase::shallowCopy(void) const
{
    CollisionContactParameters *tmpPtr;

    newPtr(tmpPtr,
           dynamic_cast<const CollisionContactParameters *>(this),
           Thread::getCurrentLocalFlags());

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~Thread::getCurrentLocalFlags();

    FieldContainerTransitPtr returnValue(tmpPtr);

    return returnValue;
}



/*------------------------- constructors ----------------------------------*/

CollisionContactParametersBase::CollisionContactParametersBase(void) :
    Inherited(),
    _sfMode                   (),
    _sfMu                     (),
    _sfMu2                    (),
    _sfBounce                 (),
    _sfBounceSpeedThreshold   (),
    _sfSoftCFM                (),
    _sfSoftERP                (),
    _sfMotion1                (),
    _sfMotion2                (),
    _sfMotionN                (),
    _sfSlip1                  (),
    _sfSlip2                  ()
{
}

CollisionContactParametersBase::CollisionContactParametersBase(const CollisionContactParametersBase &source) :
    Inherited(source),
    _sfMode                   (source._sfMode                   ),
    _sfMu                     (source._sfMu                     ),
    _sfMu2                    (source._sfMu2                    ),
    _sfBounce                 (source._sfBounce                 ),
    _sfBounceSpeedThreshold   (source._sfBounceSpeedThreshold   ),
    _sfSoftCFM                (source._sfSoftCFM                ),
    _sfSoftERP                (source._sfSoftERP                ),
    _sfMotion1                (source._sfMotion1                ),
    _sfMotion2                (source._sfMotion2                ),
    _sfMotionN                (source._sfMotionN                ),
    _sfSlip1                  (source._sfSlip1                  ),
    _sfSlip2                  (source._sfSlip2                  )
{
}


/*-------------------------- destructors ----------------------------------*/

CollisionContactParametersBase::~CollisionContactParametersBase(void)
{
}


GetFieldHandlePtr CollisionContactParametersBase::getHandleMode            (void) const
{
    SFInt32::GetHandlePtr returnValue(
        new  SFInt32::GetHandle(
             &_sfMode,
             this->getType().getFieldDesc(ModeFieldId),
             const_cast<CollisionContactParametersBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr CollisionContactParametersBase::editHandleMode           (void)
{
    SFInt32::EditHandlePtr returnValue(
        new  SFInt32::EditHandle(
             &_sfMode,
             this->getType().getFieldDesc(ModeFieldId),
             this));


    editSField(ModeFieldMask);

    return returnValue;
}

GetFieldHandlePtr CollisionContactParametersBase::getHandleMu              (void) const
{
    SFReal32::GetHandlePtr returnValue(
        new  SFReal32::GetHandle(
             &_sfMu,
             this->getType().getFieldDesc(MuFieldId),
             const_cast<CollisionContactParametersBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr CollisionContactParametersBase::editHandleMu             (void)
{
    SFReal32::EditHandlePtr returnValue(
        new  SFReal32::EditHandle(
             &_sfMu,
             this->getType().getFieldDesc(MuFieldId),
             this));


    editSField(MuFieldMask);

    return returnValue;
}

GetFieldHandlePtr CollisionContactParametersBase::getHandleMu2             (void) const
{
    SFReal32::GetHandlePtr returnValue(
        new  SFReal32::GetHandle(
             &_sfMu2,
             this->getType().getFieldDesc(Mu2FieldId),
             const_cast<CollisionContactParametersBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr CollisionContactParametersBase::editHandleMu2            (void)
{
    SFReal32::EditHandlePtr returnValue(
        new  SFReal32::EditHandle(
             &_sfMu2,
             this->getType().getFieldDesc(Mu2FieldId),
             this));


    editSField(Mu2FieldMask);

    return returnValue;
}

GetFieldHandlePtr CollisionContactParametersBase::getHandleBounce          (void) const
{
    SFReal32::GetHandlePtr returnValue(
        new  SFReal32::GetHandle(
             &_sfBounce,
             this->getType().getFieldDesc(BounceFieldId),
             const_cast<CollisionContactParametersBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr CollisionContactParametersBase::editHandleBounce         (void)
{
    SFReal32::EditHandlePtr returnValue(
        new  SFReal32::EditHandle(
             &_sfBounce,
             this->getType().getFieldDesc(BounceFieldId),
             this));


    editSField(BounceFieldMask);

    return returnValue;
}

GetFieldHandlePtr CollisionContactParametersBase::getHandleBounceSpeedThreshold (void) const
{
    SFReal32::GetHandlePtr returnValue(
        new  SFReal32::GetHandle(
             &_sfBounceSpeedThreshold,
             this->getType().getFieldDesc(BounceSpeedThresholdFieldId),
             const_cast<CollisionContactParametersBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr CollisionContactParametersBase::editHandleBounceSpeedThreshold(void)
{
    SFReal32::EditHandlePtr returnValue(
        new  SFReal32::EditHandle(
             &_sfBounceSpeedThreshold,
             this->getType().getFieldDesc(BounceSpeedThresholdFieldId),
             this));


    editSField(BounceSpeedThresholdFieldMask);

    return returnValue;
}

GetFieldHandlePtr CollisionContactParametersBase::getHandleSoftCFM         (void) const
{
    SFReal32::GetHandlePtr returnValue(
        new  SFReal32::GetHandle(
             &_sfSoftCFM,
             this->getType().getFieldDesc(SoftCFMFieldId),
             const_cast<CollisionContactParametersBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr CollisionContactParametersBase::editHandleSoftCFM        (void)
{
    SFReal32::EditHandlePtr returnValue(
        new  SFReal32::EditHandle(
             &_sfSoftCFM,
             this->getType().getFieldDesc(SoftCFMFieldId),
             this));


    editSField(SoftCFMFieldMask);

    return returnValue;
}

GetFieldHandlePtr CollisionContactParametersBase::getHandleSoftERP         (void) const
{
    SFReal32::GetHandlePtr returnValue(
        new  SFReal32::GetHandle(
             &_sfSoftERP,
             this->getType().getFieldDesc(SoftERPFieldId),
             const_cast<CollisionContactParametersBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr CollisionContactParametersBase::editHandleSoftERP        (void)
{
    SFReal32::EditHandlePtr returnValue(
        new  SFReal32::EditHandle(
             &_sfSoftERP,
             this->getType().getFieldDesc(SoftERPFieldId),
             this));


    editSField(SoftERPFieldMask);

    return returnValue;
}

GetFieldHandlePtr CollisionContactParametersBase::getHandleMotion1         (void) const
{
    SFReal32::GetHandlePtr returnValue(
        new  SFReal32::GetHandle(
             &_sfMotion1,
             this->getType().getFieldDesc(Motion1FieldId),
             const_cast<CollisionContactParametersBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr CollisionContactParametersBase::editHandleMotion1        (void)
{
    SFReal32::EditHandlePtr returnValue(
        new  SFReal32::EditHandle(
             &_sfMotion1,
             this->getType().getFieldDesc(Motion1FieldId),
             this));


    editSField(Motion1FieldMask);

    return returnValue;
}

GetFieldHandlePtr CollisionContactParametersBase::getHandleMotion2         (void) const
{
    SFReal32::GetHandlePtr returnValue(
        new  SFReal32::GetHandle(
             &_sfMotion2,
             this->getType().getFieldDesc(Motion2FieldId),
             const_cast<CollisionContactParametersBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr CollisionContactParametersBase::editHandleMotion2        (void)
{
    SFReal32::EditHandlePtr returnValue(
        new  SFReal32::EditHandle(
             &_sfMotion2,
             this->getType().getFieldDesc(Motion2FieldId),
             this));


    editSField(Motion2FieldMask);

    return returnValue;
}

GetFieldHandlePtr CollisionContactParametersBase::getHandleMotionN         (void) const
{
    SFReal32::GetHandlePtr returnValue(
        new  SFReal32::GetHandle(
             &_sfMotionN,
             this->getType().getFieldDesc(MotionNFieldId),
             const_cast<CollisionContactParametersBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr CollisionContactParametersBase::editHandleMotionN        (void)
{
    SFReal32::EditHandlePtr returnValue(
        new  SFReal32::EditHandle(
             &_sfMotionN,
             this->getType().getFieldDesc(MotionNFieldId),
             this));


    editSField(MotionNFieldMask);

    return returnValue;
}

GetFieldHandlePtr CollisionContactParametersBase::getHandleSlip1           (void) const
{
    SFReal32::GetHandlePtr returnValue(
        new  SFReal32::GetHandle(
             &_sfSlip1,
             this->getType().getFieldDesc(Slip1FieldId),
             const_cast<CollisionContactParametersBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr CollisionContactParametersBase::editHandleSlip1          (void)
{
    SFReal32::EditHandlePtr returnValue(
        new  SFReal32::EditHandle(
             &_sfSlip1,
             this->getType().getFieldDesc(Slip1FieldId),
             this));


    editSField(Slip1FieldMask);

    return returnValue;
}

GetFieldHandlePtr CollisionContactParametersBase::getHandleSlip2           (void) const
{
    SFReal32::GetHandlePtr returnValue(
        new  SFReal32::GetHandle(
             &_sfSlip2,
             this->getType().getFieldDesc(Slip2FieldId),
             const_cast<CollisionContactParametersBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr CollisionContactParametersBase::editHandleSlip2          (void)
{
    SFReal32::EditHandlePtr returnValue(
        new  SFReal32::EditHandle(
             &_sfSlip2,
             this->getType().getFieldDesc(Slip2FieldId),
             this));


    editSField(Slip2FieldMask);

    return returnValue;
}



#ifdef OSG_MT_CPTR_ASPECT
void CollisionContactParametersBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    CollisionContactParameters *pThis = static_cast<CollisionContactParameters *>(this);

    pThis->execSync(static_cast<CollisionContactParameters *>(&oFrom),
                    whichField,
                    oOffsets,
                    syncMode,
                    uiSyncInfo);
}
#endif


#ifdef OSG_MT_CPTR_ASPECT
FieldContainer *CollisionContactParametersBase::createAspectCopy(
    const FieldContainer *pRefAspect) const
{
    CollisionContactParameters *returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const CollisionContactParameters *>(pRefAspect),
                  dynamic_cast<const CollisionContactParameters *>(this));

    return returnValue;
}
#endif

void CollisionContactParametersBase::resolveLinks(void)
{
    Inherited::resolveLinks();


}


OSG_END_NAMESPACE

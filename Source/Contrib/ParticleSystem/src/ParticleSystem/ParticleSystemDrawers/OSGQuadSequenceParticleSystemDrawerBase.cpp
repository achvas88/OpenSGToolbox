/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *               Copyright (C) 2000-2006 by the OpenSG Forum                 *
 *                                                                           *
 *                            www.opensg.org                                 *
 *                                                                           *
 *   contact:  David Kabala, Dan Guilliams (djkabala/dan.guilliams@gmail.com)*
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
 **     class QuadSequenceParticleSystemDrawer!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <cstdlib>
#include <cstdio>
#include <boost/assign/list_of.hpp>

#include "OSGConfig.h"



#include "OSGParticleFunction.h"        // SequenceFunction Class

#include "OSGQuadSequenceParticleSystemDrawerBase.h"
#include "OSGQuadSequenceParticleSystemDrawer.h"

#include <boost/bind.hpp>

#ifdef WIN32 // turn off 'this' : used in base member initializer list warning
#pragma warning(disable:4355)
#endif

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::QuadSequenceParticleSystemDrawer
    
 */

/***************************************************************************\
 *                        Field Documentation                              *
\***************************************************************************/

/*! \var Vec2b           QuadSequenceParticleSystemDrawerBase::_sfSequenceDimensions
    This is the dimensions of the images sequence contained in the texture. 
    For example, a value of (3,2) would indicate that the image sequence is
    3 wide and 2 tall.
*/

/*! \var Vec2b           QuadSequenceParticleSystemDrawerBase::_sfBorderOffsets
    The size of the border between images of the sequences in pixels.  
    Applies to all sides of each images.
*/

/*! \var ParticleFunction * QuadSequenceParticleSystemDrawerBase::_sfSequenceFunction
    Function used to determine which image from the image sequence should be used.
*/

/*! \var Vec2us          QuadSequenceParticleSystemDrawerBase::_sfImageDimensions
    Dimensions of the image used to draw the quad sequence. Required for 
    proper rendering of border offsets.
*/


/***************************************************************************\
 *                      FieldType/FieldTrait Instantiation                 *
\***************************************************************************/

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldTraits<QuadSequenceParticleSystemDrawer *>::_type("QuadSequenceParticleSystemDrawerPtr", "QuadParticleSystemDrawerPtr");
#endif

OSG_FIELDTRAITS_GETTYPE(QuadSequenceParticleSystemDrawer *)

OSG_EXPORT_PTR_SFIELD_FULL(PointerSField,
                           QuadSequenceParticleSystemDrawer *,
                           0);

OSG_EXPORT_PTR_MFIELD_FULL(PointerMField,
                           QuadSequenceParticleSystemDrawer *,
                           0);

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

void QuadSequenceParticleSystemDrawerBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


    pDesc = new SFVec2b::Description(
        SFVec2b::getClassType(),
        "SequenceDimensions",
        "This is the dimensions of the images sequence contained in the texture. \n"
        "For example, a value of (3,2) would indicate that the image sequence is\n"
        "3 wide and 2 tall.\n",
        SequenceDimensionsFieldId, SequenceDimensionsFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&QuadSequenceParticleSystemDrawer::editHandleSequenceDimensions),
        static_cast<FieldGetMethodSig >(&QuadSequenceParticleSystemDrawer::getHandleSequenceDimensions));

    oType.addInitialDesc(pDesc);

    pDesc = new SFVec2b::Description(
        SFVec2b::getClassType(),
        "BorderOffsets",
        "The size of the border between images of the sequences in pixels.  \n"
        "Applies to all sides of each images.\n",
        BorderOffsetsFieldId, BorderOffsetsFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&QuadSequenceParticleSystemDrawer::editHandleBorderOffsets),
        static_cast<FieldGetMethodSig >(&QuadSequenceParticleSystemDrawer::getHandleBorderOffsets));

    oType.addInitialDesc(pDesc);

    pDesc = new SFUnrecParticleFunctionPtr::Description(
        SFUnrecParticleFunctionPtr::getClassType(),
        "SequenceFunction",
        "Function used to determine which image from the image sequence should be used.\n",
        SequenceFunctionFieldId, SequenceFunctionFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&QuadSequenceParticleSystemDrawer::editHandleSequenceFunction),
        static_cast<FieldGetMethodSig >(&QuadSequenceParticleSystemDrawer::getHandleSequenceFunction));

    oType.addInitialDesc(pDesc);

    pDesc = new SFVec2us::Description(
        SFVec2us::getClassType(),
        "ImageDimensions",
        "Dimensions of the image used to draw the quad sequence. Required for \n"
        "proper rendering of border offsets.\n",
        ImageDimensionsFieldId, ImageDimensionsFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&QuadSequenceParticleSystemDrawer::editHandleImageDimensions),
        static_cast<FieldGetMethodSig >(&QuadSequenceParticleSystemDrawer::getHandleImageDimensions));

    oType.addInitialDesc(pDesc);
}


QuadSequenceParticleSystemDrawerBase::TypeObject QuadSequenceParticleSystemDrawerBase::_type(
    QuadSequenceParticleSystemDrawerBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    0,
    reinterpret_cast<PrototypeCreateF>(&QuadSequenceParticleSystemDrawerBase::createEmptyLocal),
    QuadSequenceParticleSystemDrawer::initMethod,
    QuadSequenceParticleSystemDrawer::exitMethod,
    reinterpret_cast<InitalInsertDescFunc>(&QuadSequenceParticleSystemDrawer::classDescInserter),
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "    name=\"QuadSequenceParticleSystemDrawer\"\n"
    "    parent=\"QuadParticleSystemDrawer\"\n"
    "    library=\"ContribParticleSystem\"\n"
    "    pointerfieldtypes=\"both\"\n"
    "    structure=\"concrete\"\n"
    "    systemcomponent=\"true\"\n"
    "    parentsystemcomponent=\"true\"\n"
    "    decoratable=\"false\"\n"
    "    useLocalIncludes=\"false\"\n"
    "    isNodeCore=\"false\"\n"
    "    authors=\"David Kabala, Dan Guilliams (djkabala/dan.guilliams@gmail.com)\"\n"
    ">\n"
    "\t<Field\n"
    "\t    name=\"SequenceDimensions\"\n"
    "\t    type=\"Vec2b\"\n"
    "\t    category=\"data\"\n"
    "\t    cardinality=\"single\"\n"
    "\t    visibility=\"external\"\n"
    "\t    defaultValue=\"2,1\"\n"
    "\t    access=\"public\"\n"
    "\t>\n"
    "\tThis is the dimensions of the images sequence contained in the texture. \n"
    "\tFor example, a value of (3,2) would indicate that the image sequence is\n"
    "\t3 wide and 2 tall.\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t    name=\"BorderOffsets\"\n"
    "\t    type=\"Vec2b\"\n"
    "\t    category=\"data\"\n"
    "\t    cardinality=\"single\"\n"
    "\t    visibility=\"external\"\n"
    "\t    defaultValue=\"0,0\"\n"
    "\t    access=\"public\"\n"
    "\t>\n"
    "\tThe size of the border between images of the sequences in pixels.  \n"
    "\tApplies to all sides of each images.\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t    name=\"SequenceFunction\"\n"
    "\t    type=\"ParticleFunction\"\n"
    "\t    category=\"pointer\"\n"
    "\t    cardinality=\"single\"\n"
    "\t    visibility=\"external\"\n"
    "\t    defaultValue=\"NULL\"\n"
    "\t    access=\"public\"\n"
    "\t>\n"
    "\tFunction used to determine which image from the image sequence should be used.\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t    name=\"ImageDimensions\"\n"
    "\t    type=\"Vec2us\"\n"
    "\t    category=\"data\"\n"
    "\t    cardinality=\"single\"\n"
    "\t    visibility=\"external\"\n"
    "\t    defaultValue=\"250,250\"\n"
    "\t    access=\"public\"\n"
    "\t>\n"
    "\tDimensions of the image used to draw the quad sequence. Required for \n"
    "\tproper rendering of border offsets.\n"
    "\t</Field>\n"
    "</FieldContainer>\n",
    ""
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &QuadSequenceParticleSystemDrawerBase::getType(void)
{
    return _type;
}

const FieldContainerType &QuadSequenceParticleSystemDrawerBase::getType(void) const
{
    return _type;
}

UInt32 QuadSequenceParticleSystemDrawerBase::getContainerSize(void) const
{
    return sizeof(QuadSequenceParticleSystemDrawer);
}

/*------------------------- decorator get ------------------------------*/


SFVec2b *QuadSequenceParticleSystemDrawerBase::editSFSequenceDimensions(void)
{
    editSField(SequenceDimensionsFieldMask);

    return &_sfSequenceDimensions;
}

const SFVec2b *QuadSequenceParticleSystemDrawerBase::getSFSequenceDimensions(void) const
{
    return &_sfSequenceDimensions;
}


SFVec2b *QuadSequenceParticleSystemDrawerBase::editSFBorderOffsets(void)
{
    editSField(BorderOffsetsFieldMask);

    return &_sfBorderOffsets;
}

const SFVec2b *QuadSequenceParticleSystemDrawerBase::getSFBorderOffsets(void) const
{
    return &_sfBorderOffsets;
}


//! Get the QuadSequenceParticleSystemDrawer::_sfSequenceFunction field.
const SFUnrecParticleFunctionPtr *QuadSequenceParticleSystemDrawerBase::getSFSequenceFunction(void) const
{
    return &_sfSequenceFunction;
}

SFUnrecParticleFunctionPtr *QuadSequenceParticleSystemDrawerBase::editSFSequenceFunction(void)
{
    editSField(SequenceFunctionFieldMask);

    return &_sfSequenceFunction;
}

SFVec2us *QuadSequenceParticleSystemDrawerBase::editSFImageDimensions(void)
{
    editSField(ImageDimensionsFieldMask);

    return &_sfImageDimensions;
}

const SFVec2us *QuadSequenceParticleSystemDrawerBase::getSFImageDimensions(void) const
{
    return &_sfImageDimensions;
}






/*------------------------------ access -----------------------------------*/

UInt32 QuadSequenceParticleSystemDrawerBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (SequenceDimensionsFieldMask & whichField))
    {
        returnValue += _sfSequenceDimensions.getBinSize();
    }
    if(FieldBits::NoField != (BorderOffsetsFieldMask & whichField))
    {
        returnValue += _sfBorderOffsets.getBinSize();
    }
    if(FieldBits::NoField != (SequenceFunctionFieldMask & whichField))
    {
        returnValue += _sfSequenceFunction.getBinSize();
    }
    if(FieldBits::NoField != (ImageDimensionsFieldMask & whichField))
    {
        returnValue += _sfImageDimensions.getBinSize();
    }

    return returnValue;
}

void QuadSequenceParticleSystemDrawerBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (SequenceDimensionsFieldMask & whichField))
    {
        _sfSequenceDimensions.copyToBin(pMem);
    }
    if(FieldBits::NoField != (BorderOffsetsFieldMask & whichField))
    {
        _sfBorderOffsets.copyToBin(pMem);
    }
    if(FieldBits::NoField != (SequenceFunctionFieldMask & whichField))
    {
        _sfSequenceFunction.copyToBin(pMem);
    }
    if(FieldBits::NoField != (ImageDimensionsFieldMask & whichField))
    {
        _sfImageDimensions.copyToBin(pMem);
    }
}

void QuadSequenceParticleSystemDrawerBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (SequenceDimensionsFieldMask & whichField))
    {
        _sfSequenceDimensions.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (BorderOffsetsFieldMask & whichField))
    {
        _sfBorderOffsets.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (SequenceFunctionFieldMask & whichField))
    {
        _sfSequenceFunction.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (ImageDimensionsFieldMask & whichField))
    {
        _sfImageDimensions.copyFromBin(pMem);
    }
}

//! create a new instance of the class
QuadSequenceParticleSystemDrawerTransitPtr QuadSequenceParticleSystemDrawerBase::createLocal(BitVector bFlags)
{
    QuadSequenceParticleSystemDrawerTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyLocal(bFlags);

        fc = dynamic_pointer_cast<QuadSequenceParticleSystemDrawer>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class, copy the container flags
QuadSequenceParticleSystemDrawerTransitPtr QuadSequenceParticleSystemDrawerBase::createDependent(BitVector bFlags)
{
    QuadSequenceParticleSystemDrawerTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyDependent(bFlags);

        fc = dynamic_pointer_cast<QuadSequenceParticleSystemDrawer>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class
QuadSequenceParticleSystemDrawerTransitPtr QuadSequenceParticleSystemDrawerBase::create(void)
{
    QuadSequenceParticleSystemDrawerTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopy();

        fc = dynamic_pointer_cast<QuadSequenceParticleSystemDrawer>(tmpPtr);
    }

    return fc;
}

QuadSequenceParticleSystemDrawer *QuadSequenceParticleSystemDrawerBase::createEmptyLocal(BitVector bFlags)
{
    QuadSequenceParticleSystemDrawer *returnValue;

    newPtr<QuadSequenceParticleSystemDrawer>(returnValue, bFlags);

    returnValue->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

//! create an empty new instance of the class, do not copy the prototype
QuadSequenceParticleSystemDrawer *QuadSequenceParticleSystemDrawerBase::createEmpty(void)
{
    QuadSequenceParticleSystemDrawer *returnValue;

    newPtr<QuadSequenceParticleSystemDrawer>(returnValue, Thread::getCurrentLocalFlags());

    returnValue->_pFieldFlags->_bNamespaceMask &=
        ~Thread::getCurrentLocalFlags();

    return returnValue;
}


FieldContainerTransitPtr QuadSequenceParticleSystemDrawerBase::shallowCopyLocal(
    BitVector bFlags) const
{
    QuadSequenceParticleSystemDrawer *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const QuadSequenceParticleSystemDrawer *>(this), bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

FieldContainerTransitPtr QuadSequenceParticleSystemDrawerBase::shallowCopyDependent(
    BitVector bFlags) const
{
    QuadSequenceParticleSystemDrawer *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const QuadSequenceParticleSystemDrawer *>(this), ~bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask = bFlags;

    return returnValue;
}

FieldContainerTransitPtr QuadSequenceParticleSystemDrawerBase::shallowCopy(void) const
{
    QuadSequenceParticleSystemDrawer *tmpPtr;

    newPtr(tmpPtr,
           dynamic_cast<const QuadSequenceParticleSystemDrawer *>(this),
           Thread::getCurrentLocalFlags());

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~Thread::getCurrentLocalFlags();

    FieldContainerTransitPtr returnValue(tmpPtr);

    return returnValue;
}




/*------------------------- constructors ----------------------------------*/

QuadSequenceParticleSystemDrawerBase::QuadSequenceParticleSystemDrawerBase(void) :
    Inherited(),
    _sfSequenceDimensions     (Vec2b(2,1)),
    _sfBorderOffsets          (Vec2b(0,0)),
    _sfSequenceFunction       (NULL),
    _sfImageDimensions        (Vec2us(250,250))
{
}

QuadSequenceParticleSystemDrawerBase::QuadSequenceParticleSystemDrawerBase(const QuadSequenceParticleSystemDrawerBase &source) :
    Inherited(source),
    _sfSequenceDimensions     (source._sfSequenceDimensions     ),
    _sfBorderOffsets          (source._sfBorderOffsets          ),
    _sfSequenceFunction       (NULL),
    _sfImageDimensions        (source._sfImageDimensions        )
{
}


/*-------------------------- destructors ----------------------------------*/

QuadSequenceParticleSystemDrawerBase::~QuadSequenceParticleSystemDrawerBase(void)
{
}

void QuadSequenceParticleSystemDrawerBase::onCreate(const QuadSequenceParticleSystemDrawer *source)
{
    Inherited::onCreate(source);

    if(source != NULL)
    {
        QuadSequenceParticleSystemDrawer *pThis = static_cast<QuadSequenceParticleSystemDrawer *>(this);

        pThis->setSequenceFunction(source->getSequenceFunction());
    }
}

GetFieldHandlePtr QuadSequenceParticleSystemDrawerBase::getHandleSequenceDimensions (void) const
{
    SFVec2b::GetHandlePtr returnValue(
        new  SFVec2b::GetHandle(
             &_sfSequenceDimensions,
             this->getType().getFieldDesc(SequenceDimensionsFieldId),
             const_cast<QuadSequenceParticleSystemDrawerBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr QuadSequenceParticleSystemDrawerBase::editHandleSequenceDimensions(void)
{
    SFVec2b::EditHandlePtr returnValue(
        new  SFVec2b::EditHandle(
             &_sfSequenceDimensions,
             this->getType().getFieldDesc(SequenceDimensionsFieldId),
             this));


    editSField(SequenceDimensionsFieldMask);

    return returnValue;
}

GetFieldHandlePtr QuadSequenceParticleSystemDrawerBase::getHandleBorderOffsets   (void) const
{
    SFVec2b::GetHandlePtr returnValue(
        new  SFVec2b::GetHandle(
             &_sfBorderOffsets,
             this->getType().getFieldDesc(BorderOffsetsFieldId),
             const_cast<QuadSequenceParticleSystemDrawerBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr QuadSequenceParticleSystemDrawerBase::editHandleBorderOffsets  (void)
{
    SFVec2b::EditHandlePtr returnValue(
        new  SFVec2b::EditHandle(
             &_sfBorderOffsets,
             this->getType().getFieldDesc(BorderOffsetsFieldId),
             this));


    editSField(BorderOffsetsFieldMask);

    return returnValue;
}

GetFieldHandlePtr QuadSequenceParticleSystemDrawerBase::getHandleSequenceFunction (void) const
{
    SFUnrecParticleFunctionPtr::GetHandlePtr returnValue(
        new  SFUnrecParticleFunctionPtr::GetHandle(
             &_sfSequenceFunction,
             this->getType().getFieldDesc(SequenceFunctionFieldId),
             const_cast<QuadSequenceParticleSystemDrawerBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr QuadSequenceParticleSystemDrawerBase::editHandleSequenceFunction(void)
{
    SFUnrecParticleFunctionPtr::EditHandlePtr returnValue(
        new  SFUnrecParticleFunctionPtr::EditHandle(
             &_sfSequenceFunction,
             this->getType().getFieldDesc(SequenceFunctionFieldId),
             this));

    returnValue->setSetMethod(
        boost::bind(&QuadSequenceParticleSystemDrawer::setSequenceFunction,
                    static_cast<QuadSequenceParticleSystemDrawer *>(this), _1));

    editSField(SequenceFunctionFieldMask);

    return returnValue;
}

GetFieldHandlePtr QuadSequenceParticleSystemDrawerBase::getHandleImageDimensions (void) const
{
    SFVec2us::GetHandlePtr returnValue(
        new  SFVec2us::GetHandle(
             &_sfImageDimensions,
             this->getType().getFieldDesc(ImageDimensionsFieldId),
             const_cast<QuadSequenceParticleSystemDrawerBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr QuadSequenceParticleSystemDrawerBase::editHandleImageDimensions(void)
{
    SFVec2us::EditHandlePtr returnValue(
        new  SFVec2us::EditHandle(
             &_sfImageDimensions,
             this->getType().getFieldDesc(ImageDimensionsFieldId),
             this));


    editSField(ImageDimensionsFieldMask);

    return returnValue;
}


#ifdef OSG_MT_CPTR_ASPECT
void QuadSequenceParticleSystemDrawerBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    QuadSequenceParticleSystemDrawer *pThis = static_cast<QuadSequenceParticleSystemDrawer *>(this);

    pThis->execSync(static_cast<QuadSequenceParticleSystemDrawer *>(&oFrom),
                    whichField,
                    oOffsets,
                    syncMode,
                    uiSyncInfo);
}
#endif


#ifdef OSG_MT_CPTR_ASPECT
FieldContainer *QuadSequenceParticleSystemDrawerBase::createAspectCopy(
    const FieldContainer *pRefAspect) const
{
    QuadSequenceParticleSystemDrawer *returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const QuadSequenceParticleSystemDrawer *>(pRefAspect),
                  dynamic_cast<const QuadSequenceParticleSystemDrawer *>(this));

    return returnValue;
}
#endif

void QuadSequenceParticleSystemDrawerBase::resolveLinks(void)
{
    Inherited::resolveLinks();

    static_cast<QuadSequenceParticleSystemDrawer *>(this)->setSequenceFunction(NULL);


}


OSG_END_NAMESPACE

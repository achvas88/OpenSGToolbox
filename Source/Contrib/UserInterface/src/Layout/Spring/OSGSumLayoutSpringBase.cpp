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
 **     class SumLayoutSpring!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <cstdlib>
#include <cstdio>
#include <boost/assign/list_of.hpp>

#include "OSGConfig.h"




#include "OSGSumLayoutSpringBase.h"
#include "OSGSumLayoutSpring.h"

#include <boost/bind.hpp>

#ifdef WIN32 // turn off 'this' : used in base member initializer list warning
#pragma warning(disable:4355)
#endif

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::SumLayoutSpring
    A UI Sum LayoutSpring.
 */

/***************************************************************************\
 *                        Field Documentation                              *
\***************************************************************************/


/***************************************************************************\
 *                      FieldType/FieldTrait Instantiation                 *
\***************************************************************************/

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldTraits<SumLayoutSpring *>::_type("SumLayoutSpringPtr", "CompoundLayoutSpringPtr");
#endif

OSG_FIELDTRAITS_GETTYPE(SumLayoutSpring *)

OSG_EXPORT_PTR_SFIELD_FULL(PointerSField,
                           SumLayoutSpring *,
                           0);

OSG_EXPORT_PTR_MFIELD_FULL(PointerMField,
                           SumLayoutSpring *,
                           0);

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

void SumLayoutSpringBase::classDescInserter(TypeObject &oType)
{
}


SumLayoutSpringBase::TypeObject SumLayoutSpringBase::_type(
    SumLayoutSpringBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    0,
    reinterpret_cast<PrototypeCreateF>(&SumLayoutSpringBase::createEmptyLocal),
    SumLayoutSpring::initMethod,
    SumLayoutSpring::exitMethod,
    reinterpret_cast<InitalInsertDescFunc>(&SumLayoutSpring::classDescInserter),
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "\tname=\"SumLayoutSpring\"\n"
    "\tparent=\"CompoundLayoutSpring\"\n"
    "    library=\"ContribUserInterface\"\n"
    "    pointerfieldtypes=\"both\"\n"
    "\tstructure=\"concrete\"\n"
    "    systemcomponent=\"true\"\n"
    "    parentsystemcomponent=\"true\"\n"
    "    decoratable=\"false\"\n"
    "    useLocalIncludes=\"false\"\n"
    "    isNodeCore=\"false\"\n"
    "    authors=\"David Kabala (djkabala@gmail.com)                             \"\n"
    ">\n"
    "A UI Sum LayoutSpring.\n"
    "</FieldContainer>\n",
    "A UI Sum LayoutSpring.\n"
    );


/*------------------------------ get -----------------------------------*/

FieldContainerType &SumLayoutSpringBase::getType(void)
{
    return _type;
}

const FieldContainerType &SumLayoutSpringBase::getType(void) const
{
    return _type;
}

UInt32 SumLayoutSpringBase::getContainerSize(void) const
{
    return sizeof(SumLayoutSpring);
}

/*------------------------- decorator get ------------------------------*/






/*------------------------------ access -----------------------------------*/

UInt32 SumLayoutSpringBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);


    return returnValue;
}

void SumLayoutSpringBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

}

void SumLayoutSpringBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

}

//! create a new instance of the class
SumLayoutSpringTransitPtr SumLayoutSpringBase::createLocal(BitVector bFlags)
{
    SumLayoutSpringTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyLocal(bFlags);

        fc = dynamic_pointer_cast<SumLayoutSpring>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class, copy the container flags
SumLayoutSpringTransitPtr SumLayoutSpringBase::createDependent(BitVector bFlags)
{
    SumLayoutSpringTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyDependent(bFlags);

        fc = dynamic_pointer_cast<SumLayoutSpring>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class
SumLayoutSpringTransitPtr SumLayoutSpringBase::create(void)
{
    SumLayoutSpringTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopy();

        fc = dynamic_pointer_cast<SumLayoutSpring>(tmpPtr);
    }

    return fc;
}

SumLayoutSpring *SumLayoutSpringBase::createEmptyLocal(BitVector bFlags)
{
    SumLayoutSpring *returnValue;

    newPtr<SumLayoutSpring>(returnValue, bFlags);

    returnValue->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

//! create an empty new instance of the class, do not copy the prototype
SumLayoutSpring *SumLayoutSpringBase::createEmpty(void)
{
    SumLayoutSpring *returnValue;

    newPtr<SumLayoutSpring>(returnValue, Thread::getCurrentLocalFlags());

    returnValue->_pFieldFlags->_bNamespaceMask &=
        ~Thread::getCurrentLocalFlags();

    return returnValue;
}


FieldContainerTransitPtr SumLayoutSpringBase::shallowCopyLocal(
    BitVector bFlags) const
{
    SumLayoutSpring *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const SumLayoutSpring *>(this), bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

FieldContainerTransitPtr SumLayoutSpringBase::shallowCopyDependent(
    BitVector bFlags) const
{
    SumLayoutSpring *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const SumLayoutSpring *>(this), ~bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask = bFlags;

    return returnValue;
}

FieldContainerTransitPtr SumLayoutSpringBase::shallowCopy(void) const
{
    SumLayoutSpring *tmpPtr;

    newPtr(tmpPtr,
           dynamic_cast<const SumLayoutSpring *>(this),
           Thread::getCurrentLocalFlags());

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~Thread::getCurrentLocalFlags();

    FieldContainerTransitPtr returnValue(tmpPtr);

    return returnValue;
}




/*------------------------- constructors ----------------------------------*/

SumLayoutSpringBase::SumLayoutSpringBase(void) :
    Inherited()
{
}

SumLayoutSpringBase::SumLayoutSpringBase(const SumLayoutSpringBase &source) :
    Inherited(source)
{
}


/*-------------------------- destructors ----------------------------------*/

SumLayoutSpringBase::~SumLayoutSpringBase(void)
{
}



#ifdef OSG_MT_CPTR_ASPECT
void SumLayoutSpringBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    SumLayoutSpring *pThis = static_cast<SumLayoutSpring *>(this);

    pThis->execSync(static_cast<SumLayoutSpring *>(&oFrom),
                    whichField,
                    oOffsets,
                    syncMode,
                    uiSyncInfo);
}
#endif


#ifdef OSG_MT_CPTR_ASPECT
FieldContainer *SumLayoutSpringBase::createAspectCopy(
    const FieldContainer *pRefAspect) const
{
    SumLayoutSpring *returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const SumLayoutSpring *>(pRefAspect),
                  dynamic_cast<const SumLayoutSpring *>(this));

    return returnValue;
}
#endif

void SumLayoutSpringBase::resolveLinks(void)
{
    Inherited::resolveLinks();


}


OSG_END_NAMESPACE
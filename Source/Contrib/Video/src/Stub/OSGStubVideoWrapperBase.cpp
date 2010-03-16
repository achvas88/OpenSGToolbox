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
 **     class StubVideoWrapper!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <cstdlib>
#include <cstdio>
#include <boost/assign/list_of.hpp>

#include "OSGConfig.h"




#include "OSGStubVideoWrapperBase.h"
#include "OSGStubVideoWrapper.h"

#include <boost/bind.hpp>

#ifdef WIN32 // turn off 'this' : used in base member initializer list warning
#pragma warning(disable:4355)
#endif

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::StubVideoWrapper
    
 */

/***************************************************************************\
 *                        Field Documentation                              *
\***************************************************************************/


/***************************************************************************\
 *                      FieldType/FieldTrait Instantiation                 *
\***************************************************************************/

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldTraits<StubVideoWrapper *>::_type("StubVideoWrapperPtr", "VideoWrapperPtr");
#endif

OSG_FIELDTRAITS_GETTYPE(StubVideoWrapper *)

OSG_EXPORT_PTR_SFIELD_FULL(PointerSField,
                           StubVideoWrapper *,
                           0);

OSG_EXPORT_PTR_MFIELD_FULL(PointerMField,
                           StubVideoWrapper *,
                           0);

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

void StubVideoWrapperBase::classDescInserter(TypeObject &oType)
{
}


StubVideoWrapperBase::TypeObject StubVideoWrapperBase::_type(
    StubVideoWrapperBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    0,
    reinterpret_cast<PrototypeCreateF>(&StubVideoWrapperBase::createEmptyLocal),
    StubVideoWrapper::initMethod,
    StubVideoWrapper::exitMethod,
    reinterpret_cast<InitalInsertDescFunc>(&StubVideoWrapper::classDescInserter),
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "\tname=\"StubVideoWrapper\"\n"
    "\tparent=\"VideoWrapper\"\n"
    "\tlibrary=\"ContribVideo\"\n"
    "    pointerfieldtypes=\"both\"\n"
    "    structure=\"concrete\"\n"
    "    systemcomponent=\"true\"\n"
    "    parentsystemcomponent=\"true\"\n"
    "    decoratable=\"false\"\n"
    "    useLocalIncludes=\"false\"\n"
    "    isNodeCore=\"false\"\n"
    "    authors=\"David Kabala (djkabala@gmail.com)                             \"\n"
    ">\n"
    "</FieldContainer>\n",
    ""
    );


/*------------------------------ get -----------------------------------*/

FieldContainerType &StubVideoWrapperBase::getType(void)
{
    return _type;
}

const FieldContainerType &StubVideoWrapperBase::getType(void) const
{
    return _type;
}

UInt32 StubVideoWrapperBase::getContainerSize(void) const
{
    return sizeof(StubVideoWrapper);
}

/*------------------------- decorator get ------------------------------*/






/*------------------------------ access -----------------------------------*/

UInt32 StubVideoWrapperBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);


    return returnValue;
}

void StubVideoWrapperBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

}

void StubVideoWrapperBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

}

//! create a new instance of the class
StubVideoWrapperTransitPtr StubVideoWrapperBase::createLocal(BitVector bFlags)
{
    StubVideoWrapperTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyLocal(bFlags);

        fc = dynamic_pointer_cast<StubVideoWrapper>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class, copy the container flags
StubVideoWrapperTransitPtr StubVideoWrapperBase::createDependent(BitVector bFlags)
{
    StubVideoWrapperTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyDependent(bFlags);

        fc = dynamic_pointer_cast<StubVideoWrapper>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class
StubVideoWrapperTransitPtr StubVideoWrapperBase::create(void)
{
    StubVideoWrapperTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopy();

        fc = dynamic_pointer_cast<StubVideoWrapper>(tmpPtr);
    }

    return fc;
}

StubVideoWrapper *StubVideoWrapperBase::createEmptyLocal(BitVector bFlags)
{
    StubVideoWrapper *returnValue;

    newPtr<StubVideoWrapper>(returnValue, bFlags);

    returnValue->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

//! create an empty new instance of the class, do not copy the prototype
StubVideoWrapper *StubVideoWrapperBase::createEmpty(void)
{
    StubVideoWrapper *returnValue;

    newPtr<StubVideoWrapper>(returnValue, Thread::getCurrentLocalFlags());

    returnValue->_pFieldFlags->_bNamespaceMask &=
        ~Thread::getCurrentLocalFlags();

    return returnValue;
}


FieldContainerTransitPtr StubVideoWrapperBase::shallowCopyLocal(
    BitVector bFlags) const
{
    StubVideoWrapper *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const StubVideoWrapper *>(this), bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

FieldContainerTransitPtr StubVideoWrapperBase::shallowCopyDependent(
    BitVector bFlags) const
{
    StubVideoWrapper *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const StubVideoWrapper *>(this), ~bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask = bFlags;

    return returnValue;
}

FieldContainerTransitPtr StubVideoWrapperBase::shallowCopy(void) const
{
    StubVideoWrapper *tmpPtr;

    newPtr(tmpPtr,
           dynamic_cast<const StubVideoWrapper *>(this),
           Thread::getCurrentLocalFlags());

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~Thread::getCurrentLocalFlags();

    FieldContainerTransitPtr returnValue(tmpPtr);

    return returnValue;
}




/*------------------------- constructors ----------------------------------*/

StubVideoWrapperBase::StubVideoWrapperBase(void) :
    Inherited()
{
}

StubVideoWrapperBase::StubVideoWrapperBase(const StubVideoWrapperBase &source) :
    Inherited(source)
{
}


/*-------------------------- destructors ----------------------------------*/

StubVideoWrapperBase::~StubVideoWrapperBase(void)
{
}



#ifdef OSG_MT_CPTR_ASPECT
void StubVideoWrapperBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    StubVideoWrapper *pThis = static_cast<StubVideoWrapper *>(this);

    pThis->execSync(static_cast<StubVideoWrapper *>(&oFrom),
                    whichField,
                    oOffsets,
                    syncMode,
                    uiSyncInfo);
}
#endif


#ifdef OSG_MT_CPTR_ASPECT
FieldContainer *StubVideoWrapperBase::createAspectCopy(
    const FieldContainer *pRefAspect) const
{
    StubVideoWrapper *returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const StubVideoWrapper *>(pRefAspect),
                  dynamic_cast<const StubVideoWrapper *>(this));

    return returnValue;
}
#endif

void StubVideoWrapperBase::resolveLinks(void)
{
    Inherited::resolveLinks();


}


OSG_END_NAMESPACE
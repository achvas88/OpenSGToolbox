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
 **     class BorderLayout!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <cstdlib>
#include <cstdio>
#include <boost/assign/list_of.hpp>

#include "OSGConfig.h"




#include "OSGBorderLayoutBase.h"
#include "OSGBorderLayout.h"

#include <boost/bind.hpp>

#ifdef WIN32 // turn off 'this' : used in base member initializer list warning
#pragma warning(disable:4355)
#endif

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::BorderLayout
    A UI BorderLayout.
 */

/***************************************************************************\
 *                        Field Documentation                              *
\***************************************************************************/


/***************************************************************************\
 *                      FieldType/FieldTrait Instantiation                 *
\***************************************************************************/

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldTraits<BorderLayout *>::_type("BorderLayoutPtr", "LayoutPtr");
#endif

OSG_FIELDTRAITS_GETTYPE(BorderLayout *)

OSG_EXPORT_PTR_SFIELD_FULL(PointerSField,
                           BorderLayout *,
                           0);

OSG_EXPORT_PTR_MFIELD_FULL(PointerMField,
                           BorderLayout *,
                           0);

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

void BorderLayoutBase::classDescInserter(TypeObject &oType)
{
}


BorderLayoutBase::TypeObject BorderLayoutBase::_type(
    BorderLayoutBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    0,
    reinterpret_cast<PrototypeCreateF>(&BorderLayoutBase::createEmptyLocal),
    BorderLayout::initMethod,
    BorderLayout::exitMethod,
    reinterpret_cast<InitalInsertDescFunc>(&BorderLayout::classDescInserter),
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "\tname=\"BorderLayout\"\n"
    "\tparent=\"Layout\"\n"
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
    "A UI BorderLayout.\n"
    "</FieldContainer>\n",
    "A UI BorderLayout.\n"
    );


/*------------------------------ get -----------------------------------*/

FieldContainerType &BorderLayoutBase::getType(void)
{
    return _type;
}

const FieldContainerType &BorderLayoutBase::getType(void) const
{
    return _type;
}

UInt32 BorderLayoutBase::getContainerSize(void) const
{
    return sizeof(BorderLayout);
}

/*------------------------- decorator get ------------------------------*/






/*------------------------------ access -----------------------------------*/

UInt32 BorderLayoutBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);


    return returnValue;
}

void BorderLayoutBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

}

void BorderLayoutBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

}

//! create a new instance of the class
BorderLayoutTransitPtr BorderLayoutBase::createLocal(BitVector bFlags)
{
    BorderLayoutTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyLocal(bFlags);

        fc = dynamic_pointer_cast<BorderLayout>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class, copy the container flags
BorderLayoutTransitPtr BorderLayoutBase::createDependent(BitVector bFlags)
{
    BorderLayoutTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyDependent(bFlags);

        fc = dynamic_pointer_cast<BorderLayout>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class
BorderLayoutTransitPtr BorderLayoutBase::create(void)
{
    BorderLayoutTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopy();

        fc = dynamic_pointer_cast<BorderLayout>(tmpPtr);
    }

    return fc;
}

BorderLayout *BorderLayoutBase::createEmptyLocal(BitVector bFlags)
{
    BorderLayout *returnValue;

    newPtr<BorderLayout>(returnValue, bFlags);

    returnValue->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

//! create an empty new instance of the class, do not copy the prototype
BorderLayout *BorderLayoutBase::createEmpty(void)
{
    BorderLayout *returnValue;

    newPtr<BorderLayout>(returnValue, Thread::getCurrentLocalFlags());

    returnValue->_pFieldFlags->_bNamespaceMask &=
        ~Thread::getCurrentLocalFlags();

    return returnValue;
}


FieldContainerTransitPtr BorderLayoutBase::shallowCopyLocal(
    BitVector bFlags) const
{
    BorderLayout *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const BorderLayout *>(this), bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

FieldContainerTransitPtr BorderLayoutBase::shallowCopyDependent(
    BitVector bFlags) const
{
    BorderLayout *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const BorderLayout *>(this), ~bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask = bFlags;

    return returnValue;
}

FieldContainerTransitPtr BorderLayoutBase::shallowCopy(void) const
{
    BorderLayout *tmpPtr;

    newPtr(tmpPtr,
           dynamic_cast<const BorderLayout *>(this),
           Thread::getCurrentLocalFlags());

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~Thread::getCurrentLocalFlags();

    FieldContainerTransitPtr returnValue(tmpPtr);

    return returnValue;
}




/*------------------------- constructors ----------------------------------*/

BorderLayoutBase::BorderLayoutBase(void) :
    Inherited()
{
}

BorderLayoutBase::BorderLayoutBase(const BorderLayoutBase &source) :
    Inherited(source)
{
}


/*-------------------------- destructors ----------------------------------*/

BorderLayoutBase::~BorderLayoutBase(void)
{
}



#ifdef OSG_MT_CPTR_ASPECT
void BorderLayoutBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    BorderLayout *pThis = static_cast<BorderLayout *>(this);

    pThis->execSync(static_cast<BorderLayout *>(&oFrom),
                    whichField,
                    oOffsets,
                    syncMode,
                    uiSyncInfo);
}
#endif


#ifdef OSG_MT_CPTR_ASPECT
FieldContainer *BorderLayoutBase::createAspectCopy(
    const FieldContainer *pRefAspect) const
{
    BorderLayout *returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const BorderLayout *>(pRefAspect),
                  dynamic_cast<const BorderLayout *>(this));

    return returnValue;
}
#endif

void BorderLayoutBase::resolveLinks(void)
{
    Inherited::resolveLinks();


}


OSG_END_NAMESPACE
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
 **     class MenuEvent!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <cstdlib>
#include <cstdio>
#include <boost/assign/list_of.hpp>

#include "OSGConfig.h"




#include "OSGMenuEventBase.h"
#include "OSGMenuEvent.h"

#include <boost/bind.hpp>

#ifdef WIN32 // turn off 'this' : used in base member initializer list warning
#pragma warning(disable:4355)
#endif

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::MenuEvent
    
 */

/***************************************************************************\
 *                        Field Documentation                              *
\***************************************************************************/


/***************************************************************************\
 *                      FieldType/FieldTrait Instantiation                 *
\***************************************************************************/

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldTraits<MenuEvent *>::_type("MenuEventPtr", "EventPtr");
#endif

OSG_FIELDTRAITS_GETTYPE(MenuEvent *)

OSG_EXPORT_PTR_SFIELD_FULL(PointerSField,
                           MenuEvent *,
                           0);

OSG_EXPORT_PTR_MFIELD_FULL(PointerMField,
                           MenuEvent *,
                           0);

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

void MenuEventBase::classDescInserter(TypeObject &oType)
{
}


MenuEventBase::TypeObject MenuEventBase::_type(
    MenuEventBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    0,
    reinterpret_cast<PrototypeCreateF>(&MenuEventBase::createEmptyLocal),
    MenuEvent::initMethod,
    MenuEvent::exitMethod,
    reinterpret_cast<InitalInsertDescFunc>(&MenuEvent::classDescInserter),
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "\tname=\"MenuEvent\"\n"
    "\tparent=\"Event\"\n"
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
    "</FieldContainer>\n",
    ""
    );


/*------------------------------ get -----------------------------------*/

FieldContainerType &MenuEventBase::getType(void)
{
    return _type;
}

const FieldContainerType &MenuEventBase::getType(void) const
{
    return _type;
}

UInt32 MenuEventBase::getContainerSize(void) const
{
    return sizeof(MenuEvent);
}

/*------------------------- decorator get ------------------------------*/






/*------------------------------ access -----------------------------------*/

UInt32 MenuEventBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);


    return returnValue;
}

void MenuEventBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

}

void MenuEventBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

}

//! create a new instance of the class
MenuEventTransitPtr MenuEventBase::createLocal(BitVector bFlags)
{
    MenuEventTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyLocal(bFlags);

        fc = dynamic_pointer_cast<MenuEvent>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class, copy the container flags
MenuEventTransitPtr MenuEventBase::createDependent(BitVector bFlags)
{
    MenuEventTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyDependent(bFlags);

        fc = dynamic_pointer_cast<MenuEvent>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class
MenuEventTransitPtr MenuEventBase::create(void)
{
    MenuEventTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopy();

        fc = dynamic_pointer_cast<MenuEvent>(tmpPtr);
    }

    return fc;
}

MenuEvent *MenuEventBase::createEmptyLocal(BitVector bFlags)
{
    MenuEvent *returnValue;

    newPtr<MenuEvent>(returnValue, bFlags);

    returnValue->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

//! create an empty new instance of the class, do not copy the prototype
MenuEvent *MenuEventBase::createEmpty(void)
{
    MenuEvent *returnValue;

    newPtr<MenuEvent>(returnValue, Thread::getCurrentLocalFlags());

    returnValue->_pFieldFlags->_bNamespaceMask &=
        ~Thread::getCurrentLocalFlags();

    return returnValue;
}


FieldContainerTransitPtr MenuEventBase::shallowCopyLocal(
    BitVector bFlags) const
{
    MenuEvent *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const MenuEvent *>(this), bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

FieldContainerTransitPtr MenuEventBase::shallowCopyDependent(
    BitVector bFlags) const
{
    MenuEvent *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const MenuEvent *>(this), ~bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask = bFlags;

    return returnValue;
}

FieldContainerTransitPtr MenuEventBase::shallowCopy(void) const
{
    MenuEvent *tmpPtr;

    newPtr(tmpPtr,
           dynamic_cast<const MenuEvent *>(this),
           Thread::getCurrentLocalFlags());

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~Thread::getCurrentLocalFlags();

    FieldContainerTransitPtr returnValue(tmpPtr);

    return returnValue;
}




/*------------------------- constructors ----------------------------------*/

MenuEventBase::MenuEventBase(void) :
    Inherited()
{
}

MenuEventBase::MenuEventBase(const MenuEventBase &source) :
    Inherited(source)
{
}


/*-------------------------- destructors ----------------------------------*/

MenuEventBase::~MenuEventBase(void)
{
}



#ifdef OSG_MT_CPTR_ASPECT
void MenuEventBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    MenuEvent *pThis = static_cast<MenuEvent *>(this);

    pThis->execSync(static_cast<MenuEvent *>(&oFrom),
                    whichField,
                    oOffsets,
                    syncMode,
                    uiSyncInfo);
}
#endif


#ifdef OSG_MT_CPTR_ASPECT
FieldContainer *MenuEventBase::createAspectCopy(
    const FieldContainer *pRefAspect) const
{
    MenuEvent *returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const MenuEvent *>(pRefAspect),
                  dynamic_cast<const MenuEvent *>(this));

    return returnValue;
}
#endif

void MenuEventBase::resolveLinks(void)
{
    Inherited::resolveLinks();


}


OSG_END_NAMESPACE
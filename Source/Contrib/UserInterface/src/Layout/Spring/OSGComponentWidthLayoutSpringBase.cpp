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
 **     class ComponentWidthLayoutSpring!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <cstdlib>
#include <cstdio>
#include <boost/assign/list_of.hpp>

#include "OSGConfig.h"



#include "OSGComponent.h"               // Component Class

#include "OSGComponentWidthLayoutSpringBase.h"
#include "OSGComponentWidthLayoutSpring.h"

#include <boost/bind.hpp>

#ifdef WIN32 // turn off 'this' : used in base member initializer list warning
#pragma warning(disable:4355)
#endif

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::ComponentWidthLayoutSpring
    A UI ComponentWidth LayoutSpring.
 */

/***************************************************************************\
 *                        Field Documentation                              *
\***************************************************************************/

/*! \var Component *     ComponentWidthLayoutSpringBase::_sfComponent
    
*/

/*! \var UInt32          ComponentWidthLayoutSpringBase::_sfSizeField
    
*/


/***************************************************************************\
 *                      FieldType/FieldTrait Instantiation                 *
\***************************************************************************/

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldTraits<ComponentWidthLayoutSpring *>::_type("ComponentWidthLayoutSpringPtr", "AbstractLayoutSpringPtr");
#endif

OSG_FIELDTRAITS_GETTYPE(ComponentWidthLayoutSpring *)

OSG_EXPORT_PTR_SFIELD_FULL(PointerSField,
                           ComponentWidthLayoutSpring *,
                           0);

OSG_EXPORT_PTR_MFIELD_FULL(PointerMField,
                           ComponentWidthLayoutSpring *,
                           0);

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

void ComponentWidthLayoutSpringBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


    pDesc = new SFUnrecComponentPtr::Description(
        SFUnrecComponentPtr::getClassType(),
        "Component",
        "",
        ComponentFieldId, ComponentFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&ComponentWidthLayoutSpring::editHandleComponent),
        static_cast<FieldGetMethodSig >(&ComponentWidthLayoutSpring::getHandleComponent));

    oType.addInitialDesc(pDesc);


    pDesc = new SFUInt32::Description(
        SFUInt32::getClassType(),
        "SizeField",
        "",
        SizeFieldFieldId, SizeFieldFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&ComponentWidthLayoutSpring::editHandleSizeField),
        static_cast<FieldGetMethodSig >(&ComponentWidthLayoutSpring::getHandleSizeField));

    oType.addInitialDesc(pDesc);

}


ComponentWidthLayoutSpringBase::TypeObject ComponentWidthLayoutSpringBase::_type(
    ComponentWidthLayoutSpringBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    0,
    reinterpret_cast<PrototypeCreateF>(&ComponentWidthLayoutSpringBase::createEmptyLocal),
    ComponentWidthLayoutSpring::initMethod,
    ComponentWidthLayoutSpring::exitMethod,
    reinterpret_cast<InitalInsertDescFunc>(&ComponentWidthLayoutSpring::classDescInserter),
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "\tname=\"ComponentWidthLayoutSpring\"\n"
    "\tparent=\"AbstractLayoutSpring\"\n"
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
    "A UI ComponentWidth LayoutSpring.\n"
    "\t<Field\n"
    "\t\tname=\"Component\"\n"
    "\t\ttype=\"Component\"\n"
    "        category=\"pointer\"\n"
    "\t\tcardinality=\"single\"\n"
    "      visibility=\"external\"\n"
    "\t\tdefaultValue=\"NULL\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "   </Field>\n"
    "\t<Field\n"
    "\t\tname=\"SizeField\"\n"
    "\t\ttype=\"UInt32\"\n"
    "        category=\"data\"\n"
    "\t\tcardinality=\"single\"\n"
    "      visibility=\"external\"\n"
    "\t\tdefaultValue=\"ComponentWidthLayoutSpring::PREFERRED_SIZE\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "   </Field>\n"
    "</FieldContainer>\n",
    "A UI ComponentWidth LayoutSpring.\n"
    );


/*------------------------------ get -----------------------------------*/

FieldContainerType &ComponentWidthLayoutSpringBase::getType(void)
{
    return _type;
}

const FieldContainerType &ComponentWidthLayoutSpringBase::getType(void) const
{
    return _type;
}

UInt32 ComponentWidthLayoutSpringBase::getContainerSize(void) const
{
    return sizeof(ComponentWidthLayoutSpring);
}

/*------------------------- decorator get ------------------------------*/


//! Get the ComponentWidthLayoutSpring::_sfComponent field.
const SFUnrecComponentPtr *ComponentWidthLayoutSpringBase::getSFComponent(void) const
{
    return &_sfComponent;
}

SFUnrecComponentPtr *ComponentWidthLayoutSpringBase::editSFComponent      (void)
{
    editSField(ComponentFieldMask);

    return &_sfComponent;
}

SFUInt32 *ComponentWidthLayoutSpringBase::editSFSizeField(void)
{
    editSField(SizeFieldFieldMask);

    return &_sfSizeField;
}

const SFUInt32 *ComponentWidthLayoutSpringBase::getSFSizeField(void) const
{
    return &_sfSizeField;
}






/*------------------------------ access -----------------------------------*/

UInt32 ComponentWidthLayoutSpringBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (ComponentFieldMask & whichField))
    {
        returnValue += _sfComponent.getBinSize();
    }
    if(FieldBits::NoField != (SizeFieldFieldMask & whichField))
    {
        returnValue += _sfSizeField.getBinSize();
    }

    return returnValue;
}

void ComponentWidthLayoutSpringBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (ComponentFieldMask & whichField))
    {
        _sfComponent.copyToBin(pMem);
    }
    if(FieldBits::NoField != (SizeFieldFieldMask & whichField))
    {
        _sfSizeField.copyToBin(pMem);
    }
}

void ComponentWidthLayoutSpringBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (ComponentFieldMask & whichField))
    {
        _sfComponent.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (SizeFieldFieldMask & whichField))
    {
        _sfSizeField.copyFromBin(pMem);
    }
}

//! create a new instance of the class
ComponentWidthLayoutSpringTransitPtr ComponentWidthLayoutSpringBase::createLocal(BitVector bFlags)
{
    ComponentWidthLayoutSpringTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyLocal(bFlags);

        fc = dynamic_pointer_cast<ComponentWidthLayoutSpring>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class, copy the container flags
ComponentWidthLayoutSpringTransitPtr ComponentWidthLayoutSpringBase::createDependent(BitVector bFlags)
{
    ComponentWidthLayoutSpringTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyDependent(bFlags);

        fc = dynamic_pointer_cast<ComponentWidthLayoutSpring>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class
ComponentWidthLayoutSpringTransitPtr ComponentWidthLayoutSpringBase::create(void)
{
    ComponentWidthLayoutSpringTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopy();

        fc = dynamic_pointer_cast<ComponentWidthLayoutSpring>(tmpPtr);
    }

    return fc;
}

ComponentWidthLayoutSpring *ComponentWidthLayoutSpringBase::createEmptyLocal(BitVector bFlags)
{
    ComponentWidthLayoutSpring *returnValue;

    newPtr<ComponentWidthLayoutSpring>(returnValue, bFlags);

    returnValue->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

//! create an empty new instance of the class, do not copy the prototype
ComponentWidthLayoutSpring *ComponentWidthLayoutSpringBase::createEmpty(void)
{
    ComponentWidthLayoutSpring *returnValue;

    newPtr<ComponentWidthLayoutSpring>(returnValue, Thread::getCurrentLocalFlags());

    returnValue->_pFieldFlags->_bNamespaceMask &=
        ~Thread::getCurrentLocalFlags();

    return returnValue;
}


FieldContainerTransitPtr ComponentWidthLayoutSpringBase::shallowCopyLocal(
    BitVector bFlags) const
{
    ComponentWidthLayoutSpring *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const ComponentWidthLayoutSpring *>(this), bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

FieldContainerTransitPtr ComponentWidthLayoutSpringBase::shallowCopyDependent(
    BitVector bFlags) const
{
    ComponentWidthLayoutSpring *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const ComponentWidthLayoutSpring *>(this), ~bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask = bFlags;

    return returnValue;
}

FieldContainerTransitPtr ComponentWidthLayoutSpringBase::shallowCopy(void) const
{
    ComponentWidthLayoutSpring *tmpPtr;

    newPtr(tmpPtr,
           dynamic_cast<const ComponentWidthLayoutSpring *>(this),
           Thread::getCurrentLocalFlags());

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~Thread::getCurrentLocalFlags();

    FieldContainerTransitPtr returnValue(tmpPtr);

    return returnValue;
}




/*------------------------- constructors ----------------------------------*/

ComponentWidthLayoutSpringBase::ComponentWidthLayoutSpringBase(void) :
    Inherited(),
    _sfComponent              (NULL),
    _sfSizeField              (UInt32(ComponentWidthLayoutSpring::PREFERRED_SIZE))
{
}

ComponentWidthLayoutSpringBase::ComponentWidthLayoutSpringBase(const ComponentWidthLayoutSpringBase &source) :
    Inherited(source),
    _sfComponent              (NULL),
    _sfSizeField              (source._sfSizeField              )
{
}


/*-------------------------- destructors ----------------------------------*/

ComponentWidthLayoutSpringBase::~ComponentWidthLayoutSpringBase(void)
{
}

void ComponentWidthLayoutSpringBase::onCreate(const ComponentWidthLayoutSpring *source)
{
    Inherited::onCreate(source);

    if(source != NULL)
    {
        ComponentWidthLayoutSpring *pThis = static_cast<ComponentWidthLayoutSpring *>(this);

        pThis->setComponent(source->getComponent());
    }
}

GetFieldHandlePtr ComponentWidthLayoutSpringBase::getHandleComponent       (void) const
{
    SFUnrecComponentPtr::GetHandlePtr returnValue(
        new  SFUnrecComponentPtr::GetHandle(
             &_sfComponent,
             this->getType().getFieldDesc(ComponentFieldId),
             const_cast<ComponentWidthLayoutSpringBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr ComponentWidthLayoutSpringBase::editHandleComponent      (void)
{
    SFUnrecComponentPtr::EditHandlePtr returnValue(
        new  SFUnrecComponentPtr::EditHandle(
             &_sfComponent,
             this->getType().getFieldDesc(ComponentFieldId),
             this));

    returnValue->setSetMethod(
        boost::bind(&ComponentWidthLayoutSpring::setComponent,
                    static_cast<ComponentWidthLayoutSpring *>(this), _1));

    editSField(ComponentFieldMask);

    return returnValue;
}

GetFieldHandlePtr ComponentWidthLayoutSpringBase::getHandleSizeField       (void) const
{
    SFUInt32::GetHandlePtr returnValue(
        new  SFUInt32::GetHandle(
             &_sfSizeField,
             this->getType().getFieldDesc(SizeFieldFieldId),
             const_cast<ComponentWidthLayoutSpringBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr ComponentWidthLayoutSpringBase::editHandleSizeField      (void)
{
    SFUInt32::EditHandlePtr returnValue(
        new  SFUInt32::EditHandle(
             &_sfSizeField,
             this->getType().getFieldDesc(SizeFieldFieldId),
             this));


    editSField(SizeFieldFieldMask);

    return returnValue;
}


#ifdef OSG_MT_CPTR_ASPECT
void ComponentWidthLayoutSpringBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    ComponentWidthLayoutSpring *pThis = static_cast<ComponentWidthLayoutSpring *>(this);

    pThis->execSync(static_cast<ComponentWidthLayoutSpring *>(&oFrom),
                    whichField,
                    oOffsets,
                    syncMode,
                    uiSyncInfo);
}
#endif


#ifdef OSG_MT_CPTR_ASPECT
FieldContainer *ComponentWidthLayoutSpringBase::createAspectCopy(
    const FieldContainer *pRefAspect) const
{
    ComponentWidthLayoutSpring *returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const ComponentWidthLayoutSpring *>(pRefAspect),
                  dynamic_cast<const ComponentWidthLayoutSpring *>(this));

    return returnValue;
}
#endif

void ComponentWidthLayoutSpringBase::resolveLinks(void)
{
    Inherited::resolveLinks();

    static_cast<ComponentWidthLayoutSpring *>(this)->setComponent(NULL);


}


OSG_END_NAMESPACE
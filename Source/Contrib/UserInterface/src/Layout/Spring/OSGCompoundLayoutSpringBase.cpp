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
 **     class CompoundLayoutSpring!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <cstdlib>
#include <cstdio>
#include <boost/assign/list_of.hpp>

#include "OSGConfig.h"



#include "OSGLayoutSpring.h"            // Spring1 Class

#include "OSGCompoundLayoutSpringBase.h"
#include "OSGCompoundLayoutSpring.h"

#include <boost/bind.hpp>

#ifdef WIN32 // turn off 'this' : used in base member initializer list warning
#pragma warning(disable:4355)
#endif

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::CompoundLayoutSpring
    A UI Compound LayoutSpring. Use the instance variables of the StaticSpring superclass to cache values that have already been calculated.
 */

/***************************************************************************\
 *                        Field Documentation                              *
\***************************************************************************/

/*! \var LayoutSpring *  CompoundLayoutSpringBase::_sfSpring1
    
*/

/*! \var LayoutSpring *  CompoundLayoutSpringBase::_sfSpring2
    
*/


/***************************************************************************\
 *                      FieldType/FieldTrait Instantiation                 *
\***************************************************************************/

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldTraits<CompoundLayoutSpring *>::_type("CompoundLayoutSpringPtr", "StaticLayoutSpringPtr");
#endif

OSG_FIELDTRAITS_GETTYPE(CompoundLayoutSpring *)

OSG_EXPORT_PTR_SFIELD_FULL(PointerSField,
                           CompoundLayoutSpring *,
                           0);

OSG_EXPORT_PTR_MFIELD_FULL(PointerMField,
                           CompoundLayoutSpring *,
                           0);

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

void CompoundLayoutSpringBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


    pDesc = new SFUnrecLayoutSpringPtr::Description(
        SFUnrecLayoutSpringPtr::getClassType(),
        "Spring1",
        "",
        Spring1FieldId, Spring1FieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&CompoundLayoutSpring::editHandleSpring1),
        static_cast<FieldGetMethodSig >(&CompoundLayoutSpring::getHandleSpring1));

    oType.addInitialDesc(pDesc);

    pDesc = new SFUnrecLayoutSpringPtr::Description(
        SFUnrecLayoutSpringPtr::getClassType(),
        "Spring2",
        "",
        Spring2FieldId, Spring2FieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&CompoundLayoutSpring::editHandleSpring2),
        static_cast<FieldGetMethodSig >(&CompoundLayoutSpring::getHandleSpring2));

    oType.addInitialDesc(pDesc);
}


CompoundLayoutSpringBase::TypeObject CompoundLayoutSpringBase::_type(
    CompoundLayoutSpringBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    0,
    NULL,
    CompoundLayoutSpring::initMethod,
    CompoundLayoutSpring::exitMethod,
    reinterpret_cast<InitalInsertDescFunc>(&CompoundLayoutSpring::classDescInserter),
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "\tname=\"CompoundLayoutSpring\"\n"
    "\tparent=\"StaticLayoutSpring\"\n"
    "    library=\"ContribUserInterface\"\n"
    "    pointerfieldtypes=\"both\"\n"
    "\tstructure=\"abstract\"\n"
    "    systemcomponent=\"true\"\n"
    "    parentsystemcomponent=\"true\"\n"
    "    decoratable=\"false\"\n"
    "    useLocalIncludes=\"false\"\n"
    "    isNodeCore=\"false\"\n"
    "    authors=\"David Kabala (djkabala@gmail.com)                             \"\n"
    ">\n"
    "A UI Compound LayoutSpring. Use the instance variables of the StaticSpring superclass to cache values that have already been calculated.\n"
    "\t<Field\n"
    "\t\tname=\"Spring1\"\n"
    "\t\ttype=\"LayoutSpring\"\n"
    "        category=\"pointer\"\n"
    "\t\tcardinality=\"single\"\n"
    "      visibility=\"external\"\n"
    "\t\tdefaultValue=\"NULL\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "   </Field>\n"
    "\t<Field\n"
    "\t\tname=\"Spring2\"\n"
    "\t\ttype=\"LayoutSpring\"\n"
    "        category=\"pointer\"\n"
    "\t\tcardinality=\"single\"\n"
    "      visibility=\"external\"\n"
    "\t\tdefaultValue=\"NULL\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "   </Field>\n"
    "</FieldContainer>\n",
    "A UI Compound LayoutSpring. Use the instance variables of the StaticSpring superclass to cache values that have already been calculated.\n"
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &CompoundLayoutSpringBase::getType(void)
{
    return _type;
}

const FieldContainerType &CompoundLayoutSpringBase::getType(void) const
{
    return _type;
}

UInt32 CompoundLayoutSpringBase::getContainerSize(void) const
{
    return sizeof(CompoundLayoutSpring);
}

/*------------------------- decorator get ------------------------------*/


//! Get the CompoundLayoutSpring::_sfSpring1 field.
const SFUnrecLayoutSpringPtr *CompoundLayoutSpringBase::getSFSpring1(void) const
{
    return &_sfSpring1;
}

SFUnrecLayoutSpringPtr *CompoundLayoutSpringBase::editSFSpring1        (void)
{
    editSField(Spring1FieldMask);

    return &_sfSpring1;
}

//! Get the CompoundLayoutSpring::_sfSpring2 field.
const SFUnrecLayoutSpringPtr *CompoundLayoutSpringBase::getSFSpring2(void) const
{
    return &_sfSpring2;
}

SFUnrecLayoutSpringPtr *CompoundLayoutSpringBase::editSFSpring2        (void)
{
    editSField(Spring2FieldMask);

    return &_sfSpring2;
}





/*------------------------------ access -----------------------------------*/

UInt32 CompoundLayoutSpringBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (Spring1FieldMask & whichField))
    {
        returnValue += _sfSpring1.getBinSize();
    }
    if(FieldBits::NoField != (Spring2FieldMask & whichField))
    {
        returnValue += _sfSpring2.getBinSize();
    }

    return returnValue;
}

void CompoundLayoutSpringBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (Spring1FieldMask & whichField))
    {
        _sfSpring1.copyToBin(pMem);
    }
    if(FieldBits::NoField != (Spring2FieldMask & whichField))
    {
        _sfSpring2.copyToBin(pMem);
    }
}

void CompoundLayoutSpringBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (Spring1FieldMask & whichField))
    {
        _sfSpring1.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (Spring2FieldMask & whichField))
    {
        _sfSpring2.copyFromBin(pMem);
    }
}




/*------------------------- constructors ----------------------------------*/

CompoundLayoutSpringBase::CompoundLayoutSpringBase(void) :
    Inherited(),
    _sfSpring1                (NULL),
    _sfSpring2                (NULL)
{
}

CompoundLayoutSpringBase::CompoundLayoutSpringBase(const CompoundLayoutSpringBase &source) :
    Inherited(source),
    _sfSpring1                (NULL),
    _sfSpring2                (NULL)
{
}


/*-------------------------- destructors ----------------------------------*/

CompoundLayoutSpringBase::~CompoundLayoutSpringBase(void)
{
}

void CompoundLayoutSpringBase::onCreate(const CompoundLayoutSpring *source)
{
    Inherited::onCreate(source);

    if(source != NULL)
    {
        CompoundLayoutSpring *pThis = static_cast<CompoundLayoutSpring *>(this);

        pThis->setSpring1(source->getSpring1());

        pThis->setSpring2(source->getSpring2());
    }
}

GetFieldHandlePtr CompoundLayoutSpringBase::getHandleSpring1         (void) const
{
    SFUnrecLayoutSpringPtr::GetHandlePtr returnValue(
        new  SFUnrecLayoutSpringPtr::GetHandle(
             &_sfSpring1,
             this->getType().getFieldDesc(Spring1FieldId),
             const_cast<CompoundLayoutSpringBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr CompoundLayoutSpringBase::editHandleSpring1        (void)
{
    SFUnrecLayoutSpringPtr::EditHandlePtr returnValue(
        new  SFUnrecLayoutSpringPtr::EditHandle(
             &_sfSpring1,
             this->getType().getFieldDesc(Spring1FieldId),
             this));

    returnValue->setSetMethod(
        boost::bind(&CompoundLayoutSpring::setSpring1,
                    static_cast<CompoundLayoutSpring *>(this), _1));

    editSField(Spring1FieldMask);

    return returnValue;
}

GetFieldHandlePtr CompoundLayoutSpringBase::getHandleSpring2         (void) const
{
    SFUnrecLayoutSpringPtr::GetHandlePtr returnValue(
        new  SFUnrecLayoutSpringPtr::GetHandle(
             &_sfSpring2,
             this->getType().getFieldDesc(Spring2FieldId),
             const_cast<CompoundLayoutSpringBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr CompoundLayoutSpringBase::editHandleSpring2        (void)
{
    SFUnrecLayoutSpringPtr::EditHandlePtr returnValue(
        new  SFUnrecLayoutSpringPtr::EditHandle(
             &_sfSpring2,
             this->getType().getFieldDesc(Spring2FieldId),
             this));

    returnValue->setSetMethod(
        boost::bind(&CompoundLayoutSpring::setSpring2,
                    static_cast<CompoundLayoutSpring *>(this), _1));

    editSField(Spring2FieldMask);

    return returnValue;
}


#ifdef OSG_MT_CPTR_ASPECT
void CompoundLayoutSpringBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    CompoundLayoutSpring *pThis = static_cast<CompoundLayoutSpring *>(this);

    pThis->execSync(static_cast<CompoundLayoutSpring *>(&oFrom),
                    whichField,
                    oOffsets,
                    syncMode,
                    uiSyncInfo);
}
#endif



void CompoundLayoutSpringBase::resolveLinks(void)
{
    Inherited::resolveLinks();

    static_cast<CompoundLayoutSpring *>(this)->setSpring1(NULL);

    static_cast<CompoundLayoutSpring *>(this)->setSpring2(NULL);


}


OSG_END_NAMESPACE

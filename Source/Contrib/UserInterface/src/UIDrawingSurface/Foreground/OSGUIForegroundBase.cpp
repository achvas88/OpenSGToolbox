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
 **     class UIForeground!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <cstdlib>
#include <cstdio>
#include <boost/assign/list_of.hpp>

#include "OSGConfig.h"



#include "OSGUIDrawingSurface.h"        // DrawingSurface Class
#include "OSGUIForegroundMouseTransformFunctor.h" // MouseTransformFunctor Class

#include "OSGUIForegroundBase.h"
#include "OSGUIForeground.h"

#include <boost/bind.hpp>

#ifdef WIN32 // turn off 'this' : used in base member initializer list warning
#pragma warning(disable:4355)
#endif

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::UIForeground
    A Foreground for rendering a UI on.
 */

/***************************************************************************\
 *                        Field Documentation                              *
\***************************************************************************/

/*! \var UIDrawingSurface * UIForegroundBase::_sfDrawingSurface
    
*/

/*! \var UIForegroundMouseTransformFunctor * UIForegroundBase::_sfMouseTransformFunctor
    
*/


/***************************************************************************\
 *                      FieldType/FieldTrait Instantiation                 *
\***************************************************************************/

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldTraits<UIForeground *>::_type("UIForegroundPtr", "ForegroundPtr");
#endif

OSG_FIELDTRAITS_GETTYPE(UIForeground *)

OSG_EXPORT_PTR_SFIELD_FULL(PointerSField,
                           UIForeground *,
                           0);

OSG_EXPORT_PTR_MFIELD_FULL(PointerMField,
                           UIForeground *,
                           0);

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

void UIForegroundBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


    pDesc = new SFUnrecUIDrawingSurfacePtr::Description(
        SFUnrecUIDrawingSurfacePtr::getClassType(),
        "DrawingSurface",
        "",
        DrawingSurfaceFieldId, DrawingSurfaceFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&UIForeground::editHandleDrawingSurface),
        static_cast<FieldGetMethodSig >(&UIForeground::getHandleDrawingSurface));

    oType.addInitialDesc(pDesc);

    pDesc = new SFUnrecUIForegroundMouseTransformFunctorPtr::Description(
        SFUnrecUIForegroundMouseTransformFunctorPtr::getClassType(),
        "MouseTransformFunctor",
        "",
        MouseTransformFunctorFieldId, MouseTransformFunctorFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&UIForeground::editHandleMouseTransformFunctor),
        static_cast<FieldGetMethodSig >(&UIForeground::getHandleMouseTransformFunctor));

    oType.addInitialDesc(pDesc);
}


UIForegroundBase::TypeObject UIForegroundBase::_type(
    UIForegroundBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    0,
    reinterpret_cast<PrototypeCreateF>(&UIForegroundBase::createEmptyLocal),
    UIForeground::initMethod,
    UIForeground::exitMethod,
    reinterpret_cast<InitalInsertDescFunc>(&UIForeground::classDescInserter),
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "\tname=\"UIForeground\"\n"
    "\tparent=\"Foreground\"\n"
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
    "A Foreground for rendering a UI on.\n"
    "\t<Field\n"
    "\t\tname=\"DrawingSurface\"\n"
    "\t\ttype=\"UIDrawingSurface\"\n"
    "\t\tcategory=\"pointer\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"NULL\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"MouseTransformFunctor\"\n"
    "\t\ttype=\"UIForegroundMouseTransformFunctor\"\n"
    "\t\tcategory=\"pointer\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"NULL\"\n"
    "\t\taccess=\"protected\"\n"
    "\t>\n"
    "\t</Field>\n"
    "</FieldContainer>\n",
    "A Foreground for rendering a UI on.\n"
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &UIForegroundBase::getType(void)
{
    return _type;
}

const FieldContainerType &UIForegroundBase::getType(void) const
{
    return _type;
}

UInt32 UIForegroundBase::getContainerSize(void) const
{
    return sizeof(UIForeground);
}

/*------------------------- decorator get ------------------------------*/


//! Get the UIForeground::_sfDrawingSurface field.
const SFUnrecUIDrawingSurfacePtr *UIForegroundBase::getSFDrawingSurface(void) const
{
    return &_sfDrawingSurface;
}

SFUnrecUIDrawingSurfacePtr *UIForegroundBase::editSFDrawingSurface (void)
{
    editSField(DrawingSurfaceFieldMask);

    return &_sfDrawingSurface;
}

//! Get the UIForeground::_sfMouseTransformFunctor field.
const SFUnrecUIForegroundMouseTransformFunctorPtr *UIForegroundBase::getSFMouseTransformFunctor(void) const
{
    return &_sfMouseTransformFunctor;
}

SFUnrecUIForegroundMouseTransformFunctorPtr *UIForegroundBase::editSFMouseTransformFunctor(void)
{
    editSField(MouseTransformFunctorFieldMask);

    return &_sfMouseTransformFunctor;
}





/*------------------------------ access -----------------------------------*/

UInt32 UIForegroundBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (DrawingSurfaceFieldMask & whichField))
    {
        returnValue += _sfDrawingSurface.getBinSize();
    }
    if(FieldBits::NoField != (MouseTransformFunctorFieldMask & whichField))
    {
        returnValue += _sfMouseTransformFunctor.getBinSize();
    }

    return returnValue;
}

void UIForegroundBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (DrawingSurfaceFieldMask & whichField))
    {
        _sfDrawingSurface.copyToBin(pMem);
    }
    if(FieldBits::NoField != (MouseTransformFunctorFieldMask & whichField))
    {
        _sfMouseTransformFunctor.copyToBin(pMem);
    }
}

void UIForegroundBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (DrawingSurfaceFieldMask & whichField))
    {
        _sfDrawingSurface.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (MouseTransformFunctorFieldMask & whichField))
    {
        _sfMouseTransformFunctor.copyFromBin(pMem);
    }
}

//! create a new instance of the class
UIForegroundTransitPtr UIForegroundBase::createLocal(BitVector bFlags)
{
    UIForegroundTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyLocal(bFlags);

        fc = dynamic_pointer_cast<UIForeground>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class, copy the container flags
UIForegroundTransitPtr UIForegroundBase::createDependent(BitVector bFlags)
{
    UIForegroundTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyDependent(bFlags);

        fc = dynamic_pointer_cast<UIForeground>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class
UIForegroundTransitPtr UIForegroundBase::create(void)
{
    UIForegroundTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopy();

        fc = dynamic_pointer_cast<UIForeground>(tmpPtr);
    }

    return fc;
}

UIForeground *UIForegroundBase::createEmptyLocal(BitVector bFlags)
{
    UIForeground *returnValue;

    newPtr<UIForeground>(returnValue, bFlags);

    returnValue->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

//! create an empty new instance of the class, do not copy the prototype
UIForeground *UIForegroundBase::createEmpty(void)
{
    UIForeground *returnValue;

    newPtr<UIForeground>(returnValue, Thread::getCurrentLocalFlags());

    returnValue->_pFieldFlags->_bNamespaceMask &=
        ~Thread::getCurrentLocalFlags();

    return returnValue;
}


FieldContainerTransitPtr UIForegroundBase::shallowCopyLocal(
    BitVector bFlags) const
{
    UIForeground *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const UIForeground *>(this), bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

FieldContainerTransitPtr UIForegroundBase::shallowCopyDependent(
    BitVector bFlags) const
{
    UIForeground *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const UIForeground *>(this), ~bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask = bFlags;

    return returnValue;
}

FieldContainerTransitPtr UIForegroundBase::shallowCopy(void) const
{
    UIForeground *tmpPtr;

    newPtr(tmpPtr,
           dynamic_cast<const UIForeground *>(this),
           Thread::getCurrentLocalFlags());

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~Thread::getCurrentLocalFlags();

    FieldContainerTransitPtr returnValue(tmpPtr);

    return returnValue;
}




/*------------------------- constructors ----------------------------------*/

UIForegroundBase::UIForegroundBase(void) :
    Inherited(),
    _sfDrawingSurface         (NULL),
    _sfMouseTransformFunctor  (NULL)
{
}

UIForegroundBase::UIForegroundBase(const UIForegroundBase &source) :
    Inherited(source),
    _sfDrawingSurface         (NULL),
    _sfMouseTransformFunctor  (NULL)
{
}


/*-------------------------- destructors ----------------------------------*/

UIForegroundBase::~UIForegroundBase(void)
{
}

void UIForegroundBase::onCreate(const UIForeground *source)
{
    Inherited::onCreate(source);

    if(source != NULL)
    {
        UIForeground *pThis = static_cast<UIForeground *>(this);

        pThis->setDrawingSurface(source->getDrawingSurface());

        pThis->setMouseTransformFunctor(source->getMouseTransformFunctor());
    }
}

GetFieldHandlePtr UIForegroundBase::getHandleDrawingSurface  (void) const
{
    SFUnrecUIDrawingSurfacePtr::GetHandlePtr returnValue(
        new  SFUnrecUIDrawingSurfacePtr::GetHandle(
             &_sfDrawingSurface,
             this->getType().getFieldDesc(DrawingSurfaceFieldId),
             const_cast<UIForegroundBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr UIForegroundBase::editHandleDrawingSurface (void)
{
    SFUnrecUIDrawingSurfacePtr::EditHandlePtr returnValue(
        new  SFUnrecUIDrawingSurfacePtr::EditHandle(
             &_sfDrawingSurface,
             this->getType().getFieldDesc(DrawingSurfaceFieldId),
             this));

    returnValue->setSetMethod(
        boost::bind(&UIForeground::setDrawingSurface,
                    static_cast<UIForeground *>(this), _1));

    editSField(DrawingSurfaceFieldMask);

    return returnValue;
}

GetFieldHandlePtr UIForegroundBase::getHandleMouseTransformFunctor (void) const
{
    SFUnrecUIForegroundMouseTransformFunctorPtr::GetHandlePtr returnValue(
        new  SFUnrecUIForegroundMouseTransformFunctorPtr::GetHandle(
             &_sfMouseTransformFunctor,
             this->getType().getFieldDesc(MouseTransformFunctorFieldId),
             const_cast<UIForegroundBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr UIForegroundBase::editHandleMouseTransformFunctor(void)
{
    SFUnrecUIForegroundMouseTransformFunctorPtr::EditHandlePtr returnValue(
        new  SFUnrecUIForegroundMouseTransformFunctorPtr::EditHandle(
             &_sfMouseTransformFunctor,
             this->getType().getFieldDesc(MouseTransformFunctorFieldId),
             this));

    returnValue->setSetMethod(
        boost::bind(&UIForeground::setMouseTransformFunctor,
                    static_cast<UIForeground *>(this), _1));

    editSField(MouseTransformFunctorFieldMask);

    return returnValue;
}


#ifdef OSG_MT_CPTR_ASPECT
void UIForegroundBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    UIForeground *pThis = static_cast<UIForeground *>(this);

    pThis->execSync(static_cast<UIForeground *>(&oFrom),
                    whichField,
                    oOffsets,
                    syncMode,
                    uiSyncInfo);
}
#endif


#ifdef OSG_MT_CPTR_ASPECT
FieldContainer *UIForegroundBase::createAspectCopy(
    const FieldContainer *pRefAspect) const
{
    UIForeground *returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const UIForeground *>(pRefAspect),
                  dynamic_cast<const UIForeground *>(this));

    return returnValue;
}
#endif

void UIForegroundBase::resolveLinks(void)
{
    Inherited::resolveLinks();

    static_cast<UIForeground *>(this)->setDrawingSurface(NULL);

    static_cast<UIForeground *>(this)->setMouseTransformFunctor(NULL);


}


OSG_END_NAMESPACE
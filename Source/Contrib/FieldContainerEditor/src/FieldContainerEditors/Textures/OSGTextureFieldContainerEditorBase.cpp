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
 **     class TextureFieldContainerEditor!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <cstdlib>
#include <cstdio>
#include <boost/assign/list_of.hpp>

#include "OSGConfig.h"




#include "OSGTextureFieldContainerEditorBase.h"
#include "OSGTextureFieldContainerEditor.h"

#include <boost/bind.hpp>

#ifdef WIN32 // turn off 'this' : used in base member initializer list warning
#pragma warning(disable:4355)
#endif

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::TextureFieldContainerEditor
    
 */

/***************************************************************************\
 *                        Field Documentation                              *
\***************************************************************************/


/***************************************************************************\
 *                      FieldType/FieldTrait Instantiation                 *
\***************************************************************************/

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldTraits<TextureFieldContainerEditor *>::_type("TextureFieldContainerEditorPtr", "AbstractFieldContainerEditorPtr");
#endif

OSG_FIELDTRAITS_GETTYPE(TextureFieldContainerEditor *)

OSG_EXPORT_PTR_SFIELD_FULL(PointerSField,
                           TextureFieldContainerEditor *,
                           0);

OSG_EXPORT_PTR_MFIELD_FULL(PointerMField,
                           TextureFieldContainerEditor *,
                           0);

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

void TextureFieldContainerEditorBase::classDescInserter(TypeObject &oType)
{
}


TextureFieldContainerEditorBase::TypeObject TextureFieldContainerEditorBase::_type(
    TextureFieldContainerEditorBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    0,
    reinterpret_cast<PrototypeCreateF>(&TextureFieldContainerEditorBase::createEmptyLocal),
    TextureFieldContainerEditor::initMethod,
    TextureFieldContainerEditor::exitMethod,
    reinterpret_cast<InitalInsertDescFunc>(&TextureFieldContainerEditor::classDescInserter),
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "\tname=\"TextureFieldContainerEditor\"\n"
    "\tparent=\"AbstractFieldContainerEditor\"\n"
    "    library=\"ContribFieldContainerEditor\"\n"
    "    pointerfieldtypes=\"both\"\n"
    "\tstructure=\"concrete\"\n"
    "    systemcomponent=\"true\"\n"
    "    parentsystemcomponent=\"true\"\n"
    "\tdecoratable=\"false\"\n"
    "    useLocalIncludes=\"false\"\n"
    "    isNodeCore=\"false\"\n"
    "    authors=\"David Kabala (djkabala@gmail.com)                             \"\n"
    ">\n"
    "</FieldContainer>\n",
    ""
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &TextureFieldContainerEditorBase::getType(void)
{
    return _type;
}

const FieldContainerType &TextureFieldContainerEditorBase::getType(void) const
{
    return _type;
}

UInt32 TextureFieldContainerEditorBase::getContainerSize(void) const
{
    return sizeof(TextureFieldContainerEditor);
}

/*------------------------- decorator get ------------------------------*/






/*------------------------------ access -----------------------------------*/

UInt32 TextureFieldContainerEditorBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);


    return returnValue;
}

void TextureFieldContainerEditorBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

}

void TextureFieldContainerEditorBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

}

//! create a new instance of the class
TextureFieldContainerEditorTransitPtr TextureFieldContainerEditorBase::createLocal(BitVector bFlags)
{
    TextureFieldContainerEditorTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyLocal(bFlags);

        fc = dynamic_pointer_cast<TextureFieldContainerEditor>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class, copy the container flags
TextureFieldContainerEditorTransitPtr TextureFieldContainerEditorBase::createDependent(BitVector bFlags)
{
    TextureFieldContainerEditorTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyDependent(bFlags);

        fc = dynamic_pointer_cast<TextureFieldContainerEditor>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class
TextureFieldContainerEditorTransitPtr TextureFieldContainerEditorBase::create(void)
{
    TextureFieldContainerEditorTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopy();

        fc = dynamic_pointer_cast<TextureFieldContainerEditor>(tmpPtr);
    }

    return fc;
}

TextureFieldContainerEditor *TextureFieldContainerEditorBase::createEmptyLocal(BitVector bFlags)
{
    TextureFieldContainerEditor *returnValue;

    newPtr<TextureFieldContainerEditor>(returnValue, bFlags);

    returnValue->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

//! create an empty new instance of the class, do not copy the prototype
TextureFieldContainerEditor *TextureFieldContainerEditorBase::createEmpty(void)
{
    TextureFieldContainerEditor *returnValue;

    newPtr<TextureFieldContainerEditor>(returnValue, Thread::getCurrentLocalFlags());

    returnValue->_pFieldFlags->_bNamespaceMask &=
        ~Thread::getCurrentLocalFlags();

    return returnValue;
}


FieldContainerTransitPtr TextureFieldContainerEditorBase::shallowCopyLocal(
    BitVector bFlags) const
{
    TextureFieldContainerEditor *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const TextureFieldContainerEditor *>(this), bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

FieldContainerTransitPtr TextureFieldContainerEditorBase::shallowCopyDependent(
    BitVector bFlags) const
{
    TextureFieldContainerEditor *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const TextureFieldContainerEditor *>(this), ~bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask = bFlags;

    return returnValue;
}

FieldContainerTransitPtr TextureFieldContainerEditorBase::shallowCopy(void) const
{
    TextureFieldContainerEditor *tmpPtr;

    newPtr(tmpPtr,
           dynamic_cast<const TextureFieldContainerEditor *>(this),
           Thread::getCurrentLocalFlags());

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~Thread::getCurrentLocalFlags();

    FieldContainerTransitPtr returnValue(tmpPtr);

    return returnValue;
}




/*------------------------- constructors ----------------------------------*/

TextureFieldContainerEditorBase::TextureFieldContainerEditorBase(void) :
    Inherited()
{
}

TextureFieldContainerEditorBase::TextureFieldContainerEditorBase(const TextureFieldContainerEditorBase &source) :
    Inherited(source)
{
}


/*-------------------------- destructors ----------------------------------*/

TextureFieldContainerEditorBase::~TextureFieldContainerEditorBase(void)
{
}



#ifdef OSG_MT_CPTR_ASPECT
void TextureFieldContainerEditorBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    TextureFieldContainerEditor *pThis = static_cast<TextureFieldContainerEditor *>(this);

    pThis->execSync(static_cast<TextureFieldContainerEditor *>(&oFrom),
                    whichField,
                    oOffsets,
                    syncMode,
                    uiSyncInfo);
}
#endif


#ifdef OSG_MT_CPTR_ASPECT
FieldContainer *TextureFieldContainerEditorBase::createAspectCopy(
    const FieldContainer *pRefAspect) const
{
    TextureFieldContainerEditor *returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const TextureFieldContainerEditor *>(pRefAspect),
                  dynamic_cast<const TextureFieldContainerEditor *>(this));

    return returnValue;
}
#endif

void TextureFieldContainerEditorBase::resolveLinks(void)
{
    Inherited::resolveLinks();


}


OSG_END_NAMESPACE

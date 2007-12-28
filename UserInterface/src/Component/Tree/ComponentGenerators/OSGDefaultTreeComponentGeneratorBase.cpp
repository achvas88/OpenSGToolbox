/*---------------------------------------------------------------------------*\
 *                     OpenSG ToolBox UserInterface                          *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                         www.vrac.iastate.edu                              *
 *                                                                           *
 *   Authors: David Kabala, Alden Peterson, Lee Zaniewski, Jonathan Flory    *
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
 **     class DefaultTreeComponentGenerator!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#define OSG_COMPILEDEFAULTTREECOMPONENTGENERATORINST

#include <stdlib.h>
#include <stdio.h>

#include <OpenSG/OSGConfig.h>

#include "OSGDefaultTreeComponentGeneratorBase.h"
#include "OSGDefaultTreeComponentGenerator.h"


OSG_BEGIN_NAMESPACE

const OSG::BitVector  DefaultTreeComponentGeneratorBase::ExpandedDrawObjectPrototypeFieldMask = 
    (TypeTraits<BitVector>::One << DefaultTreeComponentGeneratorBase::ExpandedDrawObjectPrototypeFieldId);

const OSG::BitVector  DefaultTreeComponentGeneratorBase::NotExpandedDrawObjectPrototypeFieldMask = 
    (TypeTraits<BitVector>::One << DefaultTreeComponentGeneratorBase::NotExpandedDrawObjectPrototypeFieldId);

const OSG::BitVector  DefaultTreeComponentGeneratorBase::LeafDrawObjectPrototypeFieldMask = 
    (TypeTraits<BitVector>::One << DefaultTreeComponentGeneratorBase::LeafDrawObjectPrototypeFieldId);

const OSG::BitVector  DefaultTreeComponentGeneratorBase::NonLeafDrawObjectPrototypeFieldMask = 
    (TypeTraits<BitVector>::One << DefaultTreeComponentGeneratorBase::NonLeafDrawObjectPrototypeFieldId);

const OSG::BitVector  DefaultTreeComponentGeneratorBase::ExpandedNonLeafDrawObjectPrototypeFieldMask = 
    (TypeTraits<BitVector>::One << DefaultTreeComponentGeneratorBase::ExpandedNonLeafDrawObjectPrototypeFieldId);

const OSG::BitVector  DefaultTreeComponentGeneratorBase::NodeLabelPrototypeFieldMask = 
    (TypeTraits<BitVector>::One << DefaultTreeComponentGeneratorBase::NodeLabelPrototypeFieldId);

const OSG::BitVector  DefaultTreeComponentGeneratorBase::SelectedBackgroundFieldMask = 
    (TypeTraits<BitVector>::One << DefaultTreeComponentGeneratorBase::SelectedBackgroundFieldId);

const OSG::BitVector  DefaultTreeComponentGeneratorBase::NonSelectedBackgroundFieldMask = 
    (TypeTraits<BitVector>::One << DefaultTreeComponentGeneratorBase::NonSelectedBackgroundFieldId);

const OSG::BitVector  DefaultTreeComponentGeneratorBase::SelectedBorderFieldMask = 
    (TypeTraits<BitVector>::One << DefaultTreeComponentGeneratorBase::SelectedBorderFieldId);

const OSG::BitVector  DefaultTreeComponentGeneratorBase::SelectedTextColorFieldMask = 
    (TypeTraits<BitVector>::One << DefaultTreeComponentGeneratorBase::SelectedTextColorFieldId);

const OSG::BitVector  DefaultTreeComponentGeneratorBase::NonSelectedTextColorFieldMask = 
    (TypeTraits<BitVector>::One << DefaultTreeComponentGeneratorBase::NonSelectedTextColorFieldId);

const OSG::BitVector DefaultTreeComponentGeneratorBase::MTInfluenceMask = 
    (Inherited::MTInfluenceMask) | 
    (static_cast<BitVector>(0x0) << Inherited::NextFieldId); 


// Field descriptions

/*! \var UIDrawObjectCanvasPtr DefaultTreeComponentGeneratorBase::_sfExpandedDrawObjectPrototype
    
*/
/*! \var UIDrawObjectCanvasPtr DefaultTreeComponentGeneratorBase::_sfNotExpandedDrawObjectPrototype
    
*/
/*! \var UIDrawObjectCanvasPtr DefaultTreeComponentGeneratorBase::_sfLeafDrawObjectPrototype
    
*/
/*! \var UIDrawObjectCanvasPtr DefaultTreeComponentGeneratorBase::_sfNonLeafDrawObjectPrototype
    
*/
/*! \var UIDrawObjectCanvasPtr DefaultTreeComponentGeneratorBase::_sfExpandedNonLeafDrawObjectPrototype
    
*/
/*! \var LabelPtr        DefaultTreeComponentGeneratorBase::_sfNodeLabelPrototype
    
*/
/*! \var UIBackgroundPtr DefaultTreeComponentGeneratorBase::_sfSelectedBackground
    
*/
/*! \var UIBackgroundPtr DefaultTreeComponentGeneratorBase::_sfNonSelectedBackground
    
*/
/*! \var BorderPtr       DefaultTreeComponentGeneratorBase::_sfSelectedBorder
    
*/
/*! \var Color4f         DefaultTreeComponentGeneratorBase::_sfSelectedTextColor
    
*/
/*! \var Color4f         DefaultTreeComponentGeneratorBase::_sfNonSelectedTextColor
    
*/

//! DefaultTreeComponentGenerator description

FieldDescription *DefaultTreeComponentGeneratorBase::_desc[] = 
{
    new FieldDescription(SFUIDrawObjectCanvasPtr::getClassType(), 
                     "ExpandedDrawObjectPrototype", 
                     ExpandedDrawObjectPrototypeFieldId, ExpandedDrawObjectPrototypeFieldMask,
                     false,
                     (FieldAccessMethod) &DefaultTreeComponentGeneratorBase::getSFExpandedDrawObjectPrototype),
    new FieldDescription(SFUIDrawObjectCanvasPtr::getClassType(), 
                     "NotExpandedDrawObjectPrototype", 
                     NotExpandedDrawObjectPrototypeFieldId, NotExpandedDrawObjectPrototypeFieldMask,
                     false,
                     (FieldAccessMethod) &DefaultTreeComponentGeneratorBase::getSFNotExpandedDrawObjectPrototype),
    new FieldDescription(SFUIDrawObjectCanvasPtr::getClassType(), 
                     "LeafDrawObjectPrototype", 
                     LeafDrawObjectPrototypeFieldId, LeafDrawObjectPrototypeFieldMask,
                     false,
                     (FieldAccessMethod) &DefaultTreeComponentGeneratorBase::getSFLeafDrawObjectPrototype),
    new FieldDescription(SFUIDrawObjectCanvasPtr::getClassType(), 
                     "NonLeafDrawObjectPrototype", 
                     NonLeafDrawObjectPrototypeFieldId, NonLeafDrawObjectPrototypeFieldMask,
                     false,
                     (FieldAccessMethod) &DefaultTreeComponentGeneratorBase::getSFNonLeafDrawObjectPrototype),
    new FieldDescription(SFUIDrawObjectCanvasPtr::getClassType(), 
                     "ExpandedNonLeafDrawObjectPrototype", 
                     ExpandedNonLeafDrawObjectPrototypeFieldId, ExpandedNonLeafDrawObjectPrototypeFieldMask,
                     false,
                     (FieldAccessMethod) &DefaultTreeComponentGeneratorBase::getSFExpandedNonLeafDrawObjectPrototype),
    new FieldDescription(SFLabelPtr::getClassType(), 
                     "NodeLabelPrototype", 
                     NodeLabelPrototypeFieldId, NodeLabelPrototypeFieldMask,
                     false,
                     (FieldAccessMethod) &DefaultTreeComponentGeneratorBase::getSFNodeLabelPrototype),
    new FieldDescription(SFUIBackgroundPtr::getClassType(), 
                     "SelectedBackground", 
                     SelectedBackgroundFieldId, SelectedBackgroundFieldMask,
                     false,
                     (FieldAccessMethod) &DefaultTreeComponentGeneratorBase::getSFSelectedBackground),
    new FieldDescription(SFUIBackgroundPtr::getClassType(), 
                     "NonSelectedBackground", 
                     NonSelectedBackgroundFieldId, NonSelectedBackgroundFieldMask,
                     false,
                     (FieldAccessMethod) &DefaultTreeComponentGeneratorBase::getSFNonSelectedBackground),
    new FieldDescription(SFBorderPtr::getClassType(), 
                     "SelectedBorder", 
                     SelectedBorderFieldId, SelectedBorderFieldMask,
                     false,
                     (FieldAccessMethod) &DefaultTreeComponentGeneratorBase::getSFSelectedBorder),
    new FieldDescription(SFColor4f::getClassType(), 
                     "SelectedTextColor", 
                     SelectedTextColorFieldId, SelectedTextColorFieldMask,
                     false,
                     (FieldAccessMethod) &DefaultTreeComponentGeneratorBase::getSFSelectedTextColor),
    new FieldDescription(SFColor4f::getClassType(), 
                     "NonSelectedTextColor", 
                     NonSelectedTextColorFieldId, NonSelectedTextColorFieldMask,
                     false,
                     (FieldAccessMethod) &DefaultTreeComponentGeneratorBase::getSFNonSelectedTextColor)
};


FieldContainerType DefaultTreeComponentGeneratorBase::_type(
    "DefaultTreeComponentGenerator",
    "TreeComponentGenerator",
    NULL,
    NULL, 
    DefaultTreeComponentGenerator::initMethod,
    _desc,
    sizeof(_desc));

//OSG_FIELD_CONTAINER_DEF(DefaultTreeComponentGeneratorBase, DefaultTreeComponentGeneratorPtr)

/*------------------------------ get -----------------------------------*/

FieldContainerType &DefaultTreeComponentGeneratorBase::getType(void) 
{
    return _type; 
} 

const FieldContainerType &DefaultTreeComponentGeneratorBase::getType(void) const 
{
    return _type;
} 


UInt32 DefaultTreeComponentGeneratorBase::getContainerSize(void) const 
{ 
    return sizeof(DefaultTreeComponentGenerator); 
}


#if !defined(OSG_FIXED_MFIELDSYNC)
void DefaultTreeComponentGeneratorBase::executeSync(      FieldContainer &other,
                                    const BitVector      &whichField)
{
    this->executeSyncImpl((DefaultTreeComponentGeneratorBase *) &other, whichField);
}
#else
void DefaultTreeComponentGeneratorBase::executeSync(      FieldContainer &other,
                                    const BitVector      &whichField,                                    const SyncInfo       &sInfo     )
{
    this->executeSyncImpl((DefaultTreeComponentGeneratorBase *) &other, whichField, sInfo);
}
void DefaultTreeComponentGeneratorBase::execBeginEdit(const BitVector &whichField, 
                                            UInt32     uiAspect,
                                            UInt32     uiContainerSize) 
{
    this->execBeginEditImpl(whichField, uiAspect, uiContainerSize);
}

void DefaultTreeComponentGeneratorBase::onDestroyAspect(UInt32 uiId, UInt32 uiAspect)
{
    Inherited::onDestroyAspect(uiId, uiAspect);

}
#endif

/*------------------------- constructors ----------------------------------*/

#ifdef OSG_WIN32_ICL
#pragma warning (disable : 383)
#endif

DefaultTreeComponentGeneratorBase::DefaultTreeComponentGeneratorBase(void) :
    _sfExpandedDrawObjectPrototype(UIDrawObjectCanvasPtr(NullFC)), 
    _sfNotExpandedDrawObjectPrototype(UIDrawObjectCanvasPtr(NullFC)), 
    _sfLeafDrawObjectPrototype(UIDrawObjectCanvasPtr(NullFC)), 
    _sfNonLeafDrawObjectPrototype(UIDrawObjectCanvasPtr(NullFC)), 
    _sfExpandedNonLeafDrawObjectPrototype(UIDrawObjectCanvasPtr(NullFC)), 
    _sfNodeLabelPrototype     (LabelPtr(NullFC)), 
    _sfSelectedBackground     (UIBackgroundPtr(NullFC)), 
    _sfNonSelectedBackground  (UIBackgroundPtr(NullFC)), 
    _sfSelectedBorder         (BorderPtr(NullFC)), 
    _sfSelectedTextColor      (Color4f(0.0,0.0,0.0,1.0)), 
    _sfNonSelectedTextColor   (Color4f(0.0,0.0,0.0,1.0)), 
    Inherited() 
{
}

#ifdef OSG_WIN32_ICL
#pragma warning (default : 383)
#endif

DefaultTreeComponentGeneratorBase::DefaultTreeComponentGeneratorBase(const DefaultTreeComponentGeneratorBase &source) :
    _sfExpandedDrawObjectPrototype(source._sfExpandedDrawObjectPrototype), 
    _sfNotExpandedDrawObjectPrototype(source._sfNotExpandedDrawObjectPrototype), 
    _sfLeafDrawObjectPrototype(source._sfLeafDrawObjectPrototype), 
    _sfNonLeafDrawObjectPrototype(source._sfNonLeafDrawObjectPrototype), 
    _sfExpandedNonLeafDrawObjectPrototype(source._sfExpandedNonLeafDrawObjectPrototype), 
    _sfNodeLabelPrototype     (source._sfNodeLabelPrototype     ), 
    _sfSelectedBackground     (source._sfSelectedBackground     ), 
    _sfNonSelectedBackground  (source._sfNonSelectedBackground  ), 
    _sfSelectedBorder         (source._sfSelectedBorder         ), 
    _sfSelectedTextColor      (source._sfSelectedTextColor      ), 
    _sfNonSelectedTextColor   (source._sfNonSelectedTextColor   ), 
    Inherited                 (source)
{
}

/*-------------------------- destructors ----------------------------------*/

DefaultTreeComponentGeneratorBase::~DefaultTreeComponentGeneratorBase(void)
{
}

/*------------------------------ access -----------------------------------*/

UInt32 DefaultTreeComponentGeneratorBase::getBinSize(const BitVector &whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (ExpandedDrawObjectPrototypeFieldMask & whichField))
    {
        returnValue += _sfExpandedDrawObjectPrototype.getBinSize();
    }

    if(FieldBits::NoField != (NotExpandedDrawObjectPrototypeFieldMask & whichField))
    {
        returnValue += _sfNotExpandedDrawObjectPrototype.getBinSize();
    }

    if(FieldBits::NoField != (LeafDrawObjectPrototypeFieldMask & whichField))
    {
        returnValue += _sfLeafDrawObjectPrototype.getBinSize();
    }

    if(FieldBits::NoField != (NonLeafDrawObjectPrototypeFieldMask & whichField))
    {
        returnValue += _sfNonLeafDrawObjectPrototype.getBinSize();
    }

    if(FieldBits::NoField != (ExpandedNonLeafDrawObjectPrototypeFieldMask & whichField))
    {
        returnValue += _sfExpandedNonLeafDrawObjectPrototype.getBinSize();
    }

    if(FieldBits::NoField != (NodeLabelPrototypeFieldMask & whichField))
    {
        returnValue += _sfNodeLabelPrototype.getBinSize();
    }

    if(FieldBits::NoField != (SelectedBackgroundFieldMask & whichField))
    {
        returnValue += _sfSelectedBackground.getBinSize();
    }

    if(FieldBits::NoField != (NonSelectedBackgroundFieldMask & whichField))
    {
        returnValue += _sfNonSelectedBackground.getBinSize();
    }

    if(FieldBits::NoField != (SelectedBorderFieldMask & whichField))
    {
        returnValue += _sfSelectedBorder.getBinSize();
    }

    if(FieldBits::NoField != (SelectedTextColorFieldMask & whichField))
    {
        returnValue += _sfSelectedTextColor.getBinSize();
    }

    if(FieldBits::NoField != (NonSelectedTextColorFieldMask & whichField))
    {
        returnValue += _sfNonSelectedTextColor.getBinSize();
    }


    return returnValue;
}

void DefaultTreeComponentGeneratorBase::copyToBin(      BinaryDataHandler &pMem,
                                  const BitVector         &whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (ExpandedDrawObjectPrototypeFieldMask & whichField))
    {
        _sfExpandedDrawObjectPrototype.copyToBin(pMem);
    }

    if(FieldBits::NoField != (NotExpandedDrawObjectPrototypeFieldMask & whichField))
    {
        _sfNotExpandedDrawObjectPrototype.copyToBin(pMem);
    }

    if(FieldBits::NoField != (LeafDrawObjectPrototypeFieldMask & whichField))
    {
        _sfLeafDrawObjectPrototype.copyToBin(pMem);
    }

    if(FieldBits::NoField != (NonLeafDrawObjectPrototypeFieldMask & whichField))
    {
        _sfNonLeafDrawObjectPrototype.copyToBin(pMem);
    }

    if(FieldBits::NoField != (ExpandedNonLeafDrawObjectPrototypeFieldMask & whichField))
    {
        _sfExpandedNonLeafDrawObjectPrototype.copyToBin(pMem);
    }

    if(FieldBits::NoField != (NodeLabelPrototypeFieldMask & whichField))
    {
        _sfNodeLabelPrototype.copyToBin(pMem);
    }

    if(FieldBits::NoField != (SelectedBackgroundFieldMask & whichField))
    {
        _sfSelectedBackground.copyToBin(pMem);
    }

    if(FieldBits::NoField != (NonSelectedBackgroundFieldMask & whichField))
    {
        _sfNonSelectedBackground.copyToBin(pMem);
    }

    if(FieldBits::NoField != (SelectedBorderFieldMask & whichField))
    {
        _sfSelectedBorder.copyToBin(pMem);
    }

    if(FieldBits::NoField != (SelectedTextColorFieldMask & whichField))
    {
        _sfSelectedTextColor.copyToBin(pMem);
    }

    if(FieldBits::NoField != (NonSelectedTextColorFieldMask & whichField))
    {
        _sfNonSelectedTextColor.copyToBin(pMem);
    }


}

void DefaultTreeComponentGeneratorBase::copyFromBin(      BinaryDataHandler &pMem,
                                    const BitVector    &whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (ExpandedDrawObjectPrototypeFieldMask & whichField))
    {
        _sfExpandedDrawObjectPrototype.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (NotExpandedDrawObjectPrototypeFieldMask & whichField))
    {
        _sfNotExpandedDrawObjectPrototype.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (LeafDrawObjectPrototypeFieldMask & whichField))
    {
        _sfLeafDrawObjectPrototype.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (NonLeafDrawObjectPrototypeFieldMask & whichField))
    {
        _sfNonLeafDrawObjectPrototype.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (ExpandedNonLeafDrawObjectPrototypeFieldMask & whichField))
    {
        _sfExpandedNonLeafDrawObjectPrototype.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (NodeLabelPrototypeFieldMask & whichField))
    {
        _sfNodeLabelPrototype.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (SelectedBackgroundFieldMask & whichField))
    {
        _sfSelectedBackground.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (NonSelectedBackgroundFieldMask & whichField))
    {
        _sfNonSelectedBackground.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (SelectedBorderFieldMask & whichField))
    {
        _sfSelectedBorder.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (SelectedTextColorFieldMask & whichField))
    {
        _sfSelectedTextColor.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (NonSelectedTextColorFieldMask & whichField))
    {
        _sfNonSelectedTextColor.copyFromBin(pMem);
    }


}

#if !defined(OSG_FIXED_MFIELDSYNC)
void DefaultTreeComponentGeneratorBase::executeSyncImpl(      DefaultTreeComponentGeneratorBase *pOther,
                                        const BitVector         &whichField)
{

    Inherited::executeSyncImpl(pOther, whichField);

    if(FieldBits::NoField != (ExpandedDrawObjectPrototypeFieldMask & whichField))
        _sfExpandedDrawObjectPrototype.syncWith(pOther->_sfExpandedDrawObjectPrototype);

    if(FieldBits::NoField != (NotExpandedDrawObjectPrototypeFieldMask & whichField))
        _sfNotExpandedDrawObjectPrototype.syncWith(pOther->_sfNotExpandedDrawObjectPrototype);

    if(FieldBits::NoField != (LeafDrawObjectPrototypeFieldMask & whichField))
        _sfLeafDrawObjectPrototype.syncWith(pOther->_sfLeafDrawObjectPrototype);

    if(FieldBits::NoField != (NonLeafDrawObjectPrototypeFieldMask & whichField))
        _sfNonLeafDrawObjectPrototype.syncWith(pOther->_sfNonLeafDrawObjectPrototype);

    if(FieldBits::NoField != (ExpandedNonLeafDrawObjectPrototypeFieldMask & whichField))
        _sfExpandedNonLeafDrawObjectPrototype.syncWith(pOther->_sfExpandedNonLeafDrawObjectPrototype);

    if(FieldBits::NoField != (NodeLabelPrototypeFieldMask & whichField))
        _sfNodeLabelPrototype.syncWith(pOther->_sfNodeLabelPrototype);

    if(FieldBits::NoField != (SelectedBackgroundFieldMask & whichField))
        _sfSelectedBackground.syncWith(pOther->_sfSelectedBackground);

    if(FieldBits::NoField != (NonSelectedBackgroundFieldMask & whichField))
        _sfNonSelectedBackground.syncWith(pOther->_sfNonSelectedBackground);

    if(FieldBits::NoField != (SelectedBorderFieldMask & whichField))
        _sfSelectedBorder.syncWith(pOther->_sfSelectedBorder);

    if(FieldBits::NoField != (SelectedTextColorFieldMask & whichField))
        _sfSelectedTextColor.syncWith(pOther->_sfSelectedTextColor);

    if(FieldBits::NoField != (NonSelectedTextColorFieldMask & whichField))
        _sfNonSelectedTextColor.syncWith(pOther->_sfNonSelectedTextColor);


}
#else
void DefaultTreeComponentGeneratorBase::executeSyncImpl(      DefaultTreeComponentGeneratorBase *pOther,
                                        const BitVector         &whichField,
                                        const SyncInfo          &sInfo      )
{

    Inherited::executeSyncImpl(pOther, whichField, sInfo);

    if(FieldBits::NoField != (ExpandedDrawObjectPrototypeFieldMask & whichField))
        _sfExpandedDrawObjectPrototype.syncWith(pOther->_sfExpandedDrawObjectPrototype);

    if(FieldBits::NoField != (NotExpandedDrawObjectPrototypeFieldMask & whichField))
        _sfNotExpandedDrawObjectPrototype.syncWith(pOther->_sfNotExpandedDrawObjectPrototype);

    if(FieldBits::NoField != (LeafDrawObjectPrototypeFieldMask & whichField))
        _sfLeafDrawObjectPrototype.syncWith(pOther->_sfLeafDrawObjectPrototype);

    if(FieldBits::NoField != (NonLeafDrawObjectPrototypeFieldMask & whichField))
        _sfNonLeafDrawObjectPrototype.syncWith(pOther->_sfNonLeafDrawObjectPrototype);

    if(FieldBits::NoField != (ExpandedNonLeafDrawObjectPrototypeFieldMask & whichField))
        _sfExpandedNonLeafDrawObjectPrototype.syncWith(pOther->_sfExpandedNonLeafDrawObjectPrototype);

    if(FieldBits::NoField != (NodeLabelPrototypeFieldMask & whichField))
        _sfNodeLabelPrototype.syncWith(pOther->_sfNodeLabelPrototype);

    if(FieldBits::NoField != (SelectedBackgroundFieldMask & whichField))
        _sfSelectedBackground.syncWith(pOther->_sfSelectedBackground);

    if(FieldBits::NoField != (NonSelectedBackgroundFieldMask & whichField))
        _sfNonSelectedBackground.syncWith(pOther->_sfNonSelectedBackground);

    if(FieldBits::NoField != (SelectedBorderFieldMask & whichField))
        _sfSelectedBorder.syncWith(pOther->_sfSelectedBorder);

    if(FieldBits::NoField != (SelectedTextColorFieldMask & whichField))
        _sfSelectedTextColor.syncWith(pOther->_sfSelectedTextColor);

    if(FieldBits::NoField != (NonSelectedTextColorFieldMask & whichField))
        _sfNonSelectedTextColor.syncWith(pOther->_sfNonSelectedTextColor);



}

void DefaultTreeComponentGeneratorBase::execBeginEditImpl (const BitVector &whichField, 
                                                 UInt32     uiAspect,
                                                 UInt32     uiContainerSize)
{
    Inherited::execBeginEditImpl(whichField, uiAspect, uiContainerSize);

}
#endif



OSG_END_NAMESPACE

#include <OpenSG/OSGSFieldTypeDef.inl>
#include <OpenSG/OSGMFieldTypeDef.inl>

OSG_BEGIN_NAMESPACE

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldDataTraits<DefaultTreeComponentGeneratorPtr>::_type("DefaultTreeComponentGeneratorPtr", "TreeComponentGeneratorPtr");
#endif

OSG_DLLEXPORT_SFIELD_DEF1(DefaultTreeComponentGeneratorPtr, OSG_USERINTERFACELIB_DLLTMPLMAPPING);
OSG_DLLEXPORT_MFIELD_DEF1(DefaultTreeComponentGeneratorPtr, OSG_USERINTERFACELIB_DLLTMPLMAPPING);


/*------------------------------------------------------------------------*/
/*                              cvs id's                                  */

#ifdef OSG_SGI_CC
#pragma set woff 1174
#endif

#ifdef OSG_LINUX_ICC
#pragma warning( disable : 177 )
#endif

namespace
{
    static Char8 cvsid_cpp       [] = "@(#)$Id: FCBaseTemplate_cpp.h,v 1.47 2006/03/17 17:03:19 pdaehne Exp $";
    static Char8 cvsid_hpp       [] = OSGDEFAULTTREECOMPONENTGENERATORBASE_HEADER_CVSID;
    static Char8 cvsid_inl       [] = OSGDEFAULTTREECOMPONENTGENERATORBASE_INLINE_CVSID;

    static Char8 cvsid_fields_hpp[] = OSGDEFAULTTREECOMPONENTGENERATORFIELDS_HEADER_CVSID;
}

OSG_END_NAMESPACE


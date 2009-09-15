/*---------------------------------------------------------------------------*\
 *                     OpenSG ToolBox UserInterface                          *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                         www.vrac.iastate.edu                              *
 *                                                                           *
 *                          Authors: David Kabala                            *
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
 **     class UIFont!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#define OSG_COMPILEUIFONTINST

#include <stdlib.h>
#include <stdio.h>

#include <OpenSG/OSGConfig.h>

#include "OSGUIFontBase.h"
#include "OSGUIFont.h"

#include <OpenSG/OSGTextFace.h>           // Style default header

OSG_BEGIN_NAMESPACE

const OSG::BitVector  UIFontBase::FamilyFieldMask = 
    (TypeTraits<BitVector>::One << UIFontBase::FamilyFieldId);

const OSG::BitVector  UIFontBase::GlyphPixelSizeFieldMask = 
    (TypeTraits<BitVector>::One << UIFontBase::GlyphPixelSizeFieldId);

const OSG::BitVector  UIFontBase::SizeFieldMask = 
    (TypeTraits<BitVector>::One << UIFontBase::SizeFieldId);

const OSG::BitVector  UIFontBase::GapFieldMask = 
    (TypeTraits<BitVector>::One << UIFontBase::GapFieldId);

const OSG::BitVector  UIFontBase::TextureWidthFieldMask = 
    (TypeTraits<BitVector>::One << UIFontBase::TextureWidthFieldId);

const OSG::BitVector  UIFontBase::StyleFieldMask = 
    (TypeTraits<BitVector>::One << UIFontBase::StyleFieldId);

const OSG::BitVector  UIFontBase::AntiAliasingFieldMask = 
    (TypeTraits<BitVector>::One << UIFontBase::AntiAliasingFieldId);

const OSG::BitVector  UIFontBase::TextureFieldMask = 
    (TypeTraits<BitVector>::One << UIFontBase::TextureFieldId);

const OSG::BitVector UIFontBase::MTInfluenceMask = 
    (Inherited::MTInfluenceMask) | 
    (static_cast<BitVector>(0x0) << Inherited::NextFieldId); 


// Field descriptions

/*! \var std::string     UIFontBase::_sfFamily
    
*/
/*! \var UInt32          UIFontBase::_sfGlyphPixelSize
    
*/
/*! \var UInt32          UIFontBase::_sfSize
    
*/
/*! \var UInt32          UIFontBase::_sfGap
    
*/
/*! \var UInt32          UIFontBase::_sfTextureWidth
    
*/
/*! \var UInt32          UIFontBase::_sfStyle
    
*/
/*! \var bool            UIFontBase::_sfAntiAliasing
    
*/
/*! \var TextureChunkPtr UIFontBase::_sfTexture
    
*/

//! UIFont description

FieldDescription *UIFontBase::_desc[] = 
{
    new FieldDescription(SFString::getClassType(), 
                     "Family", 
                     FamilyFieldId, FamilyFieldMask,
                     false,
                     reinterpret_cast<FieldAccessMethod>(&UIFontBase::editSFFamily)),
    new FieldDescription(SFUInt32::getClassType(), 
                     "GlyphPixelSize", 
                     GlyphPixelSizeFieldId, GlyphPixelSizeFieldMask,
                     false,
                     reinterpret_cast<FieldAccessMethod>(&UIFontBase::editSFGlyphPixelSize)),
    new FieldDescription(SFUInt32::getClassType(), 
                     "Size", 
                     SizeFieldId, SizeFieldMask,
                     false,
                     reinterpret_cast<FieldAccessMethod>(&UIFontBase::editSFSize)),
    new FieldDescription(SFUInt32::getClassType(), 
                     "Gap", 
                     GapFieldId, GapFieldMask,
                     false,
                     reinterpret_cast<FieldAccessMethod>(&UIFontBase::editSFGap)),
    new FieldDescription(SFUInt32::getClassType(), 
                     "TextureWidth", 
                     TextureWidthFieldId, TextureWidthFieldMask,
                     false,
                     reinterpret_cast<FieldAccessMethod>(&UIFontBase::editSFTextureWidth)),
    new FieldDescription(SFUInt32::getClassType(), 
                     "Style", 
                     StyleFieldId, StyleFieldMask,
                     false,
                     reinterpret_cast<FieldAccessMethod>(&UIFontBase::editSFStyle)),
    new FieldDescription(SFBool::getClassType(), 
                     "AntiAliasing", 
                     AntiAliasingFieldId, AntiAliasingFieldMask,
                     false,
                     reinterpret_cast<FieldAccessMethod>(&UIFontBase::editSFAntiAliasing)),
    new FieldDescription(SFTextureChunkPtr::getClassType(), 
                     "Texture", 
                     TextureFieldId, TextureFieldMask,
                     false,
                     reinterpret_cast<FieldAccessMethod>(&UIFontBase::editSFTexture))
};


FieldContainerType UIFontBase::_type(
    "UIFont",
    "AttachmentContainer",
    NULL,
    reinterpret_cast<PrototypeCreateF>(&UIFontBase::createEmpty),
    UIFont::initMethod,
    _desc,
    sizeof(_desc));

//OSG_FIELD_CONTAINER_DEF(UIFontBase, UIFontPtr)

/*------------------------------ get -----------------------------------*/

FieldContainerType &UIFontBase::getType(void) 
{
    return _type; 
} 

const FieldContainerType &UIFontBase::getType(void) const 
{
    return _type;
} 


FieldContainerPtr UIFontBase::shallowCopy(void) const 
{ 
    UIFontPtr returnValue; 

    newPtr(returnValue, dynamic_cast<const UIFont *>(this)); 

    return returnValue; 
}

UInt32 UIFontBase::getContainerSize(void) const 
{ 
    return sizeof(UIFont); 
}


#if !defined(OSG_FIXED_MFIELDSYNC)
void UIFontBase::executeSync(      FieldContainer &other,
                                    const BitVector      &whichField)
{
    this->executeSyncImpl(static_cast<UIFontBase *>(&other),
                          whichField);
}
#else
void UIFontBase::executeSync(      FieldContainer &other,
                                    const BitVector      &whichField,                                    const SyncInfo       &sInfo     )
{
    this->executeSyncImpl((UIFontBase *) &other, whichField, sInfo);
}
void UIFontBase::execBeginEdit(const BitVector &whichField, 
                                            UInt32     uiAspect,
                                            UInt32     uiContainerSize) 
{
    this->execBeginEditImpl(whichField, uiAspect, uiContainerSize);
}

void UIFontBase::onDestroyAspect(UInt32 uiId, UInt32 uiAspect)
{
    Inherited::onDestroyAspect(uiId, uiAspect);

}
#endif

/*------------------------- constructors ----------------------------------*/

#ifdef OSG_WIN32_ICL
#pragma warning (disable : 383)
#endif

UIFontBase::UIFontBase(void) :
    _sfFamily                 (std::string("SANS")), 
    _sfGlyphPixelSize         (UInt32(46)), 
    _sfSize                   (UInt32(12)), 
    _sfGap                    (UInt32(3)), 
    _sfTextureWidth           (UInt32(0)), 
    _sfStyle                  (UInt32(TextFace::STYLE_PLAIN)), 
    _sfAntiAliasing           (bool(true)), 
    _sfTexture                (), 
    Inherited() 
{
}

#ifdef OSG_WIN32_ICL
#pragma warning (default : 383)
#endif

UIFontBase::UIFontBase(const UIFontBase &source) :
    _sfFamily                 (source._sfFamily                 ), 
    _sfGlyphPixelSize         (source._sfGlyphPixelSize         ), 
    _sfSize                   (source._sfSize                   ), 
    _sfGap                    (source._sfGap                    ), 
    _sfTextureWidth           (source._sfTextureWidth           ), 
    _sfStyle                  (source._sfStyle                  ), 
    _sfAntiAliasing           (source._sfAntiAliasing           ), 
    _sfTexture                (source._sfTexture                ), 
    Inherited                 (source)
{
}

/*-------------------------- destructors ----------------------------------*/

UIFontBase::~UIFontBase(void)
{
}

/*------------------------------ access -----------------------------------*/

UInt32 UIFontBase::getBinSize(const BitVector &whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (FamilyFieldMask & whichField))
    {
        returnValue += _sfFamily.getBinSize();
    }

    if(FieldBits::NoField != (GlyphPixelSizeFieldMask & whichField))
    {
        returnValue += _sfGlyphPixelSize.getBinSize();
    }

    if(FieldBits::NoField != (SizeFieldMask & whichField))
    {
        returnValue += _sfSize.getBinSize();
    }

    if(FieldBits::NoField != (GapFieldMask & whichField))
    {
        returnValue += _sfGap.getBinSize();
    }

    if(FieldBits::NoField != (TextureWidthFieldMask & whichField))
    {
        returnValue += _sfTextureWidth.getBinSize();
    }

    if(FieldBits::NoField != (StyleFieldMask & whichField))
    {
        returnValue += _sfStyle.getBinSize();
    }

    if(FieldBits::NoField != (AntiAliasingFieldMask & whichField))
    {
        returnValue += _sfAntiAliasing.getBinSize();
    }

    if(FieldBits::NoField != (TextureFieldMask & whichField))
    {
        returnValue += _sfTexture.getBinSize();
    }


    return returnValue;
}

void UIFontBase::copyToBin(      BinaryDataHandler &pMem,
                                  const BitVector         &whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (FamilyFieldMask & whichField))
    {
        _sfFamily.copyToBin(pMem);
    }

    if(FieldBits::NoField != (GlyphPixelSizeFieldMask & whichField))
    {
        _sfGlyphPixelSize.copyToBin(pMem);
    }

    if(FieldBits::NoField != (SizeFieldMask & whichField))
    {
        _sfSize.copyToBin(pMem);
    }

    if(FieldBits::NoField != (GapFieldMask & whichField))
    {
        _sfGap.copyToBin(pMem);
    }

    if(FieldBits::NoField != (TextureWidthFieldMask & whichField))
    {
        _sfTextureWidth.copyToBin(pMem);
    }

    if(FieldBits::NoField != (StyleFieldMask & whichField))
    {
        _sfStyle.copyToBin(pMem);
    }

    if(FieldBits::NoField != (AntiAliasingFieldMask & whichField))
    {
        _sfAntiAliasing.copyToBin(pMem);
    }

    if(FieldBits::NoField != (TextureFieldMask & whichField))
    {
        _sfTexture.copyToBin(pMem);
    }


}

void UIFontBase::copyFromBin(      BinaryDataHandler &pMem,
                                    const BitVector    &whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (FamilyFieldMask & whichField))
    {
        _sfFamily.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (GlyphPixelSizeFieldMask & whichField))
    {
        _sfGlyphPixelSize.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (SizeFieldMask & whichField))
    {
        _sfSize.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (GapFieldMask & whichField))
    {
        _sfGap.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (TextureWidthFieldMask & whichField))
    {
        _sfTextureWidth.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (StyleFieldMask & whichField))
    {
        _sfStyle.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (AntiAliasingFieldMask & whichField))
    {
        _sfAntiAliasing.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (TextureFieldMask & whichField))
    {
        _sfTexture.copyFromBin(pMem);
    }


}

#if !defined(OSG_FIXED_MFIELDSYNC)
void UIFontBase::executeSyncImpl(      UIFontBase *pOther,
                                        const BitVector         &whichField)
{

    Inherited::executeSyncImpl(pOther, whichField);

    if(FieldBits::NoField != (FamilyFieldMask & whichField))
        _sfFamily.syncWith(pOther->_sfFamily);

    if(FieldBits::NoField != (GlyphPixelSizeFieldMask & whichField))
        _sfGlyphPixelSize.syncWith(pOther->_sfGlyphPixelSize);

    if(FieldBits::NoField != (SizeFieldMask & whichField))
        _sfSize.syncWith(pOther->_sfSize);

    if(FieldBits::NoField != (GapFieldMask & whichField))
        _sfGap.syncWith(pOther->_sfGap);

    if(FieldBits::NoField != (TextureWidthFieldMask & whichField))
        _sfTextureWidth.syncWith(pOther->_sfTextureWidth);

    if(FieldBits::NoField != (StyleFieldMask & whichField))
        _sfStyle.syncWith(pOther->_sfStyle);

    if(FieldBits::NoField != (AntiAliasingFieldMask & whichField))
        _sfAntiAliasing.syncWith(pOther->_sfAntiAliasing);

    if(FieldBits::NoField != (TextureFieldMask & whichField))
        _sfTexture.syncWith(pOther->_sfTexture);


}
#else
void UIFontBase::executeSyncImpl(      UIFontBase *pOther,
                                        const BitVector         &whichField,
                                        const SyncInfo          &sInfo      )
{

    Inherited::executeSyncImpl(pOther, whichField, sInfo);

    if(FieldBits::NoField != (FamilyFieldMask & whichField))
        _sfFamily.syncWith(pOther->_sfFamily);

    if(FieldBits::NoField != (GlyphPixelSizeFieldMask & whichField))
        _sfGlyphPixelSize.syncWith(pOther->_sfGlyphPixelSize);

    if(FieldBits::NoField != (SizeFieldMask & whichField))
        _sfSize.syncWith(pOther->_sfSize);

    if(FieldBits::NoField != (GapFieldMask & whichField))
        _sfGap.syncWith(pOther->_sfGap);

    if(FieldBits::NoField != (TextureWidthFieldMask & whichField))
        _sfTextureWidth.syncWith(pOther->_sfTextureWidth);

    if(FieldBits::NoField != (StyleFieldMask & whichField))
        _sfStyle.syncWith(pOther->_sfStyle);

    if(FieldBits::NoField != (AntiAliasingFieldMask & whichField))
        _sfAntiAliasing.syncWith(pOther->_sfAntiAliasing);

    if(FieldBits::NoField != (TextureFieldMask & whichField))
        _sfTexture.syncWith(pOther->_sfTexture);



}

void UIFontBase::execBeginEditImpl (const BitVector &whichField, 
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
DataType FieldDataTraits<UIFontPtr>::_type("UIFontPtr", "AttachmentContainerPtr");
#endif

OSG_DLLEXPORT_SFIELD_DEF1(UIFontPtr, OSG_USERINTERFACELIB_DLLTMPLMAPPING);
OSG_DLLEXPORT_MFIELD_DEF1(UIFontPtr, OSG_USERINTERFACELIB_DLLTMPLMAPPING);


OSG_END_NAMESPACE


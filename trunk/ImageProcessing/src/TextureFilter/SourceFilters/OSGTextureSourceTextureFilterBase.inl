/*---------------------------------------------------------------------------*\
 *                       OpenSG ToolBox ImageProcessing                      *
 *                                                                           *
 *                                                                           *
 *                                                                           *
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
 **     class TextureSourceTextureFilter!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <OpenSG/OSGConfig.h>

OSG_BEGIN_NAMESPACE


//! access the type of the class
inline
OSG::FieldContainerType &TextureSourceTextureFilterBase::getClassType(void)
{
    return _type; 
} 

//! access the numerical type of the class
inline
OSG::UInt32 TextureSourceTextureFilterBase::getClassTypeId(void) 
{
    return _type.getId(); 
} 

//! create a new instance of the class
inline
TextureSourceTextureFilterPtr TextureSourceTextureFilterBase::create(void) 
{
    TextureSourceTextureFilterPtr fc; 

    if(getClassType().getPrototype() != OSG::NullFC) 
    {
        fc = TextureSourceTextureFilterPtr::dcast(
            getClassType().getPrototype()-> shallowCopy()); 
    }
    
    return fc; 
}

//! create an empty new instance of the class, do not copy the prototype
inline
TextureSourceTextureFilterPtr TextureSourceTextureFilterBase::createEmpty(void) 
{ 
    TextureSourceTextureFilterPtr returnValue; 
    
    newPtr(returnValue); 

    return returnValue; 
}


/*------------------------------ get -----------------------------------*/

//! Get the TextureSourceTextureFilter::_sfTexture field.
inline
const SFTextureChunkPtr *TextureSourceTextureFilterBase::getSFTexture(void) const
{
    return &_sfTexture;
}

//! Get the TextureSourceTextureFilter::_sfTexture field.
inline
SFTextureChunkPtr *TextureSourceTextureFilterBase::editSFTexture(void)
{
    return &_sfTexture;
}


//! Get the value of the TextureSourceTextureFilter::_sfTexture field.
inline
TextureChunkPtr &TextureSourceTextureFilterBase::editTexture(void)
{
    return _sfTexture.getValue();
}

//! Get the value of the TextureSourceTextureFilter::_sfTexture field.
inline
const TextureChunkPtr &TextureSourceTextureFilterBase::getTexture(void) const
{
    return _sfTexture.getValue();
}

//! Set the value of the TextureSourceTextureFilter::_sfTexture field.
inline
void TextureSourceTextureFilterBase::setTexture(const TextureChunkPtr &value)
{
    _sfTexture.setValue(value);
}


OSG_END_NAMESPACE
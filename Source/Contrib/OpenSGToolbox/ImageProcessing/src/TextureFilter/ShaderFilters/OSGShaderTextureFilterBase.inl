/*---------------------------------------------------------------------------*\
 *                     OpenSG ToolBox UserInterface                          *
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
 **     class ShaderTextureFilter!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <OpenSG/OSGConfig.h>

OSG_BEGIN_NAMESPACE


//! access the type of the class
inline
OSG::FieldContainerType &ShaderTextureFilterBase::getClassType(void)
{
    return _type; 
} 

//! access the numerical type of the class
inline
OSG::UInt32 ShaderTextureFilterBase::getClassTypeId(void) 
{
    return _type.getId(); 
} 

//! create a new instance of the class
inline
ShaderTextureFilterPtr ShaderTextureFilterBase::create(void) 
{
    ShaderTextureFilterPtr fc; 

    if(getClassType().getPrototype() != OSG::NullFC) 
    {
        fc = ShaderTextureFilterPtr::dcast(
            getClassType().getPrototype()-> shallowCopy()); 
    }
    
    return fc; 
}

//! create an empty new instance of the class, do not copy the prototype
inline
ShaderTextureFilterPtr ShaderTextureFilterBase::createEmpty(void) 
{ 
    ShaderTextureFilterPtr returnValue; 
    
    newPtr(returnValue); 

    return returnValue; 
}


/*------------------------------ get -----------------------------------*/

//! Get the ShaderTextureFilter::_sfInternalParameters field.
inline
const SFSHLParameterChunkPtr *ShaderTextureFilterBase::getSFInternalParameters(void) const
{
    return &_sfInternalParameters;
}

//! Get the ShaderTextureFilter::_sfInternalParameters field.
inline
SFSHLParameterChunkPtr *ShaderTextureFilterBase::editSFInternalParameters(void)
{
    return &_sfInternalParameters;
}

//! Get the ShaderTextureFilter::_sfInternalShader field.
inline
const SFSHLChunkPtr *ShaderTextureFilterBase::getSFInternalShader(void) const
{
    return &_sfInternalShader;
}

//! Get the ShaderTextureFilter::_sfInternalShader field.
inline
SFSHLChunkPtr *ShaderTextureFilterBase::editSFInternalShader(void)
{
    return &_sfInternalShader;
}

//! Get the ShaderTextureFilter::_sfInternalFBO field.
inline
const SFFBOViewportPtr *ShaderTextureFilterBase::getSFInternalFBO(void) const
{
    return &_sfInternalFBO;
}

//! Get the ShaderTextureFilter::_sfInternalFBO field.
inline
SFFBOViewportPtr *ShaderTextureFilterBase::editSFInternalFBO(void)
{
    return &_sfInternalFBO;
}

//! Get the ShaderTextureFilter::_sfFBOSize field.
inline
const SFVec2f *ShaderTextureFilterBase::getSFFBOSize(void) const
{
    return &_sfFBOSize;
}

//! Get the ShaderTextureFilter::_sfFBOSize field.
inline
SFVec2f *ShaderTextureFilterBase::editSFFBOSize(void)
{
    return &_sfFBOSize;
}

//! Get the ShaderTextureFilter::_sfShaderOutputSlot field.
inline
const SFTextureFilterOutputSlot *ShaderTextureFilterBase::getSFShaderOutputSlot(void) const
{
    return &_sfShaderOutputSlot;
}

//! Get the ShaderTextureFilter::_sfShaderOutputSlot field.
inline
SFTextureFilterOutputSlot *ShaderTextureFilterBase::editSFShaderOutputSlot(void)
{
    return &_sfShaderOutputSlot;
}

//! Get the ShaderTextureFilter::_sfShaderInputSlot field.
inline
const SFTextureFilterInputSlot *ShaderTextureFilterBase::getSFShaderInputSlot(void) const
{
    return &_sfShaderInputSlot;
}

//! Get the ShaderTextureFilter::_sfShaderInputSlot field.
inline
SFTextureFilterInputSlot *ShaderTextureFilterBase::editSFShaderInputSlot(void)
{
    return &_sfShaderInputSlot;
}


//! Get the value of the ShaderTextureFilter::_sfInternalParameters field.
inline
SHLParameterChunkPtr &ShaderTextureFilterBase::editInternalParameters(void)
{
    return _sfInternalParameters.getValue();
}

//! Get the value of the ShaderTextureFilter::_sfInternalParameters field.
inline
const SHLParameterChunkPtr &ShaderTextureFilterBase::getInternalParameters(void) const
{
    return _sfInternalParameters.getValue();
}

//! Set the value of the ShaderTextureFilter::_sfInternalParameters field.
inline
void ShaderTextureFilterBase::setInternalParameters(const SHLParameterChunkPtr &value)
{
    _sfInternalParameters.setValue(value);
}

//! Get the value of the ShaderTextureFilter::_sfInternalShader field.
inline
SHLChunkPtr &ShaderTextureFilterBase::editInternalShader(void)
{
    return _sfInternalShader.getValue();
}

//! Get the value of the ShaderTextureFilter::_sfInternalShader field.
inline
const SHLChunkPtr &ShaderTextureFilterBase::getInternalShader(void) const
{
    return _sfInternalShader.getValue();
}

//! Set the value of the ShaderTextureFilter::_sfInternalShader field.
inline
void ShaderTextureFilterBase::setInternalShader(const SHLChunkPtr &value)
{
    _sfInternalShader.setValue(value);
}

//! Get the value of the ShaderTextureFilter::_sfInternalFBO field.
inline
FBOViewportPtr &ShaderTextureFilterBase::editInternalFBO(void)
{
    return _sfInternalFBO.getValue();
}

//! Get the value of the ShaderTextureFilter::_sfInternalFBO field.
inline
const FBOViewportPtr &ShaderTextureFilterBase::getInternalFBO(void) const
{
    return _sfInternalFBO.getValue();
}

//! Set the value of the ShaderTextureFilter::_sfInternalFBO field.
inline
void ShaderTextureFilterBase::setInternalFBO(const FBOViewportPtr &value)
{
    _sfInternalFBO.setValue(value);
}

//! Get the value of the ShaderTextureFilter::_sfFBOSize field.
inline
Vec2f &ShaderTextureFilterBase::editFBOSize(void)
{
    return _sfFBOSize.getValue();
}

//! Get the value of the ShaderTextureFilter::_sfFBOSize field.
inline
const Vec2f &ShaderTextureFilterBase::getFBOSize(void) const
{
    return _sfFBOSize.getValue();
}

//! Set the value of the ShaderTextureFilter::_sfFBOSize field.
inline
void ShaderTextureFilterBase::setFBOSize(const Vec2f &value)
{
    _sfFBOSize.setValue(value);
}

//! Get the value of the ShaderTextureFilter::_sfShaderOutputSlot field.
inline
TextureFilterOutputSlot &ShaderTextureFilterBase::editShaderOutputSlot(void)
{
    return _sfShaderOutputSlot.getValue();
}

//! Get the value of the ShaderTextureFilter::_sfShaderOutputSlot field.
inline
const TextureFilterOutputSlot &ShaderTextureFilterBase::getShaderOutputSlot(void) const
{
    return _sfShaderOutputSlot.getValue();
}

//! Set the value of the ShaderTextureFilter::_sfShaderOutputSlot field.
inline
void ShaderTextureFilterBase::setShaderOutputSlot(const TextureFilterOutputSlot &value)
{
    _sfShaderOutputSlot.setValue(value);
}

//! Get the value of the ShaderTextureFilter::_sfShaderInputSlot field.
inline
TextureFilterInputSlot &ShaderTextureFilterBase::editShaderInputSlot(void)
{
    return _sfShaderInputSlot.getValue();
}

//! Get the value of the ShaderTextureFilter::_sfShaderInputSlot field.
inline
const TextureFilterInputSlot &ShaderTextureFilterBase::getShaderInputSlot(void) const
{
    return _sfShaderInputSlot.getValue();
}

//! Set the value of the ShaderTextureFilter::_sfShaderInputSlot field.
inline
void ShaderTextureFilterBase::setShaderInputSlot(const TextureFilterInputSlot &value)
{
    _sfShaderInputSlot.setValue(value);
}


OSG_END_NAMESPACE

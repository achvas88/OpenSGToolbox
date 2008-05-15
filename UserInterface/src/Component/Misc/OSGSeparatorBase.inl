/*---------------------------------------------------------------------------*\
 *                     OpenSG ToolBox UserInterface                          *
 *                                                                           *
 *                                                                           *
 *                                                                           *
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
 **     class Separator!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <OpenSG/OSGConfig.h>

OSG_BEGIN_NAMESPACE


//! access the type of the class
inline
OSG::FieldContainerType &SeparatorBase::getClassType(void)
{
    return _type; 
} 

//! access the numerical type of the class
inline
OSG::UInt32 SeparatorBase::getClassTypeId(void) 
{
    return _type.getId(); 
} 

//! create a new instance of the class
inline
SeparatorPtr SeparatorBase::create(void) 
{
    SeparatorPtr fc; 

    if(getClassType().getPrototype() != OSG::NullFC) 
    {
        fc = SeparatorPtr::dcast(
            getClassType().getPrototype()-> shallowCopy()); 
    }
    
    return fc; 
}

//! create an empty new instance of the class, do not copy the prototype
inline
SeparatorPtr SeparatorBase::createEmpty(void) 
{ 
    SeparatorPtr returnValue; 
    
    newPtr(returnValue); 

    return returnValue; 
}


/*------------------------------ get -----------------------------------*/

//! Get the Separator::_sfOrientation field.
inline
SFUInt32 *SeparatorBase::getSFOrientation(void)
{
    return &_sfOrientation;
}

//! Get the Separator::_sfSeparatorSize field.
inline
SFReal32 *SeparatorBase::getSFSeparatorSize(void)
{
    return &_sfSeparatorSize;
}

//! Get the Separator::_sfColor field.
inline
SFColor4f *SeparatorBase::getSFColor(void)
{
    return &_sfColor;
}


//! Get the value of the Separator::_sfOrientation field.
inline
UInt32 &SeparatorBase::getOrientation(void)
{
    return _sfOrientation.getValue();
}

//! Get the value of the Separator::_sfOrientation field.
inline
const UInt32 &SeparatorBase::getOrientation(void) const
{
    return _sfOrientation.getValue();
}

//! Set the value of the Separator::_sfOrientation field.
inline
void SeparatorBase::setOrientation(const UInt32 &value)
{
    _sfOrientation.setValue(value);
}

//! Get the value of the Separator::_sfSeparatorSize field.
inline
Real32 &SeparatorBase::getSeparatorSize(void)
{
    return _sfSeparatorSize.getValue();
}

//! Get the value of the Separator::_sfSeparatorSize field.
inline
const Real32 &SeparatorBase::getSeparatorSize(void) const
{
    return _sfSeparatorSize.getValue();
}

//! Set the value of the Separator::_sfSeparatorSize field.
inline
void SeparatorBase::setSeparatorSize(const Real32 &value)
{
    _sfSeparatorSize.setValue(value);
}

//! Get the value of the Separator::_sfColor field.
inline
Color4f &SeparatorBase::getColor(void)
{
    return _sfColor.getValue();
}

//! Get the value of the Separator::_sfColor field.
inline
const Color4f &SeparatorBase::getColor(void) const
{
    return _sfColor.getValue();
}

//! Set the value of the Separator::_sfColor field.
inline
void SeparatorBase::setColor(const Color4f &value)
{
    _sfColor.setValue(value);
}


OSG_END_NAMESPACE

#define OSGSEPARATORBASE_INLINE_CVSID "@(#)$Id: FCBaseTemplate_inl.h,v 1.20 2002/12/04 14:22:22 dirk Exp $"

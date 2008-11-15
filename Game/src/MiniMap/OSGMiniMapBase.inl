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
 **     class MiniMap!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <OpenSG/OSGConfig.h>

OSG_BEGIN_NAMESPACE


//! access the type of the class
inline
OSG::FieldContainerType &MiniMapBase::getClassType(void)
{
    return _type; 
} 

//! access the numerical type of the class
inline
OSG::UInt32 MiniMapBase::getClassTypeId(void) 
{
    return _type.getId(); 
} 


/*------------------------------ get -----------------------------------*/

//! Get the MiniMap::_sfTransformation field.
inline
SFMiniMapTransformationPtr *MiniMapBase::getSFTransformation(void)
{
    return &_sfTransformation;
}

//! Get the MiniMap::_mfIndicator field.
inline
MFMiniMapIndicatorPtr *MiniMapBase::getMFIndicator(void)
{
    return &_mfIndicator;
}


//! Get the value of the MiniMap::_sfTransformation field.
inline
MiniMapTransformationPtr &MiniMapBase::getTransformation(void)
{
    return _sfTransformation.getValue();
}

//! Get the value of the MiniMap::_sfTransformation field.
inline
const MiniMapTransformationPtr &MiniMapBase::getTransformation(void) const
{
    return _sfTransformation.getValue();
}

//! Set the value of the MiniMap::_sfTransformation field.
inline
void MiniMapBase::setTransformation(const MiniMapTransformationPtr &value)
{
    _sfTransformation.setValue(value);
}


//! Get the value of the \a index element the MiniMap::_mfIndicator field.
inline
MiniMapIndicatorPtr &MiniMapBase::getIndicator(const UInt32 index)
{
    return _mfIndicator[index];
}

//! Get the MiniMap::_mfIndicator field.
inline
MFMiniMapIndicatorPtr &MiniMapBase::getIndicator(void)
{
    return _mfIndicator;
}

//! Get the MiniMap::_mfIndicator field.
inline
const MFMiniMapIndicatorPtr &MiniMapBase::getIndicator(void) const
{
    return _mfIndicator;
}

OSG_END_NAMESPACE

#define OSGMINIMAPBASE_INLINE_CVSID "@(#)$Id: FCBaseTemplate_inl.h,v 1.20 2002/12/04 14:22:22 dirk Exp $"


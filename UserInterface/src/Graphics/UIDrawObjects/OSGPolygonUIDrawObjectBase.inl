/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *               Copyright (C) 2000-2002 by the OpenSG Forum                 *
 *                                                                           *
 *   contact: dirk@opensg.org, gerrit.voss@vossg.org, jbehr@zgdv.de          *
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
 **     class PolygonUIDrawObject!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <OpenSG/OSGConfig.h>

OSG_BEGIN_NAMESPACE


//! access the type of the class
inline
OSG::FieldContainerType &PolygonUIDrawObjectBase::getClassType(void)
{
    return _type; 
} 

//! access the numerical type of the class
inline
OSG::UInt32 PolygonUIDrawObjectBase::getClassTypeId(void) 
{
    return _type.getId(); 
} 

//! create a new instance of the class
inline
PolygonUIDrawObjectPtr PolygonUIDrawObjectBase::create(void) 
{
    PolygonUIDrawObjectPtr fc; 

    if(getClassType().getPrototype() != OSG::NullFC) 
    {
        fc = PolygonUIDrawObjectPtr::dcast(
            getClassType().getPrototype()-> shallowCopy()); 
    }
    
    return fc; 
}

//! create an empty new instance of the class, do not copy the prototype
inline
PolygonUIDrawObjectPtr PolygonUIDrawObjectBase::createEmpty(void) 
{ 
    PolygonUIDrawObjectPtr returnValue; 
    
    newPtr(returnValue); 

    return returnValue; 
}


/*------------------------------ get -----------------------------------*/

//! Get the PolygonUIDrawObject::_mfVerticies field.
inline
MFPnt2s *PolygonUIDrawObjectBase::getMFVerticies(void)
{
    return &_mfVerticies;
}

//! Get the PolygonUIDrawObject::_sfColor field.
inline
SFColor4f *PolygonUIDrawObjectBase::getSFColor(void)
{
    return &_sfColor;
}

//! Get the PolygonUIDrawObject::_sfOpacity field.
inline
SFReal32 *PolygonUIDrawObjectBase::getSFOpacity(void)
{
    return &_sfOpacity;
}


//! Get the value of the PolygonUIDrawObject::_sfColor field.
inline
Color4f &PolygonUIDrawObjectBase::getColor(void)
{
    return _sfColor.getValue();
}

//! Get the value of the PolygonUIDrawObject::_sfColor field.
inline
const Color4f &PolygonUIDrawObjectBase::getColor(void) const
{
    return _sfColor.getValue();
}

//! Set the value of the PolygonUIDrawObject::_sfColor field.
inline
void PolygonUIDrawObjectBase::setColor(const Color4f &value)
{
    _sfColor.setValue(value);
}

//! Get the value of the PolygonUIDrawObject::_sfOpacity field.
inline
Real32 &PolygonUIDrawObjectBase::getOpacity(void)
{
    return _sfOpacity.getValue();
}

//! Get the value of the PolygonUIDrawObject::_sfOpacity field.
inline
const Real32 &PolygonUIDrawObjectBase::getOpacity(void) const
{
    return _sfOpacity.getValue();
}

//! Set the value of the PolygonUIDrawObject::_sfOpacity field.
inline
void PolygonUIDrawObjectBase::setOpacity(const Real32 &value)
{
    _sfOpacity.setValue(value);
}


//! Get the value of the \a index element the PolygonUIDrawObject::_mfVerticies field.
inline
Pnt2s &PolygonUIDrawObjectBase::getVerticies(const UInt32 index)
{
    return _mfVerticies[index];
}

//! Get the PolygonUIDrawObject::_mfVerticies field.
inline
MFPnt2s &PolygonUIDrawObjectBase::getVerticies(void)
{
    return _mfVerticies;
}

//! Get the PolygonUIDrawObject::_mfVerticies field.
inline
const MFPnt2s &PolygonUIDrawObjectBase::getVerticies(void) const
{
    return _mfVerticies;
}

OSG_END_NAMESPACE

#define OSGPOLYGONUIDRAWOBJECTBASE_INLINE_CVSID "@(#)$Id: FCBaseTemplate_inl.h,v 1.20 2002/12/04 14:22:22 dirk Exp $"

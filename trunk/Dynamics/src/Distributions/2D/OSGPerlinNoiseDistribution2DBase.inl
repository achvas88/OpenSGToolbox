/*---------------------------------------------------------------------------*\
 *                        OpenSG ToolBox Dynamics                            *
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
 **     class PerlinNoiseDistribution2D!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <OpenSG/OSGConfig.h>

OSG_BEGIN_NAMESPACE


//! access the type of the class
inline
OSG::FieldContainerType &PerlinNoiseDistribution2DBase::getClassType(void)
{
    return _type; 
} 

//! access the numerical type of the class
inline
OSG::UInt32 PerlinNoiseDistribution2DBase::getClassTypeId(void) 
{
    return _type.getId(); 
} 

//! create a new instance of the class
inline
PerlinNoiseDistribution2DPtr PerlinNoiseDistribution2DBase::create(void) 
{
    PerlinNoiseDistribution2DPtr fc; 

    if(getClassType().getPrototype() != OSG::NullFC) 
    {
        fc = PerlinNoiseDistribution2DPtr::dcast(
            getClassType().getPrototype()-> shallowCopy()); 
    }
    
    return fc; 
}

//! create an empty new instance of the class, do not copy the prototype
inline
PerlinNoiseDistribution2DPtr PerlinNoiseDistribution2DBase::createEmpty(void) 
{ 
    PerlinNoiseDistribution2DPtr returnValue; 
    
    newPtr(returnValue); 

    return returnValue; 
}


/*------------------------------ get -----------------------------------*/

//! Get the PerlinNoiseDistribution2D::_sfFrequency field.
inline
SFReal32 *PerlinNoiseDistribution2DBase::getSFFrequency(void)
{
    return &_sfFrequency;
}

//! Get the PerlinNoiseDistribution2D::_sfPersistance field.
inline
SFReal32 *PerlinNoiseDistribution2DBase::getSFPersistance(void)
{
    return &_sfPersistance;
}

//! Get the PerlinNoiseDistribution2D::_sfOctaves field.
inline
SFUInt32 *PerlinNoiseDistribution2DBase::getSFOctaves(void)
{
    return &_sfOctaves;
}

//! Get the PerlinNoiseDistribution2D::_sfAmplitude field.
inline
SFReal32 *PerlinNoiseDistribution2DBase::getSFAmplitude(void)
{
    return &_sfAmplitude;
}

//! Get the PerlinNoiseDistribution2D::_sfInterpolationType field.
inline
SFUInt32 *PerlinNoiseDistribution2DBase::getSFInterpolationType(void)
{
    return &_sfInterpolationType;
}


//! Get the value of the PerlinNoiseDistribution2D::_sfFrequency field.
inline
Real32 &PerlinNoiseDistribution2DBase::getFrequency(void)
{
    return _sfFrequency.getValue();
}

//! Get the value of the PerlinNoiseDistribution2D::_sfFrequency field.
inline
const Real32 &PerlinNoiseDistribution2DBase::getFrequency(void) const
{
    return _sfFrequency.getValue();
}

//! Set the value of the PerlinNoiseDistribution2D::_sfFrequency field.
inline
void PerlinNoiseDistribution2DBase::setFrequency(const Real32 &value)
{
	_sfFrequency.setValue(std::abs(value));
}

//! Get the value of the PerlinNoiseDistribution2D::_sfPersistance field.
inline
Real32 &PerlinNoiseDistribution2DBase::getPersistance(void)
{
    return _sfPersistance.getValue();
}

//! Get the value of the PerlinNoiseDistribution2D::_sfPersistance field.
inline
const Real32 &PerlinNoiseDistribution2DBase::getPersistance(void) const
{
    return _sfPersistance.getValue();
}

//! Set the value of the PerlinNoiseDistribution2D::_sfPersistance field.
inline
void PerlinNoiseDistribution2DBase::setPersistance(const Real32 &value)
{
    _sfPersistance.setValue(value);
}

//! Get the value of the PerlinNoiseDistribution2D::_sfOctaves field.
inline
UInt32 &PerlinNoiseDistribution2DBase::getOctaves(void)
{
    return _sfOctaves.getValue();
}

//! Get the value of the PerlinNoiseDistribution2D::_sfOctaves field.
inline
const UInt32 &PerlinNoiseDistribution2DBase::getOctaves(void) const
{
    return _sfOctaves.getValue();
}

//! Set the value of the PerlinNoiseDistribution2D::_sfOctaves field.
inline
void PerlinNoiseDistribution2DBase::setOctaves(const UInt32 &value)
{
    _sfOctaves.setValue(value);
}

//! Get the value of the PerlinNoiseDistribution2D::_sfAmplitude field.
inline
Real32 &PerlinNoiseDistribution2DBase::getAmplitude(void)
{
    return _sfAmplitude.getValue();
}

//! Get the value of the PerlinNoiseDistribution2D::_sfAmplitude field.
inline
const Real32 &PerlinNoiseDistribution2DBase::getAmplitude(void) const
{
    return _sfAmplitude.getValue();
}

//! Set the value of the PerlinNoiseDistribution2D::_sfAmplitude field.
inline
void PerlinNoiseDistribution2DBase::setAmplitude(const Real32 &value)
{
    _sfAmplitude.setValue(value);
}

//! Get the value of the PerlinNoiseDistribution2D::_sfInterpolationType field.
inline
UInt32 &PerlinNoiseDistribution2DBase::getInterpolationType(void)
{
    return _sfInterpolationType.getValue();
}

//! Get the value of the PerlinNoiseDistribution2D::_sfInterpolationType field.
inline
const UInt32 &PerlinNoiseDistribution2DBase::getInterpolationType(void) const
{
    return _sfInterpolationType.getValue();
}

//! Set the value of the PerlinNoiseDistribution2D::_sfInterpolationType field.
inline
void PerlinNoiseDistribution2DBase::setInterpolationType(const UInt32 &value)
{
    _sfInterpolationType.setValue(value);
}


OSG_END_NAMESPACE

#define OSGPERLINNOISEDISTRIBUTION2DBASE_INLINE_CVSID "@(#)$Id: FCBaseTemplate_inl.h,v 1.20 2002/12/04 14:22:22 dirk Exp $"


/*---------------------------------------------------------------------------*\
 *                     OpenSG ToolBox Particle System                        *
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
 **     class DragParticleAffector!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <OpenSG/OSGConfig.h>

OSG_BEGIN_NAMESPACE


//! access the type of the class
inline
OSG::FieldContainerType &DragParticleAffectorBase::getClassType(void)
{
    return _type; 
} 

//! access the numerical type of the class
inline
OSG::UInt32 DragParticleAffectorBase::getClassTypeId(void) 
{
    return _type.getId(); 
} 

//! create a new instance of the class
inline
DragParticleAffectorPtr DragParticleAffectorBase::create(void) 
{
    DragParticleAffectorPtr fc; 

    if(getClassType().getPrototype() != OSG::NullFC) 
    {
        fc = DragParticleAffectorPtr::dcast(
            getClassType().getPrototype()-> shallowCopy()); 
    }
    
    return fc; 
}

//! create an empty new instance of the class, do not copy the prototype
inline
DragParticleAffectorPtr DragParticleAffectorBase::createEmpty(void) 
{ 
    DragParticleAffectorPtr returnValue; 
    
    newPtr(returnValue); 

    return returnValue; 
}


/*------------------------------ get -----------------------------------*/

//! Get the DragParticleAffector::_sfMagnitude field.
inline
SFReal32 *DragParticleAffectorBase::getSFMagnitude(void)
{
    return &_sfMagnitude;
}

//! Get the DragParticleAffector::_sfUseDirection field.
inline
SFBool *DragParticleAffectorBase::getSFUseDirection(void)
{
    return &_sfUseDirection;
}

//! Get the DragParticleAffector::_sfDirection field.
inline
SFVec3f *DragParticleAffectorBase::getSFDirection(void)
{
    return &_sfDirection;
}

//! Get the DragParticleAffector::_sfAttenuation field.
inline
SFReal32 *DragParticleAffectorBase::getSFAttenuation(void)
{
    return &_sfAttenuation;
}

//! Get the DragParticleAffector::_sfSpeedAttenuation field.
inline
SFReal32 *DragParticleAffectorBase::getSFSpeedAttenuation(void)
{
    return &_sfSpeedAttenuation;
}

//! Get the DragParticleAffector::_sfMaxDistance field.
inline
SFReal32 *DragParticleAffectorBase::getSFMaxDistance(void)
{
    return &_sfMaxDistance;
}

//! Get the DragParticleAffector::_sfMotionAttenuation field.
inline
SFReal32 *DragParticleAffectorBase::getSFMotionAttenuation(void)
{
    return &_sfMotionAttenuation;
}

//! Get the DragParticleAffector::_sfInheritVelocity field.
inline
SFReal32 *DragParticleAffectorBase::getSFInheritVelocity(void)
{
    return &_sfInheritVelocity;
}

//! Get the DragParticleAffector::_sfBeacon field.
inline
SFNodePtr *DragParticleAffectorBase::getSFBeacon(void)
{
    return &_sfBeacon;
}


//! Get the value of the DragParticleAffector::_sfMagnitude field.
inline
Real32 &DragParticleAffectorBase::getMagnitude(void)
{
    return _sfMagnitude.getValue();
}

//! Get the value of the DragParticleAffector::_sfMagnitude field.
inline
const Real32 &DragParticleAffectorBase::getMagnitude(void) const
{
    return _sfMagnitude.getValue();
}

//! Set the value of the DragParticleAffector::_sfMagnitude field.
inline
void DragParticleAffectorBase::setMagnitude(const Real32 &value)
{
    _sfMagnitude.setValue(value);
}

//! Get the value of the DragParticleAffector::_sfUseDirection field.
inline
bool &DragParticleAffectorBase::getUseDirection(void)
{
    return _sfUseDirection.getValue();
}

//! Get the value of the DragParticleAffector::_sfUseDirection field.
inline
const bool &DragParticleAffectorBase::getUseDirection(void) const
{
    return _sfUseDirection.getValue();
}

//! Set the value of the DragParticleAffector::_sfUseDirection field.
inline
void DragParticleAffectorBase::setUseDirection(const bool &value)
{
    _sfUseDirection.setValue(value);
}

//! Get the value of the DragParticleAffector::_sfDirection field.
inline
Vec3f &DragParticleAffectorBase::getDirection(void)
{
    return _sfDirection.getValue();
}

//! Get the value of the DragParticleAffector::_sfDirection field.
inline
const Vec3f &DragParticleAffectorBase::getDirection(void) const
{
    return _sfDirection.getValue();
}

//! Set the value of the DragParticleAffector::_sfDirection field.
inline
void DragParticleAffectorBase::setDirection(const Vec3f &value)
{
    _sfDirection.setValue(value);
}

//! Get the value of the DragParticleAffector::_sfAttenuation field.
inline
Real32 &DragParticleAffectorBase::getAttenuation(void)
{
    return _sfAttenuation.getValue();
}

//! Get the value of the DragParticleAffector::_sfAttenuation field.
inline
const Real32 &DragParticleAffectorBase::getAttenuation(void) const
{
    return _sfAttenuation.getValue();
}

//! Set the value of the DragParticleAffector::_sfAttenuation field.
inline
void DragParticleAffectorBase::setAttenuation(const Real32 &value)
{
    _sfAttenuation.setValue(value);
}

//! Get the value of the DragParticleAffector::_sfSpeedAttenuation field.
inline
Real32 &DragParticleAffectorBase::getSpeedAttenuation(void)
{
    return _sfSpeedAttenuation.getValue();
}

//! Get the value of the DragParticleAffector::_sfSpeedAttenuation field.
inline
const Real32 &DragParticleAffectorBase::getSpeedAttenuation(void) const
{
    return _sfSpeedAttenuation.getValue();
}

//! Set the value of the DragParticleAffector::_sfSpeedAttenuation field.
inline
void DragParticleAffectorBase::setSpeedAttenuation(const Real32 &value)
{
    _sfSpeedAttenuation.setValue(value);
}

//! Get the value of the DragParticleAffector::_sfMaxDistance field.
inline
Real32 &DragParticleAffectorBase::getMaxDistance(void)
{
    return _sfMaxDistance.getValue();
}

//! Get the value of the DragParticleAffector::_sfMaxDistance field.
inline
const Real32 &DragParticleAffectorBase::getMaxDistance(void) const
{
    return _sfMaxDistance.getValue();
}

//! Set the value of the DragParticleAffector::_sfMaxDistance field.
inline
void DragParticleAffectorBase::setMaxDistance(const Real32 &value)
{
    _sfMaxDistance.setValue(value);
}

//! Get the value of the DragParticleAffector::_sfMotionAttenuation field.
inline
Real32 &DragParticleAffectorBase::getMotionAttenuation(void)
{
    return _sfMotionAttenuation.getValue();
}

//! Get the value of the DragParticleAffector::_sfMotionAttenuation field.
inline
const Real32 &DragParticleAffectorBase::getMotionAttenuation(void) const
{
    return _sfMotionAttenuation.getValue();
}

//! Set the value of the DragParticleAffector::_sfMotionAttenuation field.
inline
void DragParticleAffectorBase::setMotionAttenuation(const Real32 &value)
{
    _sfMotionAttenuation.setValue(value);
}

//! Get the value of the DragParticleAffector::_sfInheritVelocity field.
inline
Real32 &DragParticleAffectorBase::getInheritVelocity(void)
{
    return _sfInheritVelocity.getValue();
}

//! Get the value of the DragParticleAffector::_sfInheritVelocity field.
inline
const Real32 &DragParticleAffectorBase::getInheritVelocity(void) const
{
    return _sfInheritVelocity.getValue();
}

//! Set the value of the DragParticleAffector::_sfInheritVelocity field.
inline
void DragParticleAffectorBase::setInheritVelocity(const Real32 &value)
{
    _sfInheritVelocity.setValue(value);
}

//! Get the value of the DragParticleAffector::_sfBeacon field.
inline
NodePtr &DragParticleAffectorBase::getBeacon(void)
{
    return _sfBeacon.getValue();
}

//! Get the value of the DragParticleAffector::_sfBeacon field.
inline
const NodePtr &DragParticleAffectorBase::getBeacon(void) const
{
    return _sfBeacon.getValue();
}

//! Set the value of the DragParticleAffector::_sfBeacon field.
inline
void DragParticleAffectorBase::setBeacon(const NodePtr &value)
{
    _sfBeacon.setValue(value);
}


OSG_END_NAMESPACE

#define OSGDRAGPARTICLEAFFECTORBASE_INLINE_CVSID "@(#)$Id: FCBaseTemplate_inl.h,v 1.20 2002/12/04 14:22:22 dirk Exp $"

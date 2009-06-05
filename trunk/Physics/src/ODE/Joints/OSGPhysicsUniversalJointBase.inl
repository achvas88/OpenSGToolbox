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
 **     class PhysicsUniversalJoint!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <OpenSG/OSGConfig.h>

OSG_BEGIN_NAMESPACE


//! access the type of the class
inline
OSG::FieldContainerType &PhysicsUniversalJointBase::getClassType(void)
{
    return _type; 
} 

//! access the numerical type of the class
inline
OSG::UInt32 PhysicsUniversalJointBase::getClassTypeId(void) 
{
    return _type.getId(); 
} 

//! create a new instance of the class
inline
PhysicsUniversalJointPtr PhysicsUniversalJointBase::create(void) 
{
    PhysicsUniversalJointPtr fc; 

    if(getClassType().getPrototype() != OSG::NullFC) 
    {
        fc = PhysicsUniversalJointPtr::dcast(
            getClassType().getPrototype()-> shallowCopy()); 
    }
    
    return fc; 
}

//! create an empty new instance of the class, do not copy the prototype
inline
PhysicsUniversalJointPtr PhysicsUniversalJointBase::createEmpty(void) 
{ 
    PhysicsUniversalJointPtr returnValue; 
    
    newPtr(returnValue); 

    return returnValue; 
}


/*------------------------------ get -----------------------------------*/

//! Get the PhysicsUniversalJoint::_sfAnchor field.
inline
SFVec3f *PhysicsUniversalJointBase::getSFAnchor(void)
{
    return &_sfAnchor;
}

//! Get the PhysicsUniversalJoint::_sfAxis1 field.
inline
SFVec3f *PhysicsUniversalJointBase::getSFAxis1(void)
{
    return &_sfAxis1;
}

//! Get the PhysicsUniversalJoint::_sfAxis2 field.
inline
SFVec3f *PhysicsUniversalJointBase::getSFAxis2(void)
{
    return &_sfAxis2;
}


//! Get the value of the PhysicsUniversalJoint::_sfAnchor field.
inline
Vec3f &PhysicsUniversalJointBase::getAnchor(void)
{
    return _sfAnchor.getValue();
}

//! Get the value of the PhysicsUniversalJoint::_sfAnchor field.
inline
const Vec3f &PhysicsUniversalJointBase::getAnchor(void) const
{
    return _sfAnchor.getValue();
}

//! Set the value of the PhysicsUniversalJoint::_sfAnchor field.
inline
void PhysicsUniversalJointBase::setAnchor(const Vec3f &value)
{
    _sfAnchor.setValue(value);
}

//! Get the value of the PhysicsUniversalJoint::_sfAxis1 field.
inline
Vec3f &PhysicsUniversalJointBase::getAxis1(void)
{
    return _sfAxis1.getValue();
}

//! Get the value of the PhysicsUniversalJoint::_sfAxis1 field.
inline
const Vec3f &PhysicsUniversalJointBase::getAxis1(void) const
{
    return _sfAxis1.getValue();
}

//! Set the value of the PhysicsUniversalJoint::_sfAxis1 field.
inline
void PhysicsUniversalJointBase::setAxis1(const Vec3f &value)
{
    _sfAxis1.setValue(value);
}

//! Get the value of the PhysicsUniversalJoint::_sfAxis2 field.
inline
Vec3f &PhysicsUniversalJointBase::getAxis2(void)
{
    return _sfAxis2.getValue();
}

//! Get the value of the PhysicsUniversalJoint::_sfAxis2 field.
inline
const Vec3f &PhysicsUniversalJointBase::getAxis2(void) const
{
    return _sfAxis2.getValue();
}

//! Set the value of the PhysicsUniversalJoint::_sfAxis2 field.
inline
void PhysicsUniversalJointBase::setAxis2(const Vec3f &value)
{
    _sfAxis2.setValue(value);
}


OSG_END_NAMESPACE

#define OSGPHYSICSUNIVERSALJOINTBASE_INLINE_CVSID "@(#)$Id: OSGPhysicsUniversalJointBase.inl,v 1.2 2006/02/20 17:04:21 dirk Exp $"

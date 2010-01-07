/*---------------------------------------------------------------------------*\
 *                     OpenSG ToolBox UserInterface                          *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                         www.vrac.iastate.edu                              *
 *                                                                           *
 *                Authors: Behboud Kalantary, David Kabala                   *
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

//---------------------------------------------------------------------------
//  Includes
//---------------------------------------------------------------------------

#include <stdlib.h>
#include <stdio.h>

#include <OpenSG/OSGConfig.h>
#include "OSGPhysicsDef.h"

#include "OSGPhysicsBody.h"
#include "OSGPhysicsWorld.h"
#include "OSGPhysicsHandler.h"

#include "ODE/Joints/OSGPhysicsJoint.h"
#include <OpenSG/Toolbox/OSGFieldContainerUtils.h>

#include <set>

OSG_USING_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class osg::PhysicsBody

*/

/***************************************************************************\
 *                           Class variables                               *
\***************************************************************************/

/***************************************************************************\
 *                           Class methods                                 *
\***************************************************************************/

void PhysicsBody::initMethod (void)
{
}

//! create a new instance of the class
PhysicsBodyPtr PhysicsBody::create(PhysicsWorldPtr World) 
{
    PhysicsBodyPtr fc; 

    if(getClassType().getPrototype() != OSG::NullFC) 
    {
        fc = PhysicsBodyPtr::dcast(
            getClassType().getPrototype()-> shallowCopy()); 
    }
    if(fc != NullFC)
    {
        beginEditCP(fc, WorldFieldMask);
            fc->setWorld(World);
        endEditCP(fc, WorldFieldMask);

        fc->initDefaults();
    }
    
    return fc; 
}
/***************************************************************************\
 *                           Instance methods                              *
\***************************************************************************/
/*-------------------------------------------------------------------------*\
-  public                                                                 -
\*-------------------------------------------------------------------------*/
void PhysicsBody::onCreate(const PhysicsBody *)
{
	PhysicsBodyPtr tmpPtr(*this);
    _BodyID = 0;
}

void PhysicsBody::onDestroy()
{
	if(_BodyID)
    {
		dBodyDestroy(_BodyID);
        _BodyID =0;
    }
}

/***************************************************************************\
*                              Field Get	                               *
\***************************************************************************/

dBodyID PhysicsBody::getBodyID(void)
{
    return _BodyID;
}

/***************************************************************************\
*                              Field Set	                               *
\***************************************************************************/

/***************************************************************************\
*                              Class Specific                              *
\***************************************************************************/

Matrix PhysicsBody::getTransformation(void) const
{
    Vec3f Translation;
    const dReal* t = dBodyGetPosition(_BodyID);
    Translation.setValues( t[0],t[1],t[2] );

    const dReal* q = dBodyGetQuaternion(_BodyID);
    Quaternion Rotation;
    Rotation.setValueAsQuat(q[1], q[2], q[3], q[0]);

    Matrix Transformation;
    Transformation.setTransform(Translation,Rotation);

    return Transformation;
}

void PhysicsBody::initDefaults(void)
{
    setAutoDisableFlag(dBodyGetAutoDisableFlag(_BodyID));
    setAutoDisableLinearThreshold(dBodyGetAutoDisableLinearThreshold(_BodyID));
    setAutoDisableAngularThreshold(dBodyGetAutoDisableAngularThreshold(_BodyID));
    setAutoDisableSteps(dBodyGetAutoDisableSteps(_BodyID));
    setAutoDisableTime(dBodyGetAutoDisableTime(_BodyID));
    setFiniteRotationMode(dBodyGetFiniteRotationMode(_BodyID));
    dVector3 odeVec;
    dBodyGetFiniteRotationAxis(_BodyID, odeVec);
    setFiniteRotationAxis(Vec3f(odeVec[0], odeVec[1], odeVec[3]));
    setGravityMode(dBodyGetGravityMode(_BodyID));
    
    dMass TheMass;
    dBodyGetMass(_BodyID, &TheMass);
    setMassStruct(TheMass);
}

void PhysicsBody::setMassStruct(const dMass &mass )
{
    setMass(mass.mass);
    setMassCenterOfGravity(Vec3f(mass.c[0],mass.c[1],mass.c[2]));
    Matrix InertiaTensor;
    InertiaTensor[0][0] = mass.I[0];
    InertiaTensor[0][1] = mass.I[1];
    InertiaTensor[0][2] = mass.I[2];
    InertiaTensor[0][3] = 0;
    InertiaTensor[1][0] = mass.I[4];
    InertiaTensor[1][1] = mass.I[5];
    InertiaTensor[1][2] = mass.I[6];
    InertiaTensor[1][3] = 0;
    InertiaTensor[2][0] = mass.I[8];
    InertiaTensor[2][1] = mass.I[9];
    InertiaTensor[2][2] = mass.I[10];
    InertiaTensor[2][3] = 0;

    //mass->I
    setMassInertiaTensor(InertiaTensor);
}

void PhysicsBody::getMassStruct(dMass &mass )
{
	dBodyGetMass(_BodyID, &mass);
}

void PhysicsBody::addForce(const Vec3f &v)
{
	dBodyAddForce(_BodyID,v.x(), v.y(), v.z());
}

void PhysicsBody::addTorque(const Vec3f &v)
{
	dBodyAddTorque(_BodyID,v.x(), v.y(), v.z());
}

void PhysicsBody::addRelForce(const Vec3f &v)
{
	dBodyAddRelForce(_BodyID,v.x(), v.y(), v.z());
}

void PhysicsBody::addRelTorque(const Vec3f &v)
{
	dBodyAddRelTorque(_BodyID,v.x(), v.y(), v.z());
}

void PhysicsBody::addForceAtPos(const Vec3f &v, const Vec3f &p)
{
	dBodyAddForceAtPos(_BodyID, v.x(), v.y(), v.z(), p.x(), p.y(), p.z());
}

void PhysicsBody::addForceAtRelPos(const Vec3f &v, const Vec3f &p)
{
	dBodyAddForceAtRelPos(_BodyID, v.x(), v.y(), v.z(), p.x(), p.y(), p.z());
}

void PhysicsBody::addRelForceAtPos(const Vec3f &v, const Vec3f &p)
{
	dBodyAddRelForceAtPos(_BodyID, v.x(), v.y(), v.z(), p.x(), p.y(), p.z());
}

void PhysicsBody::addRelForceAtRelPos(const Vec3f &v, const Vec3f &p)
{
	dBodyAddRelForceAtRelPos(_BodyID, v.x(), v.y(), v.z(), p.x(), p.y(), p.z());
}

void PhysicsBody::getRelPointPos(const Vec3f &v, Vec3f &result)
{
	dVector3 t;
	dBodyGetRelPointPos(_BodyID, v.x(), v.y(), v.z(), t);
	result.setValue(Vec3f(t[0], t[1], t[2]));
}

void PhysicsBody::getRelPointVel(const Vec3f &v, Vec3f &result)
{
	dVector3 t;
	dBodyGetRelPointVel(_BodyID, v.x(), v.y(), v.z(), t);
	result.setValue(Vec3f(t[0], t[1], t[2]));
}

void PhysicsBody::getPointVel(const Vec3f &v, Vec3f &result)
{
	dVector3 t;
	dBodyGetPointVel(_BodyID, v.x(), v.y(), v.z(), t);
	result.setValue(Vec3f(t[0], t[1], t[2]));
}

void PhysicsBody::getPosRelPoint(const Vec3f &p, Vec3f &result)
{
	dVector3 t;
	dBodyGetPosRelPoint(_BodyID, p.x(), p.y(), p.z(), t);
	result.setValue(Vec3f(t[0], t[1], t[2]));
}

void PhysicsBody::vectorToWorld(const Vec3f &v, Vec3f &result)
{
	dVector3 t;
	dBodyVectorToWorld(_BodyID, v.x(), v.y(), v.z(), t);
	result.setValue(Vec3f(t[0], t[1], t[2]));
}

void PhysicsBody::vectorFromWorld(const Vec3f &v, Vec3f &result)
{
	dVector3 t;
	dBodyVectorFromWorld(_BodyID, v.x(), v.y(), v.z(), t);
	result.setValue(Vec3f(t[0], t[1], t[2]));
}

void PhysicsBody::setAutoDisableDefaults(void)
{
	dBodySetAutoDisableDefaults(_BodyID);
}

void PhysicsBody::setData(void* someData)
{
	dBodySetData(_BodyID, someData);
}

void* PhysicsBody::getData(void)
{
	return dBodyGetData(_BodyID);
}

Int32 PhysicsBody::getNumJoints(void) const
{
	return dBodyGetNumJoints(_BodyID);
}

dJointID PhysicsBody::getJoint(Int32 index) const
{
	return dBodyGetJoint(_BodyID, index);
}

std::vector<PhysicsJointPtr> PhysicsBody::getJoints(void) const
{
    std::vector<PhysicsJointPtr> FoundJoints;
    
    std::vector<FieldContainerPtr> AllJoints(getAllContainersByDerivedType(&PhysicsJoint::getClassType()));

    std::set<dJointID> JointIDSet;
    for(UInt32 i(0) ; i<getNumJoints() ; ++i)
    {
        JointIDSet.insert(getJoint(i));
    }

    for(UInt32 i(0) ; i<AllJoints.size() ; ++i)
    {
        if( JointIDSet.count(PhysicsJointPtr::dcast(AllJoints[i])->getJointID()) > 0 )
        {
            FoundJoints.push_back(PhysicsJointPtr::dcast(AllJoints[i]));
        }
    }

    return FoundJoints;
}

//Mass
void PhysicsBody::resetMass()
{
    beginEditCP(PhysicsBodyPtr(this), MassFieldMask | MassCenterOfGravityFieldMask | MassInertiaTensorFieldMask);
        dMass mass;
        getMassStruct(mass);
        dMassSetZero(&mass);
        setMassStruct(mass);
    endEditCP(PhysicsBodyPtr(this), MassFieldMask | MassCenterOfGravityFieldMask | MassInertiaTensorFieldMask);
}

void PhysicsBody::setMassParams( Real32 theMass, const Vec3f& cg, 
                                Real32 I11, Real32 I22, Real32 I33, 
                                Real32 I12, Real32 I13, Real32 I23 )
{
    beginEditCP(PhysicsBodyPtr(this), MassFieldMask | MassCenterOfGravityFieldMask | MassInertiaTensorFieldMask);
        dMass mass;
        dMassSetParameters(&mass, theMass, cg.x(), cg.y(), cg.z(),
                            I11, I22, I33, I12, I13, I23 );
        setMassStruct(mass);
    endEditCP(PhysicsBodyPtr(this), MassFieldMask | MassCenterOfGravityFieldMask | MassInertiaTensorFieldMask);
}

void PhysicsBody::setSphereMass( Real32 density, Real32 radius )
{
    beginEditCP(PhysicsBodyPtr(this), MassFieldMask | MassCenterOfGravityFieldMask | MassInertiaTensorFieldMask);
        dMass mass;
        dMassSetSphere(&mass, density, radius);
        setMassStruct(mass);
    endEditCP(PhysicsBodyPtr(this), MassFieldMask | MassCenterOfGravityFieldMask | MassInertiaTensorFieldMask);
}

void PhysicsBody::setSphereMassTotal( Real32 totalMass, Real32 radius )
{
    beginEditCP(PhysicsBodyPtr(this), MassFieldMask | MassCenterOfGravityFieldMask | MassInertiaTensorFieldMask);
        dMass mass;
        dMassSetSphereTotal(&mass, totalMass, radius);
        setMassStruct(mass);
    endEditCP(PhysicsBodyPtr(this), MassFieldMask | MassCenterOfGravityFieldMask | MassInertiaTensorFieldMask);
}

void PhysicsBody::setCapsuleMass( Real32 density, Int32 direction, 
                                   Real32 radius, Real32 length )
{
    beginEditCP(PhysicsBodyPtr(this), MassFieldMask | MassCenterOfGravityFieldMask | MassInertiaTensorFieldMask);
        dMass mass;
        dMassSetCapsule(&mass, density, direction, radius, length);
        setMassStruct(mass);
    endEditCP(PhysicsBodyPtr(this), MassFieldMask | MassCenterOfGravityFieldMask | MassInertiaTensorFieldMask);
}

void PhysicsBody::setCapsuleMassTotal( Real32 totalMass, Int32 direction, 
                                        Real32 radius, Real32 length )
{
    beginEditCP(PhysicsBodyPtr(this), MassFieldMask | MassCenterOfGravityFieldMask | MassInertiaTensorFieldMask);
        dMass mass;
        dMassSetCapsuleTotal(&mass, totalMass, direction, radius, length);
        setMassStruct(mass);
    endEditCP(PhysicsBodyPtr(this), MassFieldMask | MassCenterOfGravityFieldMask | MassInertiaTensorFieldMask);
}

void PhysicsBody::setBoxMass( Real32 density, Real32 lx, Real32 ly, Real32 lz )
{
    beginEditCP(PhysicsBodyPtr(this), MassFieldMask | MassCenterOfGravityFieldMask | MassInertiaTensorFieldMask);
        dMass mass;
        dMassSetBox(&mass, density, lx, ly, lz);
        setMassStruct(mass);
    endEditCP(PhysicsBodyPtr(this), MassFieldMask | MassCenterOfGravityFieldMask | MassInertiaTensorFieldMask);
}

void PhysicsBody::setBoxMassTotal( Real32 totalMass, Real32 lx, Real32 ly, Real32 lz )
{
    beginEditCP(PhysicsBodyPtr(this), MassFieldMask | MassCenterOfGravityFieldMask | MassInertiaTensorFieldMask);
        dMass mass;
        dMassSetBoxTotal(&mass, totalMass, lx, ly, lz);
        setMassStruct(mass);
    endEditCP(PhysicsBodyPtr(this), MassFieldMask | MassCenterOfGravityFieldMask | MassInertiaTensorFieldMask);
}

void PhysicsBody::adjustMass( Real32 newMass )
{
    beginEditCP(PhysicsBodyPtr(this), MassFieldMask | MassCenterOfGravityFieldMask | MassInertiaTensorFieldMask);
        dMass mass;
        getMassStruct(mass);
        dMassAdjust(&mass, newMass);
        setMassStruct(mass);
    endEditCP(PhysicsBodyPtr(this), MassFieldMask | MassCenterOfGravityFieldMask | MassInertiaTensorFieldMask);
}

void PhysicsBody::translateMass( const Vec3f& t)
{
    beginEditCP(PhysicsBodyPtr(this), MassFieldMask | MassCenterOfGravityFieldMask | MassInertiaTensorFieldMask);
        dMass mass;
        getMassStruct(mass);
        dMassTranslate(&mass, t.x(), t.y(), t.z() );
        setMassStruct(mass);
    endEditCP(PhysicsBodyPtr(this), MassFieldMask | MassCenterOfGravityFieldMask | MassInertiaTensorFieldMask);
}


void PhysicsBody::rotateMass( const Matrix& R)
{
    beginEditCP(PhysicsBodyPtr(this), MassFieldMask | MassCenterOfGravityFieldMask | MassInertiaTensorFieldMask);
        dMatrix3 rotation;
        Vec4f v1 =  R[0];
        Vec4f v2 =  R[1];
        Vec4f v3 =  R[2];
        rotation[0]   = v1.x();
        rotation[1]   = v1.y();
        rotation[2]   = v1.z();
        rotation[3]   = 0;
        rotation[4]   = v2.x();
        rotation[5]   = v2.y();
        rotation[6]   = v2.z();
        rotation[7]   = 0;
        rotation[8]   = v3.x();
        rotation[9]   = v3.y();
        rotation[10]  = v3.z();
        rotation[11]  = 0;

        dMass mass;
        getMassStruct(mass);
        dMassRotate(&mass, rotation);
        setMassStruct(mass);
    endEditCP(PhysicsBodyPtr(this), MassFieldMask | MassCenterOfGravityFieldMask | MassInertiaTensorFieldMask);
}

void PhysicsBody::addMassOf( dBodyID otherBody )
{
    beginEditCP(PhysicsBodyPtr(this), MassFieldMask | MassCenterOfGravityFieldMask | MassInertiaTensorFieldMask);
        dMass myMass, otherMass;
        getMassStruct(myMass);
        dBodyGetMass(otherBody, &otherMass);
        dMassAdd(&myMass, &otherMass);
        setMassStruct(myMass);
    endEditCP(PhysicsBodyPtr(this), MassFieldMask | MassCenterOfGravityFieldMask | MassInertiaTensorFieldMask);
}

//Damping
void PhysicsBody::setDampingDefaults (void)
{
	dBodySetDampingDefaults(_BodyID);
    setLinearDamping(dBodyGetLinearDamping(_BodyID));
    setAngularDamping(dBodyGetAngularDamping(_BodyID));
}

void PhysicsBody::setDamping (Real32 linear_scale, Real32 angular_scale)
{
    setLinearDamping(linear_scale);
    setAngularDamping(angular_scale);
}

void PhysicsBody::updateToODEState(void)
{
    const dReal* pos(dBodyGetPosition(_BodyID));
    const dReal* quat(dBodyGetQuaternion(_BodyID));

    setPosition(Vec3f(pos[0], pos[1], pos[2]));
    Quaternion osgQuat;
    osgQuat.setValueAsQuat(quat[1], quat[2], quat[3], quat[0]);
    setQuaternion(osgQuat);
}

void PhysicsBody::setEnable(bool enable)
{
    if(enable)
    {
        dBodyEnable(_BodyID);
    }
    else
    {
        dBodyDisable(_BodyID);
    }
}

bool PhysicsBody::getEnable(void) const
{
    return dBodyIsEnabled(_BodyID);
}

/*-------------------------------------------------------------------------*\
 -  private                                                                 -
\*-------------------------------------------------------------------------*/

/*----------------------- constructors & destructors ----------------------*/

PhysicsBody::PhysicsBody(void) :
    Inherited(),
        _BodyID(0)
{
}

PhysicsBody::PhysicsBody(const PhysicsBody &source) :
    Inherited(source),
        _BodyID(0)
{
}

PhysicsBody::~PhysicsBody(void)
{
}

/*----------------------------- class specific ----------------------------*/

void PhysicsBody::changed(BitVector whichField, UInt32 origin)
{
    Inherited::changed(whichField, origin);

    if(whichField & WorldFieldMask)
    {
        if(_BodyID != 0)
        {
            dBodyDestroy(_BodyID);
        }

        if(getWorld() != NullFC)
        {
            _BodyID = dBodyCreate(getWorld()->getWorldID());
        }
    }
    if(   ((whichField & PositionFieldMask)
        || (whichField & WorldFieldMask))
        && getWorld() != NullFC)
    {
	    dBodySetPosition(_BodyID, getPosition().x(),getPosition().y(),getPosition().z());
    }
    if(   ((whichField & RotationFieldMask)
        || (whichField & WorldFieldMask))
        && getWorld() != NullFC)
    {
	    dMatrix3 rotation;
	    Vec4f v1 =  getRotation()[0];
	    Vec4f v2 =  getRotation()[1];
	    Vec4f v3 =  getRotation()[2];
	    rotation[0]   = v1.x();
	    rotation[1]   = v1.y();
	    rotation[2]   = v1.z();
	    rotation[3]   = 0;
	    rotation[4]   = v2.x();
	    rotation[5]   = v2.y();
	    rotation[6]   = v2.z();
	    rotation[7]   = 0;
	    rotation[8]   = v3.x();
	    rotation[9]   = v3.y();
	    rotation[10]  = v3.z();
	    rotation[11]  = 0;
	    dBodySetRotation(_BodyID, rotation);
    }
    if(   ((whichField & QuaternionFieldMask)
        || (whichField & WorldFieldMask))
        && getWorld() != NullFC)
    {
	    dQuaternion q;
	    q[0]=getQuaternion().w();
	    q[1]=getQuaternion().x();
	    q[2]=getQuaternion().y();
	    q[3]=getQuaternion().z();
	    dBodySetQuaternion(_BodyID,q);
    }
    if(   ((whichField & LinearVelFieldMask)
        || (whichField & WorldFieldMask))
        && getWorld() != NullFC)
    {
	    dBodySetLinearVel(_BodyID, getLinearVel().x(),getLinearVel().y(),getLinearVel().z());
    }
    if(   ((whichField & AngularVelFieldMask)
        || (whichField & WorldFieldMask))
        && getWorld() != NullFC)
    {
	    dBodySetAngularVel(_BodyID, getAngularVel().x(),getAngularVel().y(),getAngularVel().z());
    }
    if(   ((whichField & ForceFieldMask)
        || (whichField & WorldFieldMask))
        && getWorld() != NullFC)
    {
	    dBodySetForce(_BodyID, getForce().x(),getForce().y(),getForce().z());
    }
    if(   ((whichField & TorqueFieldMask)
        || (whichField & WorldFieldMask))
        && getWorld() != NullFC)
    {
	    dBodySetTorque(_BodyID, getTorque().x(),getTorque().y(),getTorque().z());
    }
    if(   ((whichField & AutoDisableFlagFieldMask)
        || (whichField & WorldFieldMask))
        && getWorld() != NullFC)
    {
	    dBodySetAutoDisableFlag(_BodyID, getAutoDisableFlag());
    }
    if(   ((whichField & AutoDisableLinearThresholdFieldMask)
        || (whichField & WorldFieldMask))
        && getWorld() != NullFC)
    {
	    dBodySetAutoDisableLinearThreshold(_BodyID, getAutoDisableLinearThreshold());
    }
    if(   ((whichField & AutoDisableAngularThresholdFieldMask)
        || (whichField & WorldFieldMask))
        && getWorld() != NullFC)
    {
	    dBodySetAutoDisableAngularThreshold(_BodyID, getAutoDisableAngularThreshold());
    }
    if(   ((whichField & AutoDisableStepsFieldMask)
        || (whichField & WorldFieldMask))
        && getWorld() != NullFC)
    {
	    dBodySetAutoDisableSteps(_BodyID, getAutoDisableSteps());
    }
    if(   ((whichField & AutoDisableTimeFieldMask)
        || (whichField & WorldFieldMask))
        && getWorld() != NullFC)
    {
	    dBodySetAutoDisableTime(_BodyID, getAutoDisableTime());
    }
    if(   ((whichField & FiniteRotationModeFieldMask)
        || (whichField & WorldFieldMask))
        && getWorld() != NullFC)
    {
	    dBodySetFiniteRotationMode(_BodyID, getFiniteRotationMode());
    }
    if(   ((whichField & FiniteRotationModeFieldMask)
        || (whichField & WorldFieldMask))
        && getWorld() != NullFC)
    {
	    dBodySetFiniteRotationMode(_BodyID, getFiniteRotationMode());
    }
    if(   ((whichField & FiniteRotationAxisFieldMask)
        || (whichField & WorldFieldMask))
        && getWorld() != NullFC)
    {
	    dBodySetFiniteRotationAxis(_BodyID, getFiniteRotationAxis().x(),getFiniteRotationAxis().y(),getFiniteRotationAxis().z());
    }
    if(   ((whichField & GravityModeFieldMask)
        || (whichField & WorldFieldMask))
        && getWorld() != NullFC)
    {
	    dBodySetFiniteRotationMode(_BodyID, getGravityMode());
    }
    if(   ((whichField & LinearDampingFieldMask)
        || (whichField & WorldFieldMask))
        && getWorld() != NullFC)
    {
	    dBodySetLinearDamping(_BodyID, getLinearDamping());
    }
    if(   ((whichField & AngularDampingFieldMask)
        || (whichField & WorldFieldMask))
        && getWorld() != NullFC)
    {
	    dBodySetAngularDamping(_BodyID, getAngularDamping());
    }
    if(   ((whichField & LinearDampingThresholdFieldMask)
        || (whichField & WorldFieldMask))
        && getWorld() != NullFC)
    {
	    dBodySetLinearDampingThreshold(_BodyID, getLinearDampingThreshold());
    }
    if(   ((whichField & AngularDampingThresholdFieldMask)
        || (whichField & WorldFieldMask))
        && getWorld() != NullFC)
    {
	    dBodySetAngularDampingThreshold(_BodyID, getAngularDampingThreshold());
    }
    if(   ((whichField & MaxAngularSpeedFieldMask)
        || (whichField & WorldFieldMask))
        && getWorld() != NullFC)
    {
        if(getMaxAngularSpeed() >= 0.0)
        {
            dBodySetMaxAngularSpeed(_BodyID, getMaxAngularSpeed());
        }
        else
        {
            dBodySetMaxAngularSpeed(_BodyID, dInfinity);
        }
    }
    
    if(   ((whichField & MassFieldMask)
        || (whichField & WorldFieldMask))
        && getWorld() != NullFC)
    {
        dMass TheMass;
        dBodyGetMass(_BodyID, &TheMass);

        TheMass.mass = getMass();

        dBodySetMass(_BodyID, &TheMass);
    }
    if(   ((whichField & MassCenterOfGravityFieldMask)
        || (whichField & WorldFieldMask))
        && getWorld() != NullFC)
    {
        dMass TheMass;
        dBodyGetMass(_BodyID, &TheMass);

        TheMass.c[0] = getMassCenterOfGravity().x();
        TheMass.c[1] = getMassCenterOfGravity().y();
        TheMass.c[2] = getMassCenterOfGravity().z();

        dBodySetMass(_BodyID, &TheMass);
    }
    if(   ((whichField & MassInertiaTensorFieldMask)
        || (whichField & WorldFieldMask))
        && getWorld() != NullFC)
    {
        dMass TheMass;
        dBodyGetMass(_BodyID, &TheMass);
        
        Vec4f v1 =  getMassInertiaTensor()[0];
        Vec4f v2 =  getMassInertiaTensor()[1];
        Vec4f v3 =  getMassInertiaTensor()[2];
        TheMass.I[0]   = v1.x();
        TheMass.I[1]   = v1.y();
        TheMass.I[2]   = v1.z();
        TheMass.I[3]   = 0;
        TheMass.I[4]   = v2.x();
        TheMass.I[5]   = v2.y();
        TheMass.I[6]   = v2.z();
        TheMass.I[7]   = 0;
        TheMass.I[8]   = v3.x();
        TheMass.I[9]   = v3.y();
        TheMass.I[10]  = v3.z();
        TheMass.I[11]  = 0;
        
        dBodySetMass(_BodyID, &TheMass);
    }
    if(   ((whichField & KinematicFieldMask)
        || (whichField & WorldFieldMask))
        && getWorld() != NullFC)
    {
        if(getKinematic())
        {
            dBodySetKinematic(_BodyID);
        }
        else
        {
            dBodySetDynamic(_BodyID);
        }
    }
}

void PhysicsBody::dump(      UInt32    , 
                         const BitVector ) const
{
    SLOG << "Dump PhysicsBody NI" << std::endl;
}


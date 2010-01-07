/*---------------------------------------------------------------------------*\
 *                         OpenSG ToolBox Physics                            *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                          www.vrac.iastate.edu                             *
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

/*****************************************************************************\
 *****************************************************************************
 **                                                                         **
 **                  This file is automatically generated.                  **
 **                                                                         **
 **          Any changes made to this file WILL be lost when it is          **
 **           regenerated, which can become necessary at any time.          **
 **                                                                         **
 **     Do not change this file, changes should be done in the derived      **
 **     class PhysicsLMotorJoint
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#ifndef _OSGPHYSICSLMOTORJOINTBASE_H_
#define _OSGPHYSICSLMOTORJOINTBASE_H_
#ifdef __sgi
#pragma once
#endif


#include <OpenSG/OSGConfig.h>
#include "OSGPhysicsDef.h"

#include <OpenSG/OSGBaseTypes.h>
#include <OpenSG/OSGRefPtr.h>
#include <OpenSG/OSGCoredNodePtr.h>

#include "OSGPhysicsJoint.h" // Parent

#include <OpenSG/OSGUInt8Fields.h> // NumAxes type
#include <OpenSG/OSGVec3fFields.h> // Axis1 type
#include <OpenSG/OSGVec3fFields.h> // Axis2 type
#include <OpenSG/OSGVec3fFields.h> // Axis3 type
#include <OpenSG/OSGUInt8Fields.h> // Axis1ReferenceFrame type
#include <OpenSG/OSGUInt8Fields.h> // Axis2ReferenceFrame type
#include <OpenSG/OSGUInt8Fields.h> // Axis3ReferenceFrame type
#include <OpenSG/OSGReal32Fields.h> // Vel type
#include <OpenSG/OSGReal32Fields.h> // FMax type
#include <OpenSG/OSGReal32Fields.h> // FudgeFactor type
#include <OpenSG/OSGReal32Fields.h> // Vel2 type
#include <OpenSG/OSGReal32Fields.h> // FMax2 type
#include <OpenSG/OSGReal32Fields.h> // FudgeFactor2 type
#include <OpenSG/OSGReal32Fields.h> // Vel3 type
#include <OpenSG/OSGReal32Fields.h> // FMax3 type
#include <OpenSG/OSGReal32Fields.h> // FudgeFactor3 type
#include <OpenSG/OSGReal32Fields.h> // HiStop type
#include <OpenSG/OSGReal32Fields.h> // LoStop type
#include <OpenSG/OSGReal32Fields.h> // Bounce type
#include <OpenSG/OSGReal32Fields.h> // CFM type
#include <OpenSG/OSGReal32Fields.h> // StopERP type
#include <OpenSG/OSGReal32Fields.h> // StopCFM type
#include <OpenSG/OSGReal32Fields.h> // HiStop2 type
#include <OpenSG/OSGReal32Fields.h> // LoStop2 type
#include <OpenSG/OSGReal32Fields.h> // Bounce2 type
#include <OpenSG/OSGReal32Fields.h> // CFM2 type
#include <OpenSG/OSGReal32Fields.h> // StopERP2 type
#include <OpenSG/OSGReal32Fields.h> // StopCFM2 type
#include <OpenSG/OSGReal32Fields.h> // HiStop3 type
#include <OpenSG/OSGReal32Fields.h> // LoStop3 type
#include <OpenSG/OSGReal32Fields.h> // Bounce3 type
#include <OpenSG/OSGReal32Fields.h> // CFM3 type
#include <OpenSG/OSGReal32Fields.h> // StopERP3 type
#include <OpenSG/OSGReal32Fields.h> // StopCFM3 type

#include "OSGPhysicsLMotorJointFields.h"

OSG_BEGIN_NAMESPACE

class PhysicsLMotorJoint;
class BinaryDataHandler;

//! \brief PhysicsLMotorJoint Base Class.

class OSG_PHYSICSLIB_DLLMAPPING PhysicsLMotorJointBase : public PhysicsJoint
{
  private:

    typedef PhysicsJoint    Inherited;

    /*==========================  PUBLIC  =================================*/
  public:

    typedef PhysicsLMotorJointPtr  Ptr;

    enum
    {
        NumAxesFieldId             = Inherited::NextFieldId,
        Axis1FieldId               = NumAxesFieldId             + 1,
        Axis2FieldId               = Axis1FieldId               + 1,
        Axis3FieldId               = Axis2FieldId               + 1,
        Axis1ReferenceFrameFieldId = Axis3FieldId               + 1,
        Axis2ReferenceFrameFieldId = Axis1ReferenceFrameFieldId + 1,
        Axis3ReferenceFrameFieldId = Axis2ReferenceFrameFieldId + 1,
        VelFieldId                 = Axis3ReferenceFrameFieldId + 1,
        FMaxFieldId                = VelFieldId                 + 1,
        FudgeFactorFieldId         = FMaxFieldId                + 1,
        Vel2FieldId                = FudgeFactorFieldId         + 1,
        FMax2FieldId               = Vel2FieldId                + 1,
        FudgeFactor2FieldId        = FMax2FieldId               + 1,
        Vel3FieldId                = FudgeFactor2FieldId        + 1,
        FMax3FieldId               = Vel3FieldId                + 1,
        FudgeFactor3FieldId        = FMax3FieldId               + 1,
        HiStopFieldId              = FudgeFactor3FieldId        + 1,
        LoStopFieldId              = HiStopFieldId              + 1,
        BounceFieldId              = LoStopFieldId              + 1,
        CFMFieldId                 = BounceFieldId              + 1,
        StopERPFieldId             = CFMFieldId                 + 1,
        StopCFMFieldId             = StopERPFieldId             + 1,
        HiStop2FieldId             = StopCFMFieldId             + 1,
        LoStop2FieldId             = HiStop2FieldId             + 1,
        Bounce2FieldId             = LoStop2FieldId             + 1,
        CFM2FieldId                = Bounce2FieldId             + 1,
        StopERP2FieldId            = CFM2FieldId                + 1,
        StopCFM2FieldId            = StopERP2FieldId            + 1,
        HiStop3FieldId             = StopCFM2FieldId            + 1,
        LoStop3FieldId             = HiStop3FieldId             + 1,
        Bounce3FieldId             = LoStop3FieldId             + 1,
        CFM3FieldId                = Bounce3FieldId             + 1,
        StopERP3FieldId            = CFM3FieldId                + 1,
        StopCFM3FieldId            = StopERP3FieldId            + 1,
        NextFieldId                = StopCFM3FieldId            + 1
    };

    static const OSG::BitVector NumAxesFieldMask;
    static const OSG::BitVector Axis1FieldMask;
    static const OSG::BitVector Axis2FieldMask;
    static const OSG::BitVector Axis3FieldMask;
    static const OSG::BitVector Axis1ReferenceFrameFieldMask;
    static const OSG::BitVector Axis2ReferenceFrameFieldMask;
    static const OSG::BitVector Axis3ReferenceFrameFieldMask;
    static const OSG::BitVector VelFieldMask;
    static const OSG::BitVector FMaxFieldMask;
    static const OSG::BitVector FudgeFactorFieldMask;
    static const OSG::BitVector Vel2FieldMask;
    static const OSG::BitVector FMax2FieldMask;
    static const OSG::BitVector FudgeFactor2FieldMask;
    static const OSG::BitVector Vel3FieldMask;
    static const OSG::BitVector FMax3FieldMask;
    static const OSG::BitVector FudgeFactor3FieldMask;
    static const OSG::BitVector HiStopFieldMask;
    static const OSG::BitVector LoStopFieldMask;
    static const OSG::BitVector BounceFieldMask;
    static const OSG::BitVector CFMFieldMask;
    static const OSG::BitVector StopERPFieldMask;
    static const OSG::BitVector StopCFMFieldMask;
    static const OSG::BitVector HiStop2FieldMask;
    static const OSG::BitVector LoStop2FieldMask;
    static const OSG::BitVector Bounce2FieldMask;
    static const OSG::BitVector CFM2FieldMask;
    static const OSG::BitVector StopERP2FieldMask;
    static const OSG::BitVector StopCFM2FieldMask;
    static const OSG::BitVector HiStop3FieldMask;
    static const OSG::BitVector LoStop3FieldMask;
    static const OSG::BitVector Bounce3FieldMask;
    static const OSG::BitVector CFM3FieldMask;
    static const OSG::BitVector StopERP3FieldMask;
    static const OSG::BitVector StopCFM3FieldMask;


    static const OSG::BitVector MTInfluenceMask;

    /*---------------------------------------------------------------------*/
    /*! \name                    Class Get                                 */
    /*! \{                                                                 */

    static        FieldContainerType &getClassType    (void); 
    static        UInt32              getClassTypeId  (void); 

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                FieldContainer Get                            */
    /*! \{                                                                 */

    virtual       FieldContainerType &getType  (void); 
    virtual const FieldContainerType &getType  (void) const; 

    virtual       UInt32              getContainerSize(void) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Get                                 */
    /*! \{                                                                 */

           SFUInt8             *getSFNumAxes        (void);
           SFReal32            *getSFVel            (void);
           SFReal32            *getSFFMax           (void);
           SFReal32            *getSFFudgeFactor    (void);
           SFReal32            *getSFVel2           (void);
           SFReal32            *getSFFMax2          (void);
           SFReal32            *getSFFudgeFactor2   (void);
           SFReal32            *getSFVel3           (void);
           SFReal32            *getSFFMax3          (void);
           SFReal32            *getSFFudgeFactor3   (void);
           SFReal32            *getSFHiStop         (void);
           SFReal32            *getSFLoStop         (void);
           SFReal32            *getSFBounce         (void);
           SFReal32            *getSFCFM            (void);
           SFReal32            *getSFStopERP        (void);
           SFReal32            *getSFStopCFM        (void);
           SFReal32            *getSFHiStop2        (void);
           SFReal32            *getSFLoStop2        (void);
           SFReal32            *getSFBounce2        (void);
           SFReal32            *getSFCFM2           (void);
           SFReal32            *getSFStopERP2       (void);
           SFReal32            *getSFStopCFM2       (void);
           SFReal32            *getSFHiStop3        (void);
           SFReal32            *getSFLoStop3        (void);
           SFReal32            *getSFBounce3        (void);
           SFReal32            *getSFCFM3           (void);
           SFReal32            *getSFStopERP3       (void);
           SFReal32            *getSFStopCFM3       (void);

           UInt8               &getNumAxes        (void);
     const UInt8               &getNumAxes        (void) const;
           Real32              &getVel            (void);
     const Real32              &getVel            (void) const;
           Real32              &getFMax           (void);
     const Real32              &getFMax           (void) const;
           Real32              &getFudgeFactor    (void);
     const Real32              &getFudgeFactor    (void) const;
           Real32              &getVel2           (void);
     const Real32              &getVel2           (void) const;
           Real32              &getFMax2          (void);
     const Real32              &getFMax2          (void) const;
           Real32              &getFudgeFactor2   (void);
     const Real32              &getFudgeFactor2   (void) const;
           Real32              &getVel3           (void);
     const Real32              &getVel3           (void) const;
           Real32              &getFMax3          (void);
     const Real32              &getFMax3          (void) const;
           Real32              &getFudgeFactor3   (void);
     const Real32              &getFudgeFactor3   (void) const;
           Real32              &getHiStop         (void);
     const Real32              &getHiStop         (void) const;
           Real32              &getLoStop         (void);
     const Real32              &getLoStop         (void) const;
           Real32              &getBounce         (void);
     const Real32              &getBounce         (void) const;
           Real32              &getCFM            (void);
     const Real32              &getCFM            (void) const;
           Real32              &getStopERP        (void);
     const Real32              &getStopERP        (void) const;
           Real32              &getStopCFM        (void);
     const Real32              &getStopCFM        (void) const;
           Real32              &getHiStop2        (void);
     const Real32              &getHiStop2        (void) const;
           Real32              &getLoStop2        (void);
     const Real32              &getLoStop2        (void) const;
           Real32              &getBounce2        (void);
     const Real32              &getBounce2        (void) const;
           Real32              &getCFM2           (void);
     const Real32              &getCFM2           (void) const;
           Real32              &getStopERP2       (void);
     const Real32              &getStopERP2       (void) const;
           Real32              &getStopCFM2       (void);
     const Real32              &getStopCFM2       (void) const;
           Real32              &getHiStop3        (void);
     const Real32              &getHiStop3        (void) const;
           Real32              &getLoStop3        (void);
     const Real32              &getLoStop3        (void) const;
           Real32              &getBounce3        (void);
     const Real32              &getBounce3        (void) const;
           Real32              &getCFM3           (void);
     const Real32              &getCFM3           (void) const;
           Real32              &getStopERP3       (void);
     const Real32              &getStopERP3       (void) const;
           Real32              &getStopCFM3       (void);
     const Real32              &getStopCFM3       (void) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Set                                 */
    /*! \{                                                                 */

     void setNumAxes        ( const UInt8 &value );
     void setVel            ( const Real32 &value );
     void setFMax           ( const Real32 &value );
     void setFudgeFactor    ( const Real32 &value );
     void setVel2           ( const Real32 &value );
     void setFMax2          ( const Real32 &value );
     void setFudgeFactor2   ( const Real32 &value );
     void setVel3           ( const Real32 &value );
     void setFMax3          ( const Real32 &value );
     void setFudgeFactor3   ( const Real32 &value );
     void setHiStop         ( const Real32 &value );
     void setLoStop         ( const Real32 &value );
     void setBounce         ( const Real32 &value );
     void setCFM            ( const Real32 &value );
     void setStopERP        ( const Real32 &value );
     void setStopCFM        ( const Real32 &value );
     void setHiStop2        ( const Real32 &value );
     void setLoStop2        ( const Real32 &value );
     void setBounce2        ( const Real32 &value );
     void setCFM2           ( const Real32 &value );
     void setStopERP2       ( const Real32 &value );
     void setStopCFM2       ( const Real32 &value );
     void setHiStop3        ( const Real32 &value );
     void setLoStop3        ( const Real32 &value );
     void setBounce3        ( const Real32 &value );
     void setCFM3           ( const Real32 &value );
     void setStopERP3       ( const Real32 &value );
     void setStopCFM3       ( const Real32 &value );

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       Sync                                   */
    /*! \{                                                                 */

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Binary Access                              */
    /*! \{                                                                 */

    virtual UInt32 getBinSize (const BitVector         &whichField);
    virtual void   copyToBin  (      BinaryDataHandler &pMem,
                               const BitVector         &whichField);
    virtual void   copyFromBin(      BinaryDataHandler &pMem,
                               const BitVector         &whichField);


    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Construction                               */
    /*! \{                                                                 */

    static  PhysicsLMotorJointPtr      create          (void); 
    static  PhysicsLMotorJointPtr      createEmpty     (void); 

    /*! \}                                                                 */

    /*---------------------------------------------------------------------*/
    /*! \name                       Copy                                   */
    /*! \{                                                                 */

    virtual FieldContainerPtr     shallowCopy     (void) const; 

    /*! \}                                                                 */
    /*=========================  PROTECTED  ===============================*/
  protected:

    /*---------------------------------------------------------------------*/
    /*! \name                      Fields                                  */
    /*! \{                                                                 */

    SFUInt8             _sfNumAxes;
    SFVec3f             _sfAxis1;
    SFVec3f             _sfAxis2;
    SFVec3f             _sfAxis3;
    SFUInt8             _sfAxis1ReferenceFrame;
    SFUInt8             _sfAxis2ReferenceFrame;
    SFUInt8             _sfAxis3ReferenceFrame;
    SFReal32            _sfVel;
    SFReal32            _sfFMax;
    SFReal32            _sfFudgeFactor;
    SFReal32            _sfVel2;
    SFReal32            _sfFMax2;
    SFReal32            _sfFudgeFactor2;
    SFReal32            _sfVel3;
    SFReal32            _sfFMax3;
    SFReal32            _sfFudgeFactor3;
    SFReal32            _sfHiStop;
    SFReal32            _sfLoStop;
    SFReal32            _sfBounce;
    SFReal32            _sfCFM;
    SFReal32            _sfStopERP;
    SFReal32            _sfStopCFM;
    SFReal32            _sfHiStop2;
    SFReal32            _sfLoStop2;
    SFReal32            _sfBounce2;
    SFReal32            _sfCFM2;
    SFReal32            _sfStopERP2;
    SFReal32            _sfStopCFM2;
    SFReal32            _sfHiStop3;
    SFReal32            _sfLoStop3;
    SFReal32            _sfBounce3;
    SFReal32            _sfCFM3;
    SFReal32            _sfStopERP3;
    SFReal32            _sfStopCFM3;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Constructors                               */
    /*! \{                                                                 */

    PhysicsLMotorJointBase(void);
    PhysicsLMotorJointBase(const PhysicsLMotorJointBase &source);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~PhysicsLMotorJointBase(void); 

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Get                                 */
    /*! \{                                                                 */

           SFVec3f             *getSFAxis1          (void);
           SFVec3f             *getSFAxis2          (void);
           SFVec3f             *getSFAxis3          (void);
           SFUInt8             *getSFAxis1ReferenceFrame(void);
           SFUInt8             *getSFAxis2ReferenceFrame(void);
           SFUInt8             *getSFAxis3ReferenceFrame(void);

           Vec3f               &getAxis1          (void);
     const Vec3f               &getAxis1          (void) const;
           Vec3f               &getAxis2          (void);
     const Vec3f               &getAxis2          (void) const;
           Vec3f               &getAxis3          (void);
     const Vec3f               &getAxis3          (void) const;
           UInt8               &getAxis1ReferenceFrame(void);
     const UInt8               &getAxis1ReferenceFrame(void) const;
           UInt8               &getAxis2ReferenceFrame(void);
     const UInt8               &getAxis2ReferenceFrame(void) const;
           UInt8               &getAxis3ReferenceFrame(void);
     const UInt8               &getAxis3ReferenceFrame(void) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Set                                 */
    /*! \{                                                                 */

     void setAxis1          (const Vec3f &value);
     void setAxis2          (const Vec3f &value);
     void setAxis3          (const Vec3f &value);
     void setAxis1ReferenceFrame(const UInt8 &value);
     void setAxis2ReferenceFrame(const UInt8 &value);
     void setAxis3ReferenceFrame(const UInt8 &value);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       Sync                                   */
    /*! \{                                                                 */

#if !defined(OSG_FIXED_MFIELDSYNC)
    void executeSyncImpl(      PhysicsLMotorJointBase *pOther,
                         const BitVector         &whichField);

    virtual void   executeSync(      FieldContainer    &other,
                               const BitVector         &whichField);
#else
    void executeSyncImpl(      PhysicsLMotorJointBase *pOther,
                         const BitVector         &whichField,
                         const SyncInfo          &sInfo     );

    virtual void   executeSync(      FieldContainer    &other,
                               const BitVector         &whichField,
                               const SyncInfo          &sInfo);

    virtual void execBeginEdit     (const BitVector &whichField,
                                          UInt32     uiAspect,
                                          UInt32     uiContainerSize);

            void execBeginEditImpl (const BitVector &whichField,
                                          UInt32     uiAspect,
                                          UInt32     uiContainerSize);

    virtual void onDestroyAspect(UInt32 uiId, UInt32 uiAspect);
#endif

    /*! \}                                                                 */
    /*==========================  PRIVATE  ================================*/
  private:

    friend class FieldContainer;

    static FieldDescription   *_desc[];
    static FieldContainerType  _type;


    // prohibit default functions (move to 'public' if you need one)
    void operator =(const PhysicsLMotorJointBase &source);
};

//---------------------------------------------------------------------------
//   Exported Types
//---------------------------------------------------------------------------


typedef PhysicsLMotorJointBase *PhysicsLMotorJointBaseP;

typedef osgIF<PhysicsLMotorJointBase::isNodeCore,
              CoredNodePtr<PhysicsLMotorJoint>,
              FieldContainer::attempt_to_create_CoredNodePtr_on_non_NodeCore_FC
              >::_IRet PhysicsLMotorJointNodePtr;

typedef RefPtr<PhysicsLMotorJointPtr> PhysicsLMotorJointRefPtr;

OSG_END_NAMESPACE

#define OSGPHYSICSLMOTORJOINTBASE_HEADER_CVSID "@(#)$Id: FCBaseTemplate_h.h,v 1.40 2005/07/20 00:10:14 vossg Exp $"

#endif /* _OSGPHYSICSLMOTORJOINTBASE_H_ */
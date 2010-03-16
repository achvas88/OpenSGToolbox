/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *               Copyright (C) 2000-2006 by the OpenSG Forum                 *
 *                                                                           *
 *                            www.opensg.org                                 *
 *                                                                           *
 *   contact:  David Kabala (djkabala@gmail.com),  Behboud Kalantary         *
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
 **     class PhysicsHingeJoint
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#ifndef _OSGPHYSICSHINGEJOINTBASE_H_
#define _OSGPHYSICSHINGEJOINTBASE_H_
#ifdef __sgi
#pragma once
#endif


#include "OSGConfig.h"
#include "OSGContribPhysicsDef.h"

//#include "OSGBaseTypes.h"

#include "OSGPhysicsJoint.h" // Parent

#include "OSGVecFields.h"               // Anchor type
#include "OSGSysFields.h"               // HiStop type

#include "OSGPhysicsHingeJointFields.h"


OSG_BEGIN_NAMESPACE

class PhysicsHingeJoint;

//! \brief PhysicsHingeJoint Base Class.

class OSG_CONTRIBPHYSICS_DLLMAPPING PhysicsHingeJointBase : public PhysicsJoint
{
  public:

    typedef PhysicsJoint Inherited;
    typedef PhysicsJoint ParentContainer;

    typedef Inherited::TypeObject TypeObject;
    typedef TypeObject::InitPhase InitPhase;

    OSG_GEN_INTERNALPTR(PhysicsHingeJoint);

    /*==========================  PUBLIC  =================================*/

  public:

    enum
    {
        AnchorFieldId = Inherited::NextFieldId,
        AxisFieldId = AnchorFieldId + 1,
        HiStopFieldId = AxisFieldId + 1,
        LoStopFieldId = HiStopFieldId + 1,
        BounceFieldId = LoStopFieldId + 1,
        CFMFieldId = BounceFieldId + 1,
        StopERPFieldId = CFMFieldId + 1,
        StopCFMFieldId = StopERPFieldId + 1,
        NextFieldId = StopCFMFieldId + 1
    };

    static const OSG::BitVector AnchorFieldMask =
        (TypeTraits<BitVector>::One << AnchorFieldId);
    static const OSG::BitVector AxisFieldMask =
        (TypeTraits<BitVector>::One << AxisFieldId);
    static const OSG::BitVector HiStopFieldMask =
        (TypeTraits<BitVector>::One << HiStopFieldId);
    static const OSG::BitVector LoStopFieldMask =
        (TypeTraits<BitVector>::One << LoStopFieldId);
    static const OSG::BitVector BounceFieldMask =
        (TypeTraits<BitVector>::One << BounceFieldId);
    static const OSG::BitVector CFMFieldMask =
        (TypeTraits<BitVector>::One << CFMFieldId);
    static const OSG::BitVector StopERPFieldMask =
        (TypeTraits<BitVector>::One << StopERPFieldId);
    static const OSG::BitVector StopCFMFieldMask =
        (TypeTraits<BitVector>::One << StopCFMFieldId);
    static const OSG::BitVector NextFieldMask =
        (TypeTraits<BitVector>::One << NextFieldId);
        
    typedef SFVec3f           SFAnchorType;
    typedef SFVec3f           SFAxisType;
    typedef SFReal32          SFHiStopType;
    typedef SFReal32          SFLoStopType;
    typedef SFReal32          SFBounceType;
    typedef SFReal32          SFCFMType;
    typedef SFReal32          SFStopERPType;
    typedef SFReal32          SFStopCFMType;


    /*---------------------------------------------------------------------*/
    /*! \name                    Class Get                                 */
    /*! \{                                                                 */

    static FieldContainerType &getClassType   (void);
    static UInt32              getClassTypeId (void);
    static UInt16              getClassGroupId(void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                FieldContainer Get                            */
    /*! \{                                                                 */

    virtual       FieldContainerType &getType         (void);
    virtual const FieldContainerType &getType         (void) const;

    virtual       UInt32              getContainerSize(void) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Get                                 */
    /*! \{                                                                 */


                  SFVec3f             *editSFAnchor         (void);
            const SFVec3f             *getSFAnchor          (void) const;

                  SFVec3f             *editSFAxis           (void);
            const SFVec3f             *getSFAxis            (void) const;

                  SFReal32            *editSFHiStop         (void);
            const SFReal32            *getSFHiStop          (void) const;

                  SFReal32            *editSFLoStop         (void);
            const SFReal32            *getSFLoStop          (void) const;

                  SFReal32            *editSFBounce         (void);
            const SFReal32            *getSFBounce          (void) const;

                  SFReal32            *editSFCFM            (void);
            const SFReal32            *getSFCFM             (void) const;

                  SFReal32            *editSFStopERP        (void);
            const SFReal32            *getSFStopERP         (void) const;

                  SFReal32            *editSFStopCFM        (void);
            const SFReal32            *getSFStopCFM         (void) const;


                  Vec3f               &editAnchor         (void);
            const Vec3f               &getAnchor          (void) const;

                  Vec3f               &editAxis           (void);
            const Vec3f               &getAxis            (void) const;

                  Real32              &editHiStop         (void);
                  Real32               getHiStop          (void) const;

                  Real32              &editLoStop         (void);
                  Real32               getLoStop          (void) const;

                  Real32              &editBounce         (void);
                  Real32               getBounce          (void) const;

                  Real32              &editCFM            (void);
                  Real32               getCFM             (void) const;

                  Real32              &editStopERP        (void);
                  Real32               getStopERP         (void) const;

                  Real32              &editStopCFM        (void);
                  Real32               getStopCFM         (void) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Set                                 */
    /*! \{                                                                 */

            void setAnchor         (const Vec3f &value);
            void setAxis           (const Vec3f &value);
            void setHiStop         (const Real32 value);
            void setLoStop         (const Real32 value);
            void setBounce         (const Real32 value);
            void setCFM            (const Real32 value);
            void setStopERP        (const Real32 value);
            void setStopCFM        (const Real32 value);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                Ptr MField Set                                */
    /*! \{                                                                 */

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Binary Access                              */
    /*! \{                                                                 */

    virtual UInt32 getBinSize (ConstFieldMaskArg  whichField);
    virtual void   copyToBin  (BinaryDataHandler &pMem,
                               ConstFieldMaskArg  whichField);
    virtual void   copyFromBin(BinaryDataHandler &pMem,
                               ConstFieldMaskArg  whichField);


    /*! \}                                                                 */

    /*---------------------------------------------------------------------*/
    /*! \name                   Construction                               */
    /*! \{                                                                 */

    static  PhysicsHingeJointTransitPtr  create          (void);
    static  PhysicsHingeJoint           *createEmpty     (void);

    static  PhysicsHingeJointTransitPtr  createLocal     (
                                               BitVector bFlags = FCLocal::All);

    static  PhysicsHingeJoint            *createEmptyLocal(
                                              BitVector bFlags = FCLocal::All);

    static  PhysicsHingeJointTransitPtr  createDependent  (BitVector bFlags);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       Copy                                   */
    /*! \{                                                                 */

    virtual FieldContainerTransitPtr shallowCopy     (void) const;
    virtual FieldContainerTransitPtr shallowCopyLocal(
                                       BitVector bFlags = FCLocal::All) const;
    virtual FieldContainerTransitPtr shallowCopyDependent(
                                                      BitVector bFlags) const;

    /*! \}                                                                 */
    /*=========================  PROTECTED  ===============================*/

  protected:

    static TypeObject _type;

    static       void   classDescInserter(TypeObject &oType);
    static const Char8 *getClassname     (void             );

    /*---------------------------------------------------------------------*/
    /*! \name                      Fields                                  */
    /*! \{                                                                 */

    SFVec3f           _sfAnchor;
    SFVec3f           _sfAxis;
    SFReal32          _sfHiStop;
    SFReal32          _sfLoStop;
    SFReal32          _sfBounce;
    SFReal32          _sfCFM;
    SFReal32          _sfStopERP;
    SFReal32          _sfStopCFM;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Constructors                               */
    /*! \{                                                                 */

    PhysicsHingeJointBase(void);
    PhysicsHingeJointBase(const PhysicsHingeJointBase &source);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~PhysicsHingeJointBase(void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                     onCreate                                */
    /*! \{                                                                 */


    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Generic Field Access                      */
    /*! \{                                                                 */

    GetFieldHandlePtr  getHandleAnchor          (void) const;
    EditFieldHandlePtr editHandleAnchor         (void);
    GetFieldHandlePtr  getHandleAxis            (void) const;
    EditFieldHandlePtr editHandleAxis           (void);
    GetFieldHandlePtr  getHandleHiStop          (void) const;
    EditFieldHandlePtr editHandleHiStop         (void);
    GetFieldHandlePtr  getHandleLoStop          (void) const;
    EditFieldHandlePtr editHandleLoStop         (void);
    GetFieldHandlePtr  getHandleBounce          (void) const;
    EditFieldHandlePtr editHandleBounce         (void);
    GetFieldHandlePtr  getHandleCFM             (void) const;
    EditFieldHandlePtr editHandleCFM            (void);
    GetFieldHandlePtr  getHandleStopERP         (void) const;
    EditFieldHandlePtr editHandleStopERP        (void);
    GetFieldHandlePtr  getHandleStopCFM         (void) const;
    EditFieldHandlePtr editHandleStopCFM        (void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       Sync                                   */
    /*! \{                                                                 */

#ifdef OSG_MT_CPTR_ASPECT
    virtual void execSyncV(      FieldContainer    &oFrom,
                                 ConstFieldMaskArg  whichField,
                                 AspectOffsetStore &oOffsets,
                                 ConstFieldMaskArg  syncMode  ,
                           const UInt32             uiSyncInfo);

            void execSync (      PhysicsHingeJointBase *pFrom,
                                 ConstFieldMaskArg  whichField,
                                 AspectOffsetStore &oOffsets,
                                 ConstFieldMaskArg  syncMode  ,
                           const UInt32             uiSyncInfo);
#endif

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       Edit                                   */
    /*! \{                                                                 */

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                     Aspect Create                            */
    /*! \{                                                                 */

#ifdef OSG_MT_CPTR_ASPECT
    virtual FieldContainer *createAspectCopy(
                                    const FieldContainer *pRefAspect) const;
#endif

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       Edit                                   */
    /*! \{                                                                 */
    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       Sync                                   */
    /*! \{                                                                 */

    virtual void resolveLinks(void);

    /*! \}                                                                 */
    /*==========================  PRIVATE  ================================*/

  private:
    /*---------------------------------------------------------------------*/

    // prohibit default functions (move to 'public' if you need one)
    void operator =(const PhysicsHingeJointBase &source);
};

typedef PhysicsHingeJointBase *PhysicsHingeJointBaseP;

OSG_END_NAMESPACE

#endif /* _OSGPHYSICSHINGEJOINTBASE_H_ */
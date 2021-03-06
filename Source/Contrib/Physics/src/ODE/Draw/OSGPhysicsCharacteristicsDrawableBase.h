/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *               Copyright (C) 2000-2006 by the OpenSG Forum                 *
 *                                                                           *
 *                            www.opensg.org                                 *
 *                                                                           *
 *   contact:  David Kabala (djkabala@gmail.com)                             *
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
 **     class PhysicsCharacteristicsDrawable
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#ifndef _OSGPHYSICSCHARACTERISTICSDRAWABLEBASE_H_
#define _OSGPHYSICSCHARACTERISTICSDRAWABLEBASE_H_
#ifdef __sgi
#pragma once
#endif


#include "OSGConfig.h"
#include "OSGContribPhysicsDef.h"

//#include "OSGBaseTypes.h"

#include "OSGDrawable.h" // Parent

#include "OSGNodeFields.h"              // Root type
#include "OSGSysFields.h"               // DrawGeoms type
#include "OSGBaseFields.h"              // GeomColor type

#include "OSGPhysicsCharacteristicsDrawableFields.h"

OSG_BEGIN_NAMESPACE

class PhysicsCharacteristicsDrawable;

//! \brief PhysicsCharacteristicsDrawable Base Class.

class OSG_CONTRIBPHYSICS_DLLMAPPING PhysicsCharacteristicsDrawableBase : public Drawable
{
  public:

    typedef Drawable Inherited;
    typedef Drawable ParentContainer;

    typedef Inherited::TypeObject TypeObject;
    typedef TypeObject::InitPhase InitPhase;

    OSG_GEN_INTERNALPTR(PhysicsCharacteristicsDrawable);
    
    

    /*==========================  PUBLIC  =================================*/

  public:

    enum
    {
        RootFieldId = Inherited::NextFieldId,
        DrawGeomsFieldId = RootFieldId + 1,
        GeomColorFieldId = DrawGeomsFieldId + 1,
        DrawJointsFieldId = GeomColorFieldId + 1,
        JointColorFieldId = DrawJointsFieldId + 1,
        DrawBodiesFieldId = JointColorFieldId + 1,
        BodyColorFieldId = DrawBodiesFieldId + 1,
        DrawSpacesFieldId = BodyColorFieldId + 1,
        SpaceColorFieldId = DrawSpacesFieldId + 1,
        DrawWorldsFieldId = SpaceColorFieldId + 1,
        WorldColorFieldId = DrawWorldsFieldId + 1,
        NextFieldId = WorldColorFieldId + 1
    };

    static const OSG::BitVector RootFieldMask =
        (TypeTraits<BitVector>::One << RootFieldId);
    static const OSG::BitVector DrawGeomsFieldMask =
        (TypeTraits<BitVector>::One << DrawGeomsFieldId);
    static const OSG::BitVector GeomColorFieldMask =
        (TypeTraits<BitVector>::One << GeomColorFieldId);
    static const OSG::BitVector DrawJointsFieldMask =
        (TypeTraits<BitVector>::One << DrawJointsFieldId);
    static const OSG::BitVector JointColorFieldMask =
        (TypeTraits<BitVector>::One << JointColorFieldId);
    static const OSG::BitVector DrawBodiesFieldMask =
        (TypeTraits<BitVector>::One << DrawBodiesFieldId);
    static const OSG::BitVector BodyColorFieldMask =
        (TypeTraits<BitVector>::One << BodyColorFieldId);
    static const OSG::BitVector DrawSpacesFieldMask =
        (TypeTraits<BitVector>::One << DrawSpacesFieldId);
    static const OSG::BitVector SpaceColorFieldMask =
        (TypeTraits<BitVector>::One << SpaceColorFieldId);
    static const OSG::BitVector DrawWorldsFieldMask =
        (TypeTraits<BitVector>::One << DrawWorldsFieldId);
    static const OSG::BitVector WorldColorFieldMask =
        (TypeTraits<BitVector>::One << WorldColorFieldId);
    static const OSG::BitVector NextFieldMask =
        (TypeTraits<BitVector>::One << NextFieldId);
        
    typedef SFWeakNodePtr     SFRootType;
    typedef SFBool            SFDrawGeomsType;
    typedef SFColor4f         SFGeomColorType;
    typedef SFBool            SFDrawJointsType;
    typedef SFColor4f         SFJointColorType;
    typedef SFBool            SFDrawBodiesType;
    typedef SFColor4f         SFBodyColorType;
    typedef SFBool            SFDrawSpacesType;
    typedef SFColor4f         SFSpaceColorType;
    typedef SFBool            SFDrawWorldsType;
    typedef SFColor4f         SFWorldColorType;

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

            const SFWeakNodePtr       *getSFRoot           (void) const;
                  SFWeakNodePtr       *editSFRoot           (void);

                  SFBool              *editSFDrawGeoms      (void);
            const SFBool              *getSFDrawGeoms       (void) const;

                  SFColor4f           *editSFGeomColor      (void);
            const SFColor4f           *getSFGeomColor       (void) const;

                  SFBool              *editSFDrawJoints     (void);
            const SFBool              *getSFDrawJoints      (void) const;

                  SFColor4f           *editSFJointColor     (void);
            const SFColor4f           *getSFJointColor      (void) const;

                  SFBool              *editSFDrawBodies     (void);
            const SFBool              *getSFDrawBodies      (void) const;

                  SFColor4f           *editSFBodyColor      (void);
            const SFColor4f           *getSFBodyColor       (void) const;

                  SFBool              *editSFDrawSpaces     (void);
            const SFBool              *getSFDrawSpaces      (void) const;

                  SFColor4f           *editSFSpaceColor     (void);
            const SFColor4f           *getSFSpaceColor      (void) const;

                  SFBool              *editSFDrawWorlds     (void);
            const SFBool              *getSFDrawWorlds      (void) const;

                  SFColor4f           *editSFWorldColor     (void);
            const SFColor4f           *getSFWorldColor      (void) const;


                  Node * getRoot           (void) const;

                  bool                &editDrawGeoms      (void);
                  bool                 getDrawGeoms       (void) const;

                  Color4f             &editGeomColor      (void);
            const Color4f             &getGeomColor       (void) const;

                  bool                &editDrawJoints     (void);
                  bool                 getDrawJoints      (void) const;

                  Color4f             &editJointColor     (void);
            const Color4f             &getJointColor      (void) const;

                  bool                &editDrawBodies     (void);
                  bool                 getDrawBodies      (void) const;

                  Color4f             &editBodyColor      (void);
            const Color4f             &getBodyColor       (void) const;

                  bool                &editDrawSpaces     (void);
                  bool                 getDrawSpaces      (void) const;

                  Color4f             &editSpaceColor     (void);
            const Color4f             &getSpaceColor      (void) const;

                  bool                &editDrawWorlds     (void);
                  bool                 getDrawWorlds      (void) const;

                  Color4f             &editWorldColor     (void);
            const Color4f             &getWorldColor      (void) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Set                                 */
    /*! \{                                                                 */

            void setRoot           (Node * const value);
            void setDrawGeoms      (const bool value);
            void setGeomColor      (const Color4f &value);
            void setDrawJoints     (const bool value);
            void setJointColor     (const Color4f &value);
            void setDrawBodies     (const bool value);
            void setBodyColor      (const Color4f &value);
            void setDrawSpaces     (const bool value);
            void setSpaceColor     (const Color4f &value);
            void setDrawWorlds     (const bool value);
            void setWorldColor     (const Color4f &value);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                Ptr Field Set                                 */
    /*! \{                                                                 */

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

    static  PhysicsCharacteristicsDrawableTransitPtr  create          (void);
    static  PhysicsCharacteristicsDrawable           *createEmpty     (void);

    static  PhysicsCharacteristicsDrawableTransitPtr  createLocal     (
                                               BitVector bFlags = FCLocal::All);

    static  PhysicsCharacteristicsDrawable            *createEmptyLocal(
                                              BitVector bFlags = FCLocal::All);

    static  PhysicsCharacteristicsDrawableTransitPtr  createDependent  (BitVector bFlags);

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

    SFWeakNodePtr     _sfRoot;
    SFBool            _sfDrawGeoms;
    SFColor4f         _sfGeomColor;
    SFBool            _sfDrawJoints;
    SFColor4f         _sfJointColor;
    SFBool            _sfDrawBodies;
    SFColor4f         _sfBodyColor;
    SFBool            _sfDrawSpaces;
    SFColor4f         _sfSpaceColor;
    SFBool            _sfDrawWorlds;
    SFColor4f         _sfWorldColor;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Constructors                               */
    /*! \{                                                                 */

    PhysicsCharacteristicsDrawableBase(void);
    PhysicsCharacteristicsDrawableBase(const PhysicsCharacteristicsDrawableBase &source);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~PhysicsCharacteristicsDrawableBase(void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                     onCreate                                */
    /*! \{                                                                 */

    void onCreate(const PhysicsCharacteristicsDrawable *source = NULL);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Generic Field Access                      */
    /*! \{                                                                 */

    GetFieldHandlePtr  getHandleRoot            (void) const;
    EditFieldHandlePtr editHandleRoot           (void);
    GetFieldHandlePtr  getHandleDrawGeoms       (void) const;
    EditFieldHandlePtr editHandleDrawGeoms      (void);
    GetFieldHandlePtr  getHandleGeomColor       (void) const;
    EditFieldHandlePtr editHandleGeomColor      (void);
    GetFieldHandlePtr  getHandleDrawJoints      (void) const;
    EditFieldHandlePtr editHandleDrawJoints     (void);
    GetFieldHandlePtr  getHandleJointColor      (void) const;
    EditFieldHandlePtr editHandleJointColor     (void);
    GetFieldHandlePtr  getHandleDrawBodies      (void) const;
    EditFieldHandlePtr editHandleDrawBodies     (void);
    GetFieldHandlePtr  getHandleBodyColor       (void) const;
    EditFieldHandlePtr editHandleBodyColor      (void);
    GetFieldHandlePtr  getHandleDrawSpaces      (void) const;
    EditFieldHandlePtr editHandleDrawSpaces     (void);
    GetFieldHandlePtr  getHandleSpaceColor      (void) const;
    EditFieldHandlePtr editHandleSpaceColor     (void);
    GetFieldHandlePtr  getHandleDrawWorlds      (void) const;
    EditFieldHandlePtr editHandleDrawWorlds     (void);
    GetFieldHandlePtr  getHandleWorldColor      (void) const;
    EditFieldHandlePtr editHandleWorldColor     (void);

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

            void execSync (      PhysicsCharacteristicsDrawableBase *pFrom,
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
    void operator =(const PhysicsCharacteristicsDrawableBase &source);
};

typedef PhysicsCharacteristicsDrawableBase *PhysicsCharacteristicsDrawableBaseP;

OSG_END_NAMESPACE

#endif /* _OSGPHYSICSCHARACTERISTICSDRAWABLEBASE_H_ */

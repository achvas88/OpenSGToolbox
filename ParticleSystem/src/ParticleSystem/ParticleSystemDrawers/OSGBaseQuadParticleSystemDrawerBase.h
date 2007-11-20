/*---------------------------------------------------------------------------*\
 *                     OpenSG ToolBox UserInterface                          *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                         www.vrac.iastate.edu                              *
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
 **     class BaseQuadParticleSystemDrawer
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#ifndef _OSGBASEQUADPARTICLESYSTEMDRAWERBASE_H_
#define _OSGBASEQUADPARTICLESYSTEMDRAWERBASE_H_
#ifdef __sgi
#pragma once
#endif


#include <OpenSG/OSGConfig.h>
#include "OSGParticleSystemDef.h"

#include <OpenSG/OSGBaseTypes.h>
#include <OpenSG/OSGRefPtr.h>
#include <OpenSG/OSGCoredNodePtr.h>

#include "OSGParticleSystemDrawer.h" // Parent

#include <OpenSG/OSGVec2fFields.h> // QuadSizeScaling type
#include <OpenSG/OSGBoolFields.h> // UseImageSizeRatio type

#include "OSGBaseQuadParticleSystemDrawerFields.h"

OSG_BEGIN_NAMESPACE

class BaseQuadParticleSystemDrawer;
class BinaryDataHandler;

//! \brief BaseQuadParticleSystemDrawer Base Class.

class OSG_PARTICLESYSTEMLIB_DLLMAPPING BaseQuadParticleSystemDrawerBase : public ParticleSystemDrawer
{
  private:

    typedef ParticleSystemDrawer    Inherited;

    /*==========================  PUBLIC  =================================*/
  public:

    typedef BaseQuadParticleSystemDrawerPtr  Ptr;

    enum
    {
        QuadSizeScalingFieldId   = Inherited::NextFieldId,
        UseImageSizeRatioFieldId = QuadSizeScalingFieldId   + 1,
        NextFieldId              = UseImageSizeRatioFieldId + 1
    };

    static const OSG::BitVector QuadSizeScalingFieldMask;
    static const OSG::BitVector UseImageSizeRatioFieldMask;


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

           SFVec2f             *getSFQuadSizeScaling(void);
           SFBool              *getSFUseImageSizeRatio(void);

           Vec2f               &getQuadSizeScaling(void);
     const Vec2f               &getQuadSizeScaling(void) const;
           bool                &getUseImageSizeRatio(void);
     const bool                &getUseImageSizeRatio(void) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Set                                 */
    /*! \{                                                                 */

     void setQuadSizeScaling( const Vec2f &value );
     void setUseImageSizeRatio( const bool &value );

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
    /*=========================  PROTECTED  ===============================*/
  protected:

    /*---------------------------------------------------------------------*/
    /*! \name                      Fields                                  */
    /*! \{                                                                 */

    SFVec2f             _sfQuadSizeScaling;
    SFBool              _sfUseImageSizeRatio;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Constructors                               */
    /*! \{                                                                 */

    BaseQuadParticleSystemDrawerBase(void);
    BaseQuadParticleSystemDrawerBase(const BaseQuadParticleSystemDrawerBase &source);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~BaseQuadParticleSystemDrawerBase(void); 

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       Sync                                   */
    /*! \{                                                                 */

#if !defined(OSG_FIXED_MFIELDSYNC)
    void executeSyncImpl(      BaseQuadParticleSystemDrawerBase *pOther,
                         const BitVector         &whichField);

    virtual void   executeSync(      FieldContainer    &other,
                               const BitVector         &whichField);
#else
    void executeSyncImpl(      BaseQuadParticleSystemDrawerBase *pOther,
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
    void operator =(const BaseQuadParticleSystemDrawerBase &source);
};

//---------------------------------------------------------------------------
//   Exported Types
//---------------------------------------------------------------------------


typedef BaseQuadParticleSystemDrawerBase *BaseQuadParticleSystemDrawerBaseP;

typedef osgIF<BaseQuadParticleSystemDrawerBase::isNodeCore,
              CoredNodePtr<BaseQuadParticleSystemDrawer>,
              FieldContainer::attempt_to_create_CoredNodePtr_on_non_NodeCore_FC
              >::_IRet BaseQuadParticleSystemDrawerNodePtr;

typedef RefPtr<BaseQuadParticleSystemDrawerPtr> BaseQuadParticleSystemDrawerRefPtr;

OSG_END_NAMESPACE

#define OSGBASEQUADPARTICLESYSTEMDRAWERBASE_HEADER_CVSID "@(#)$Id: FCBaseTemplate_h.h,v 1.40 2005/07/20 00:10:14 vossg Exp $"

#endif /* _OSGBASEQUADPARTICLESYSTEMDRAWERBASE_H_ */
/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *               Copyright (C) 2000-2006 by the OpenSG Forum                 *
 *                                                                           *
 *                            www.opensg.org                                 *
 *                                                                           *
 * contact: David Kabala (djkabala@gmail.com)                                *
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
 **     class MorphGeometry
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#ifndef _OSGMORPHGEOMETRYBASE_H_
#define _OSGMORPHGEOMETRYBASE_H_
#ifdef __sgi
#pragma once
#endif


#include "OSGConfig.h"
#include "OSGTBAnimationDef.h"

//#include "OSGBaseTypes.h"

#include "OSGGeometry.h" // Parent

#include "OSGGeometryFields.h"          // BaseGeometry type
#include "OSGGeoVectorPropertyFields.h" // InternalWeights type
#include "OSGSysFields.h"               // MorphProperties type

#include "OSGMorphGeometryFields.h"

OSG_BEGIN_NAMESPACE

class MorphGeometry;

//! \brief MorphGeometry Base Class.

class OSG_TBANIMATION_DLLMAPPING MorphGeometryBase : public Geometry
{
  public:

    typedef Geometry Inherited;
    typedef Geometry ParentContainer;

    typedef Inherited::TypeObject TypeObject;
    typedef TypeObject::InitPhase InitPhase;

    OSG_GEN_INTERNALPTR(MorphGeometry);
    
    

    /*==========================  PUBLIC  =================================*/

  public:

    enum
    {
        BaseGeometryFieldId = Inherited::NextFieldId,
        InternalTargetGeometriesFieldId = BaseGeometryFieldId + 1,
        InternalWeightsFieldId = InternalTargetGeometriesFieldId + 1,
        MorphPropertiesFieldId = InternalWeightsFieldId + 1,
        NextFieldId = MorphPropertiesFieldId + 1
    };

    static const OSG::BitVector BaseGeometryFieldMask =
        (TypeTraits<BitVector>::One << BaseGeometryFieldId);
    static const OSG::BitVector InternalTargetGeometriesFieldMask =
        (TypeTraits<BitVector>::One << InternalTargetGeometriesFieldId);
    static const OSG::BitVector InternalWeightsFieldMask =
        (TypeTraits<BitVector>::One << InternalWeightsFieldId);
    static const OSG::BitVector MorphPropertiesFieldMask =
        (TypeTraits<BitVector>::One << MorphPropertiesFieldId);
    static const OSG::BitVector NextFieldMask =
        (TypeTraits<BitVector>::One << NextFieldId);
        
    typedef SFUnrecGeometryPtr SFBaseGeometryType;
    typedef MFUnrecGeometryPtr MFInternalTargetGeometriesType;
    typedef SFUnrecChildGeoVectorPropertyPtr SFInternalWeightsType;
    typedef MFUInt16          MFMorphPropertiesType;

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

            const SFUnrecGeometryPtr  *getSFBaseGeometry   (void) const;
                  SFUnrecGeometryPtr  *editSFBaseGeometry   (void);

                  MFUInt16            *editMFMorphProperties(void);
            const MFUInt16            *getMFMorphProperties (void) const;


                  Geometry * getBaseGeometry   (void) const;

                  UInt16              &editMorphProperties(const UInt32 index);
                  UInt16               getMorphProperties (const UInt32 index) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Set                                 */
    /*! \{                                                                 */

            void setBaseGeometry   (Geometry * const value);

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

    static  MorphGeometryTransitPtr  create          (void);
    static  MorphGeometry           *createEmpty     (void);

    static  MorphGeometryTransitPtr  createLocal     (
                                               BitVector bFlags = FCLocal::All);

    static  MorphGeometry            *createEmptyLocal(
                                              BitVector bFlags = FCLocal::All);

    static  MorphGeometryTransitPtr  createDependent  (BitVector bFlags);

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

    SFUnrecGeometryPtr _sfBaseGeometry;
    MFUnrecGeometryPtr _mfInternalTargetGeometries;
    SFUnrecChildGeoVectorPropertyPtr _sfInternalWeights;
    MFUInt16          _mfMorphProperties;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Constructors                               */
    /*! \{                                                                 */

    MorphGeometryBase(void);
    MorphGeometryBase(const MorphGeometryBase &source);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~MorphGeometryBase(void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                     onCreate                                */
    /*! \{                                                                 */

    void onCreate(const MorphGeometry *source = NULL);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name Child linking                                                */
    /*! \{                                                                 */

    virtual bool unlinkChild(FieldContainer * const pChild,
                             UInt16           const childFieldId);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Generic Field Access                      */
    /*! \{                                                                 */

    GetFieldHandlePtr  getHandleBaseGeometry    (void) const;
    EditFieldHandlePtr editHandleBaseGeometry   (void);
    GetFieldHandlePtr  getHandleInternalTargetGeometries (void) const;
    EditFieldHandlePtr editHandleInternalTargetGeometries(void);
    GetFieldHandlePtr  getHandleInternalWeights (void) const;
    EditFieldHandlePtr editHandleInternalWeights(void);
    GetFieldHandlePtr  getHandleMorphProperties (void) const;
    EditFieldHandlePtr editHandleMorphProperties(void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Get                                 */
    /*! \{                                                                 */

            const MFUnrecGeometryPtr  *getMFInternalTargetGeometries (void) const;
                  MFUnrecGeometryPtr  *editMFInternalTargetGeometries(void);
            const SFUnrecChildGeoVectorPropertyPtr *getSFInternalWeights (void) const;
                  SFUnrecChildGeoVectorPropertyPtr *editSFInternalWeights(void);


                  Geometry * getInternalTargetGeometries(const UInt32 index) const;

                  GeoVectorProperty * getInternalWeights(void) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Set                                 */
    /*! \{                                                                 */

            void setInternalWeights(GeoVectorProperty * const value);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                Ptr MField Set                                */
    /*! \{                                                                 */

    void pushToInternalTargetGeometries           (Geometry * const value   );
    void assignInternalTargetGeometries           (const MFUnrecGeometryPtr &value);
    void removeFromInternalTargetGeometries (UInt32                uiIndex );
    void removeObjFromInternalTargetGeometries(Geometry * const value   );
    void clearInternalTargetGeometries            (void                          );

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

            void execSync (      MorphGeometryBase *pFrom,
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
    void operator =(const MorphGeometryBase &source);
};

typedef MorphGeometryBase *MorphGeometryBaseP;

OSG_END_NAMESPACE

#endif /* _OSGMORPHGEOMETRYBASE_H_ */
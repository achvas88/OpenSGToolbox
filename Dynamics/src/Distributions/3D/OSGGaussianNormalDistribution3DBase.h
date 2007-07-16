/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *               Copyright (C) 2000-2002 by the OpenSG Forum                 *
 *                                                                           *
 *                            www.opensg.org                                 *
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
 **     class GaussianNormalDistribution3D
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#ifndef _OSGGAUSSIANNORMALDISTRIBUTION3DBASE_H_
#define _OSGGAUSSIANNORMALDISTRIBUTION3DBASE_H_
#ifdef __sgi
#pragma once
#endif


#include <OpenSG/OSGConfig.h>
#include "OSGDynamicsDef.h"

#include <OpenSG/OSGBaseTypes.h>
#include <OpenSG/OSGRefPtr.h>
#include <OpenSG/OSGCoredNodePtr.h>

#include "OSGDistribution3D.h" // Parent

#include <OpenSG/OSGPnt3fFields.h> // Mean type
#include <OpenSG/OSGReal32Fields.h> // StandardDeviationX type
#include <OpenSG/OSGReal32Fields.h> // StandardDeviationY type
#include <OpenSG/OSGReal32Fields.h> // StandardDeviationZ type
#include <OpenSG/OSGReal32Fields.h> // XYCorrelation type
#include <OpenSG/OSGReal32Fields.h> // XZCorrelation type
#include <OpenSG/OSGReal32Fields.h> // YZCorrelation type

#include "OSGGaussianNormalDistribution3DFields.h"

OSG_BEGIN_NAMESPACE

class GaussianNormalDistribution3D;
class BinaryDataHandler;

//! \brief GaussianNormalDistribution3D Base Class.

class OSG_DYNAMICSLIB_DLLMAPPING GaussianNormalDistribution3DBase : public Distribution3D
{
  private:

    typedef Distribution3D    Inherited;

    /*==========================  PUBLIC  =================================*/
  public:

    typedef GaussianNormalDistribution3DPtr  Ptr;

    enum
    {
        MeanFieldId               = Inherited::NextFieldId,
        StandardDeviationXFieldId = MeanFieldId               + 1,
        StandardDeviationYFieldId = StandardDeviationXFieldId + 1,
        StandardDeviationZFieldId = StandardDeviationYFieldId + 1,
        XYCorrelationFieldId      = StandardDeviationZFieldId + 1,
        XZCorrelationFieldId      = XYCorrelationFieldId      + 1,
        YZCorrelationFieldId      = XZCorrelationFieldId      + 1,
        NextFieldId               = YZCorrelationFieldId      + 1
    };

    static const OSG::BitVector MeanFieldMask;
    static const OSG::BitVector StandardDeviationXFieldMask;
    static const OSG::BitVector StandardDeviationYFieldMask;
    static const OSG::BitVector StandardDeviationZFieldMask;
    static const OSG::BitVector XYCorrelationFieldMask;
    static const OSG::BitVector XZCorrelationFieldMask;
    static const OSG::BitVector YZCorrelationFieldMask;


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

           SFPnt3f             *getSFMean           (void);
           SFReal32            *getSFStandardDeviationX(void);
           SFReal32            *getSFStandardDeviationY(void);
           SFReal32            *getSFStandardDeviationZ(void);
           SFReal32            *getSFXYCorrelation  (void);
           SFReal32            *getSFXZCorrelation  (void);
           SFReal32            *getSFYZCorrelation  (void);

           Pnt3f               &getMean           (void);
     const Pnt3f               &getMean           (void) const;
           Real32              &getStandardDeviationX(void);
     const Real32              &getStandardDeviationX(void) const;
           Real32              &getStandardDeviationY(void);
     const Real32              &getStandardDeviationY(void) const;
           Real32              &getStandardDeviationZ(void);
     const Real32              &getStandardDeviationZ(void) const;
           Real32              &getXYCorrelation  (void);
     const Real32              &getXYCorrelation  (void) const;
           Real32              &getXZCorrelation  (void);
     const Real32              &getXZCorrelation  (void) const;
           Real32              &getYZCorrelation  (void);
     const Real32              &getYZCorrelation  (void) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Set                                 */
    /*! \{                                                                 */

     void setMean           ( const Pnt3f &value );
     void setStandardDeviationX( const Real32 &value );
     void setStandardDeviationY( const Real32 &value );
     void setStandardDeviationZ( const Real32 &value );
     void setXYCorrelation  ( const Real32 &value );
     void setXZCorrelation  ( const Real32 &value );
     void setYZCorrelation  ( const Real32 &value );

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

    static  GaussianNormalDistribution3DPtr      create          (void); 
    static  GaussianNormalDistribution3DPtr      createEmpty     (void); 

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

    SFPnt3f             _sfMean;
    SFReal32            _sfStandardDeviationX;
    SFReal32            _sfStandardDeviationY;
    SFReal32            _sfStandardDeviationZ;
    SFReal32            _sfXYCorrelation;
    SFReal32            _sfXZCorrelation;
    SFReal32            _sfYZCorrelation;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Constructors                               */
    /*! \{                                                                 */

    GaussianNormalDistribution3DBase(void);
    GaussianNormalDistribution3DBase(const GaussianNormalDistribution3DBase &source);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~GaussianNormalDistribution3DBase(void); 

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       Sync                                   */
    /*! \{                                                                 */

#if !defined(OSG_FIXED_MFIELDSYNC)
    void executeSyncImpl(      GaussianNormalDistribution3DBase *pOther,
                         const BitVector         &whichField);

    virtual void   executeSync(      FieldContainer    &other,
                               const BitVector         &whichField);
#else
    void executeSyncImpl(      GaussianNormalDistribution3DBase *pOther,
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
    void operator =(const GaussianNormalDistribution3DBase &source);
};

//---------------------------------------------------------------------------
//   Exported Types
//---------------------------------------------------------------------------


typedef GaussianNormalDistribution3DBase *GaussianNormalDistribution3DBaseP;

typedef osgIF<GaussianNormalDistribution3DBase::isNodeCore,
              CoredNodePtr<GaussianNormalDistribution3D>,
              FieldContainer::attempt_to_create_CoredNodePtr_on_non_NodeCore_FC
              >::_IRet GaussianNormalDistribution3DNodePtr;

typedef RefPtr<GaussianNormalDistribution3DPtr> GaussianNormalDistribution3DRefPtr;

OSG_END_NAMESPACE

#define OSGGAUSSIANNORMALDISTRIBUTION3DBASE_HEADER_CVSID "@(#)$Id: FCBaseTemplate_h.h,v 1.40 2005/07/20 00:10:14 vossg Exp $"

#endif /* _OSGGAUSSIANNORMALDISTRIBUTION3DBASE_H_ */

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
 **     class GaussianNormaDistribution2D
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#ifndef _OSGGAUSSIANNORMADISTRIBUTION2DBASE_H_
#define _OSGGAUSSIANNORMADISTRIBUTION2DBASE_H_
#ifdef __sgi
#pragma once
#endif


#include <OpenSG/OSGConfig.h>
#include "OSGDynamicsDef.h"

#include <OpenSG/OSGBaseTypes.h>
#include <OpenSG/OSGRefPtr.h>
#include <OpenSG/OSGCoredNodePtr.h>

#include "OSGDistribution2D.h" // Parent

#include <OpenSG/OSGPnt2fFields.h> // Mean type
#include <OpenSG/OSGReal32Fields.h> // StandardDeviationX type
#include <OpenSG/OSGReal32Fields.h> // StandardDeviationY type
#include <OpenSG/OSGReal32Fields.h> // XYCorrelation type

#include "OSGGaussianNormaDistribution2DFields.h"

OSG_BEGIN_NAMESPACE

class GaussianNormaDistribution2D;
class BinaryDataHandler;

//! \brief GaussianNormaDistribution2D Base Class.

class OSG_DYNAMICSLIB_DLLMAPPING GaussianNormaDistribution2DBase : public Distribution2D
{
  private:

    typedef Distribution2D    Inherited;

    /*==========================  PUBLIC  =================================*/
  public:

    typedef GaussianNormaDistribution2DPtr  Ptr;

    enum
    {
        MeanFieldId               = Inherited::NextFieldId,
        StandardDeviationXFieldId = MeanFieldId               + 1,
        StandardDeviationYFieldId = StandardDeviationXFieldId + 1,
        XYCorrelationFieldId      = StandardDeviationYFieldId + 1,
        NextFieldId               = XYCorrelationFieldId      + 1
    };

    static const OSG::BitVector MeanFieldMask;
    static const OSG::BitVector StandardDeviationXFieldMask;
    static const OSG::BitVector StandardDeviationYFieldMask;
    static const OSG::BitVector XYCorrelationFieldMask;


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

           SFPnt2f             *getSFMean           (void);
           SFReal32            *getSFStandardDeviationX(void);
           SFReal32            *getSFStandardDeviationY(void);
           SFReal32            *getSFXYCorrelation  (void);

           Pnt2f               &getMean           (void);
     const Pnt2f               &getMean           (void) const;
           Real32              &getStandardDeviationX(void);
     const Real32              &getStandardDeviationX(void) const;
           Real32              &getStandardDeviationY(void);
     const Real32              &getStandardDeviationY(void) const;
           Real32              &getXYCorrelation  (void);
     const Real32              &getXYCorrelation  (void) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Set                                 */
    /*! \{                                                                 */

     void setMean           ( const Pnt2f &value );
     void setStandardDeviationX( const Real32 &value );
     void setStandardDeviationY( const Real32 &value );
     void setXYCorrelation  ( const Real32 &value );

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

    static  GaussianNormaDistribution2DPtr      create          (void); 
    static  GaussianNormaDistribution2DPtr      createEmpty     (void); 

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

    SFPnt2f             _sfMean;
    SFReal32            _sfStandardDeviationX;
    SFReal32            _sfStandardDeviationY;
    SFReal32            _sfXYCorrelation;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Constructors                               */
    /*! \{                                                                 */

    GaussianNormaDistribution2DBase(void);
    GaussianNormaDistribution2DBase(const GaussianNormaDistribution2DBase &source);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~GaussianNormaDistribution2DBase(void); 

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       Sync                                   */
    /*! \{                                                                 */

#if !defined(OSG_FIXED_MFIELDSYNC)
    void executeSyncImpl(      GaussianNormaDistribution2DBase *pOther,
                         const BitVector         &whichField);

    virtual void   executeSync(      FieldContainer    &other,
                               const BitVector         &whichField);
#else
    void executeSyncImpl(      GaussianNormaDistribution2DBase *pOther,
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
    void operator =(const GaussianNormaDistribution2DBase &source);
};

//---------------------------------------------------------------------------
//   Exported Types
//---------------------------------------------------------------------------


typedef GaussianNormaDistribution2DBase *GaussianNormaDistribution2DBaseP;

typedef osgIF<GaussianNormaDistribution2DBase::isNodeCore,
              CoredNodePtr<GaussianNormaDistribution2D>,
              FieldContainer::attempt_to_create_CoredNodePtr_on_non_NodeCore_FC
              >::_IRet GaussianNormaDistribution2DNodePtr;

typedef RefPtr<GaussianNormaDistribution2DPtr> GaussianNormaDistribution2DRefPtr;

OSG_END_NAMESPACE

#define OSGGAUSSIANNORMADISTRIBUTION2DBASE_HEADER_CVSID "@(#)$Id: FCBaseTemplate_h.h,v 1.40 2005/07/20 00:10:14 vossg Exp $"

#endif /* _OSGGAUSSIANNORMADISTRIBUTION2DBASE_H_ */

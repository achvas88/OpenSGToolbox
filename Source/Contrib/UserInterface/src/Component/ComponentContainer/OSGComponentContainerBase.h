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
 **     class ComponentContainer
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#ifndef _OSGCOMPONENTCONTAINERBASE_H_
#define _OSGCOMPONENTCONTAINERBASE_H_
#ifdef __sgi
#pragma once
#endif


#include "OSGConfig.h"
#include "OSGContribUserInterfaceDef.h"

//#include "OSGBaseTypes.h"

#include "OSGComponent.h" // Parent

#include "OSGComponentFields.h"         // Children type
#include "OSGLayoutFields.h"            // Layout type
#include "OSGVecFields.h"               // Inset type

#include "OSGComponentContainerFields.h"

OSG_BEGIN_NAMESPACE

class ComponentContainer;

//! \brief ComponentContainer Base Class.

class OSG_CONTRIBUSERINTERFACE_DLLMAPPING ComponentContainerBase : public Component
{
  public:

    typedef Component Inherited;
    typedef Component ParentContainer;

    typedef Inherited::TypeObject TypeObject;
    typedef TypeObject::InitPhase InitPhase;

    OSG_GEN_INTERNALPTR(ComponentContainer);

    /*==========================  PUBLIC  =================================*/

  public:

    enum
    {
        ChildrenFieldId = Inherited::NextFieldId,
        LayoutFieldId = ChildrenFieldId + 1,
        InsetFieldId = LayoutFieldId + 1,
        NextFieldId = InsetFieldId + 1
    };

    static const OSG::BitVector ChildrenFieldMask =
        (TypeTraits<BitVector>::One << ChildrenFieldId);
    static const OSG::BitVector LayoutFieldMask =
        (TypeTraits<BitVector>::One << LayoutFieldId);
    static const OSG::BitVector InsetFieldMask =
        (TypeTraits<BitVector>::One << InsetFieldId);
    static const OSG::BitVector NextFieldMask =
        (TypeTraits<BitVector>::One << NextFieldId);
        
    typedef MFUnrecChildComponentPtr MFChildrenType;
    typedef SFUnrecChildLayoutPtr SFLayoutType;
    typedef SFVec4f           SFInsetType;

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

            const MFUnrecChildComponentPtr *getMFChildren       (void) const;
            const SFUnrecChildLayoutPtr *getSFLayout         (void) const;
                  SFUnrecChildLayoutPtr *editSFLayout         (void);

                  SFVec4f             *editSFInset          (void);
            const SFVec4f             *getSFInset           (void) const;


                  Component * getChildren       (const UInt32 index) const;

                  Layout * getLayout         (void) const;

                  Vec4f               &editInset          (void);
            const Vec4f               &getInset           (void) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Set                                 */
    /*! \{                                                                 */

            void setLayout         (Layout * const value);
            void setInset          (const Vec4f &value);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                Ptr Field Set                                 */
    /*! \{                                                                 */

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                Ptr MField Set                                */
    /*! \{                                                                 */

    void pushToChildren            (Component * const value   );
    void assignChildren           (const MFUnrecChildComponentPtr &value);
    void clearChildren              (void                         );
    void insertIntoChildren      (UInt32               uiIndex,
                                             Component * const value   );
    void replaceInChildren  (      UInt32         uiIndex,
                                             Component * const value   );
    void replaceObjInChildren (Component * const pOldElem,
                                             Component * const pNewElem);
    void removeFromChildren (UInt32               uiIndex );
    void removeObjFromChildren(Component * const value   );

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
    /*=========================  PROTECTED  ===============================*/

  protected:

    static TypeObject _type;

    static       void   classDescInserter(TypeObject &oType);
    static const Char8 *getClassname     (void             );

    /*---------------------------------------------------------------------*/
    /*! \name                      Fields                                  */
    /*! \{                                                                 */

    MFUnrecChildComponentPtr _mfChildren;
    SFUnrecChildLayoutPtr _sfLayout;
    SFVec4f           _sfInset;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Constructors                               */
    /*! \{                                                                 */

    ComponentContainerBase(void);
    ComponentContainerBase(const ComponentContainerBase &source);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~ComponentContainerBase(void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                     onCreate                                */
    /*! \{                                                                 */

    void onCreate(const ComponentContainer *source = NULL);

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

    GetFieldHandlePtr  getHandleChildren        (void) const;
    EditFieldHandlePtr editHandleChildren       (void);
    GetFieldHandlePtr  getHandleLayout          (void) const;
    EditFieldHandlePtr editHandleLayout         (void);
    GetFieldHandlePtr  getHandleInset           (void) const;
    EditFieldHandlePtr editHandleInset          (void);

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

            void execSync (      ComponentContainerBase *pFrom,
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
    void operator =(const ComponentContainerBase &source);
};

typedef ComponentContainerBase *ComponentContainerBaseP;

OSG_END_NAMESPACE

#endif /* _OSGCOMPONENTCONTAINERBASE_H_ */

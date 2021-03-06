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
 **     class Menu
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#ifndef _OSGMENUBASE_H_
#define _OSGMENUBASE_H_
#ifdef __sgi
#pragma once
#endif


#include "OSGConfig.h"
#include "OSGContribUserInterfaceDef.h"

//#include "OSGBaseTypes.h"

#include "OSGMenuItem.h" // Parent

#include "OSGPopupMenuFields.h"         // InternalPopupMenu type
#include "OSGSysFields.h"               // SubMenuDelay type
#include "OSGUIDrawObjectCanvasFields.h" // ExpandDrawObject type
#include "OSGMenuItemFields.h"          // MenuItems type

#include "OSGMenuFields.h"

OSG_BEGIN_NAMESPACE

class Menu;

//! \brief Menu Base Class.

class OSG_CONTRIBUSERINTERFACE_DLLMAPPING MenuBase : public MenuItem
{
  public:

    typedef MenuItem Inherited;
    typedef MenuItem ParentContainer;

    typedef Inherited::TypeObject TypeObject;
    typedef TypeObject::InitPhase InitPhase;

    OSG_GEN_INTERNALPTR(Menu);
    
    

    /*==========================  PUBLIC  =================================*/

  public:

    enum
    {
        InternalPopupMenuFieldId = Inherited::NextFieldId,
        SubMenuDelayFieldId = InternalPopupMenuFieldId + 1,
        TopLevelMenuFieldId = SubMenuDelayFieldId + 1,
        ExpandDrawObjectFieldId = TopLevelMenuFieldId + 1,
        MenuItemsFieldId = ExpandDrawObjectFieldId + 1,
        NextFieldId = MenuItemsFieldId + 1
    };

    static const OSG::BitVector InternalPopupMenuFieldMask =
        (TypeTraits<BitVector>::One << InternalPopupMenuFieldId);
    static const OSG::BitVector SubMenuDelayFieldMask =
        (TypeTraits<BitVector>::One << SubMenuDelayFieldId);
    static const OSG::BitVector TopLevelMenuFieldMask =
        (TypeTraits<BitVector>::One << TopLevelMenuFieldId);
    static const OSG::BitVector ExpandDrawObjectFieldMask =
        (TypeTraits<BitVector>::One << ExpandDrawObjectFieldId);
    static const OSG::BitVector MenuItemsFieldMask =
        (TypeTraits<BitVector>::One << MenuItemsFieldId);
    static const OSG::BitVector NextFieldMask =
        (TypeTraits<BitVector>::One << NextFieldId);
        
    typedef SFUnrecPopupMenuPtr SFInternalPopupMenuType;
    typedef SFReal32          SFSubMenuDelayType;
    typedef SFBool            SFTopLevelMenuType;
    typedef SFUnrecUIDrawObjectCanvasPtr SFExpandDrawObjectType;
    typedef MFUnrecChildMenuItemPtr MFMenuItemsType;

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


                  SFReal32            *editSFSubMenuDelay   (void);
            const SFReal32            *getSFSubMenuDelay    (void) const;

                  SFBool              *editSFTopLevelMenu   (void);
            const SFBool              *getSFTopLevelMenu    (void) const;
            const SFUnrecUIDrawObjectCanvasPtr *getSFExpandDrawObject(void) const;
                  SFUnrecUIDrawObjectCanvasPtr *editSFExpandDrawObject(void);


                  Real32              &editSubMenuDelay   (void);
                  Real32               getSubMenuDelay    (void) const;

                  bool                &editTopLevelMenu   (void);
                  bool                 getTopLevelMenu    (void) const;

                  UIDrawObjectCanvas * getExpandDrawObject(void) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Set                                 */
    /*! \{                                                                 */

            void setSubMenuDelay   (const Real32 value);
            void setTopLevelMenu   (const bool value);
            void setExpandDrawObject(UIDrawObjectCanvas * const value);

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

    static  MenuTransitPtr  create          (void);
    static  Menu           *createEmpty     (void);

    static  MenuTransitPtr  createLocal     (
                                               BitVector bFlags = FCLocal::All);

    static  Menu            *createEmptyLocal(
                                              BitVector bFlags = FCLocal::All);

    static  MenuTransitPtr  createDependent  (BitVector bFlags);

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

    SFUnrecPopupMenuPtr _sfInternalPopupMenu;
    SFReal32          _sfSubMenuDelay;
    SFBool            _sfTopLevelMenu;
    SFUnrecUIDrawObjectCanvasPtr _sfExpandDrawObject;
    MFUnrecChildMenuItemPtr _mfMenuItems;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Constructors                               */
    /*! \{                                                                 */

    MenuBase(void);
    MenuBase(const MenuBase &source);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~MenuBase(void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                     onCreate                                */
    /*! \{                                                                 */

    void onCreate(const Menu *source = NULL);

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

    GetFieldHandlePtr  getHandleInternalPopupMenu (void) const;
    EditFieldHandlePtr editHandleInternalPopupMenu(void);
    GetFieldHandlePtr  getHandleSubMenuDelay    (void) const;
    EditFieldHandlePtr editHandleSubMenuDelay   (void);
    GetFieldHandlePtr  getHandleTopLevelMenu    (void) const;
    EditFieldHandlePtr editHandleTopLevelMenu   (void);
    GetFieldHandlePtr  getHandleExpandDrawObject (void) const;
    EditFieldHandlePtr editHandleExpandDrawObject(void);
    GetFieldHandlePtr  getHandleMenuItems       (void) const;
    EditFieldHandlePtr editHandleMenuItems      (void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Get                                 */
    /*! \{                                                                 */

            const SFUnrecPopupMenuPtr *getSFInternalPopupMenu (void) const;
                  SFUnrecPopupMenuPtr *editSFInternalPopupMenu(void);
            const MFUnrecChildMenuItemPtr *getMFMenuItems       (void) const;


                  PopupMenu * getInternalPopupMenu(void) const;

                  MenuItem * getMenuItems      (const UInt32 index) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Set                                 */
    /*! \{                                                                 */

            void setInternalPopupMenu(PopupMenu * const value);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                Ptr MField Set                                */
    /*! \{                                                                 */

    void pushToMenuItems           (MenuItem * const value   );
    void assignMenuItems          (const MFUnrecChildMenuItemPtr &value);
    void clearMenuItems             (void                          );
    void insertIntoMenuItems      (UInt32         uiIndex,
                                             MenuItem * const value   );
    void replaceInMenuItems  (UInt32         uiIndex,
                                             MenuItem * const value   );
    void replaceObjInMenuItems (MenuItem * const pOldElem,
                                             MenuItem * const pNewElem);
    void removeFromMenuItems (UInt32                uiIndex );
    void removeObjFromMenuItems(MenuItem * const value   );

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

            void execSync (      MenuBase *pFrom,
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
    void operator =(const MenuBase &source);
};

typedef MenuBase *MenuBaseP;

OSG_END_NAMESPACE

#endif /* _OSGMENUBASE_H_ */

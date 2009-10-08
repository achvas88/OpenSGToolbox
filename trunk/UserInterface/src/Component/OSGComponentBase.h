/*---------------------------------------------------------------------------*\
 *                     OpenSG ToolBox UserInterface                          *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                         www.vrac.iastate.edu                              *
 *                                                                           *
 *                          Authors: David Kabala                            *
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
 **     class Component
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#ifndef _OSGCOMPONENTBASE_H_
#define _OSGCOMPONENTBASE_H_
#ifdef __sgi
#pragma once
#endif


#include <OpenSG/OSGConfig.h>
#include "OSGUserInterfaceDef.h"

#include <OpenSG/OSGBaseTypes.h>
#include <OpenSG/OSGRefPtr.h>
#include <OpenSG/OSGCoredNodePtr.h>

#include <OpenSG/OSGAttachmentContainer.h> // Parent

#include <OpenSG/OSGPnt2fFields.h> // Position type
#include <OpenSG/OSGPnt4fFields.h> // ClipBounds type
#include <OpenSG/OSGVec2fFields.h> // MinSize type
#include <OpenSG/OSGVec2fFields.h> // MaxSize type
#include <OpenSG/OSGVec2fFields.h> // PreferredSize type
#include <OpenSG/OSGVec2fFields.h> // Size type
#include <OpenSG/OSGBoolFields.h> // Visible type
#include <OpenSG/OSGBoolFields.h> // Enabled type
#include <OpenSG/OSGBoolFields.h> // Focused type
#include "Layout/OSGLayoutConstraints.h" // Constraints type
#include "Border/OSGBorder.h" // Border type
#include "Layer/OSGLayer.h" // Background type
#include "Border/OSGBorder.h" // DisabledBorder type
#include "Layer/OSGLayer.h" // DisabledBackground type
#include <OpenSG/OSGBoolFields.h> // DragEnabled type
#include "DragAndDrop/OSGTransferHandlerFields.h" // TransferHandler type
#include "Border/OSGBorder.h" // FocusedBorder type
#include "Layer/OSGLayer.h" // FocusedBackground type
#include "Border/OSGBorder.h" // RolloverBorder type
#include "Layer/OSGLayer.h" // RolloverBackground type
#include <OpenSG/OSGStringFields.h> // ToolTipText type
#include <OpenSG/OSGReal32Fields.h> // Opacity type
#include "Component/Container/OSGContainerFields.h" // ParentContainer type
#include "Component/Container/Window/OSGInternalWindowFields.h" // ParentWindow type
#include <OpenSG/OSGBoolFields.h> // Clipping type
#include "Component/Menu/OSGPopupMenuFields.h" // PopupMenu type
#include "Layer/OSGLayer.h" // FocusedForeground type
#include "Layer/OSGLayer.h" // RolloverForeground type
#include "Layer/OSGLayer.h" // DisabledForeground type
#include "Layer/OSGLayer.h" // Foreground type
#include <OpenSG/OSGUInt32Fields.h> // Cursor type

#include "OSGComponentFields.h"
#include <OpenSG/Toolbox/OSGEventProducer.h>
#include <OpenSG/Toolbox/OSGEventProducerType.h>
#include <OpenSG/Toolbox/OSGMethodDescription.h>
#include <OpenSG/Toolbox/OSGEventProducerPtrType.h>

OSG_BEGIN_NAMESPACE

class Component;
class BinaryDataHandler;

//! \brief Component Base Class.

class OSG_USERINTERFACELIB_DLLMAPPING ComponentBase : public AttachmentContainer
{
  private:

    typedef AttachmentContainer    Inherited;

    /*==========================  PUBLIC  =================================*/
  public:

    typedef ComponentPtr  Ptr;

    enum
    {
        PositionFieldId           = Inherited::NextFieldId,
        ClipBoundsFieldId         = PositionFieldId           + 1,
        MinSizeFieldId            = ClipBoundsFieldId         + 1,
        MaxSizeFieldId            = MinSizeFieldId            + 1,
        PreferredSizeFieldId      = MaxSizeFieldId            + 1,
        SizeFieldId               = PreferredSizeFieldId      + 1,
        VisibleFieldId            = SizeFieldId               + 1,
        EnabledFieldId            = VisibleFieldId            + 1,
        FocusedFieldId            = EnabledFieldId            + 1,
        ConstraintsFieldId        = FocusedFieldId            + 1,
        BorderFieldId             = ConstraintsFieldId        + 1,
        BackgroundFieldId         = BorderFieldId             + 1,
        DisabledBorderFieldId     = BackgroundFieldId         + 1,
        DisabledBackgroundFieldId = DisabledBorderFieldId     + 1,
        DragEnabledFieldId        = DisabledBackgroundFieldId + 1,
        TransferHandlerFieldId    = DragEnabledFieldId        + 1,
        FocusedBorderFieldId      = TransferHandlerFieldId    + 1,
        FocusedBackgroundFieldId  = FocusedBorderFieldId      + 1,
        RolloverBorderFieldId     = FocusedBackgroundFieldId  + 1,
        RolloverBackgroundFieldId = RolloverBorderFieldId     + 1,
        ToolTipTextFieldId        = RolloverBackgroundFieldId + 1,
        OpacityFieldId            = ToolTipTextFieldId        + 1,
        ParentContainerFieldId    = OpacityFieldId            + 1,
        ParentWindowFieldId       = ParentContainerFieldId    + 1,
        ClippingFieldId           = ParentWindowFieldId       + 1,
        PopupMenuFieldId          = ClippingFieldId           + 1,
        FocusedForegroundFieldId  = PopupMenuFieldId          + 1,
        RolloverForegroundFieldId = FocusedForegroundFieldId  + 1,
        DisabledForegroundFieldId = RolloverForegroundFieldId + 1,
        ForegroundFieldId         = DisabledForegroundFieldId + 1,
        CursorFieldId             = ForegroundFieldId         + 1,
        EventProducerFieldId      = CursorFieldId             + 1,
        NextFieldId               = EventProducerFieldId      + 1
    };

    static const OSG::BitVector PositionFieldMask;
    static const OSG::BitVector ClipBoundsFieldMask;
    static const OSG::BitVector MinSizeFieldMask;
    static const OSG::BitVector MaxSizeFieldMask;
    static const OSG::BitVector PreferredSizeFieldMask;
    static const OSG::BitVector SizeFieldMask;
    static const OSG::BitVector VisibleFieldMask;
    static const OSG::BitVector EnabledFieldMask;
    static const OSG::BitVector FocusedFieldMask;
    static const OSG::BitVector ConstraintsFieldMask;
    static const OSG::BitVector BorderFieldMask;
    static const OSG::BitVector BackgroundFieldMask;
    static const OSG::BitVector DisabledBorderFieldMask;
    static const OSG::BitVector DisabledBackgroundFieldMask;
    static const OSG::BitVector DragEnabledFieldMask;
    static const OSG::BitVector TransferHandlerFieldMask;
    static const OSG::BitVector FocusedBorderFieldMask;
    static const OSG::BitVector FocusedBackgroundFieldMask;
    static const OSG::BitVector RolloverBorderFieldMask;
    static const OSG::BitVector RolloverBackgroundFieldMask;
    static const OSG::BitVector ToolTipTextFieldMask;
    static const OSG::BitVector OpacityFieldMask;
    static const OSG::BitVector ParentContainerFieldMask;
    static const OSG::BitVector ParentWindowFieldMask;
    static const OSG::BitVector ClippingFieldMask;
    static const OSG::BitVector PopupMenuFieldMask;
    static const OSG::BitVector FocusedForegroundFieldMask;
    static const OSG::BitVector RolloverForegroundFieldMask;
    static const OSG::BitVector DisabledForegroundFieldMask;
    static const OSG::BitVector ForegroundFieldMask;
    static const OSG::BitVector CursorFieldMask;
    static const OSG::BitVector EventProducerFieldMask;


    enum
    {
        MouseMovedMethodId        = 1,
        MouseDraggedMethodId      = MouseMovedMethodId        + 1,
        MouseClickedMethodId      = MouseDraggedMethodId      + 1,
        MouseEnteredMethodId      = MouseClickedMethodId      + 1,
        MouseExitedMethodId       = MouseEnteredMethodId      + 1,
        MousePressedMethodId      = MouseExitedMethodId       + 1,
        MouseReleasedMethodId     = MousePressedMethodId      + 1,
        MouseWheelMovedMethodId   = MouseReleasedMethodId     + 1,
        KeyPressedMethodId        = MouseWheelMovedMethodId   + 1,
        KeyReleasedMethodId       = KeyPressedMethodId        + 1,
        KeyTypedMethodId          = KeyReleasedMethodId       + 1,
        FocusGainedMethodId       = KeyTypedMethodId          + 1,
        FocusLostMethodId         = FocusGainedMethodId       + 1,
        ComponentHiddenMethodId   = FocusLostMethodId         + 1,
        ComponentVisibleMethodId  = ComponentHiddenMethodId   + 1,
        ComponentMovedMethodId    = ComponentVisibleMethodId  + 1,
        ComponentResizedMethodId  = ComponentMovedMethodId    + 1,
        ComponentEnabledMethodId  = ComponentResizedMethodId  + 1,
        ComponentDisabledMethodId = ComponentEnabledMethodId  + 1,
        NextMethodId              = ComponentDisabledMethodId + 1
    };



    static const OSG::BitVector MTInfluenceMask;

    /*---------------------------------------------------------------------*/
    /*! \name                    Class Get                                 */
    /*! \{                                                                 */

    static        FieldContainerType &getClassType    (void); 
    static        UInt32              getClassTypeId  (void); 
    static const  EventProducerType  &getProducerClassType  (void); 
    static        UInt32              getProducerClassTypeId(void); 

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


    virtual       SFPnt2f             *editSFPosition       (void);
    virtual const SFPnt2f             *getSFPosition       (void) const;
    virtual const SFPnt4f             *getSFClipBounds     (void) const;

    virtual       SFVec2f             *editSFMinSize        (void);
    virtual const SFVec2f             *getSFMinSize        (void) const;

    virtual       SFVec2f             *editSFMaxSize        (void);
    virtual const SFVec2f             *getSFMaxSize        (void) const;

    virtual       SFVec2f             *editSFPreferredSize  (void);
    virtual const SFVec2f             *getSFPreferredSize  (void) const;

    virtual       SFVec2f             *editSFSize           (void);
    virtual const SFVec2f             *getSFSize           (void) const;

    virtual       SFBool              *editSFVisible        (void);
    virtual const SFBool              *getSFVisible        (void) const;

    virtual       SFBool              *editSFEnabled        (void);
    virtual const SFBool              *getSFEnabled        (void) const;

    virtual       SFBool              *editSFFocused        (void);
    virtual const SFBool              *getSFFocused        (void) const;

    virtual       SFLayoutConstraintsPtr *editSFConstraints    (void);
    virtual const SFLayoutConstraintsPtr *getSFConstraints    (void) const;

    virtual       SFBorderPtr         *editSFBorder         (void);
    virtual const SFBorderPtr         *getSFBorder         (void) const;

    virtual       SFLayerPtr          *editSFBackground     (void);
    virtual const SFLayerPtr          *getSFBackground     (void) const;

    virtual       SFBorderPtr         *editSFDisabledBorder (void);
    virtual const SFBorderPtr         *getSFDisabledBorder (void) const;

    virtual       SFLayerPtr          *editSFDisabledBackground(void);
    virtual const SFLayerPtr          *getSFDisabledBackground(void) const;

    virtual       SFBool              *editSFDragEnabled    (void);
    virtual const SFBool              *getSFDragEnabled    (void) const;

    virtual       SFTransferHandlerPtr *editSFTransferHandler(void);
    virtual const SFTransferHandlerPtr *getSFTransferHandler(void) const;

    virtual       SFBorderPtr         *editSFFocusedBorder  (void);
    virtual const SFBorderPtr         *getSFFocusedBorder  (void) const;

    virtual       SFLayerPtr          *editSFFocusedBackground(void);
    virtual const SFLayerPtr          *getSFFocusedBackground(void) const;

    virtual       SFBorderPtr         *editSFRolloverBorder (void);
    virtual const SFBorderPtr         *getSFRolloverBorder (void) const;

    virtual       SFLayerPtr          *editSFRolloverBackground(void);
    virtual const SFLayerPtr          *getSFRolloverBackground(void) const;

    virtual       SFString            *editSFToolTipText    (void);
    virtual const SFString            *getSFToolTipText    (void) const;

    virtual       SFReal32            *editSFOpacity        (void);
    virtual const SFReal32            *getSFOpacity        (void) const;

    virtual       SFContainerPtr      *editSFParentContainer(void);
    virtual const SFContainerPtr      *getSFParentContainer(void) const;

    virtual       SFInternalWindowPtr *editSFParentWindow   (void);
    virtual const SFInternalWindowPtr *getSFParentWindow   (void) const;

    virtual       SFBool              *editSFClipping       (void);
    virtual const SFBool              *getSFClipping       (void) const;

    virtual       SFPopupMenuPtr      *editSFPopupMenu      (void);
    virtual const SFPopupMenuPtr      *getSFPopupMenu      (void) const;

    virtual       SFLayerPtr          *editSFFocusedForeground(void);
    virtual const SFLayerPtr          *getSFFocusedForeground(void) const;

    virtual       SFLayerPtr          *editSFRolloverForeground(void);
    virtual const SFLayerPtr          *getSFRolloverForeground(void) const;

    virtual       SFLayerPtr          *editSFDisabledForeground(void);
    virtual const SFLayerPtr          *getSFDisabledForeground(void) const;

    virtual       SFLayerPtr          *editSFForeground     (void);
    virtual const SFLayerPtr          *getSFForeground     (void) const;

    virtual       SFUInt32            *editSFCursor         (void);
    virtual const SFUInt32            *getSFCursor         (void) const;


    virtual       Pnt2f               &editPosition       (void);
    virtual const Pnt2f               &getPosition       (void) const;

    virtual const Pnt4f               &getClipBounds     (void) const;

    virtual       Vec2f               &editMinSize        (void);
    virtual const Vec2f               &getMinSize        (void) const;

    virtual       Vec2f               &editMaxSize        (void);
    virtual const Vec2f               &getMaxSize        (void) const;

    virtual       Vec2f               &editPreferredSize  (void);
    virtual const Vec2f               &getPreferredSize  (void) const;

    virtual       Vec2f               &editSize           (void);
    virtual const Vec2f               &getSize           (void) const;

    virtual       bool                &editVisible        (void);
    virtual const bool                &getVisible        (void) const;

    virtual       bool                &editEnabled        (void);
    virtual const bool                &getEnabled        (void) const;

    virtual       bool                &editFocused        (void);
    virtual const bool                &getFocused        (void) const;

    virtual       LayoutConstraintsPtr &editConstraints    (void);
    virtual const LayoutConstraintsPtr &getConstraints    (void) const;

    virtual       BorderPtr           &editBorder         (void);
    virtual const BorderPtr           &getBorder         (void) const;

    virtual       LayerPtr            &editBackground     (void);
    virtual const LayerPtr            &getBackground     (void) const;

    virtual       BorderPtr           &editDisabledBorder (void);
    virtual const BorderPtr           &getDisabledBorder (void) const;

    virtual       LayerPtr            &editDisabledBackground(void);
    virtual const LayerPtr            &getDisabledBackground(void) const;

    virtual       bool                &editDragEnabled    (void);
    virtual const bool                &getDragEnabled    (void) const;

    virtual       TransferHandlerPtr  &editTransferHandler(void);
    virtual const TransferHandlerPtr  &getTransferHandler(void) const;

    virtual       BorderPtr           &editFocusedBorder  (void);
    virtual const BorderPtr           &getFocusedBorder  (void) const;

    virtual       LayerPtr            &editFocusedBackground(void);
    virtual const LayerPtr            &getFocusedBackground(void) const;

    virtual       BorderPtr           &editRolloverBorder (void);
    virtual const BorderPtr           &getRolloverBorder (void) const;

    virtual       LayerPtr            &editRolloverBackground(void);
    virtual const LayerPtr            &getRolloverBackground(void) const;

    virtual       std::string         &editToolTipText    (void);
    virtual const std::string         &getToolTipText    (void) const;

    virtual       Real32              &editOpacity        (void);
    virtual const Real32              &getOpacity        (void) const;

    virtual       ContainerPtr        &editParentContainer(void);
    virtual const ContainerPtr        &getParentContainer(void) const;

    virtual       InternalWindowPtr   &editParentWindow   (void);
    virtual const InternalWindowPtr   &getParentWindow   (void) const;

    virtual       bool                &editClipping       (void);
    virtual const bool                &getClipping       (void) const;

    virtual       PopupMenuPtr        &editPopupMenu      (void);
    virtual const PopupMenuPtr        &getPopupMenu      (void) const;

    virtual       LayerPtr            &editFocusedForeground(void);
    virtual const LayerPtr            &getFocusedForeground(void) const;

    virtual       LayerPtr            &editRolloverForeground(void);
    virtual const LayerPtr            &getRolloverForeground(void) const;

    virtual       LayerPtr            &editDisabledForeground(void);
    virtual const LayerPtr            &getDisabledForeground(void) const;

    virtual       LayerPtr            &editForeground     (void);
    virtual const LayerPtr            &getForeground     (void) const;

    virtual       UInt32              &editCursor         (void);
    virtual const UInt32              &getCursor         (void) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Set                                 */
    /*! \{                                                                 */

    virtual void setPosition       ( const Pnt2f &value );
    virtual void setMinSize        ( const Vec2f &value );
    virtual void setMaxSize        ( const Vec2f &value );
    virtual void setPreferredSize  ( const Vec2f &value );
    virtual void setSize           ( const Vec2f &value );
    virtual void setVisible        ( const bool &value );
    virtual void setEnabled        ( const bool &value );
    virtual void setFocused        ( const bool &value );
    virtual void setConstraints    ( const LayoutConstraintsPtr &value );
    virtual void setBorder         ( const BorderPtr &value );
    virtual void setBackground     ( const LayerPtr &value );
    virtual void setDisabledBorder ( const BorderPtr &value );
    virtual void setDisabledBackground( const LayerPtr &value );
    virtual void setDragEnabled    ( const bool &value );
    virtual void setTransferHandler( const TransferHandlerPtr &value );
    virtual void setFocusedBorder  ( const BorderPtr &value );
    virtual void setFocusedBackground( const LayerPtr &value );
    virtual void setRolloverBorder ( const BorderPtr &value );
    virtual void setRolloverBackground( const LayerPtr &value );
    virtual void setToolTipText    ( const std::string &value );
    virtual void setOpacity        ( const Real32 &value );
    virtual void setParentContainer( const ContainerPtr &value );
    virtual void setParentWindow   ( const InternalWindowPtr &value );
    virtual void setClipping       ( const bool &value );
    virtual void setPopupMenu      ( const PopupMenuPtr &value );
    virtual void setFocusedForeground( const LayerPtr &value );
    virtual void setRolloverForeground( const LayerPtr &value );
    virtual void setDisabledForeground( const LayerPtr &value );
    virtual void setForeground     ( const LayerPtr &value );
    virtual void setCursor         ( const UInt32 &value );

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                Method Produced Get                           */
    /*! \{                                                                 */

    virtual const EventProducerType &getProducerType(void) const; 
    EventConnection attachActivity(ActivityPtr TheActivity, UInt32 ProducedEventId);
    bool isActivityAttached(ActivityPtr TheActivity, UInt32 ProducedEventId) const;
    UInt32 getNumActivitiesAttached(UInt32 ProducedEventId) const;
    ActivityPtr getAttachedActivity(UInt32 ProducedEventId, UInt32 ActivityIndex) const;
    void detachActivity(ActivityPtr TheActivity, UInt32 ProducedEventId);
    UInt32 getNumProducedEvents(void) const;
    const MethodDescription *getProducedEventDescription(const Char8 *ProducedEventName) const;
    const MethodDescription *getProducedEventDescription(UInt32 ProducedEventId) const;
    UInt32 getProducedEventId(const Char8 *ProducedEventName) const;

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
    EventProducer _Producer;

    /*---------------------------------------------------------------------*/
    /*! \name                      Fields                                  */
    /*! \{                                                                 */

    SFPnt2f             _sfPosition;
    SFPnt4f             _sfClipBounds;
    SFVec2f             _sfMinSize;
    SFVec2f             _sfMaxSize;
    SFVec2f             _sfPreferredSize;
    SFVec2f             _sfSize;
    SFBool              _sfVisible;
    SFBool              _sfEnabled;
    SFBool              _sfFocused;
    SFLayoutConstraintsPtr   _sfConstraints;
    SFBorderPtr         _sfBorder;
    SFLayerPtr          _sfBackground;
    SFBorderPtr         _sfDisabledBorder;
    SFLayerPtr          _sfDisabledBackground;
    SFBool              _sfDragEnabled;
    SFTransferHandlerPtr   _sfTransferHandler;
    SFBorderPtr         _sfFocusedBorder;
    SFLayerPtr          _sfFocusedBackground;
    SFBorderPtr         _sfRolloverBorder;
    SFLayerPtr          _sfRolloverBackground;
    SFString            _sfToolTipText;
    SFReal32            _sfOpacity;
    SFContainerPtr      _sfParentContainer;
    SFInternalWindowPtr   _sfParentWindow;
    SFBool              _sfClipping;
    SFPopupMenuPtr      _sfPopupMenu;
    SFLayerPtr          _sfFocusedForeground;
    SFLayerPtr          _sfRolloverForeground;
    SFLayerPtr          _sfDisabledForeground;
    SFLayerPtr          _sfForeground;
    SFUInt32            _sfCursor;

    /*! \}                                                                 */
    SFEventProducerPtr _sfEventProducer;
    /*---------------------------------------------------------------------*/
    /*! \name                   Constructors                               */
    /*! \{                                                                 */

    ComponentBase(void);
    ComponentBase(const ComponentBase &source);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~ComponentBase(void); 

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Get                                 */
    /*! \{                                                                 */

    virtual       SFPnt4f             *editSFClipBounds     (void);

    virtual       Pnt4f               &editClipBounds     (void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Set                                 */
    /*! \{                                                                 */

    virtual void setClipBounds     (const Pnt4f &value);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       Sync                                   */
    /*! \{                                                                 */

#if !defined(OSG_FIXED_MFIELDSYNC)
    void executeSyncImpl(      ComponentBase *pOther,
                         const BitVector         &whichField);

    virtual void   executeSync(      FieldContainer    &other,
                               const BitVector         &whichField);
#else
    void executeSyncImpl(      ComponentBase *pOther,
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

    static MethodDescription   *_methodDesc[];
    static EventProducerType _producerType;

    static FieldDescription   *_desc[];
    static FieldContainerType  _type;


    // prohibit default functions (move to 'public' if you need one)
    void operator =(const ComponentBase &source);
};

//---------------------------------------------------------------------------
//   Exported Types
//---------------------------------------------------------------------------


typedef ComponentBase *ComponentBaseP;

typedef osgIF<ComponentBase::isNodeCore,
              CoredNodePtr<Component>,
              FieldContainer::attempt_to_create_CoredNodePtr_on_non_NodeCore_FC
              >::_IRet ComponentNodePtr;

typedef RefPtr<ComponentPtr> ComponentRefPtr;

OSG_END_NAMESPACE

#endif /* _OSGCOMPONENTBASE_H_ */

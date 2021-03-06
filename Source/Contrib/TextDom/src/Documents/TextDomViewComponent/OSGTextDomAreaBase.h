/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *               Copyright (C) 2000-2006 by the OpenSG Forum                 *
 *                                                                           *
 *                            www.opensg.org                                 *
 *                                                                           *
 * contact: Achyuthan Vasanth (vasanth.achyuthan@gmail.com)                  *
 *          David Kabala (djkabala@gmail.com)                                *
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
 **     class TextDomArea
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#ifndef _OSGTEXTDOMAREABASE_H_
#define _OSGTEXTDOMAREABASE_H_
#ifdef __sgi
#pragma once
#endif


#include "OSGConfig.h"
#include "OSGContribTextDomDef.h"

//#include "OSGBaseTypes.h"

#include "OSGComponent.h" // Parent

#include "OSGDocumentFields.h"          // DocumentModel type
#include "OSGUIFontFields.h"            // Font type
#include "OSGSysFields.h"               // BookmarkedLines type
#include "OSGTextDomLayoutManagerFields.h" // LayoutManager type

#include "OSGTextDomAreaFields.h"

OSG_BEGIN_NAMESPACE

class TextDomArea;

//! \brief TextDomArea Base Class.

class OSG_CONTRIBTEXTDOM_DLLMAPPING TextDomAreaBase : public Component
{
  public:

    typedef Component Inherited;
    typedef Component ParentContainer;

    typedef Inherited::TypeObject TypeObject;
    typedef TypeObject::InitPhase InitPhase;

    OSG_GEN_INTERNALPTR(TextDomArea);
    
    

    /*==========================  PUBLIC  =================================*/

  public:

    enum
    {
        DocumentModelFieldId = Inherited::NextFieldId,
        FontFieldId = DocumentModelFieldId + 1,
        BookmarkedLinesFieldId = FontFieldId + 1,
        CaretPositionFieldId = BookmarkedLinesFieldId + 1,
        LineWrapFieldId = CaretPositionFieldId + 1,
        WrapStyleWordFieldId = LineWrapFieldId + 1,
        TabSizeFieldId = WrapStyleWordFieldId + 1,
        LineSpacingFieldId = TabSizeFieldId + 1,
        LayoutManagerFieldId = LineSpacingFieldId + 1,
        EditableFieldId = LayoutManagerFieldId + 1,
        NextFieldId = EditableFieldId + 1
    };

    static const OSG::BitVector DocumentModelFieldMask =
        (TypeTraits<BitVector>::One << DocumentModelFieldId);
    static const OSG::BitVector FontFieldMask =
        (TypeTraits<BitVector>::One << FontFieldId);
    static const OSG::BitVector BookmarkedLinesFieldMask =
        (TypeTraits<BitVector>::One << BookmarkedLinesFieldId);
    static const OSG::BitVector CaretPositionFieldMask =
        (TypeTraits<BitVector>::One << CaretPositionFieldId);
    static const OSG::BitVector LineWrapFieldMask =
        (TypeTraits<BitVector>::One << LineWrapFieldId);
    static const OSG::BitVector WrapStyleWordFieldMask =
        (TypeTraits<BitVector>::One << WrapStyleWordFieldId);
    static const OSG::BitVector TabSizeFieldMask =
        (TypeTraits<BitVector>::One << TabSizeFieldId);
    static const OSG::BitVector LineSpacingFieldMask =
        (TypeTraits<BitVector>::One << LineSpacingFieldId);
    static const OSG::BitVector LayoutManagerFieldMask =
        (TypeTraits<BitVector>::One << LayoutManagerFieldId);
    static const OSG::BitVector EditableFieldMask =
        (TypeTraits<BitVector>::One << EditableFieldId);
    static const OSG::BitVector NextFieldMask =
        (TypeTraits<BitVector>::One << NextFieldId);
        
    typedef SFUnrecDocumentPtr SFDocumentModelType;
    typedef SFUnrecUIFontPtr  SFFontType;
    typedef MFUInt32          MFBookmarkedLinesType;
    typedef SFUInt32          SFCaretPositionType;
    typedef SFBool            SFLineWrapType;
    typedef SFBool            SFWrapStyleWordType;
    typedef SFUInt32          SFTabSizeType;
    typedef SFInt32           SFLineSpacingType;
    typedef SFUnrecChildTextDomLayoutManagerPtr SFLayoutManagerType;
    typedef SFBool            SFEditableType;

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

            const SFUnrecDocumentPtr  *getSFDocumentModel  (void) const;
                  SFUnrecDocumentPtr  *editSFDocumentModel  (void);
            const SFUnrecUIFontPtr    *getSFFont           (void) const;
                  SFUnrecUIFontPtr    *editSFFont           (void);

                  MFUInt32            *editMFBookmarkedLines(void);
            const MFUInt32            *getMFBookmarkedLines (void) const;

                  SFUInt32            *editSFCaretPosition  (void);
            const SFUInt32            *getSFCaretPosition   (void) const;

                  SFBool              *editSFLineWrap       (void);
            const SFBool              *getSFLineWrap        (void) const;

                  SFBool              *editSFWrapStyleWord  (void);
            const SFBool              *getSFWrapStyleWord   (void) const;

                  SFUInt32            *editSFTabSize        (void);
            const SFUInt32            *getSFTabSize         (void) const;

                  SFInt32             *editSFLineSpacing    (void);
            const SFInt32             *getSFLineSpacing     (void) const;
            const SFUnrecChildTextDomLayoutManagerPtr *getSFLayoutManager  (void) const;
                  SFUnrecChildTextDomLayoutManagerPtr *editSFLayoutManager  (void);

                  SFBool              *editSFEditable       (void);
            const SFBool              *getSFEditable        (void) const;


                  Document * getDocumentModel  (void) const;

                  UIFont * getFont           (void) const;

                  UInt32              &editBookmarkedLines(const UInt32 index);
                  UInt32               getBookmarkedLines (const UInt32 index) const;

                  UInt32              &editCaretPosition  (void);
                  UInt32               getCaretPosition   (void) const;

                  bool                &editLineWrap       (void);
                  bool                 getLineWrap        (void) const;

                  bool                &editWrapStyleWord  (void);
                  bool                 getWrapStyleWord   (void) const;

                  UInt32              &editTabSize        (void);
                  UInt32               getTabSize         (void) const;

                  Int32               &editLineSpacing    (void);
                  Int32                getLineSpacing     (void) const;

                  TextDomLayoutManager * getLayoutManager  (void) const;

                  bool                &editEditable       (void);
                  bool                 getEditable        (void) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Set                                 */
    /*! \{                                                                 */

            void setDocumentModel  (Document * const value);
            void setFont           (UIFont * const value);
            void setCaretPosition  (const UInt32 value);
            void setLineWrap       (const bool value);
            void setWrapStyleWord  (const bool value);
            void setTabSize        (const UInt32 value);
            void setLineSpacing    (const Int32 value);
            void setLayoutManager  (TextDomLayoutManager * const value);
            void setEditable       (const bool value);

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

    static  TextDomAreaTransitPtr  create          (void);
    static  TextDomArea           *createEmpty     (void);

    static  TextDomAreaTransitPtr  createLocal     (
                                               BitVector bFlags = FCLocal::All);

    static  TextDomArea            *createEmptyLocal(
                                              BitVector bFlags = FCLocal::All);

    static  TextDomAreaTransitPtr  createDependent  (BitVector bFlags);

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

    SFUnrecDocumentPtr _sfDocumentModel;
    SFUnrecUIFontPtr  _sfFont;
    MFUInt32          _mfBookmarkedLines;
    SFUInt32          _sfCaretPosition;
    SFBool            _sfLineWrap;
    SFBool            _sfWrapStyleWord;
    SFUInt32          _sfTabSize;
    SFInt32           _sfLineSpacing;
    SFUnrecChildTextDomLayoutManagerPtr _sfLayoutManager;
    SFBool            _sfEditable;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Constructors                               */
    /*! \{                                                                 */

    TextDomAreaBase(void);
    TextDomAreaBase(const TextDomAreaBase &source);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~TextDomAreaBase(void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                     onCreate                                */
    /*! \{                                                                 */

    void onCreate(const TextDomArea *source = NULL);

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

    GetFieldHandlePtr  getHandleDocumentModel   (void) const;
    EditFieldHandlePtr editHandleDocumentModel  (void);
    GetFieldHandlePtr  getHandleFont            (void) const;
    EditFieldHandlePtr editHandleFont           (void);
    GetFieldHandlePtr  getHandleBookmarkedLines (void) const;
    EditFieldHandlePtr editHandleBookmarkedLines(void);
    GetFieldHandlePtr  getHandleCaretPosition   (void) const;
    EditFieldHandlePtr editHandleCaretPosition  (void);
    GetFieldHandlePtr  getHandleLineWrap        (void) const;
    EditFieldHandlePtr editHandleLineWrap       (void);
    GetFieldHandlePtr  getHandleWrapStyleWord   (void) const;
    EditFieldHandlePtr editHandleWrapStyleWord  (void);
    GetFieldHandlePtr  getHandleTabSize         (void) const;
    EditFieldHandlePtr editHandleTabSize        (void);
    GetFieldHandlePtr  getHandleLineSpacing     (void) const;
    EditFieldHandlePtr editHandleLineSpacing    (void);
    GetFieldHandlePtr  getHandleLayoutManager   (void) const;
    EditFieldHandlePtr editHandleLayoutManager  (void);
    GetFieldHandlePtr  getHandleEditable        (void) const;
    EditFieldHandlePtr editHandleEditable       (void);

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

            void execSync (      TextDomAreaBase *pFrom,
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
    void operator =(const TextDomAreaBase &source);
};

typedef TextDomAreaBase *TextDomAreaBaseP;

OSG_END_NAMESPACE

#endif /* _OSGTEXTDOMAREABASE_H_ */

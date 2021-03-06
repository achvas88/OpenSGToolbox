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
 **     class TableHeader!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <cstdlib>
#include <cstdio>
#include <boost/assign/list_of.hpp>

#include "OSGConfig.h"



#include "OSGFieldContainer.h"          // Table Class
#include "OSGTableColumnModel.h"        // ColumnModel Class
#include "OSGUIDrawObjectCanvas.h"      // DefaultMarginDrawObject Class
#include "OSGComponent.h"               // ColumnHeaders Class

#include "OSGTableHeaderBase.h"
#include "OSGTableHeader.h"

#include <boost/bind.hpp>

#ifdef WIN32 // turn off 'this' : used in base member initializer list warning
#pragma warning(disable:4355)
#endif

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::TableHeader
    A UI Table Header.
 */

/***************************************************************************\
 *                        Field Documentation                              *
\***************************************************************************/

/*! \var FieldContainer * TableHeaderBase::_sfTable
    
*/

/*! \var TableColumnModel * TableHeaderBase::_sfColumnModel
    
*/

/*! \var bool            TableHeaderBase::_sfReorderingAllowed
    
*/

/*! \var bool            TableHeaderBase::_sfResizingAllowed
    
*/

/*! \var UInt32          TableHeaderBase::_sfResizingCursorDriftAllowance
    
*/

/*! \var UIDrawObjectCanvas * TableHeaderBase::_sfDefaultMarginDrawObject
    
*/

/*! \var UIDrawObjectCanvas * TableHeaderBase::_mfMargins
    
*/

/*! \var Component *     TableHeaderBase::_mfColumnHeaders
    
*/


/***************************************************************************\
 *                      FieldType/FieldTrait Instantiation                 *
\***************************************************************************/

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldTraits<TableHeader *>::_type("TableHeaderPtr", "ComponentContainerPtr");
#endif

OSG_FIELDTRAITS_GETTYPE(TableHeader *)

OSG_EXPORT_PTR_SFIELD_FULL(PointerSField,
                           TableHeader *,
                           0);

OSG_EXPORT_PTR_MFIELD_FULL(PointerMField,
                           TableHeader *,
                           0);

DataType &FieldTraits< TableHeader *, 1 >::getType(void)
{
    return FieldTraits<TableHeader *, 0>::getType();
}


OSG_EXPORT_PTR_SFIELD(ChildPointerSField,
                      TableHeader *,
                      UnrecordedRefCountPolicy,
                      1);


/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

void TableHeaderBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


    pDesc = new SFParentFieldContainerPtr::Description(
        SFParentFieldContainerPtr::getClassType(),
        "Table",
        "",
        TableFieldId, TableFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast     <FieldEditMethodSig>(&TableHeader::invalidEditField),
        static_cast     <FieldGetMethodSig >(&TableHeader::invalidGetField));

    oType.addInitialDesc(pDesc);

    pDesc = new SFUnrecTableColumnModelPtr::Description(
        SFUnrecTableColumnModelPtr::getClassType(),
        "ColumnModel",
        "",
        ColumnModelFieldId, ColumnModelFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&TableHeader::editHandleColumnModel),
        static_cast<FieldGetMethodSig >(&TableHeader::getHandleColumnModel));

    oType.addInitialDesc(pDesc);

    pDesc = new SFBool::Description(
        SFBool::getClassType(),
        "ReorderingAllowed",
        "",
        ReorderingAllowedFieldId, ReorderingAllowedFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&TableHeader::editHandleReorderingAllowed),
        static_cast<FieldGetMethodSig >(&TableHeader::getHandleReorderingAllowed));

    oType.addInitialDesc(pDesc);

    pDesc = new SFBool::Description(
        SFBool::getClassType(),
        "ResizingAllowed",
        "",
        ResizingAllowedFieldId, ResizingAllowedFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&TableHeader::editHandleResizingAllowed),
        static_cast<FieldGetMethodSig >(&TableHeader::getHandleResizingAllowed));

    oType.addInitialDesc(pDesc);

    pDesc = new SFUInt32::Description(
        SFUInt32::getClassType(),
        "ResizingCursorDriftAllowance",
        "",
        ResizingCursorDriftAllowanceFieldId, ResizingCursorDriftAllowanceFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&TableHeader::editHandleResizingCursorDriftAllowance),
        static_cast<FieldGetMethodSig >(&TableHeader::getHandleResizingCursorDriftAllowance));

    oType.addInitialDesc(pDesc);

    pDesc = new SFUnrecUIDrawObjectCanvasPtr::Description(
        SFUnrecUIDrawObjectCanvasPtr::getClassType(),
        "DefaultMarginDrawObject",
        "",
        DefaultMarginDrawObjectFieldId, DefaultMarginDrawObjectFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&TableHeader::editHandleDefaultMarginDrawObject),
        static_cast<FieldGetMethodSig >(&TableHeader::getHandleDefaultMarginDrawObject));

    oType.addInitialDesc(pDesc);

    pDesc = new MFUnrecUIDrawObjectCanvasPtr::Description(
        MFUnrecUIDrawObjectCanvasPtr::getClassType(),
        "Margins",
        "",
        MarginsFieldId, MarginsFieldMask,
        false,
        (Field::MFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&TableHeader::editHandleMargins),
        static_cast<FieldGetMethodSig >(&TableHeader::getHandleMargins));

    oType.addInitialDesc(pDesc);

    pDesc = new MFUnrecComponentPtr::Description(
        MFUnrecComponentPtr::getClassType(),
        "ColumnHeaders",
        "",
        ColumnHeadersFieldId, ColumnHeadersFieldMask,
        false,
        (Field::MFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&TableHeader::editHandleColumnHeaders),
        static_cast<FieldGetMethodSig >(&TableHeader::getHandleColumnHeaders));

    oType.addInitialDesc(pDesc);
}


TableHeaderBase::TypeObject TableHeaderBase::_type(
    TableHeaderBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    0,
    reinterpret_cast<PrototypeCreateF>(&TableHeaderBase::createEmptyLocal),
    TableHeader::initMethod,
    TableHeader::exitMethod,
    reinterpret_cast<InitalInsertDescFunc>(&TableHeader::classDescInserter),
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "    name=\"TableHeader\"\n"
    "    parent=\"ComponentContainer\"\n"
    "    library=\"ContribUserInterface\"\n"
    "    pointerfieldtypes=\"both\"\n"
    "    structure=\"concrete\"\n"
    "    systemcomponent=\"true\"\n"
    "    parentsystemcomponent=\"true\"\n"
    "    decoratable=\"false\"\n"
    "    useLocalIncludes=\"false\"\n"
    "    isNodeCore=\"false\"\n"
    "    childFields=\"single\"\n"
    "    authors=\"David Kabala (djkabala@gmail.com)                             \"\n"
    "    >\n"
    "    A UI Table Header.\n"
    "\t<Field\n"
    "\t   name=\"Table\"\n"
    "\t   type=\"FieldContainer\"\n"
    "\t   cardinality=\"single\"\n"
    "\t   visibility=\"external\"\n"
    "\t   access=\"none\"\n"
    "       doRefCount=\"false\"\n"
    "       passFieldMask=\"true\"\n"
    "       category=\"parentpointer\"\n"
    "\t   >\n"
    "\t</Field>\n"
    "    <Field\n"
    "        name=\"ColumnModel\"\n"
    "        type=\"TableColumnModel\"\n"
    "        category=\"pointer\"\n"
    "        cardinality=\"single\"\n"
    "        visibility=\"external\"\n"
    "        defaultValue=\"NULL\"\n"
    "        access=\"public\"\n"
    "        >\n"
    "    </Field>\n"
    "    <Field\n"
    "        name=\"ReorderingAllowed\"\n"
    "        type=\"bool\"\n"
    "        category=\"data\"\n"
    "        cardinality=\"single\"\n"
    "        visibility=\"external\"\n"
    "        defaultValue=\"true\"\n"
    "        access=\"public\"\n"
    "        >\n"
    "    </Field>\n"
    "    <Field\n"
    "        name=\"ResizingAllowed\"\n"
    "        type=\"bool\"\n"
    "        category=\"data\"\n"
    "        cardinality=\"single\"\n"
    "        visibility=\"external\"\n"
    "        defaultValue=\"true\"\n"
    "        access=\"public\"\n"
    "        >\n"
    "    </Field>\n"
    "    <Field\n"
    "        name=\"ResizingCursorDriftAllowance\"\n"
    "        type=\"UInt32\"\n"
    "        category=\"data\"\n"
    "        cardinality=\"single\"\n"
    "        visibility=\"external\"\n"
    "        defaultValue=\"1\"\n"
    "        access=\"public\"\n"
    "        >\n"
    "    </Field>\n"
    "    <Field\n"
    "        name=\"DefaultMarginDrawObject\"\n"
    "        type=\"UIDrawObjectCanvas\"\n"
    "        category=\"pointer\"\n"
    "        cardinality=\"single\"\n"
    "        visibility=\"external\"\n"
    "        defaultValue=\"NULL\"\n"
    "        access=\"public\"\n"
    "        >\n"
    "    </Field>\n"
    "    <Field\n"
    "        name=\"Margins\"\n"
    "        type=\"UIDrawObjectCanvas\"\n"
    "        category=\"pointer\"\n"
    "        cardinality=\"multi\"\n"
    "        visibility=\"external\"\n"
    "        access=\"protected\"\n"
    "        >\n"
    "    </Field>\n"
    "    <Field\n"
    "        name=\"ColumnHeaders\"\n"
    "        type=\"Component\"\n"
    "        category=\"pointer\"\n"
    "        cardinality=\"multi\"\n"
    "        visibility=\"external\"\n"
    "        access=\"protected\"\n"
    "        >\n"
    "    </Field>\n"
    "</FieldContainer>\n",
    "A UI Table Header.\n"
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &TableHeaderBase::getType(void)
{
    return _type;
}

const FieldContainerType &TableHeaderBase::getType(void) const
{
    return _type;
}

UInt32 TableHeaderBase::getContainerSize(void) const
{
    return sizeof(TableHeader);
}

/*------------------------- decorator get ------------------------------*/



//! Get the TableHeader::_sfColumnModel field.
const SFUnrecTableColumnModelPtr *TableHeaderBase::getSFColumnModel(void) const
{
    return &_sfColumnModel;
}

SFUnrecTableColumnModelPtr *TableHeaderBase::editSFColumnModel    (void)
{
    editSField(ColumnModelFieldMask);

    return &_sfColumnModel;
}

SFBool *TableHeaderBase::editSFReorderingAllowed(void)
{
    editSField(ReorderingAllowedFieldMask);

    return &_sfReorderingAllowed;
}

const SFBool *TableHeaderBase::getSFReorderingAllowed(void) const
{
    return &_sfReorderingAllowed;
}


SFBool *TableHeaderBase::editSFResizingAllowed(void)
{
    editSField(ResizingAllowedFieldMask);

    return &_sfResizingAllowed;
}

const SFBool *TableHeaderBase::getSFResizingAllowed(void) const
{
    return &_sfResizingAllowed;
}


SFUInt32 *TableHeaderBase::editSFResizingCursorDriftAllowance(void)
{
    editSField(ResizingCursorDriftAllowanceFieldMask);

    return &_sfResizingCursorDriftAllowance;
}

const SFUInt32 *TableHeaderBase::getSFResizingCursorDriftAllowance(void) const
{
    return &_sfResizingCursorDriftAllowance;
}


//! Get the TableHeader::_sfDefaultMarginDrawObject field.
const SFUnrecUIDrawObjectCanvasPtr *TableHeaderBase::getSFDefaultMarginDrawObject(void) const
{
    return &_sfDefaultMarginDrawObject;
}

SFUnrecUIDrawObjectCanvasPtr *TableHeaderBase::editSFDefaultMarginDrawObject(void)
{
    editSField(DefaultMarginDrawObjectFieldMask);

    return &_sfDefaultMarginDrawObject;
}

//! Get the TableHeader::_mfMargins field.
const MFUnrecUIDrawObjectCanvasPtr *TableHeaderBase::getMFMargins(void) const
{
    return &_mfMargins;
}

MFUnrecUIDrawObjectCanvasPtr *TableHeaderBase::editMFMargins        (void)
{
    editMField(MarginsFieldMask, _mfMargins);

    return &_mfMargins;
}

//! Get the TableHeader::_mfColumnHeaders field.
const MFUnrecComponentPtr *TableHeaderBase::getMFColumnHeaders(void) const
{
    return &_mfColumnHeaders;
}

MFUnrecComponentPtr *TableHeaderBase::editMFColumnHeaders  (void)
{
    editMField(ColumnHeadersFieldMask, _mfColumnHeaders);

    return &_mfColumnHeaders;
}



void TableHeaderBase::pushToMargins(UIDrawObjectCanvas * const value)
{
    editMField(MarginsFieldMask, _mfMargins);

    _mfMargins.push_back(value);
}

void TableHeaderBase::assignMargins  (const MFUnrecUIDrawObjectCanvasPtr &value)
{
    MFUnrecUIDrawObjectCanvasPtr::const_iterator elemIt  =
        value.begin();
    MFUnrecUIDrawObjectCanvasPtr::const_iterator elemEnd =
        value.end  ();

    static_cast<TableHeader *>(this)->clearMargins();

    while(elemIt != elemEnd)
    {
        this->pushToMargins(*elemIt);

        ++elemIt;
    }
}

void TableHeaderBase::removeFromMargins(UInt32 uiIndex)
{
    if(uiIndex < _mfMargins.size())
    {
        editMField(MarginsFieldMask, _mfMargins);

        _mfMargins.erase(uiIndex);
    }
}

void TableHeaderBase::removeObjFromMargins(UIDrawObjectCanvas * const value)
{
    Int32 iElemIdx = _mfMargins.findIndex(value);

    if(iElemIdx != -1)
    {
        editMField(MarginsFieldMask, _mfMargins);

        _mfMargins.erase(iElemIdx);
    }
}
void TableHeaderBase::clearMargins(void)
{
    editMField(MarginsFieldMask, _mfMargins);


    _mfMargins.clear();
}

void TableHeaderBase::pushToColumnHeaders(Component * const value)
{
    editMField(ColumnHeadersFieldMask, _mfColumnHeaders);

    _mfColumnHeaders.push_back(value);
}

void TableHeaderBase::assignColumnHeaders(const MFUnrecComponentPtr &value)
{
    MFUnrecComponentPtr::const_iterator elemIt  =
        value.begin();
    MFUnrecComponentPtr::const_iterator elemEnd =
        value.end  ();

    static_cast<TableHeader *>(this)->clearColumnHeaders();

    while(elemIt != elemEnd)
    {
        this->pushToColumnHeaders(*elemIt);

        ++elemIt;
    }
}

void TableHeaderBase::removeFromColumnHeaders(UInt32 uiIndex)
{
    if(uiIndex < _mfColumnHeaders.size())
    {
        editMField(ColumnHeadersFieldMask, _mfColumnHeaders);

        _mfColumnHeaders.erase(uiIndex);
    }
}

void TableHeaderBase::removeObjFromColumnHeaders(Component * const value)
{
    Int32 iElemIdx = _mfColumnHeaders.findIndex(value);

    if(iElemIdx != -1)
    {
        editMField(ColumnHeadersFieldMask, _mfColumnHeaders);

        _mfColumnHeaders.erase(iElemIdx);
    }
}
void TableHeaderBase::clearColumnHeaders(void)
{
    editMField(ColumnHeadersFieldMask, _mfColumnHeaders);


    _mfColumnHeaders.clear();
}



/*------------------------------ access -----------------------------------*/

UInt32 TableHeaderBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (TableFieldMask & whichField))
    {
        returnValue += _sfTable.getBinSize();
    }
    if(FieldBits::NoField != (ColumnModelFieldMask & whichField))
    {
        returnValue += _sfColumnModel.getBinSize();
    }
    if(FieldBits::NoField != (ReorderingAllowedFieldMask & whichField))
    {
        returnValue += _sfReorderingAllowed.getBinSize();
    }
    if(FieldBits::NoField != (ResizingAllowedFieldMask & whichField))
    {
        returnValue += _sfResizingAllowed.getBinSize();
    }
    if(FieldBits::NoField != (ResizingCursorDriftAllowanceFieldMask & whichField))
    {
        returnValue += _sfResizingCursorDriftAllowance.getBinSize();
    }
    if(FieldBits::NoField != (DefaultMarginDrawObjectFieldMask & whichField))
    {
        returnValue += _sfDefaultMarginDrawObject.getBinSize();
    }
    if(FieldBits::NoField != (MarginsFieldMask & whichField))
    {
        returnValue += _mfMargins.getBinSize();
    }
    if(FieldBits::NoField != (ColumnHeadersFieldMask & whichField))
    {
        returnValue += _mfColumnHeaders.getBinSize();
    }

    return returnValue;
}

void TableHeaderBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (TableFieldMask & whichField))
    {
        _sfTable.copyToBin(pMem);
    }
    if(FieldBits::NoField != (ColumnModelFieldMask & whichField))
    {
        _sfColumnModel.copyToBin(pMem);
    }
    if(FieldBits::NoField != (ReorderingAllowedFieldMask & whichField))
    {
        _sfReorderingAllowed.copyToBin(pMem);
    }
    if(FieldBits::NoField != (ResizingAllowedFieldMask & whichField))
    {
        _sfResizingAllowed.copyToBin(pMem);
    }
    if(FieldBits::NoField != (ResizingCursorDriftAllowanceFieldMask & whichField))
    {
        _sfResizingCursorDriftAllowance.copyToBin(pMem);
    }
    if(FieldBits::NoField != (DefaultMarginDrawObjectFieldMask & whichField))
    {
        _sfDefaultMarginDrawObject.copyToBin(pMem);
    }
    if(FieldBits::NoField != (MarginsFieldMask & whichField))
    {
        _mfMargins.copyToBin(pMem);
    }
    if(FieldBits::NoField != (ColumnHeadersFieldMask & whichField))
    {
        _mfColumnHeaders.copyToBin(pMem);
    }
}

void TableHeaderBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (TableFieldMask & whichField))
    {
        _sfTable.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (ColumnModelFieldMask & whichField))
    {
        _sfColumnModel.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (ReorderingAllowedFieldMask & whichField))
    {
        _sfReorderingAllowed.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (ResizingAllowedFieldMask & whichField))
    {
        _sfResizingAllowed.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (ResizingCursorDriftAllowanceFieldMask & whichField))
    {
        _sfResizingCursorDriftAllowance.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (DefaultMarginDrawObjectFieldMask & whichField))
    {
        _sfDefaultMarginDrawObject.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (MarginsFieldMask & whichField))
    {
        _mfMargins.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (ColumnHeadersFieldMask & whichField))
    {
        _mfColumnHeaders.copyFromBin(pMem);
    }
}

//! create a new instance of the class
TableHeaderTransitPtr TableHeaderBase::createLocal(BitVector bFlags)
{
    TableHeaderTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyLocal(bFlags);

        fc = dynamic_pointer_cast<TableHeader>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class, copy the container flags
TableHeaderTransitPtr TableHeaderBase::createDependent(BitVector bFlags)
{
    TableHeaderTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyDependent(bFlags);

        fc = dynamic_pointer_cast<TableHeader>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class
TableHeaderTransitPtr TableHeaderBase::create(void)
{
    TableHeaderTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopy();

        fc = dynamic_pointer_cast<TableHeader>(tmpPtr);
    }

    return fc;
}

TableHeader *TableHeaderBase::createEmptyLocal(BitVector bFlags)
{
    TableHeader *returnValue;

    newPtr<TableHeader>(returnValue, bFlags);

    returnValue->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

//! create an empty new instance of the class, do not copy the prototype
TableHeader *TableHeaderBase::createEmpty(void)
{
    TableHeader *returnValue;

    newPtr<TableHeader>(returnValue, Thread::getCurrentLocalFlags());

    returnValue->_pFieldFlags->_bNamespaceMask &=
        ~Thread::getCurrentLocalFlags();

    return returnValue;
}


FieldContainerTransitPtr TableHeaderBase::shallowCopyLocal(
    BitVector bFlags) const
{
    TableHeader *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const TableHeader *>(this), bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

FieldContainerTransitPtr TableHeaderBase::shallowCopyDependent(
    BitVector bFlags) const
{
    TableHeader *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const TableHeader *>(this), ~bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask = bFlags;

    return returnValue;
}

FieldContainerTransitPtr TableHeaderBase::shallowCopy(void) const
{
    TableHeader *tmpPtr;

    newPtr(tmpPtr,
           dynamic_cast<const TableHeader *>(this),
           Thread::getCurrentLocalFlags());

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~Thread::getCurrentLocalFlags();

    FieldContainerTransitPtr returnValue(tmpPtr);

    return returnValue;
}



/*------------------------- constructors ----------------------------------*/

TableHeaderBase::TableHeaderBase(void) :
    Inherited(),
    _sfTable                  (NULL),
    _sfColumnModel            (NULL),
    _sfReorderingAllowed      (bool(true)),
    _sfResizingAllowed        (bool(true)),
    _sfResizingCursorDriftAllowance(UInt32(1)),
    _sfDefaultMarginDrawObject(NULL),
    _mfMargins                (),
    _mfColumnHeaders          ()
{
}

TableHeaderBase::TableHeaderBase(const TableHeaderBase &source) :
    Inherited(source),
    _sfTable                  (NULL),
    _sfColumnModel            (NULL),
    _sfReorderingAllowed      (source._sfReorderingAllowed      ),
    _sfResizingAllowed        (source._sfResizingAllowed        ),
    _sfResizingCursorDriftAllowance(source._sfResizingCursorDriftAllowance),
    _sfDefaultMarginDrawObject(NULL),
    _mfMargins                (),
    _mfColumnHeaders          ()
{
}


/*-------------------------- destructors ----------------------------------*/

TableHeaderBase::~TableHeaderBase(void)
{
}
/*-------------------------------------------------------------------------*/
/* Parent linking                                                          */

bool TableHeaderBase::linkParent(
    FieldContainer * const pParent,
    UInt16           const childFieldId,
    UInt16           const parentFieldId )
{
    if(parentFieldId == TableFieldId)
    {
        FieldContainer * pTypedParent =
            dynamic_cast< FieldContainer * >(pParent);

        if(pTypedParent != NULL)
        {
            FieldContainer *pOldParent =
                _sfTable.getValue         ();

            UInt16 oldChildFieldId =
                _sfTable.getParentFieldPos();

            if(pOldParent != NULL)
            {
                pOldParent->unlinkChild(this, oldChildFieldId);
            }

            editSField(TableFieldMask);

            _sfTable.setValue(static_cast<FieldContainer *>(pParent), childFieldId);

            return true;
        }

        return false;
    }

    return Inherited::linkParent(pParent, childFieldId, parentFieldId);
}

bool TableHeaderBase::unlinkParent(
    FieldContainer * const pParent,
    UInt16           const parentFieldId)
{
    if(parentFieldId == TableFieldId)
    {
        FieldContainer * pTypedParent =
            dynamic_cast< FieldContainer * >(pParent);

        if(pTypedParent != NULL)
        {
            if(_sfTable.getValue() == pParent)
            {
                editSField(TableFieldMask);

                _sfTable.setValue(NULL, 0xFFFF);

                return true;
            }

            FWARNING(("TableHeaderBase::unlinkParent: "
                      "Child <-> Parent link inconsistent.\n"));

            return false;
        }

        return false;
    }

    return Inherited::unlinkParent(pParent, parentFieldId);
}


void TableHeaderBase::onCreate(const TableHeader *source)
{
    Inherited::onCreate(source);

    if(source != NULL)
    {
        TableHeader *pThis = static_cast<TableHeader *>(this);

        pThis->setColumnModel(source->getColumnModel());

        pThis->setDefaultMarginDrawObject(source->getDefaultMarginDrawObject());

        MFUnrecUIDrawObjectCanvasPtr::const_iterator MarginsIt  =
            source->_mfMargins.begin();
        MFUnrecUIDrawObjectCanvasPtr::const_iterator MarginsEnd =
            source->_mfMargins.end  ();

        while(MarginsIt != MarginsEnd)
        {
            pThis->pushToMargins(*MarginsIt);

            ++MarginsIt;
        }

        MFUnrecComponentPtr::const_iterator ColumnHeadersIt  =
            source->_mfColumnHeaders.begin();
        MFUnrecComponentPtr::const_iterator ColumnHeadersEnd =
            source->_mfColumnHeaders.end  ();

        while(ColumnHeadersIt != ColumnHeadersEnd)
        {
            pThis->pushToColumnHeaders(*ColumnHeadersIt);

            ++ColumnHeadersIt;
        }
    }
}

GetFieldHandlePtr TableHeaderBase::getHandleTable           (void) const
{
    SFParentFieldContainerPtr::GetHandlePtr returnValue;

    return returnValue;
}

EditFieldHandlePtr TableHeaderBase::editHandleTable          (void)
{
    EditFieldHandlePtr returnValue;

    return returnValue;
}

GetFieldHandlePtr TableHeaderBase::getHandleColumnModel     (void) const
{
    SFUnrecTableColumnModelPtr::GetHandlePtr returnValue(
        new  SFUnrecTableColumnModelPtr::GetHandle(
             &_sfColumnModel,
             this->getType().getFieldDesc(ColumnModelFieldId),
             const_cast<TableHeaderBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr TableHeaderBase::editHandleColumnModel    (void)
{
    SFUnrecTableColumnModelPtr::EditHandlePtr returnValue(
        new  SFUnrecTableColumnModelPtr::EditHandle(
             &_sfColumnModel,
             this->getType().getFieldDesc(ColumnModelFieldId),
             this));

    returnValue->setSetMethod(
        boost::bind(&TableHeader::setColumnModel,
                    static_cast<TableHeader *>(this), _1));

    editSField(ColumnModelFieldMask);

    return returnValue;
}

GetFieldHandlePtr TableHeaderBase::getHandleReorderingAllowed (void) const
{
    SFBool::GetHandlePtr returnValue(
        new  SFBool::GetHandle(
             &_sfReorderingAllowed,
             this->getType().getFieldDesc(ReorderingAllowedFieldId),
             const_cast<TableHeaderBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr TableHeaderBase::editHandleReorderingAllowed(void)
{
    SFBool::EditHandlePtr returnValue(
        new  SFBool::EditHandle(
             &_sfReorderingAllowed,
             this->getType().getFieldDesc(ReorderingAllowedFieldId),
             this));


    editSField(ReorderingAllowedFieldMask);

    return returnValue;
}

GetFieldHandlePtr TableHeaderBase::getHandleResizingAllowed (void) const
{
    SFBool::GetHandlePtr returnValue(
        new  SFBool::GetHandle(
             &_sfResizingAllowed,
             this->getType().getFieldDesc(ResizingAllowedFieldId),
             const_cast<TableHeaderBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr TableHeaderBase::editHandleResizingAllowed(void)
{
    SFBool::EditHandlePtr returnValue(
        new  SFBool::EditHandle(
             &_sfResizingAllowed,
             this->getType().getFieldDesc(ResizingAllowedFieldId),
             this));


    editSField(ResizingAllowedFieldMask);

    return returnValue;
}

GetFieldHandlePtr TableHeaderBase::getHandleResizingCursorDriftAllowance (void) const
{
    SFUInt32::GetHandlePtr returnValue(
        new  SFUInt32::GetHandle(
             &_sfResizingCursorDriftAllowance,
             this->getType().getFieldDesc(ResizingCursorDriftAllowanceFieldId),
             const_cast<TableHeaderBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr TableHeaderBase::editHandleResizingCursorDriftAllowance(void)
{
    SFUInt32::EditHandlePtr returnValue(
        new  SFUInt32::EditHandle(
             &_sfResizingCursorDriftAllowance,
             this->getType().getFieldDesc(ResizingCursorDriftAllowanceFieldId),
             this));


    editSField(ResizingCursorDriftAllowanceFieldMask);

    return returnValue;
}

GetFieldHandlePtr TableHeaderBase::getHandleDefaultMarginDrawObject (void) const
{
    SFUnrecUIDrawObjectCanvasPtr::GetHandlePtr returnValue(
        new  SFUnrecUIDrawObjectCanvasPtr::GetHandle(
             &_sfDefaultMarginDrawObject,
             this->getType().getFieldDesc(DefaultMarginDrawObjectFieldId),
             const_cast<TableHeaderBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr TableHeaderBase::editHandleDefaultMarginDrawObject(void)
{
    SFUnrecUIDrawObjectCanvasPtr::EditHandlePtr returnValue(
        new  SFUnrecUIDrawObjectCanvasPtr::EditHandle(
             &_sfDefaultMarginDrawObject,
             this->getType().getFieldDesc(DefaultMarginDrawObjectFieldId),
             this));

    returnValue->setSetMethod(
        boost::bind(&TableHeader::setDefaultMarginDrawObject,
                    static_cast<TableHeader *>(this), _1));

    editSField(DefaultMarginDrawObjectFieldMask);

    return returnValue;
}

GetFieldHandlePtr TableHeaderBase::getHandleMargins         (void) const
{
    MFUnrecUIDrawObjectCanvasPtr::GetHandlePtr returnValue(
        new  MFUnrecUIDrawObjectCanvasPtr::GetHandle(
             &_mfMargins,
             this->getType().getFieldDesc(MarginsFieldId),
             const_cast<TableHeaderBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr TableHeaderBase::editHandleMargins        (void)
{
    MFUnrecUIDrawObjectCanvasPtr::EditHandlePtr returnValue(
        new  MFUnrecUIDrawObjectCanvasPtr::EditHandle(
             &_mfMargins,
             this->getType().getFieldDesc(MarginsFieldId),
             this));

    returnValue->setAddMethod(
        boost::bind(&TableHeader::pushToMargins,
                    static_cast<TableHeader *>(this), _1));
    returnValue->setRemoveMethod(
        boost::bind(&TableHeader::removeFromMargins,
                    static_cast<TableHeader *>(this), _1));
    returnValue->setRemoveObjMethod(
        boost::bind(&TableHeader::removeObjFromMargins,
                    static_cast<TableHeader *>(this), _1));
    returnValue->setClearMethod(
        boost::bind(&TableHeader::clearMargins,
                    static_cast<TableHeader *>(this)));

    editMField(MarginsFieldMask, _mfMargins);

    return returnValue;
}

GetFieldHandlePtr TableHeaderBase::getHandleColumnHeaders   (void) const
{
    MFUnrecComponentPtr::GetHandlePtr returnValue(
        new  MFUnrecComponentPtr::GetHandle(
             &_mfColumnHeaders,
             this->getType().getFieldDesc(ColumnHeadersFieldId),
             const_cast<TableHeaderBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr TableHeaderBase::editHandleColumnHeaders  (void)
{
    MFUnrecComponentPtr::EditHandlePtr returnValue(
        new  MFUnrecComponentPtr::EditHandle(
             &_mfColumnHeaders,
             this->getType().getFieldDesc(ColumnHeadersFieldId),
             this));

    returnValue->setAddMethod(
        boost::bind(&TableHeader::pushToColumnHeaders,
                    static_cast<TableHeader *>(this), _1));
    returnValue->setRemoveMethod(
        boost::bind(&TableHeader::removeFromColumnHeaders,
                    static_cast<TableHeader *>(this), _1));
    returnValue->setRemoveObjMethod(
        boost::bind(&TableHeader::removeObjFromColumnHeaders,
                    static_cast<TableHeader *>(this), _1));
    returnValue->setClearMethod(
        boost::bind(&TableHeader::clearColumnHeaders,
                    static_cast<TableHeader *>(this)));

    editMField(ColumnHeadersFieldMask, _mfColumnHeaders);

    return returnValue;
}



#ifdef OSG_MT_CPTR_ASPECT
void TableHeaderBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    TableHeader *pThis = static_cast<TableHeader *>(this);

    pThis->execSync(static_cast<TableHeader *>(&oFrom),
                    whichField,
                    oOffsets,
                    syncMode,
                    uiSyncInfo);
}
#endif


#ifdef OSG_MT_CPTR_ASPECT
FieldContainer *TableHeaderBase::createAspectCopy(
    const FieldContainer *pRefAspect) const
{
    TableHeader *returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const TableHeader *>(pRefAspect),
                  dynamic_cast<const TableHeader *>(this));

    return returnValue;
}
#endif

void TableHeaderBase::resolveLinks(void)
{
    Inherited::resolveLinks();

    static_cast<TableHeader *>(this)->setColumnModel(NULL);

    static_cast<TableHeader *>(this)->setDefaultMarginDrawObject(NULL);

    static_cast<TableHeader *>(this)->clearMargins();

    static_cast<TableHeader *>(this)->clearColumnHeaders();


}


OSG_END_NAMESPACE

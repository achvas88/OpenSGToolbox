/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *               Copyright (C) 2000-2006 by the OpenSG Forum                 *
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
 **     class AbstractTreeModelLayout!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

OSG_BEGIN_NAMESPACE


//! access the type of the class
inline
OSG::FieldContainerType &AbstractTreeModelLayoutBase::getClassType(void)
{
    return _type;
}

//! access the numerical type of the class
inline
OSG::UInt32 AbstractTreeModelLayoutBase::getClassTypeId(void)
{
    return _type.getId();
}

inline
OSG::UInt16 AbstractTreeModelLayoutBase::getClassGroupId(void)
{
    return _type.getGroupId();
}

/*------------------------------ get -----------------------------------*/

//! Get the value of the AbstractTreeModelLayout::_sfRootVisibleInternal field.

inline
bool &AbstractTreeModelLayoutBase::editRootVisibleInternal(void)
{
    editSField(RootVisibleInternalFieldMask);

    return _sfRootVisibleInternal.getValue();
}

//! Get the value of the AbstractTreeModelLayout::_sfRootVisibleInternal field.
inline
      bool  AbstractTreeModelLayoutBase::getRootVisibleInternal(void) const
{
    return _sfRootVisibleInternal.getValue();
}

//! Set the value of the AbstractTreeModelLayout::_sfRootVisibleInternal field.
inline
void AbstractTreeModelLayoutBase::setRootVisibleInternal(const bool value)
{
    editSField(RootVisibleInternalFieldMask);

    _sfRootVisibleInternal.setValue(value);
}
//! Get the value of the AbstractTreeModelLayout::_sfRowHeightInternal field.

inline
Real32 &AbstractTreeModelLayoutBase::editRowHeightInternal(void)
{
    editSField(RowHeightInternalFieldMask);

    return _sfRowHeightInternal.getValue();
}

//! Get the value of the AbstractTreeModelLayout::_sfRowHeightInternal field.
inline
      Real32  AbstractTreeModelLayoutBase::getRowHeightInternal(void) const
{
    return _sfRowHeightInternal.getValue();
}

//! Set the value of the AbstractTreeModelLayout::_sfRowHeightInternal field.
inline
void AbstractTreeModelLayoutBase::setRowHeightInternal(const Real32 value)
{
    editSField(RowHeightInternalFieldMask);

    _sfRowHeightInternal.setValue(value);
}
//! Get the value of the AbstractTreeModelLayout::_sfDepthOffsetInternal field.

inline
Real32 &AbstractTreeModelLayoutBase::editDepthOffsetInternal(void)
{
    editSField(DepthOffsetInternalFieldMask);

    return _sfDepthOffsetInternal.getValue();
}

//! Get the value of the AbstractTreeModelLayout::_sfDepthOffsetInternal field.
inline
      Real32  AbstractTreeModelLayoutBase::getDepthOffsetInternal(void) const
{
    return _sfDepthOffsetInternal.getValue();
}

//! Set the value of the AbstractTreeModelLayout::_sfDepthOffsetInternal field.
inline
void AbstractTreeModelLayoutBase::setDepthOffsetInternal(const Real32 value)
{
    editSField(DepthOffsetInternalFieldMask);

    _sfDepthOffsetInternal.setValue(value);
}


#ifdef OSG_MT_CPTR_ASPECT
inline
void AbstractTreeModelLayoutBase::execSync (      AbstractTreeModelLayoutBase *pFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    Inherited::execSync(pFrom, whichField, oOffsets, syncMode, uiSyncInfo);

    if(FieldBits::NoField != (RootVisibleInternalFieldMask & whichField))
        _sfRootVisibleInternal.syncWith(pFrom->_sfRootVisibleInternal);

    if(FieldBits::NoField != (RowHeightInternalFieldMask & whichField))
        _sfRowHeightInternal.syncWith(pFrom->_sfRowHeightInternal);

    if(FieldBits::NoField != (DepthOffsetInternalFieldMask & whichField))
        _sfDepthOffsetInternal.syncWith(pFrom->_sfDepthOffsetInternal);
}
#endif


inline
const Char8 *AbstractTreeModelLayoutBase::getClassname(void)
{
    return "AbstractTreeModelLayout";
}
OSG_GEN_CONTAINERPTR(AbstractTreeModelLayout);

OSG_END_NAMESPACE


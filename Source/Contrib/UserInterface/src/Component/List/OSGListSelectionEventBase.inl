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
 **     class ListSelectionEvent!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

OSG_BEGIN_NAMESPACE


//! access the type of the class
inline
OSG::FieldContainerType &ListSelectionEventBase::getClassType(void)
{
    return _type;
}

//! access the numerical type of the class
inline
OSG::UInt32 ListSelectionEventBase::getClassTypeId(void)
{
    return _type.getId();
}

inline
OSG::UInt16 ListSelectionEventBase::getClassGroupId(void)
{
    return _type.getGroupId();
}

/*------------------------------ get -----------------------------------*/

//! Get the value of the ListSelectionEvent::_sfFirstIndex field.

inline
Int32 &ListSelectionEventBase::editFirstIndex(void)
{
    editSField(FirstIndexFieldMask);

    return _sfFirstIndex.getValue();
}

//! Get the value of the ListSelectionEvent::_sfFirstIndex field.
inline
      Int32  ListSelectionEventBase::getFirstIndex(void) const
{
    return _sfFirstIndex.getValue();
}

//! Set the value of the ListSelectionEvent::_sfFirstIndex field.
inline
void ListSelectionEventBase::setFirstIndex(const Int32 value)
{
    editSField(FirstIndexFieldMask);

    _sfFirstIndex.setValue(value);
}
//! Get the value of the ListSelectionEvent::_sfLastIndex field.

inline
Int32 &ListSelectionEventBase::editLastIndex(void)
{
    editSField(LastIndexFieldMask);

    return _sfLastIndex.getValue();
}

//! Get the value of the ListSelectionEvent::_sfLastIndex field.
inline
      Int32  ListSelectionEventBase::getLastIndex(void) const
{
    return _sfLastIndex.getValue();
}

//! Set the value of the ListSelectionEvent::_sfLastIndex field.
inline
void ListSelectionEventBase::setLastIndex(const Int32 value)
{
    editSField(LastIndexFieldMask);

    _sfLastIndex.setValue(value);
}
//! Get the value of the ListSelectionEvent::_sfValueIsAdjusting field.

inline
bool &ListSelectionEventBase::editValueIsAdjusting(void)
{
    editSField(ValueIsAdjustingFieldMask);

    return _sfValueIsAdjusting.getValue();
}

//! Get the value of the ListSelectionEvent::_sfValueIsAdjusting field.
inline
      bool  ListSelectionEventBase::getValueIsAdjusting(void) const
{
    return _sfValueIsAdjusting.getValue();
}

//! Set the value of the ListSelectionEvent::_sfValueIsAdjusting field.
inline
void ListSelectionEventBase::setValueIsAdjusting(const bool value)
{
    editSField(ValueIsAdjustingFieldMask);

    _sfValueIsAdjusting.setValue(value);
}


#ifdef OSG_MT_CPTR_ASPECT
inline
void ListSelectionEventBase::execSync (      ListSelectionEventBase *pFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    Inherited::execSync(pFrom, whichField, oOffsets, syncMode, uiSyncInfo);

    if(FieldBits::NoField != (FirstIndexFieldMask & whichField))
        _sfFirstIndex.syncWith(pFrom->_sfFirstIndex);

    if(FieldBits::NoField != (LastIndexFieldMask & whichField))
        _sfLastIndex.syncWith(pFrom->_sfLastIndex);

    if(FieldBits::NoField != (ValueIsAdjustingFieldMask & whichField))
        _sfValueIsAdjusting.syncWith(pFrom->_sfValueIsAdjusting);
}
#endif


inline
const Char8 *ListSelectionEventBase::getClassname(void)
{
    return "ListSelectionEvent";
}
OSG_GEN_CONTAINERPTR(ListSelectionEvent);

OSG_END_NAMESPACE

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
 **     class PopupMenu!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

OSG_BEGIN_NAMESPACE


//! access the type of the class
inline
OSG::FieldContainerType &PopupMenuBase::getClassType(void)
{
    return _type;
}

//! access the numerical type of the class
inline
OSG::UInt32 PopupMenuBase::getClassTypeId(void)
{
    return _type.getId();
}
//! access the producer type of the class
inline
const EventProducerType &PopupMenuBase::getProducerClassType(void)
{
    return _producerType;
}

//! access the producer type id of the class
inline
UInt32 PopupMenuBase::getProducerClassTypeId(void)
{
    return _producerType.getId();
}

inline
OSG::UInt16 PopupMenuBase::getClassGroupId(void)
{
    return _type.getGroupId();
}

/*------------------------------ get -----------------------------------*/

//! Get the value of the PopupMenu::_sfSubMenuDelay field.

inline
Real32 &PopupMenuBase::editSubMenuDelay(void)
{
    editSField(SubMenuDelayFieldMask);

    return _sfSubMenuDelay.getValue();
}

//! Get the value of the PopupMenu::_sfSubMenuDelay field.
inline
      Real32  PopupMenuBase::getSubMenuDelay(void) const
{
    return _sfSubMenuDelay.getValue();
}

//! Set the value of the PopupMenu::_sfSubMenuDelay field.
inline
void PopupMenuBase::setSubMenuDelay(const Real32 value)
{
    editSField(SubMenuDelayFieldMask);

    _sfSubMenuDelay.setValue(value);
}

//! Get the value of the PopupMenu::_sfInvoker field.
inline
Component * PopupMenuBase::getInvoker(void) const
{
    return _sfInvoker.getValue();
}

//! Set the value of the PopupMenu::_sfInvoker field.
inline
void PopupMenuBase::setInvoker(Component * const value)
{
    editSField(InvokerFieldMask);

    _sfInvoker.setValue(value);
}

//! Get the value of the PopupMenu::_sfDefaultSeparator field.
inline
Separator * PopupMenuBase::getDefaultSeparator(void) const
{
    return _sfDefaultSeparator.getValue();
}

//! Set the value of the PopupMenu::_sfDefaultSeparator field.
inline
void PopupMenuBase::setDefaultSeparator(Separator * const value)
{
    editSField(DefaultSeparatorFieldMask);

    _sfDefaultSeparator.setValue(value);
}

//! Get the value of the PopupMenu::_sfSelectionModel field.
inline
SingleSelectionModel * PopupMenuBase::getSelectionModel(void) const
{
    return _sfSelectionModel.getValue();
}

//! Set the value of the PopupMenu::_sfSelectionModel field.
inline
void PopupMenuBase::setSelectionModel(SingleSelectionModel * const value)
{
    editSField(SelectionModelFieldMask);

    _sfSelectionModel.setValue(value);
}


#ifdef OSG_MT_CPTR_ASPECT
inline
void PopupMenuBase::execSync (      PopupMenuBase *pFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    Inherited::execSync(pFrom, whichField, oOffsets, syncMode, uiSyncInfo);

    if(FieldBits::NoField != (SubMenuDelayFieldMask & whichField))
        _sfSubMenuDelay.syncWith(pFrom->_sfSubMenuDelay);

    if(FieldBits::NoField != (InvokerFieldMask & whichField))
        _sfInvoker.syncWith(pFrom->_sfInvoker);

    if(FieldBits::NoField != (DefaultSeparatorFieldMask & whichField))
        _sfDefaultSeparator.syncWith(pFrom->_sfDefaultSeparator);

    if(FieldBits::NoField != (SelectionModelFieldMask & whichField))
        _sfSelectionModel.syncWith(pFrom->_sfSelectionModel);
}
#endif


inline
const Char8 *PopupMenuBase::getClassname(void)
{
    return "PopupMenu";
}
OSG_GEN_CONTAINERPTR(PopupMenu);

OSG_END_NAMESPACE

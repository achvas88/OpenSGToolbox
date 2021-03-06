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
 **     class TextComponent!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include "OSGTextEventDetails.h"
#include "OSGCaretEventDetails.h"

OSG_BEGIN_NAMESPACE


//! access the type of the class
inline
OSG::FieldContainerType &TextComponentBase::getClassType(void)
{
    return _type;
}

//! access the numerical type of the class
inline
OSG::UInt32 TextComponentBase::getClassTypeId(void)
{
    return _type.getId();
}
//! access the producer type of the class
inline
const EventProducerType &TextComponentBase::getProducerClassType(void)
{
    return _producerType;
}

//! access the producer type id of the class
inline
UInt32 TextComponentBase::getProducerClassTypeId(void)
{
    return _producerType.getId();
}

inline
OSG::UInt16 TextComponentBase::getClassGroupId(void)
{
    return _type.getGroupId();
}

/*------------------------------ get -----------------------------------*/

//! Get the value of the TextComponent::_sfText field.

inline
std::string &TextComponentBase::editText(void)
{
    editSField(TextFieldMask);

    return _sfText.getValue();
}

//! Get the value of the TextComponent::_sfText field.
inline
const std::string &TextComponentBase::getText(void) const
{
    return _sfText.getValue();
}

//! Set the value of the TextComponent::_sfText field.
inline
void TextComponentBase::setText(const std::string &value)
{
    editSField(TextFieldMask);

    _sfText.setValue(value);
}
//! Get the value of the TextComponent::_sfCaretPosition field.

inline
UInt32 &TextComponentBase::editCaretPosition(void)
{
    editSField(CaretPositionFieldMask);

    return _sfCaretPosition.getValue();
}

//! Get the value of the TextComponent::_sfCaretPosition field.
inline
      UInt32  TextComponentBase::getCaretPosition(void) const
{
    return _sfCaretPosition.getValue();
}

//! Set the value of the TextComponent::_sfCaretPosition field.
inline
void TextComponentBase::setCaretPosition(const UInt32 value)
{
    editSField(CaretPositionFieldMask);

    _sfCaretPosition.setValue(value);
}

//! Get the value of the TextComponent::_sfFont field.
inline
UIFont * TextComponentBase::getFont(void) const
{
    return _sfFont.getValue();
}

//! Set the value of the TextComponent::_sfFont field.
inline
void TextComponentBase::setFont(UIFont * const value)
{
    editSField(FontFieldMask);

    _sfFont.setValue(value);
}
//! Get the value of the TextComponent::_sfSelectionBoxColor field.

inline
Color4f &TextComponentBase::editSelectionBoxColor(void)
{
    editSField(SelectionBoxColorFieldMask);

    return _sfSelectionBoxColor.getValue();
}

//! Get the value of the TextComponent::_sfSelectionBoxColor field.
inline
const Color4f &TextComponentBase::getSelectionBoxColor(void) const
{
    return _sfSelectionBoxColor.getValue();
}

//! Set the value of the TextComponent::_sfSelectionBoxColor field.
inline
void TextComponentBase::setSelectionBoxColor(const Color4f &value)
{
    editSField(SelectionBoxColorFieldMask);

    _sfSelectionBoxColor.setValue(value);
}
//! Get the value of the TextComponent::_sfSelectionTextColor field.

inline
Color4f &TextComponentBase::editSelectionTextColor(void)
{
    editSField(SelectionTextColorFieldMask);

    return _sfSelectionTextColor.getValue();
}

//! Get the value of the TextComponent::_sfSelectionTextColor field.
inline
const Color4f &TextComponentBase::getSelectionTextColor(void) const
{
    return _sfSelectionTextColor.getValue();
}

//! Set the value of the TextComponent::_sfSelectionTextColor field.
inline
void TextComponentBase::setSelectionTextColor(const Color4f &value)
{
    editSField(SelectionTextColorFieldMask);

    _sfSelectionTextColor.setValue(value);
}
//! Get the value of the TextComponent::_sfActiveTextColor field.

inline
Color4f &TextComponentBase::editActiveTextColor(void)
{
    editSField(ActiveTextColorFieldMask);

    return _sfActiveTextColor.getValue();
}

//! Get the value of the TextComponent::_sfActiveTextColor field.
inline
const Color4f &TextComponentBase::getActiveTextColor(void) const
{
    return _sfActiveTextColor.getValue();
}

//! Set the value of the TextComponent::_sfActiveTextColor field.
inline
void TextComponentBase::setActiveTextColor(const Color4f &value)
{
    editSField(ActiveTextColorFieldMask);

    _sfActiveTextColor.setValue(value);
}
//! Get the value of the TextComponent::_sfFocusedTextColor field.

inline
Color4f &TextComponentBase::editFocusedTextColor(void)
{
    editSField(FocusedTextColorFieldMask);

    return _sfFocusedTextColor.getValue();
}

//! Get the value of the TextComponent::_sfFocusedTextColor field.
inline
const Color4f &TextComponentBase::getFocusedTextColor(void) const
{
    return _sfFocusedTextColor.getValue();
}

//! Set the value of the TextComponent::_sfFocusedTextColor field.
inline
void TextComponentBase::setFocusedTextColor(const Color4f &value)
{
    editSField(FocusedTextColorFieldMask);

    _sfFocusedTextColor.setValue(value);
}
//! Get the value of the TextComponent::_sfRolloverTextColor field.

inline
Color4f &TextComponentBase::editRolloverTextColor(void)
{
    editSField(RolloverTextColorFieldMask);

    return _sfRolloverTextColor.getValue();
}

//! Get the value of the TextComponent::_sfRolloverTextColor field.
inline
const Color4f &TextComponentBase::getRolloverTextColor(void) const
{
    return _sfRolloverTextColor.getValue();
}

//! Set the value of the TextComponent::_sfRolloverTextColor field.
inline
void TextComponentBase::setRolloverTextColor(const Color4f &value)
{
    editSField(RolloverTextColorFieldMask);

    _sfRolloverTextColor.setValue(value);
}
//! Get the value of the TextComponent::_sfDisabledTextColor field.

inline
Color4f &TextComponentBase::editDisabledTextColor(void)
{
    editSField(DisabledTextColorFieldMask);

    return _sfDisabledTextColor.getValue();
}

//! Get the value of the TextComponent::_sfDisabledTextColor field.
inline
const Color4f &TextComponentBase::getDisabledTextColor(void) const
{
    return _sfDisabledTextColor.getValue();
}

//! Set the value of the TextComponent::_sfDisabledTextColor field.
inline
void TextComponentBase::setDisabledTextColor(const Color4f &value)
{
    editSField(DisabledTextColorFieldMask);

    _sfDisabledTextColor.setValue(value);
}
//! Get the value of the TextComponent::_sfTextColor field.

inline
Color4f &TextComponentBase::editTextColor(void)
{
    editSField(TextColorFieldMask);

    return _sfTextColor.getValue();
}

//! Get the value of the TextComponent::_sfTextColor field.
inline
const Color4f &TextComponentBase::getTextColor(void) const
{
    return _sfTextColor.getValue();
}

//! Set the value of the TextComponent::_sfTextColor field.
inline
void TextComponentBase::setTextColor(const Color4f &value)
{
    editSField(TextColorFieldMask);

    _sfTextColor.setValue(value);
}


#ifdef OSG_MT_CPTR_ASPECT
inline
void TextComponentBase::execSync (      TextComponentBase *pFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    Inherited::execSync(pFrom, whichField, oOffsets, syncMode, uiSyncInfo);

    if(FieldBits::NoField != (TextFieldMask & whichField))
        _sfText.syncWith(pFrom->_sfText);

    if(FieldBits::NoField != (CaretPositionFieldMask & whichField))
        _sfCaretPosition.syncWith(pFrom->_sfCaretPosition);

    if(FieldBits::NoField != (FontFieldMask & whichField))
        _sfFont.syncWith(pFrom->_sfFont);

    if(FieldBits::NoField != (SelectionBoxColorFieldMask & whichField))
        _sfSelectionBoxColor.syncWith(pFrom->_sfSelectionBoxColor);

    if(FieldBits::NoField != (SelectionTextColorFieldMask & whichField))
        _sfSelectionTextColor.syncWith(pFrom->_sfSelectionTextColor);

    if(FieldBits::NoField != (ActiveTextColorFieldMask & whichField))
        _sfActiveTextColor.syncWith(pFrom->_sfActiveTextColor);

    if(FieldBits::NoField != (FocusedTextColorFieldMask & whichField))
        _sfFocusedTextColor.syncWith(pFrom->_sfFocusedTextColor);

    if(FieldBits::NoField != (RolloverTextColorFieldMask & whichField))
        _sfRolloverTextColor.syncWith(pFrom->_sfRolloverTextColor);

    if(FieldBits::NoField != (DisabledTextColorFieldMask & whichField))
        _sfDisabledTextColor.syncWith(pFrom->_sfDisabledTextColor);

    if(FieldBits::NoField != (TextColorFieldMask & whichField))
        _sfTextColor.syncWith(pFrom->_sfTextColor);
}
#endif


inline
const Char8 *TextComponentBase::getClassname(void)
{
    return "TextComponent";
}
inline
boost::signals2::connection  TextComponentBase::connectTextValueChanged(const TextValueChangedEventType::slot_type &listener, 
                                                                               boost::signals2::connect_position at)
{
    return _TextValueChangedEvent.connect(listener, at);
}

inline
boost::signals2::connection  TextComponentBase::connectTextValueChanged(const TextValueChangedEventType::group_type &group,
                                                    const TextValueChangedEventType::slot_type &listener, boost::signals2::connect_position at)
{
    return _TextValueChangedEvent.connect(group, listener, at);
}

inline
void  TextComponentBase::disconnectTextValueChanged(const TextValueChangedEventType::group_type &group)
{
    _TextValueChangedEvent.disconnect(group);
}

inline
void  TextComponentBase::disconnectAllSlotsTextValueChanged(void)
{
    _TextValueChangedEvent.disconnect_all_slots();
}

inline
bool  TextComponentBase::isEmptyTextValueChanged(void) const
{
    return _TextValueChangedEvent.empty();
}

inline
UInt32  TextComponentBase::numSlotsTextValueChanged(void) const
{
    return _TextValueChangedEvent.num_slots();
}

inline
void TextComponentBase::produceTextValueChanged(TextValueChangedEventDetailsType* const e)
{
    produceEvent(TextValueChangedEventId, e);
}

inline
boost::signals2::connection  TextComponentBase::connectCaretChanged(const CaretChangedEventType::slot_type &listener, 
                                                                               boost::signals2::connect_position at)
{
    return _CaretChangedEvent.connect(listener, at);
}

inline
boost::signals2::connection  TextComponentBase::connectCaretChanged(const CaretChangedEventType::group_type &group,
                                                    const CaretChangedEventType::slot_type &listener, boost::signals2::connect_position at)
{
    return _CaretChangedEvent.connect(group, listener, at);
}

inline
void  TextComponentBase::disconnectCaretChanged(const CaretChangedEventType::group_type &group)
{
    _CaretChangedEvent.disconnect(group);
}

inline
void  TextComponentBase::disconnectAllSlotsCaretChanged(void)
{
    _CaretChangedEvent.disconnect_all_slots();
}

inline
bool  TextComponentBase::isEmptyCaretChanged(void) const
{
    return _CaretChangedEvent.empty();
}

inline
UInt32  TextComponentBase::numSlotsCaretChanged(void) const
{
    return _CaretChangedEvent.num_slots();
}

inline
void TextComponentBase::produceCaretChanged(CaretChangedEventDetailsType* const e)
{
    produceEvent(CaretChangedEventId, e);
}

OSG_GEN_CONTAINERPTR(TextComponent);

OSG_END_NAMESPACE


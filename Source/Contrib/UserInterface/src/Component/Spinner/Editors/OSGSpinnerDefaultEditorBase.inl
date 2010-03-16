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
 **     class SpinnerDefaultEditor!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

OSG_BEGIN_NAMESPACE


//! access the type of the class
inline
OSG::FieldContainerType &SpinnerDefaultEditorBase::getClassType(void)
{
    return _type;
}

//! access the numerical type of the class
inline
OSG::UInt32 SpinnerDefaultEditorBase::getClassTypeId(void)
{
    return _type.getId();
}

inline
OSG::UInt16 SpinnerDefaultEditorBase::getClassGroupId(void)
{
    return _type.getGroupId();
}

/*------------------------------ get -----------------------------------*/


//! Get the value of the SpinnerDefaultEditor::_sfTextField field.
inline
TextField * SpinnerDefaultEditorBase::getTextField(void) const
{
    return _sfTextField.getValue();
}

//! Set the value of the SpinnerDefaultEditor::_sfTextField field.
inline
void SpinnerDefaultEditorBase::setTextField(TextField * const value)
{
    editSField(TextFieldFieldMask);

    _sfTextField.setValue(value);
}

//! Get the value of the SpinnerDefaultEditor::_sfSpinner field.
inline
Spinner * SpinnerDefaultEditorBase::getSpinner(void) const
{
    return _sfSpinner.getValue();
}

//! Set the value of the SpinnerDefaultEditor::_sfSpinner field.
inline
void SpinnerDefaultEditorBase::setSpinner(Spinner * const value)
{
    editSField(SpinnerFieldMask);

    _sfSpinner.setValue(value);
}


#ifdef OSG_MT_CPTR_ASPECT
inline
void SpinnerDefaultEditorBase::execSync (      SpinnerDefaultEditorBase *pFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    Inherited::execSync(pFrom, whichField, oOffsets, syncMode, uiSyncInfo);

    if(FieldBits::NoField != (TextFieldFieldMask & whichField))
        _sfTextField.syncWith(pFrom->_sfTextField);

    if(FieldBits::NoField != (SpinnerFieldMask & whichField))
        _sfSpinner.syncWith(pFrom->_sfSpinner);
}
#endif


inline
const Char8 *SpinnerDefaultEditorBase::getClassname(void)
{
    return "SpinnerDefaultEditor";
}
OSG_GEN_CONTAINERPTR(SpinnerDefaultEditor);

OSG_END_NAMESPACE

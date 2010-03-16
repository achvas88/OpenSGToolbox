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
 **     class SpringLayout!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

OSG_BEGIN_NAMESPACE


//! access the type of the class
inline
OSG::FieldContainerType &SpringLayoutBase::getClassType(void)
{
    return _type;
}

//! access the numerical type of the class
inline
OSG::UInt32 SpringLayoutBase::getClassTypeId(void)
{
    return _type.getId();
}

inline
OSG::UInt16 SpringLayoutBase::getClassGroupId(void)
{
    return _type.getGroupId();
}

/*------------------------------ get -----------------------------------*/

//! Get the value of the SpringLayout::_sfConstraints field.

inline
FieldContainerMap &SpringLayoutBase::editConstraints(void)
{
    editSField(ConstraintsFieldMask);

    return _sfConstraints.getValue();
}

//! Get the value of the SpringLayout::_sfConstraints field.
inline
const FieldContainerMap &SpringLayoutBase::getConstraints(void) const
{
    return _sfConstraints.getValue();
}

//! Set the value of the SpringLayout::_sfConstraints field.
inline
void SpringLayoutBase::setConstraints(const FieldContainerMap &value)
{
    editSField(ConstraintsFieldMask);

    _sfConstraints.setValue(value);
}


#ifdef OSG_MT_CPTR_ASPECT
inline
void SpringLayoutBase::execSync (      SpringLayoutBase *pFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    Inherited::execSync(pFrom, whichField, oOffsets, syncMode, uiSyncInfo);

    if(FieldBits::NoField != (ConstraintsFieldMask & whichField))
        _sfConstraints.syncWith(pFrom->_sfConstraints);
}
#endif


inline
const Char8 *SpringLayoutBase::getClassname(void)
{
    return "SpringLayout";
}
OSG_GEN_CONTAINERPTR(SpringLayout);

OSG_END_NAMESPACE

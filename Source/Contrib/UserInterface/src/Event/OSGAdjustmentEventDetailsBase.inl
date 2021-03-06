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
 **     class AdjustmentEventDetails!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


OSG_BEGIN_NAMESPACE


//! access the type of the class
inline
OSG::FieldContainerType &AdjustmentEventDetailsBase::getClassType(void)
{
    return _type;
}

//! access the numerical type of the class
inline
OSG::UInt32 AdjustmentEventDetailsBase::getClassTypeId(void)
{
    return _type.getId();
}

inline
OSG::UInt16 AdjustmentEventDetailsBase::getClassGroupId(void)
{
    return _type.getGroupId();
}

/*------------------------------ get -----------------------------------*/

//! Get the value of the AdjustmentEventDetails::_sfValue field.

inline
UInt32 &AdjustmentEventDetailsBase::editValue(void)
{
    editSField(ValueFieldMask);

    return _sfValue.getValue();
}

//! Get the value of the AdjustmentEventDetails::_sfValue field.
inline
      UInt32  AdjustmentEventDetailsBase::getValue(void) const
{
    return _sfValue.getValue();
}

//! Set the value of the AdjustmentEventDetails::_sfValue field.
inline
void AdjustmentEventDetailsBase::setValue(const UInt32 value)
{
    editSField(ValueFieldMask);

    _sfValue.setValue(value);
}
//! Get the value of the AdjustmentEventDetails::_sfValueIsAdjusting field.

inline
bool &AdjustmentEventDetailsBase::editValueIsAdjusting(void)
{
    editSField(ValueIsAdjustingFieldMask);

    return _sfValueIsAdjusting.getValue();
}

//! Get the value of the AdjustmentEventDetails::_sfValueIsAdjusting field.
inline
      bool  AdjustmentEventDetailsBase::getValueIsAdjusting(void) const
{
    return _sfValueIsAdjusting.getValue();
}

//! Set the value of the AdjustmentEventDetails::_sfValueIsAdjusting field.
inline
void AdjustmentEventDetailsBase::setValueIsAdjusting(const bool value)
{
    editSField(ValueIsAdjustingFieldMask);

    _sfValueIsAdjusting.setValue(value);
}


#ifdef OSG_MT_CPTR_ASPECT
inline
void AdjustmentEventDetailsBase::execSync (      AdjustmentEventDetailsBase *pFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    Inherited::execSync(pFrom, whichField, oOffsets, syncMode, uiSyncInfo);

    if(FieldBits::NoField != (ValueFieldMask & whichField))
        _sfValue.syncWith(pFrom->_sfValue);

    if(FieldBits::NoField != (ValueIsAdjustingFieldMask & whichField))
        _sfValueIsAdjusting.syncWith(pFrom->_sfValueIsAdjusting);
}
#endif


inline
const Char8 *AdjustmentEventDetailsBase::getClassname(void)
{
    return "AdjustmentEventDetails";
}
OSG_GEN_CONTAINERPTR(AdjustmentEventDetails);

OSG_END_NAMESPACE


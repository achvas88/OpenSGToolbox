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
 **     class PolygonUIDrawObject!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

OSG_BEGIN_NAMESPACE


//! access the type of the class
inline
OSG::FieldContainerType &PolygonUIDrawObjectBase::getClassType(void)
{
    return _type;
}

//! access the numerical type of the class
inline
OSG::UInt32 PolygonUIDrawObjectBase::getClassTypeId(void)
{
    return _type.getId();
}

inline
OSG::UInt16 PolygonUIDrawObjectBase::getClassGroupId(void)
{
    return _type.getGroupId();
}

/*------------------------------ get -----------------------------------*/

//! Get the value of the PolygonUIDrawObject::_sfColor field.

inline
Color4f &PolygonUIDrawObjectBase::editColor(void)
{
    editSField(ColorFieldMask);

    return _sfColor.getValue();
}

//! Get the value of the PolygonUIDrawObject::_sfColor field.
inline
const Color4f &PolygonUIDrawObjectBase::getColor(void) const
{
    return _sfColor.getValue();
}

//! Set the value of the PolygonUIDrawObject::_sfColor field.
inline
void PolygonUIDrawObjectBase::setColor(const Color4f &value)
{
    editSField(ColorFieldMask);

    _sfColor.setValue(value);
}
//! Get the value of the PolygonUIDrawObject::_sfOpacity field.

inline
Real32 &PolygonUIDrawObjectBase::editOpacity(void)
{
    editSField(OpacityFieldMask);

    return _sfOpacity.getValue();
}

//! Get the value of the PolygonUIDrawObject::_sfOpacity field.
inline
      Real32  PolygonUIDrawObjectBase::getOpacity(void) const
{
    return _sfOpacity.getValue();
}

//! Set the value of the PolygonUIDrawObject::_sfOpacity field.
inline
void PolygonUIDrawObjectBase::setOpacity(const Real32 value)
{
    editSField(OpacityFieldMask);

    _sfOpacity.setValue(value);
}

//! Get the value of the \a index element the PolygonUIDrawObject::_mfVerticies field.
inline
const Pnt2f &PolygonUIDrawObjectBase::getVerticies(const UInt32 index) const
{
    return _mfVerticies[index];
}

inline
Pnt2f &PolygonUIDrawObjectBase::editVerticies(const UInt32 index)
{
    editMField(VerticiesFieldMask, _mfVerticies);

    return _mfVerticies[index];
}



#ifdef OSG_MT_CPTR_ASPECT
inline
void PolygonUIDrawObjectBase::execSync (      PolygonUIDrawObjectBase *pFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    Inherited::execSync(pFrom, whichField, oOffsets, syncMode, uiSyncInfo);

    if(FieldBits::NoField != (VerticiesFieldMask & whichField))
        _mfVerticies.syncWith(pFrom->_mfVerticies,
                                syncMode,
                                uiSyncInfo,
                                oOffsets);

    if(FieldBits::NoField != (ColorFieldMask & whichField))
        _sfColor.syncWith(pFrom->_sfColor);

    if(FieldBits::NoField != (OpacityFieldMask & whichField))
        _sfOpacity.syncWith(pFrom->_sfOpacity);
}
#endif


inline
const Char8 *PolygonUIDrawObjectBase::getClassname(void)
{
    return "PolygonUIDrawObject";
}
OSG_GEN_CONTAINERPTR(PolygonUIDrawObject);

OSG_END_NAMESPACE

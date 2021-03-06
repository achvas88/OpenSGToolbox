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
 **     class LineUIDrawObject!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

OSG_BEGIN_NAMESPACE


//! access the type of the class
inline
OSG::FieldContainerType &LineUIDrawObjectBase::getClassType(void)
{
    return _type;
}

//! access the numerical type of the class
inline
OSG::UInt32 LineUIDrawObjectBase::getClassTypeId(void)
{
    return _type.getId();
}

inline
OSG::UInt16 LineUIDrawObjectBase::getClassGroupId(void)
{
    return _type.getGroupId();
}

/*------------------------------ get -----------------------------------*/

//! Get the value of the LineUIDrawObject::_sfTopLeft field.

inline
Pnt2f &LineUIDrawObjectBase::editTopLeft(void)
{
    editSField(TopLeftFieldMask);

    return _sfTopLeft.getValue();
}

//! Get the value of the LineUIDrawObject::_sfTopLeft field.
inline
const Pnt2f &LineUIDrawObjectBase::getTopLeft(void) const
{
    return _sfTopLeft.getValue();
}

//! Set the value of the LineUIDrawObject::_sfTopLeft field.
inline
void LineUIDrawObjectBase::setTopLeft(const Pnt2f &value)
{
    editSField(TopLeftFieldMask);

    _sfTopLeft.setValue(value);
}
//! Get the value of the LineUIDrawObject::_sfBottomRight field.

inline
Pnt2f &LineUIDrawObjectBase::editBottomRight(void)
{
    editSField(BottomRightFieldMask);

    return _sfBottomRight.getValue();
}

//! Get the value of the LineUIDrawObject::_sfBottomRight field.
inline
const Pnt2f &LineUIDrawObjectBase::getBottomRight(void) const
{
    return _sfBottomRight.getValue();
}

//! Set the value of the LineUIDrawObject::_sfBottomRight field.
inline
void LineUIDrawObjectBase::setBottomRight(const Pnt2f &value)
{
    editSField(BottomRightFieldMask);

    _sfBottomRight.setValue(value);
}
//! Get the value of the LineUIDrawObject::_sfWidth field.

inline
Real32 &LineUIDrawObjectBase::editWidth(void)
{
    editSField(WidthFieldMask);

    return _sfWidth.getValue();
}

//! Get the value of the LineUIDrawObject::_sfWidth field.
inline
      Real32  LineUIDrawObjectBase::getWidth(void) const
{
    return _sfWidth.getValue();
}

//! Set the value of the LineUIDrawObject::_sfWidth field.
inline
void LineUIDrawObjectBase::setWidth(const Real32 value)
{
    editSField(WidthFieldMask);

    _sfWidth.setValue(value);
}
//! Get the value of the LineUIDrawObject::_sfColor field.

inline
Color4f &LineUIDrawObjectBase::editColor(void)
{
    editSField(ColorFieldMask);

    return _sfColor.getValue();
}

//! Get the value of the LineUIDrawObject::_sfColor field.
inline
const Color4f &LineUIDrawObjectBase::getColor(void) const
{
    return _sfColor.getValue();
}

//! Set the value of the LineUIDrawObject::_sfColor field.
inline
void LineUIDrawObjectBase::setColor(const Color4f &value)
{
    editSField(ColorFieldMask);

    _sfColor.setValue(value);
}
//! Get the value of the LineUIDrawObject::_sfOpacity field.

inline
Real32 &LineUIDrawObjectBase::editOpacity(void)
{
    editSField(OpacityFieldMask);

    return _sfOpacity.getValue();
}

//! Get the value of the LineUIDrawObject::_sfOpacity field.
inline
      Real32  LineUIDrawObjectBase::getOpacity(void) const
{
    return _sfOpacity.getValue();
}

//! Set the value of the LineUIDrawObject::_sfOpacity field.
inline
void LineUIDrawObjectBase::setOpacity(const Real32 value)
{
    editSField(OpacityFieldMask);

    _sfOpacity.setValue(value);
}


#ifdef OSG_MT_CPTR_ASPECT
inline
void LineUIDrawObjectBase::execSync (      LineUIDrawObjectBase *pFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    Inherited::execSync(pFrom, whichField, oOffsets, syncMode, uiSyncInfo);

    if(FieldBits::NoField != (TopLeftFieldMask & whichField))
        _sfTopLeft.syncWith(pFrom->_sfTopLeft);

    if(FieldBits::NoField != (BottomRightFieldMask & whichField))
        _sfBottomRight.syncWith(pFrom->_sfBottomRight);

    if(FieldBits::NoField != (WidthFieldMask & whichField))
        _sfWidth.syncWith(pFrom->_sfWidth);

    if(FieldBits::NoField != (ColorFieldMask & whichField))
        _sfColor.syncWith(pFrom->_sfColor);

    if(FieldBits::NoField != (OpacityFieldMask & whichField))
        _sfOpacity.syncWith(pFrom->_sfOpacity);
}
#endif


inline
const Char8 *LineUIDrawObjectBase::getClassname(void)
{
    return "LineUIDrawObject";
}
OSG_GEN_CONTAINERPTR(LineUIDrawObject);

OSG_END_NAMESPACE


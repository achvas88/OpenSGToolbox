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
 **     class MultiColoredQuadUIDrawObject!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

OSG_BEGIN_NAMESPACE


//! access the type of the class
inline
OSG::FieldContainerType &MultiColoredQuadUIDrawObjectBase::getClassType(void)
{
    return _type;
}

//! access the numerical type of the class
inline
OSG::UInt32 MultiColoredQuadUIDrawObjectBase::getClassTypeId(void)
{
    return _type.getId();
}

inline
OSG::UInt16 MultiColoredQuadUIDrawObjectBase::getClassGroupId(void)
{
    return _type.getGroupId();
}

/*------------------------------ get -----------------------------------*/

//! Get the value of the MultiColoredQuadUIDrawObject::_sfPoint1 field.

inline
Pnt2f &MultiColoredQuadUIDrawObjectBase::editPoint1(void)
{
    editSField(Point1FieldMask);

    return _sfPoint1.getValue();
}

//! Get the value of the MultiColoredQuadUIDrawObject::_sfPoint1 field.
inline
const Pnt2f &MultiColoredQuadUIDrawObjectBase::getPoint1(void) const
{
    return _sfPoint1.getValue();
}

//! Set the value of the MultiColoredQuadUIDrawObject::_sfPoint1 field.
inline
void MultiColoredQuadUIDrawObjectBase::setPoint1(const Pnt2f &value)
{
    editSField(Point1FieldMask);

    _sfPoint1.setValue(value);
}
//! Get the value of the MultiColoredQuadUIDrawObject::_sfPoint2 field.

inline
Pnt2f &MultiColoredQuadUIDrawObjectBase::editPoint2(void)
{
    editSField(Point2FieldMask);

    return _sfPoint2.getValue();
}

//! Get the value of the MultiColoredQuadUIDrawObject::_sfPoint2 field.
inline
const Pnt2f &MultiColoredQuadUIDrawObjectBase::getPoint2(void) const
{
    return _sfPoint2.getValue();
}

//! Set the value of the MultiColoredQuadUIDrawObject::_sfPoint2 field.
inline
void MultiColoredQuadUIDrawObjectBase::setPoint2(const Pnt2f &value)
{
    editSField(Point2FieldMask);

    _sfPoint2.setValue(value);
}
//! Get the value of the MultiColoredQuadUIDrawObject::_sfPoint3 field.

inline
Pnt2f &MultiColoredQuadUIDrawObjectBase::editPoint3(void)
{
    editSField(Point3FieldMask);

    return _sfPoint3.getValue();
}

//! Get the value of the MultiColoredQuadUIDrawObject::_sfPoint3 field.
inline
const Pnt2f &MultiColoredQuadUIDrawObjectBase::getPoint3(void) const
{
    return _sfPoint3.getValue();
}

//! Set the value of the MultiColoredQuadUIDrawObject::_sfPoint3 field.
inline
void MultiColoredQuadUIDrawObjectBase::setPoint3(const Pnt2f &value)
{
    editSField(Point3FieldMask);

    _sfPoint3.setValue(value);
}
//! Get the value of the MultiColoredQuadUIDrawObject::_sfPoint4 field.

inline
Pnt2f &MultiColoredQuadUIDrawObjectBase::editPoint4(void)
{
    editSField(Point4FieldMask);

    return _sfPoint4.getValue();
}

//! Get the value of the MultiColoredQuadUIDrawObject::_sfPoint4 field.
inline
const Pnt2f &MultiColoredQuadUIDrawObjectBase::getPoint4(void) const
{
    return _sfPoint4.getValue();
}

//! Set the value of the MultiColoredQuadUIDrawObject::_sfPoint4 field.
inline
void MultiColoredQuadUIDrawObjectBase::setPoint4(const Pnt2f &value)
{
    editSField(Point4FieldMask);

    _sfPoint4.setValue(value);
}
//! Get the value of the MultiColoredQuadUIDrawObject::_sfColor1 field.

inline
Color4f &MultiColoredQuadUIDrawObjectBase::editColor1(void)
{
    editSField(Color1FieldMask);

    return _sfColor1.getValue();
}

//! Get the value of the MultiColoredQuadUIDrawObject::_sfColor1 field.
inline
const Color4f &MultiColoredQuadUIDrawObjectBase::getColor1(void) const
{
    return _sfColor1.getValue();
}

//! Set the value of the MultiColoredQuadUIDrawObject::_sfColor1 field.
inline
void MultiColoredQuadUIDrawObjectBase::setColor1(const Color4f &value)
{
    editSField(Color1FieldMask);

    _sfColor1.setValue(value);
}
//! Get the value of the MultiColoredQuadUIDrawObject::_sfColor2 field.

inline
Color4f &MultiColoredQuadUIDrawObjectBase::editColor2(void)
{
    editSField(Color2FieldMask);

    return _sfColor2.getValue();
}

//! Get the value of the MultiColoredQuadUIDrawObject::_sfColor2 field.
inline
const Color4f &MultiColoredQuadUIDrawObjectBase::getColor2(void) const
{
    return _sfColor2.getValue();
}

//! Set the value of the MultiColoredQuadUIDrawObject::_sfColor2 field.
inline
void MultiColoredQuadUIDrawObjectBase::setColor2(const Color4f &value)
{
    editSField(Color2FieldMask);

    _sfColor2.setValue(value);
}
//! Get the value of the MultiColoredQuadUIDrawObject::_sfColor3 field.

inline
Color4f &MultiColoredQuadUIDrawObjectBase::editColor3(void)
{
    editSField(Color3FieldMask);

    return _sfColor3.getValue();
}

//! Get the value of the MultiColoredQuadUIDrawObject::_sfColor3 field.
inline
const Color4f &MultiColoredQuadUIDrawObjectBase::getColor3(void) const
{
    return _sfColor3.getValue();
}

//! Set the value of the MultiColoredQuadUIDrawObject::_sfColor3 field.
inline
void MultiColoredQuadUIDrawObjectBase::setColor3(const Color4f &value)
{
    editSField(Color3FieldMask);

    _sfColor3.setValue(value);
}
//! Get the value of the MultiColoredQuadUIDrawObject::_sfColor4 field.

inline
Color4f &MultiColoredQuadUIDrawObjectBase::editColor4(void)
{
    editSField(Color4FieldMask);

    return _sfColor4.getValue();
}

//! Get the value of the MultiColoredQuadUIDrawObject::_sfColor4 field.
inline
const Color4f &MultiColoredQuadUIDrawObjectBase::getColor4(void) const
{
    return _sfColor4.getValue();
}

//! Set the value of the MultiColoredQuadUIDrawObject::_sfColor4 field.
inline
void MultiColoredQuadUIDrawObjectBase::setColor4(const Color4f &value)
{
    editSField(Color4FieldMask);

    _sfColor4.setValue(value);
}
//! Get the value of the MultiColoredQuadUIDrawObject::_sfOpacity field.

inline
Real32 &MultiColoredQuadUIDrawObjectBase::editOpacity(void)
{
    editSField(OpacityFieldMask);

    return _sfOpacity.getValue();
}

//! Get the value of the MultiColoredQuadUIDrawObject::_sfOpacity field.
inline
      Real32  MultiColoredQuadUIDrawObjectBase::getOpacity(void) const
{
    return _sfOpacity.getValue();
}

//! Set the value of the MultiColoredQuadUIDrawObject::_sfOpacity field.
inline
void MultiColoredQuadUIDrawObjectBase::setOpacity(const Real32 value)
{
    editSField(OpacityFieldMask);

    _sfOpacity.setValue(value);
}


#ifdef OSG_MT_CPTR_ASPECT
inline
void MultiColoredQuadUIDrawObjectBase::execSync (      MultiColoredQuadUIDrawObjectBase *pFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    Inherited::execSync(pFrom, whichField, oOffsets, syncMode, uiSyncInfo);

    if(FieldBits::NoField != (Point1FieldMask & whichField))
        _sfPoint1.syncWith(pFrom->_sfPoint1);

    if(FieldBits::NoField != (Point2FieldMask & whichField))
        _sfPoint2.syncWith(pFrom->_sfPoint2);

    if(FieldBits::NoField != (Point3FieldMask & whichField))
        _sfPoint3.syncWith(pFrom->_sfPoint3);

    if(FieldBits::NoField != (Point4FieldMask & whichField))
        _sfPoint4.syncWith(pFrom->_sfPoint4);

    if(FieldBits::NoField != (Color1FieldMask & whichField))
        _sfColor1.syncWith(pFrom->_sfColor1);

    if(FieldBits::NoField != (Color2FieldMask & whichField))
        _sfColor2.syncWith(pFrom->_sfColor2);

    if(FieldBits::NoField != (Color3FieldMask & whichField))
        _sfColor3.syncWith(pFrom->_sfColor3);

    if(FieldBits::NoField != (Color4FieldMask & whichField))
        _sfColor4.syncWith(pFrom->_sfColor4);

    if(FieldBits::NoField != (OpacityFieldMask & whichField))
        _sfOpacity.syncWith(pFrom->_sfOpacity);
}
#endif


inline
const Char8 *MultiColoredQuadUIDrawObjectBase::getClassname(void)
{
    return "MultiColoredQuadUIDrawObject";
}
OSG_GEN_CONTAINERPTR(MultiColoredQuadUIDrawObject);

OSG_END_NAMESPACE


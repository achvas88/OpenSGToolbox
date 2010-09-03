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
 **     class GlassLayer!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


OSG_BEGIN_NAMESPACE


//! access the type of the class
inline
OSG::FieldContainerType &GlassLayerBase::getClassType(void)
{
    return _type;
}

//! access the numerical type of the class
inline
OSG::UInt32 GlassLayerBase::getClassTypeId(void)
{
    return _type.getId();
}

inline
OSG::UInt16 GlassLayerBase::getClassGroupId(void)
{
    return _type.getGroupId();
}

/*------------------------------ get -----------------------------------*/

//! Get the value of the GlassLayer::_sfStartPosition field.

inline
Pnt2f &GlassLayerBase::editStartPosition(void)
{
    editSField(StartPositionFieldMask);

    return _sfStartPosition.getValue();
}

//! Get the value of the GlassLayer::_sfStartPosition field.
inline
const Pnt2f &GlassLayerBase::getStartPosition(void) const
{
    return _sfStartPosition.getValue();
}

//! Set the value of the GlassLayer::_sfStartPosition field.
inline
void GlassLayerBase::setStartPosition(const Pnt2f &value)
{
    editSField(StartPositionFieldMask);

    _sfStartPosition.setValue(value);
}
//! Get the value of the GlassLayer::_sfStartDirection field.

inline
Vec2f &GlassLayerBase::editStartDirection(void)
{
    editSField(StartDirectionFieldMask);

    return _sfStartDirection.getValue();
}

//! Get the value of the GlassLayer::_sfStartDirection field.
inline
const Vec2f &GlassLayerBase::getStartDirection(void) const
{
    return _sfStartDirection.getValue();
}

//! Set the value of the GlassLayer::_sfStartDirection field.
inline
void GlassLayerBase::setStartDirection(const Vec2f &value)
{
    editSField(StartDirectionFieldMask);

    _sfStartDirection.setValue(value);
}
//! Get the value of the GlassLayer::_sfEndPosition field.

inline
Pnt2f &GlassLayerBase::editEndPosition(void)
{
    editSField(EndPositionFieldMask);

    return _sfEndPosition.getValue();
}

//! Get the value of the GlassLayer::_sfEndPosition field.
inline
const Pnt2f &GlassLayerBase::getEndPosition(void) const
{
    return _sfEndPosition.getValue();
}

//! Set the value of the GlassLayer::_sfEndPosition field.
inline
void GlassLayerBase::setEndPosition(const Pnt2f &value)
{
    editSField(EndPositionFieldMask);

    _sfEndPosition.setValue(value);
}
//! Get the value of the GlassLayer::_sfEndDirection field.

inline
Vec2f &GlassLayerBase::editEndDirection(void)
{
    editSField(EndDirectionFieldMask);

    return _sfEndDirection.getValue();
}

//! Get the value of the GlassLayer::_sfEndDirection field.
inline
const Vec2f &GlassLayerBase::getEndDirection(void) const
{
    return _sfEndDirection.getValue();
}

//! Set the value of the GlassLayer::_sfEndDirection field.
inline
void GlassLayerBase::setEndDirection(const Vec2f &value)
{
    editSField(EndDirectionFieldMask);

    _sfEndDirection.setValue(value);
}
//! Get the value of the GlassLayer::_sfCenterColor field.

inline
Color4f &GlassLayerBase::editCenterColor(void)
{
    editSField(CenterColorFieldMask);

    return _sfCenterColor.getValue();
}

//! Get the value of the GlassLayer::_sfCenterColor field.
inline
const Color4f &GlassLayerBase::getCenterColor(void) const
{
    return _sfCenterColor.getValue();
}

//! Set the value of the GlassLayer::_sfCenterColor field.
inline
void GlassLayerBase::setCenterColor(const Color4f &value)
{
    editSField(CenterColorFieldMask);

    _sfCenterColor.setValue(value);
}
//! Get the value of the GlassLayer::_sfEdgeColor field.

inline
Color4f &GlassLayerBase::editEdgeColor(void)
{
    editSField(EdgeColorFieldMask);

    return _sfEdgeColor.getValue();
}

//! Get the value of the GlassLayer::_sfEdgeColor field.
inline
const Color4f &GlassLayerBase::getEdgeColor(void) const
{
    return _sfEdgeColor.getValue();
}

//! Set the value of the GlassLayer::_sfEdgeColor field.
inline
void GlassLayerBase::setEdgeColor(const Color4f &value)
{
    editSField(EdgeColorFieldMask);

    _sfEdgeColor.setValue(value);
}
//! Get the value of the GlassLayer::_sfSegments field.

inline
UInt32 &GlassLayerBase::editSegments(void)
{
    editSField(SegmentsFieldMask);

    return _sfSegments.getValue();
}

//! Get the value of the GlassLayer::_sfSegments field.
inline
      UInt32  GlassLayerBase::getSegments(void) const
{
    return _sfSegments.getValue();
}

//! Set the value of the GlassLayer::_sfSegments field.
inline
void GlassLayerBase::setSegments(const UInt32 value)
{
    editSField(SegmentsFieldMask);

    _sfSegments.setValue(value);
}


#ifdef OSG_MT_CPTR_ASPECT
inline
void GlassLayerBase::execSync (      GlassLayerBase *pFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    Inherited::execSync(pFrom, whichField, oOffsets, syncMode, uiSyncInfo);

    if(FieldBits::NoField != (StartPositionFieldMask & whichField))
        _sfStartPosition.syncWith(pFrom->_sfStartPosition);

    if(FieldBits::NoField != (StartDirectionFieldMask & whichField))
        _sfStartDirection.syncWith(pFrom->_sfStartDirection);

    if(FieldBits::NoField != (EndPositionFieldMask & whichField))
        _sfEndPosition.syncWith(pFrom->_sfEndPosition);

    if(FieldBits::NoField != (EndDirectionFieldMask & whichField))
        _sfEndDirection.syncWith(pFrom->_sfEndDirection);

    if(FieldBits::NoField != (CenterColorFieldMask & whichField))
        _sfCenterColor.syncWith(pFrom->_sfCenterColor);

    if(FieldBits::NoField != (EdgeColorFieldMask & whichField))
        _sfEdgeColor.syncWith(pFrom->_sfEdgeColor);

    if(FieldBits::NoField != (SegmentsFieldMask & whichField))
        _sfSegments.syncWith(pFrom->_sfSegments);
}
#endif


inline
const Char8 *GlassLayerBase::getClassname(void)
{
    return "GlassLayer";
}
OSG_GEN_CONTAINERPTR(GlassLayer);

OSG_END_NAMESPACE

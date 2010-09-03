/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *               Copyright (C) 2000-2006 by the OpenSG Forum                 *
 *                                                                           *
 *                            www.opensg.org                                 *
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
 *****************************************************************************
\*****************************************************************************/


#ifndef _OSGIMAGEFIELDCONTAINEREDITORFIELDS_H_
#define _OSGIMAGEFIELDCONTAINEREDITORFIELDS_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGConfig.h"
#include "OSGContribFieldContainerEditorDef.h"

#include "OSGFieldContainerFields.h"
#include "OSGPointerSField.h"
#include "OSGPointerMField.h"


OSG_BEGIN_NAMESPACE

class ImageFieldContainerEditor;

OSG_GEN_CONTAINERPTR(ImageFieldContainerEditor);

/*! \ingroup GrpContribFieldContainerEditorFieldTraits
    \ingroup GrpLibOSGContribFieldContainerEditor
 */
template <>
struct FieldTraits<ImageFieldContainerEditor *> :
    public FieldTraitsFCPtrBase<ImageFieldContainerEditor *>
{
  private:

    static DataType             _type;

  public:

    typedef FieldTraits<ImageFieldContainerEditor *>  Self;

    enum                        { Convertible = NotConvertible };

    static OSG_CONTRIBFIELDCONTAINEREDITOR_DLLMAPPING DataType &getType(void);

    template<typename RefCountPolicy> inline
    static const Char8    *getSName     (void);

//    static const char *getSName(void) { return "SFImageFieldContainerEditorPtr"; }
    template<typename RefCountPolicy> inline
    static const Char8    *getMName     (void);

//    static const char *getMName(void) { return "MFImageFieldContainerEditorPtr"; }
};

template<> inline
const Char8 *FieldTraits<ImageFieldContainerEditor *, 0>::getSName<RecordedRefCountPolicy>(void)
{
    return "SFRecImageFieldContainerEditorPtr"; 
}

template<> inline
const Char8 *FieldTraits<ImageFieldContainerEditor *, 0>::getSName<UnrecordedRefCountPolicy>(void)
{
    return "SFUnrecImageFieldContainerEditorPtr"; 
}

template<> inline
const Char8 *FieldTraits<ImageFieldContainerEditor *, 0>::getSName<WeakRefCountPolicy>(void)
{
    return "SFWeakImageFieldContainerEditorPtr"; 
}

template<> inline
const Char8 *FieldTraits<ImageFieldContainerEditor *, 0>::getSName<NoRefCountPolicy>(void)
{
    return "SFUnrefdImageFieldContainerEditorPtr"; 
}

template<> inline
const Char8 *FieldTraits<ImageFieldContainerEditor *, 0>::getMName<RecordedRefCountPolicy>(void)
{
    return "MFRecImageFieldContainerEditorPtr"; 
}

template<> inline
const Char8 *FieldTraits<ImageFieldContainerEditor *, 0>::getMName<UnrecordedRefCountPolicy>(void)
{
    return "MFUnrecImageFieldContainerEditorPtr"; 
}

template<> inline
const Char8 *FieldTraits<ImageFieldContainerEditor *, 0>::getMName<WeakRefCountPolicy>(void)
{
    return "MFWeakImageFieldContainerEditorPtr"; 
}

template<> inline
const Char8 *FieldTraits<ImageFieldContainerEditor *, 0>::getMName<NoRefCountPolicy>(void)
{
    return "MFUnrefdImageFieldContainerEditorPtr"; 
}


#ifndef DOXYGEN_SHOULD_SKIP_THIS
/*! \ingroup GrpContribFieldContainerEditorFieldSFields */
typedef PointerSField<ImageFieldContainerEditor *,
                      RecordedRefCountPolicy  > SFRecImageFieldContainerEditorPtr;
/*! \ingroup GrpContribFieldContainerEditorFieldSFields */
typedef PointerSField<ImageFieldContainerEditor *,
                      UnrecordedRefCountPolicy> SFUnrecImageFieldContainerEditorPtr;
/*! \ingroup GrpContribFieldContainerEditorFieldSFields */
typedef PointerSField<ImageFieldContainerEditor *,
                      WeakRefCountPolicy      > SFWeakImageFieldContainerEditorPtr;
/*! \ingroup GrpContribFieldContainerEditorFieldSFields */
typedef PointerSField<ImageFieldContainerEditor *,
                      NoRefCountPolicy        > SFUncountedImageFieldContainerEditorPtr;


/*! \ingroup GrpContribFieldContainerEditorFieldMFields */
typedef PointerMField<ImageFieldContainerEditor *,
                      RecordedRefCountPolicy  > MFRecImageFieldContainerEditorPtr;
/*! \ingroup GrpContribFieldContainerEditorFieldMFields */
typedef PointerMField<ImageFieldContainerEditor *,
                      UnrecordedRefCountPolicy> MFUnrecImageFieldContainerEditorPtr;
/*! \ingroup GrpContribFieldContainerEditorFieldMFields */
typedef PointerMField<ImageFieldContainerEditor *,
                      WeakRefCountPolicy      > MFWeakImageFieldContainerEditorPtr;
/*! \ingroup GrpContribFieldContainerEditorFieldMFields */
typedef PointerMField<ImageFieldContainerEditor *,
                      NoRefCountPolicy        > MFUncountedImageFieldContainerEditorPtr;




#else // these are the doxygen hacks

/*! \ingroup GrpContribFieldContainerEditorFieldSFields \ingroup GrpLibOSGContribFieldContainerEditor */
struct SFRecImageFieldContainerEditorPtr : 
    public PointerSField<ImageFieldContainerEditor *,
                         RecordedRefCountPolicy> {};
/*! \ingroup GrpContribFieldContainerEditorFieldSFields \ingroup GrpLibOSGContribFieldContainerEditor */
struct SFUnrecImageFieldContainerEditorPtr : 
    public PointerSField<ImageFieldContainerEditor *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpContribFieldContainerEditorFieldSFields \ingroup GrpLibOSGContribFieldContainerEditor */
struct SFWeakImageFieldContainerEditorPtr :
    public PointerSField<ImageFieldContainerEditor *,
                         WeakRefCountPolicy> {};
/*! \ingroup GrpContribFieldContainerEditorFieldSFields \ingroup GrpLibOSGContribFieldContainerEditor */
struct SFUncountedImageFieldContainerEditorPtr :
    public PointerSField<ImageFieldContainerEditor *,
                         NoRefCountPolicy> {};


/*! \ingroup GrpContribFieldContainerEditorFieldMFields \ingroup GrpLibOSGContribFieldContainerEditor */
struct MFRecImageFieldContainerEditorPtr :
    public PointerMField<ImageFieldContainerEditor *,
                         RecordedRefCountPolicy  > {};
/*! \ingroup GrpContribFieldContainerEditorFieldMFields \ingroup GrpLibOSGContribFieldContainerEditor */
struct MFUnrecImageFieldContainerEditorPtr :
    public PointerMField<ImageFieldContainerEditor *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpContribFieldContainerEditorFieldMFields \ingroup GrpLibOSGContribFieldContainerEditor */
struct MFWeakImageFieldContainerEditorPtr :
    public PointerMField<ImageFieldContainerEditor *,
                         WeakRefCountPolicy      > {};
/*! \ingroup GrpContribFieldContainerEditorFieldMFields \ingroup GrpLibOSGContribFieldContainerEditor */
struct MFUncountedImageFieldContainerEditorPtr :
    public PointerMField<ImageFieldContainerEditor *,
                         NoRefCountPolicy        > {};



#endif // these are the doxygen hacks

OSG_END_NAMESPACE

#endif /* _OSGIMAGEFIELDCONTAINEREDITORFIELDS_H_ */
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


#ifndef _OSGSOUNDFIELDS_H_
#define _OSGSOUNDFIELDS_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGConfig.h"
#include "OSGContribSoundDef.h"

#include "OSGFieldContainerFields.h"
#include "OSGPointerSField.h"
#include "OSGPointerMField.h"


OSG_BEGIN_NAMESPACE

class Sound;

OSG_GEN_CONTAINERPTR(Sound);

/*! \ingroup GrpContribSoundFieldTraits
    \ingroup GrpLibOSGContribSound
 */
template <>
struct FieldTraits<Sound *> :
    public FieldTraitsFCPtrBase<Sound *>
{
  private:

    static DataType             _type;

  public:

    typedef FieldTraits<Sound *>  Self;

    enum                        { Convertible = NotConvertible };

    static OSG_CONTRIBSOUND_DLLMAPPING DataType &getType(void);

    template<typename RefCountPolicy> inline
    static const Char8    *getSName     (void);

//    static const char *getSName(void) { return "SFSoundPtr"; }
    template<typename RefCountPolicy> inline
    static const Char8    *getMName     (void);

//    static const char *getMName(void) { return "MFSoundPtr"; }
};

template<> inline
const Char8 *FieldTraits<Sound *, 0>::getSName<RecordedRefCountPolicy>(void)
{
    return "SFRecSoundPtr"; 
}

template<> inline
const Char8 *FieldTraits<Sound *, 0>::getSName<UnrecordedRefCountPolicy>(void)
{
    return "SFUnrecSoundPtr"; 
}

template<> inline
const Char8 *FieldTraits<Sound *, 0>::getSName<WeakRefCountPolicy>(void)
{
    return "SFWeakSoundPtr"; 
}

template<> inline
const Char8 *FieldTraits<Sound *, 0>::getSName<NoRefCountPolicy>(void)
{
    return "SFUnrefdSoundPtr"; 
}

template<> inline
const Char8 *FieldTraits<Sound *, 0>::getMName<RecordedRefCountPolicy>(void)
{
    return "MFRecSoundPtr"; 
}

template<> inline
const Char8 *FieldTraits<Sound *, 0>::getMName<UnrecordedRefCountPolicy>(void)
{
    return "MFUnrecSoundPtr"; 
}

template<> inline
const Char8 *FieldTraits<Sound *, 0>::getMName<WeakRefCountPolicy>(void)
{
    return "MFWeakSoundPtr"; 
}

template<> inline
const Char8 *FieldTraits<Sound *, 0>::getMName<NoRefCountPolicy>(void)
{
    return "MFUnrefdSoundPtr"; 
}


#ifndef DOXYGEN_SHOULD_SKIP_THIS
/*! \ingroup GrpContribSoundFieldSFields */
typedef PointerSField<Sound *,
                      RecordedRefCountPolicy  > SFRecSoundPtr;
/*! \ingroup GrpContribSoundFieldSFields */
typedef PointerSField<Sound *,
                      UnrecordedRefCountPolicy> SFUnrecSoundPtr;
/*! \ingroup GrpContribSoundFieldSFields */
typedef PointerSField<Sound *,
                      WeakRefCountPolicy      > SFWeakSoundPtr;
/*! \ingroup GrpContribSoundFieldSFields */
typedef PointerSField<Sound *,
                      NoRefCountPolicy        > SFUncountedSoundPtr;


/*! \ingroup GrpContribSoundFieldMFields */
typedef PointerMField<Sound *,
                      RecordedRefCountPolicy  > MFRecSoundPtr;
/*! \ingroup GrpContribSoundFieldMFields */
typedef PointerMField<Sound *,
                      UnrecordedRefCountPolicy> MFUnrecSoundPtr;
/*! \ingroup GrpContribSoundFieldMFields */
typedef PointerMField<Sound *,
                      WeakRefCountPolicy      > MFWeakSoundPtr;
/*! \ingroup GrpContribSoundFieldMFields */
typedef PointerMField<Sound *,
                      NoRefCountPolicy        > MFUncountedSoundPtr;




#else // these are the doxygen hacks

/*! \ingroup GrpContribSoundFieldSFields \ingroup GrpLibOSGContribSound */
struct SFRecSoundPtr : 
    public PointerSField<Sound *,
                         RecordedRefCountPolicy> {};
/*! \ingroup GrpContribSoundFieldSFields \ingroup GrpLibOSGContribSound */
struct SFUnrecSoundPtr : 
    public PointerSField<Sound *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpContribSoundFieldSFields \ingroup GrpLibOSGContribSound */
struct SFWeakSoundPtr :
    public PointerSField<Sound *,
                         WeakRefCountPolicy> {};
/*! \ingroup GrpContribSoundFieldSFields \ingroup GrpLibOSGContribSound */
struct SFUncountedSoundPtr :
    public PointerSField<Sound *,
                         NoRefCountPolicy> {};


/*! \ingroup GrpContribSoundFieldMFields \ingroup GrpLibOSGContribSound */
struct MFRecSoundPtr :
    public PointerMField<Sound *,
                         RecordedRefCountPolicy  > {};
/*! \ingroup GrpContribSoundFieldMFields \ingroup GrpLibOSGContribSound */
struct MFUnrecSoundPtr :
    public PointerMField<Sound *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpContribSoundFieldMFields \ingroup GrpLibOSGContribSound */
struct MFWeakSoundPtr :
    public PointerMField<Sound *,
                         WeakRefCountPolicy      > {};
/*! \ingroup GrpContribSoundFieldMFields \ingroup GrpLibOSGContribSound */
struct MFUncountedSoundPtr :
    public PointerMField<Sound *,
                         NoRefCountPolicy        > {};



#endif // these are the doxygen hacks

OSG_END_NAMESPACE

#endif /* _OSGSOUNDFIELDS_H_ */

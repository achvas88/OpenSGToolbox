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


#ifndef _OSGSOUNDEMITTERFIELDS_H_
#define _OSGSOUNDEMITTERFIELDS_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGConfig.h"
#include "OSGContribSoundDef.h"

#include "OSGFieldContainerFields.h"
#include "OSGPointerSField.h"
#include "OSGPointerMField.h"


OSG_BEGIN_NAMESPACE

class SoundEmitter;

OSG_GEN_CONTAINERPTR(SoundEmitter);

/*! \ingroup GrpContribSoundFieldTraits
    \ingroup GrpLibOSGContribSound
 */
template <>
struct FieldTraits<SoundEmitter *> :
    public FieldTraitsFCPtrBase<SoundEmitter *>
{
  private:

    static DataType             _type;

  public:

    typedef FieldTraits<SoundEmitter *>  Self;

    enum                        { Convertible = NotConvertible };

    static OSG_CONTRIBSOUND_DLLMAPPING DataType &getType(void);

    template<typename RefCountPolicy> inline
    static const Char8    *getSName     (void);

//    static const char *getSName(void) { return "SFSoundEmitterPtr"; }
    template<typename RefCountPolicy> inline
    static const Char8    *getMName     (void);

//    static const char *getMName(void) { return "MFSoundEmitterPtr"; }
};

template<> inline
const Char8 *FieldTraits<SoundEmitter *, 0>::getSName<RecordedRefCountPolicy>(void)
{
    return "SFRecSoundEmitterPtr"; 
}

template<> inline
const Char8 *FieldTraits<SoundEmitter *, 0>::getSName<UnrecordedRefCountPolicy>(void)
{
    return "SFUnrecSoundEmitterPtr"; 
}

template<> inline
const Char8 *FieldTraits<SoundEmitter *, 0>::getSName<WeakRefCountPolicy>(void)
{
    return "SFWeakSoundEmitterPtr"; 
}

template<> inline
const Char8 *FieldTraits<SoundEmitter *, 0>::getSName<NoRefCountPolicy>(void)
{
    return "SFUnrefdSoundEmitterPtr"; 
}

template<> inline
const Char8 *FieldTraits<SoundEmitter *, 0>::getMName<RecordedRefCountPolicy>(void)
{
    return "MFRecSoundEmitterPtr"; 
}

template<> inline
const Char8 *FieldTraits<SoundEmitter *, 0>::getMName<UnrecordedRefCountPolicy>(void)
{
    return "MFUnrecSoundEmitterPtr"; 
}

template<> inline
const Char8 *FieldTraits<SoundEmitter *, 0>::getMName<WeakRefCountPolicy>(void)
{
    return "MFWeakSoundEmitterPtr"; 
}

template<> inline
const Char8 *FieldTraits<SoundEmitter *, 0>::getMName<NoRefCountPolicy>(void)
{
    return "MFUnrefdSoundEmitterPtr"; 
}


#ifndef DOXYGEN_SHOULD_SKIP_THIS
/*! \ingroup GrpContribSoundFieldSFields */
typedef PointerSField<SoundEmitter *,
                      RecordedRefCountPolicy  > SFRecSoundEmitterPtr;
/*! \ingroup GrpContribSoundFieldSFields */
typedef PointerSField<SoundEmitter *,
                      UnrecordedRefCountPolicy> SFUnrecSoundEmitterPtr;
/*! \ingroup GrpContribSoundFieldSFields */
typedef PointerSField<SoundEmitter *,
                      WeakRefCountPolicy      > SFWeakSoundEmitterPtr;
/*! \ingroup GrpContribSoundFieldSFields */
typedef PointerSField<SoundEmitter *,
                      NoRefCountPolicy        > SFUncountedSoundEmitterPtr;


/*! \ingroup GrpContribSoundFieldMFields */
typedef PointerMField<SoundEmitter *,
                      RecordedRefCountPolicy  > MFRecSoundEmitterPtr;
/*! \ingroup GrpContribSoundFieldMFields */
typedef PointerMField<SoundEmitter *,
                      UnrecordedRefCountPolicy> MFUnrecSoundEmitterPtr;
/*! \ingroup GrpContribSoundFieldMFields */
typedef PointerMField<SoundEmitter *,
                      WeakRefCountPolicy      > MFWeakSoundEmitterPtr;
/*! \ingroup GrpContribSoundFieldMFields */
typedef PointerMField<SoundEmitter *,
                      NoRefCountPolicy        > MFUncountedSoundEmitterPtr;




#else // these are the doxygen hacks

/*! \ingroup GrpContribSoundFieldSFields \ingroup GrpLibOSGContribSound */
struct SFRecSoundEmitterPtr : 
    public PointerSField<SoundEmitter *,
                         RecordedRefCountPolicy> {};
/*! \ingroup GrpContribSoundFieldSFields \ingroup GrpLibOSGContribSound */
struct SFUnrecSoundEmitterPtr : 
    public PointerSField<SoundEmitter *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpContribSoundFieldSFields \ingroup GrpLibOSGContribSound */
struct SFWeakSoundEmitterPtr :
    public PointerSField<SoundEmitter *,
                         WeakRefCountPolicy> {};
/*! \ingroup GrpContribSoundFieldSFields \ingroup GrpLibOSGContribSound */
struct SFUncountedSoundEmitterPtr :
    public PointerSField<SoundEmitter *,
                         NoRefCountPolicy> {};


/*! \ingroup GrpContribSoundFieldMFields \ingroup GrpLibOSGContribSound */
struct MFRecSoundEmitterPtr :
    public PointerMField<SoundEmitter *,
                         RecordedRefCountPolicy  > {};
/*! \ingroup GrpContribSoundFieldMFields \ingroup GrpLibOSGContribSound */
struct MFUnrecSoundEmitterPtr :
    public PointerMField<SoundEmitter *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpContribSoundFieldMFields \ingroup GrpLibOSGContribSound */
struct MFWeakSoundEmitterPtr :
    public PointerMField<SoundEmitter *,
                         WeakRefCountPolicy      > {};
/*! \ingroup GrpContribSoundFieldMFields \ingroup GrpLibOSGContribSound */
struct MFUncountedSoundEmitterPtr :
    public PointerMField<SoundEmitter *,
                         NoRefCountPolicy        > {};



#endif // these are the doxygen hacks

OSG_END_NAMESPACE

#endif /* _OSGSOUNDEMITTERFIELDS_H_ */

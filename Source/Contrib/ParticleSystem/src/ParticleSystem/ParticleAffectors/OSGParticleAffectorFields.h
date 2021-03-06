/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *               Copyright (C) 2000-2006 by the OpenSG Forum                 *
 *                                                                           *
 *                            www.opensg.org                                 *
 *                                                                           *
 *   contact:  David Kabala (djkabala@gmail.com), Daniel Guilliams           *
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


#ifndef _OSGPARTICLEAFFECTORFIELDS_H_
#define _OSGPARTICLEAFFECTORFIELDS_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGConfig.h"
#include "OSGContribParticleSystemDef.h"

#include "OSGFieldContainerFields.h"
#include "OSGPointerSField.h"
#include "OSGPointerMField.h"


OSG_BEGIN_NAMESPACE

class ParticleAffector;

OSG_GEN_CONTAINERPTR(ParticleAffector);

/*! \ingroup GrpContribParticleSystemFieldTraits
    \ingroup GrpLibOSGContribParticleSystem
 */
template <>
struct FieldTraits<ParticleAffector *> :
    public FieldTraitsFCPtrBase<ParticleAffector *>
{
  private:

    static DataType             _type;

  public:

    typedef FieldTraits<ParticleAffector *>  Self;

    enum                        { Convertible = NotConvertible };

    static OSG_CONTRIBPARTICLESYSTEM_DLLMAPPING DataType &getType(void);

    template<typename RefCountPolicy> inline
    static const Char8    *getSName     (void);

//    static const char *getSName(void) { return "SFParticleAffectorPtr"; }
    template<typename RefCountPolicy> inline
    static const Char8    *getMName     (void);

//    static const char *getMName(void) { return "MFParticleAffectorPtr"; }
};

template<> inline
const Char8 *FieldTraits<ParticleAffector *, 0>::getSName<RecordedRefCountPolicy>(void)
{
    return "SFRecParticleAffectorPtr"; 
}

template<> inline
const Char8 *FieldTraits<ParticleAffector *, 0>::getSName<UnrecordedRefCountPolicy>(void)
{
    return "SFUnrecParticleAffectorPtr"; 
}

template<> inline
const Char8 *FieldTraits<ParticleAffector *, 0>::getSName<WeakRefCountPolicy>(void)
{
    return "SFWeakParticleAffectorPtr"; 
}

template<> inline
const Char8 *FieldTraits<ParticleAffector *, 0>::getSName<NoRefCountPolicy>(void)
{
    return "SFUnrefdParticleAffectorPtr"; 
}

template<> inline
const Char8 *FieldTraits<ParticleAffector *, 0>::getMName<RecordedRefCountPolicy>(void)
{
    return "MFRecParticleAffectorPtr"; 
}

template<> inline
const Char8 *FieldTraits<ParticleAffector *, 0>::getMName<UnrecordedRefCountPolicy>(void)
{
    return "MFUnrecParticleAffectorPtr"; 
}

template<> inline
const Char8 *FieldTraits<ParticleAffector *, 0>::getMName<WeakRefCountPolicy>(void)
{
    return "MFWeakParticleAffectorPtr"; 
}

template<> inline
const Char8 *FieldTraits<ParticleAffector *, 0>::getMName<NoRefCountPolicy>(void)
{
    return "MFUnrefdParticleAffectorPtr"; 
}


#ifndef DOXYGEN_SHOULD_SKIP_THIS
/*! \ingroup GrpContribParticleSystemFieldSFields */
typedef PointerSField<ParticleAffector *,
                      RecordedRefCountPolicy  > SFRecParticleAffectorPtr;
/*! \ingroup GrpContribParticleSystemFieldSFields */
typedef PointerSField<ParticleAffector *,
                      UnrecordedRefCountPolicy> SFUnrecParticleAffectorPtr;
/*! \ingroup GrpContribParticleSystemFieldSFields */
typedef PointerSField<ParticleAffector *,
                      WeakRefCountPolicy      > SFWeakParticleAffectorPtr;
/*! \ingroup GrpContribParticleSystemFieldSFields */
typedef PointerSField<ParticleAffector *,
                      NoRefCountPolicy        > SFUncountedParticleAffectorPtr;


/*! \ingroup GrpContribParticleSystemFieldMFields */
typedef PointerMField<ParticleAffector *,
                      RecordedRefCountPolicy  > MFRecParticleAffectorPtr;
/*! \ingroup GrpContribParticleSystemFieldMFields */
typedef PointerMField<ParticleAffector *,
                      UnrecordedRefCountPolicy> MFUnrecParticleAffectorPtr;
/*! \ingroup GrpContribParticleSystemFieldMFields */
typedef PointerMField<ParticleAffector *,
                      WeakRefCountPolicy      > MFWeakParticleAffectorPtr;
/*! \ingroup GrpContribParticleSystemFieldMFields */
typedef PointerMField<ParticleAffector *,
                      NoRefCountPolicy        > MFUncountedParticleAffectorPtr;




#else // these are the doxygen hacks

/*! \ingroup GrpContribParticleSystemFieldSFields \ingroup GrpLibOSGContribParticleSystem */
struct SFRecParticleAffectorPtr : 
    public PointerSField<ParticleAffector *,
                         RecordedRefCountPolicy> {};
/*! \ingroup GrpContribParticleSystemFieldSFields \ingroup GrpLibOSGContribParticleSystem */
struct SFUnrecParticleAffectorPtr : 
    public PointerSField<ParticleAffector *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpContribParticleSystemFieldSFields \ingroup GrpLibOSGContribParticleSystem */
struct SFWeakParticleAffectorPtr :
    public PointerSField<ParticleAffector *,
                         WeakRefCountPolicy> {};
/*! \ingroup GrpContribParticleSystemFieldSFields \ingroup GrpLibOSGContribParticleSystem */
struct SFUncountedParticleAffectorPtr :
    public PointerSField<ParticleAffector *,
                         NoRefCountPolicy> {};


/*! \ingroup GrpContribParticleSystemFieldMFields \ingroup GrpLibOSGContribParticleSystem */
struct MFRecParticleAffectorPtr :
    public PointerMField<ParticleAffector *,
                         RecordedRefCountPolicy  > {};
/*! \ingroup GrpContribParticleSystemFieldMFields \ingroup GrpLibOSGContribParticleSystem */
struct MFUnrecParticleAffectorPtr :
    public PointerMField<ParticleAffector *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpContribParticleSystemFieldMFields \ingroup GrpLibOSGContribParticleSystem */
struct MFWeakParticleAffectorPtr :
    public PointerMField<ParticleAffector *,
                         WeakRefCountPolicy      > {};
/*! \ingroup GrpContribParticleSystemFieldMFields \ingroup GrpLibOSGContribParticleSystem */
struct MFUncountedParticleAffectorPtr :
    public PointerMField<ParticleAffector *,
                         NoRefCountPolicy        > {};



#endif // these are the doxygen hacks

OSG_END_NAMESPACE

#endif /* _OSGPARTICLEAFFECTORFIELDS_H_ */

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


#ifndef _OSGAGEFADEPARTICLEAFFECTORFIELDS_H_
#define _OSGAGEFADEPARTICLEAFFECTORFIELDS_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGConfig.h"
#include "OSGContribParticleSystemDef.h"

#include "OSGFieldContainerFields.h"
#include "OSGPointerSField.h"
#include "OSGPointerMField.h"


OSG_BEGIN_NAMESPACE

class AgeFadeParticleAffector;

OSG_GEN_CONTAINERPTR(AgeFadeParticleAffector);

/*! \ingroup GrpContribParticleSystemFieldTraits
    \ingroup GrpLibOSGContribParticleSystem
 */
template <>
struct FieldTraits<AgeFadeParticleAffector *> :
    public FieldTraitsFCPtrBase<AgeFadeParticleAffector *>
{
  private:

    static DataType             _type;

  public:

    typedef FieldTraits<AgeFadeParticleAffector *>  Self;

    enum                        { Convertible = NotConvertible };

    static OSG_CONTRIBPARTICLESYSTEM_DLLMAPPING DataType &getType(void);

    template<typename RefCountPolicy> inline
    static const Char8    *getSName     (void);

//    static const char *getSName(void) { return "SFAgeFadeParticleAffectorPtr"; }
    template<typename RefCountPolicy> inline
    static const Char8    *getMName     (void);

//    static const char *getMName(void) { return "MFAgeFadeParticleAffectorPtr"; }
};

template<> inline
const Char8 *FieldTraits<AgeFadeParticleAffector *, 0>::getSName<RecordedRefCountPolicy>(void)
{
    return "SFRecAgeFadeParticleAffectorPtr"; 
}

template<> inline
const Char8 *FieldTraits<AgeFadeParticleAffector *, 0>::getSName<UnrecordedRefCountPolicy>(void)
{
    return "SFUnrecAgeFadeParticleAffectorPtr"; 
}

template<> inline
const Char8 *FieldTraits<AgeFadeParticleAffector *, 0>::getSName<WeakRefCountPolicy>(void)
{
    return "SFWeakAgeFadeParticleAffectorPtr"; 
}

template<> inline
const Char8 *FieldTraits<AgeFadeParticleAffector *, 0>::getSName<NoRefCountPolicy>(void)
{
    return "SFUnrefdAgeFadeParticleAffectorPtr"; 
}

template<> inline
const Char8 *FieldTraits<AgeFadeParticleAffector *, 0>::getMName<RecordedRefCountPolicy>(void)
{
    return "MFRecAgeFadeParticleAffectorPtr"; 
}

template<> inline
const Char8 *FieldTraits<AgeFadeParticleAffector *, 0>::getMName<UnrecordedRefCountPolicy>(void)
{
    return "MFUnrecAgeFadeParticleAffectorPtr"; 
}

template<> inline
const Char8 *FieldTraits<AgeFadeParticleAffector *, 0>::getMName<WeakRefCountPolicy>(void)
{
    return "MFWeakAgeFadeParticleAffectorPtr"; 
}

template<> inline
const Char8 *FieldTraits<AgeFadeParticleAffector *, 0>::getMName<NoRefCountPolicy>(void)
{
    return "MFUnrefdAgeFadeParticleAffectorPtr"; 
}


#ifndef DOXYGEN_SHOULD_SKIP_THIS
/*! \ingroup GrpContribParticleSystemFieldSFields */
typedef PointerSField<AgeFadeParticleAffector *,
                      RecordedRefCountPolicy  > SFRecAgeFadeParticleAffectorPtr;
/*! \ingroup GrpContribParticleSystemFieldSFields */
typedef PointerSField<AgeFadeParticleAffector *,
                      UnrecordedRefCountPolicy> SFUnrecAgeFadeParticleAffectorPtr;
/*! \ingroup GrpContribParticleSystemFieldSFields */
typedef PointerSField<AgeFadeParticleAffector *,
                      WeakRefCountPolicy      > SFWeakAgeFadeParticleAffectorPtr;
/*! \ingroup GrpContribParticleSystemFieldSFields */
typedef PointerSField<AgeFadeParticleAffector *,
                      NoRefCountPolicy        > SFUncountedAgeFadeParticleAffectorPtr;


/*! \ingroup GrpContribParticleSystemFieldMFields */
typedef PointerMField<AgeFadeParticleAffector *,
                      RecordedRefCountPolicy  > MFRecAgeFadeParticleAffectorPtr;
/*! \ingroup GrpContribParticleSystemFieldMFields */
typedef PointerMField<AgeFadeParticleAffector *,
                      UnrecordedRefCountPolicy> MFUnrecAgeFadeParticleAffectorPtr;
/*! \ingroup GrpContribParticleSystemFieldMFields */
typedef PointerMField<AgeFadeParticleAffector *,
                      WeakRefCountPolicy      > MFWeakAgeFadeParticleAffectorPtr;
/*! \ingroup GrpContribParticleSystemFieldMFields */
typedef PointerMField<AgeFadeParticleAffector *,
                      NoRefCountPolicy        > MFUncountedAgeFadeParticleAffectorPtr;




#else // these are the doxygen hacks

/*! \ingroup GrpContribParticleSystemFieldSFields \ingroup GrpLibOSGContribParticleSystem */
struct SFRecAgeFadeParticleAffectorPtr : 
    public PointerSField<AgeFadeParticleAffector *,
                         RecordedRefCountPolicy> {};
/*! \ingroup GrpContribParticleSystemFieldSFields \ingroup GrpLibOSGContribParticleSystem */
struct SFUnrecAgeFadeParticleAffectorPtr : 
    public PointerSField<AgeFadeParticleAffector *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpContribParticleSystemFieldSFields \ingroup GrpLibOSGContribParticleSystem */
struct SFWeakAgeFadeParticleAffectorPtr :
    public PointerSField<AgeFadeParticleAffector *,
                         WeakRefCountPolicy> {};
/*! \ingroup GrpContribParticleSystemFieldSFields \ingroup GrpLibOSGContribParticleSystem */
struct SFUncountedAgeFadeParticleAffectorPtr :
    public PointerSField<AgeFadeParticleAffector *,
                         NoRefCountPolicy> {};


/*! \ingroup GrpContribParticleSystemFieldMFields \ingroup GrpLibOSGContribParticleSystem */
struct MFRecAgeFadeParticleAffectorPtr :
    public PointerMField<AgeFadeParticleAffector *,
                         RecordedRefCountPolicy  > {};
/*! \ingroup GrpContribParticleSystemFieldMFields \ingroup GrpLibOSGContribParticleSystem */
struct MFUnrecAgeFadeParticleAffectorPtr :
    public PointerMField<AgeFadeParticleAffector *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpContribParticleSystemFieldMFields \ingroup GrpLibOSGContribParticleSystem */
struct MFWeakAgeFadeParticleAffectorPtr :
    public PointerMField<AgeFadeParticleAffector *,
                         WeakRefCountPolicy      > {};
/*! \ingroup GrpContribParticleSystemFieldMFields \ingroup GrpLibOSGContribParticleSystem */
struct MFUncountedAgeFadeParticleAffectorPtr :
    public PointerMField<AgeFadeParticleAffector *,
                         NoRefCountPolicy        > {};



#endif // these are the doxygen hacks

OSG_END_NAMESPACE

#endif /* _OSGAGEFADEPARTICLEAFFECTORFIELDS_H_ */

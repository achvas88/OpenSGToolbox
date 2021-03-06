/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *               Copyright (C) 2000-2006 by the OpenSG Forum                 *
 *                                                                           *
 *                            www.opensg.org                                 *
 *                                                                           *
 *   contact:  David Kabala, Dan Guilliams (djkabala/dan.guilliams@gmail.com)*
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


#ifndef _OSGAGEPARTICLEFUNCTIONFIELDS_H_
#define _OSGAGEPARTICLEFUNCTIONFIELDS_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGConfig.h"
#include "OSGContribParticleSystemDef.h"

#include "OSGFieldContainerFields.h"
#include "OSGPointerSField.h"
#include "OSGPointerMField.h"


OSG_BEGIN_NAMESPACE

class AgeParticleFunction;

OSG_GEN_CONTAINERPTR(AgeParticleFunction);

/*! \ingroup GrpContribParticleSystemFieldTraits
    \ingroup GrpLibOSGContribParticleSystem
 */
template <>
struct FieldTraits<AgeParticleFunction *> :
    public FieldTraitsFCPtrBase<AgeParticleFunction *>
{
  private:

    static DataType             _type;

  public:

    typedef FieldTraits<AgeParticleFunction *>  Self;

    enum                        { Convertible = NotConvertible };

    static OSG_CONTRIBPARTICLESYSTEM_DLLMAPPING DataType &getType(void);

    template<typename RefCountPolicy> inline
    static const Char8    *getSName     (void);

//    static const char *getSName(void) { return "SFAgeParticleFunctionPtr"; }
    template<typename RefCountPolicy> inline
    static const Char8    *getMName     (void);

//    static const char *getMName(void) { return "MFAgeParticleFunctionPtr"; }
};

template<> inline
const Char8 *FieldTraits<AgeParticleFunction *, 0>::getSName<RecordedRefCountPolicy>(void)
{
    return "SFRecAgeParticleFunctionPtr"; 
}

template<> inline
const Char8 *FieldTraits<AgeParticleFunction *, 0>::getSName<UnrecordedRefCountPolicy>(void)
{
    return "SFUnrecAgeParticleFunctionPtr"; 
}

template<> inline
const Char8 *FieldTraits<AgeParticleFunction *, 0>::getSName<WeakRefCountPolicy>(void)
{
    return "SFWeakAgeParticleFunctionPtr"; 
}

template<> inline
const Char8 *FieldTraits<AgeParticleFunction *, 0>::getSName<NoRefCountPolicy>(void)
{
    return "SFUnrefdAgeParticleFunctionPtr"; 
}

template<> inline
const Char8 *FieldTraits<AgeParticleFunction *, 0>::getMName<RecordedRefCountPolicy>(void)
{
    return "MFRecAgeParticleFunctionPtr"; 
}

template<> inline
const Char8 *FieldTraits<AgeParticleFunction *, 0>::getMName<UnrecordedRefCountPolicy>(void)
{
    return "MFUnrecAgeParticleFunctionPtr"; 
}

template<> inline
const Char8 *FieldTraits<AgeParticleFunction *, 0>::getMName<WeakRefCountPolicy>(void)
{
    return "MFWeakAgeParticleFunctionPtr"; 
}

template<> inline
const Char8 *FieldTraits<AgeParticleFunction *, 0>::getMName<NoRefCountPolicy>(void)
{
    return "MFUnrefdAgeParticleFunctionPtr"; 
}


#ifndef DOXYGEN_SHOULD_SKIP_THIS
/*! \ingroup GrpContribParticleSystemFieldSFields */
typedef PointerSField<AgeParticleFunction *,
                      RecordedRefCountPolicy  > SFRecAgeParticleFunctionPtr;
/*! \ingroup GrpContribParticleSystemFieldSFields */
typedef PointerSField<AgeParticleFunction *,
                      UnrecordedRefCountPolicy> SFUnrecAgeParticleFunctionPtr;
/*! \ingroup GrpContribParticleSystemFieldSFields */
typedef PointerSField<AgeParticleFunction *,
                      WeakRefCountPolicy      > SFWeakAgeParticleFunctionPtr;
/*! \ingroup GrpContribParticleSystemFieldSFields */
typedef PointerSField<AgeParticleFunction *,
                      NoRefCountPolicy        > SFUncountedAgeParticleFunctionPtr;


/*! \ingroup GrpContribParticleSystemFieldMFields */
typedef PointerMField<AgeParticleFunction *,
                      RecordedRefCountPolicy  > MFRecAgeParticleFunctionPtr;
/*! \ingroup GrpContribParticleSystemFieldMFields */
typedef PointerMField<AgeParticleFunction *,
                      UnrecordedRefCountPolicy> MFUnrecAgeParticleFunctionPtr;
/*! \ingroup GrpContribParticleSystemFieldMFields */
typedef PointerMField<AgeParticleFunction *,
                      WeakRefCountPolicy      > MFWeakAgeParticleFunctionPtr;
/*! \ingroup GrpContribParticleSystemFieldMFields */
typedef PointerMField<AgeParticleFunction *,
                      NoRefCountPolicy        > MFUncountedAgeParticleFunctionPtr;




#else // these are the doxygen hacks

/*! \ingroup GrpContribParticleSystemFieldSFields \ingroup GrpLibOSGContribParticleSystem */
struct SFRecAgeParticleFunctionPtr : 
    public PointerSField<AgeParticleFunction *,
                         RecordedRefCountPolicy> {};
/*! \ingroup GrpContribParticleSystemFieldSFields \ingroup GrpLibOSGContribParticleSystem */
struct SFUnrecAgeParticleFunctionPtr : 
    public PointerSField<AgeParticleFunction *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpContribParticleSystemFieldSFields \ingroup GrpLibOSGContribParticleSystem */
struct SFWeakAgeParticleFunctionPtr :
    public PointerSField<AgeParticleFunction *,
                         WeakRefCountPolicy> {};
/*! \ingroup GrpContribParticleSystemFieldSFields \ingroup GrpLibOSGContribParticleSystem */
struct SFUncountedAgeParticleFunctionPtr :
    public PointerSField<AgeParticleFunction *,
                         NoRefCountPolicy> {};


/*! \ingroup GrpContribParticleSystemFieldMFields \ingroup GrpLibOSGContribParticleSystem */
struct MFRecAgeParticleFunctionPtr :
    public PointerMField<AgeParticleFunction *,
                         RecordedRefCountPolicy  > {};
/*! \ingroup GrpContribParticleSystemFieldMFields \ingroup GrpLibOSGContribParticleSystem */
struct MFUnrecAgeParticleFunctionPtr :
    public PointerMField<AgeParticleFunction *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpContribParticleSystemFieldMFields \ingroup GrpLibOSGContribParticleSystem */
struct MFWeakAgeParticleFunctionPtr :
    public PointerMField<AgeParticleFunction *,
                         WeakRefCountPolicy      > {};
/*! \ingroup GrpContribParticleSystemFieldMFields \ingroup GrpLibOSGContribParticleSystem */
struct MFUncountedAgeParticleFunctionPtr :
    public PointerMField<AgeParticleFunction *,
                         NoRefCountPolicy        > {};



#endif // these are the doxygen hacks

OSG_END_NAMESPACE

#endif /* _OSGAGEPARTICLEFUNCTIONFIELDS_H_ */

/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *               Copyright (C) 2000-2006 by the OpenSG Forum                 *
 *                                                                           *
 *                            www.opensg.org                                 *
 *                                                                           *
 *   contact:  David Kabala (djkabala@gmail.com), David Naylor               *
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


#ifndef _OSGSKELETONBLENDEDANIMATIONFIELDS_H_
#define _OSGSKELETONBLENDEDANIMATIONFIELDS_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGConfig.h"
#include "OSGTBAnimationDef.h"

#include "OSGFieldContainerFields.h"
#include "OSGPointerSField.h"
#include "OSGPointerMField.h"


OSG_BEGIN_NAMESPACE

class SkeletonBlendedAnimation;

OSG_GEN_CONTAINERPTR(SkeletonBlendedAnimation);

/*! \ingroup GrpDynamicsFieldTraits
    \ingroup GrpLibOSGDynamics
 */
template <>
struct FieldTraits<SkeletonBlendedAnimation *> :
    public FieldTraitsFCPtrBase<SkeletonBlendedAnimation *>
{
  private:

    static DataType             _type;

  public:

    typedef FieldTraits<SkeletonBlendedAnimation *>  Self;

    enum                        { Convertible = NotConvertible };

    static OSG_TBANIMATION_DLLMAPPING DataType &getType(void);

    template<typename RefCountPolicy> inline
    static const Char8    *getSName     (void);

//    static const char *getSName(void) { return "SFSkeletonBlendedAnimationPtr"; }
    template<typename RefCountPolicy> inline
    static const Char8    *getMName     (void);

//    static const char *getMName(void) { return "MFSkeletonBlendedAnimationPtr"; }
};

template<> inline
const Char8 *FieldTraits<SkeletonBlendedAnimation *, 0>::getSName<RecordedRefCountPolicy>(void)
{
    return "SFRecSkeletonBlendedAnimationPtr"; 
}

template<> inline
const Char8 *FieldTraits<SkeletonBlendedAnimation *, 0>::getSName<UnrecordedRefCountPolicy>(void)
{
    return "SFUnrecSkeletonBlendedAnimationPtr"; 
}

template<> inline
const Char8 *FieldTraits<SkeletonBlendedAnimation *, 0>::getSName<WeakRefCountPolicy>(void)
{
    return "SFWeakSkeletonBlendedAnimationPtr"; 
}

template<> inline
const Char8 *FieldTraits<SkeletonBlendedAnimation *, 0>::getSName<NoRefCountPolicy>(void)
{
    return "SFUnrefdSkeletonBlendedAnimationPtr"; 
}

template<> inline
const Char8 *FieldTraits<SkeletonBlendedAnimation *, 0>::getMName<RecordedRefCountPolicy>(void)
{
    return "MFRecSkeletonBlendedAnimationPtr"; 
}

template<> inline
const Char8 *FieldTraits<SkeletonBlendedAnimation *, 0>::getMName<UnrecordedRefCountPolicy>(void)
{
    return "MFUnrecSkeletonBlendedAnimationPtr"; 
}

template<> inline
const Char8 *FieldTraits<SkeletonBlendedAnimation *, 0>::getMName<WeakRefCountPolicy>(void)
{
    return "MFWeakSkeletonBlendedAnimationPtr"; 
}

template<> inline
const Char8 *FieldTraits<SkeletonBlendedAnimation *, 0>::getMName<NoRefCountPolicy>(void)
{
    return "MFUnrefdSkeletonBlendedAnimationPtr"; 
}


#ifndef DOXYGEN_SHOULD_SKIP_THIS
/*! \ingroup GrpDynamicsFieldSFields */
typedef PointerSField<SkeletonBlendedAnimation *,
                      RecordedRefCountPolicy  > SFRecSkeletonBlendedAnimationPtr;
/*! \ingroup GrpDynamicsFieldSFields */
typedef PointerSField<SkeletonBlendedAnimation *,
                      UnrecordedRefCountPolicy> SFUnrecSkeletonBlendedAnimationPtr;
/*! \ingroup GrpDynamicsFieldSFields */
typedef PointerSField<SkeletonBlendedAnimation *,
                      WeakRefCountPolicy      > SFWeakSkeletonBlendedAnimationPtr;
/*! \ingroup GrpDynamicsFieldSFields */
typedef PointerSField<SkeletonBlendedAnimation *,
                      NoRefCountPolicy        > SFUncountedSkeletonBlendedAnimationPtr;


/*! \ingroup GrpDynamicsFieldMFields */
typedef PointerMField<SkeletonBlendedAnimation *,
                      RecordedRefCountPolicy  > MFRecSkeletonBlendedAnimationPtr;
/*! \ingroup GrpDynamicsFieldMFields */
typedef PointerMField<SkeletonBlendedAnimation *,
                      UnrecordedRefCountPolicy> MFUnrecSkeletonBlendedAnimationPtr;
/*! \ingroup GrpDynamicsFieldMFields */
typedef PointerMField<SkeletonBlendedAnimation *,
                      WeakRefCountPolicy      > MFWeakSkeletonBlendedAnimationPtr;
/*! \ingroup GrpDynamicsFieldMFields */
typedef PointerMField<SkeletonBlendedAnimation *,
                      NoRefCountPolicy        > MFUncountedSkeletonBlendedAnimationPtr;




#else // these are the doxygen hacks

/*! \ingroup GrpDynamicsFieldSFields \ingroup GrpLibOSGDynamics */
struct SFRecSkeletonBlendedAnimationPtr : 
    public PointerSField<SkeletonBlendedAnimation *,
                         RecordedRefCountPolicy> {};
/*! \ingroup GrpDynamicsFieldSFields \ingroup GrpLibOSGDynamics */
struct SFUnrecSkeletonBlendedAnimationPtr : 
    public PointerSField<SkeletonBlendedAnimation *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpDynamicsFieldSFields \ingroup GrpLibOSGDynamics */
struct SFWeakSkeletonBlendedAnimationPtr :
    public PointerSField<SkeletonBlendedAnimation *,
                         WeakRefCountPolicy> {};
/*! \ingroup GrpDynamicsFieldSFields \ingroup GrpLibOSGDynamics */
struct SFUncountedSkeletonBlendedAnimationPtr :
    public PointerSField<SkeletonBlendedAnimation *,
                         NoRefCountPolicy> {};


/*! \ingroup GrpDynamicsFieldMFields \ingroup GrpLibOSGDynamics */
struct MFRecSkeletonBlendedAnimationPtr :
    public PointerMField<SkeletonBlendedAnimation *,
                         RecordedRefCountPolicy  > {};
/*! \ingroup GrpDynamicsFieldMFields \ingroup GrpLibOSGDynamics */
struct MFUnrecSkeletonBlendedAnimationPtr :
    public PointerMField<SkeletonBlendedAnimation *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpDynamicsFieldMFields \ingroup GrpLibOSGDynamics */
struct MFWeakSkeletonBlendedAnimationPtr :
    public PointerMField<SkeletonBlendedAnimation *,
                         WeakRefCountPolicy      > {};
/*! \ingroup GrpDynamicsFieldMFields \ingroup GrpLibOSGDynamics */
struct MFUncountedSkeletonBlendedAnimationPtr :
    public PointerMField<SkeletonBlendedAnimation *,
                         NoRefCountPolicy        > {};



#endif // these are the doxygen hacks

OSG_END_NAMESPACE

#endif /* _OSGSKELETONBLENDEDANIMATIONFIELDS_H_ */
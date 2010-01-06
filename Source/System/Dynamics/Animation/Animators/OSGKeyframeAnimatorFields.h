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


#ifndef _OSGKEYFRAMEANIMATORFIELDS_H_
#define _OSGKEYFRAMEANIMATORFIELDS_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGConfig.h"
#include "OSGDynamicsDef.h"

#include "OSGFieldContainerFields.h"
#include "OSGPointerSField.h"
#include "OSGPointerMField.h"


OSG_BEGIN_NAMESPACE

class KeyframeAnimator;

OSG_GEN_CONTAINERPTR(KeyframeAnimator);

/*! \ingroup GrpDynamicsFieldTraits
    \ingroup GrpLibOSGDynamics
 */
template <>
struct FieldTraits<KeyframeAnimator *> :
    public FieldTraitsFCPtrBase<KeyframeAnimator *>
{
  private:

    static DataType             _type;

  public:

    typedef FieldTraits<KeyframeAnimator *>  Self;

    enum                        { Convertible = NotConvertible };

    static OSG_DYNAMICS_DLLMAPPING DataType &getType(void);

    template<typename RefCountPolicy> inline
    static const Char8    *getSName     (void);

//    static const char *getSName(void) { return "SFKeyframeAnimatorPtr"; }
    template<typename RefCountPolicy> inline
    static const Char8    *getMName     (void);

//    static const char *getMName(void) { return "MFKeyframeAnimatorPtr"; }
};

template<> inline
const Char8 *FieldTraits<KeyframeAnimator *, 0>::getSName<RecordedRefCountPolicy>(void)
{
    return "SFRecKeyframeAnimatorPtr"; 
}

template<> inline
const Char8 *FieldTraits<KeyframeAnimator *, 0>::getSName<UnrecordedRefCountPolicy>(void)
{
    return "SFUnrecKeyframeAnimatorPtr"; 
}

template<> inline
const Char8 *FieldTraits<KeyframeAnimator *, 0>::getSName<WeakRefCountPolicy>(void)
{
    return "SFWeakKeyframeAnimatorPtr"; 
}

template<> inline
const Char8 *FieldTraits<KeyframeAnimator *, 0>::getSName<NoRefCountPolicy>(void)
{
    return "SFUnrefdKeyframeAnimatorPtr"; 
}

template<> inline
const Char8 *FieldTraits<KeyframeAnimator *, 0>::getMName<RecordedRefCountPolicy>(void)
{
    return "MFRecKeyframeAnimatorPtr"; 
}

template<> inline
const Char8 *FieldTraits<KeyframeAnimator *, 0>::getMName<UnrecordedRefCountPolicy>(void)
{
    return "MFUnrecKeyframeAnimatorPtr"; 
}

template<> inline
const Char8 *FieldTraits<KeyframeAnimator *, 0>::getMName<WeakRefCountPolicy>(void)
{
    return "MFWeakKeyframeAnimatorPtr"; 
}

template<> inline
const Char8 *FieldTraits<KeyframeAnimator *, 0>::getMName<NoRefCountPolicy>(void)
{
    return "MFUnrefdKeyframeAnimatorPtr"; 
}


#ifndef DOXYGEN_SHOULD_SKIP_THIS
/*! \ingroup GrpDynamicsFieldSFields */
typedef PointerSField<KeyframeAnimator *,
                      RecordedRefCountPolicy  > SFRecKeyframeAnimatorPtr;
/*! \ingroup GrpDynamicsFieldSFields */
typedef PointerSField<KeyframeAnimator *,
                      UnrecordedRefCountPolicy> SFUnrecKeyframeAnimatorPtr;
/*! \ingroup GrpDynamicsFieldSFields */
typedef PointerSField<KeyframeAnimator *,
                      WeakRefCountPolicy      > SFWeakKeyframeAnimatorPtr;
/*! \ingroup GrpDynamicsFieldSFields */
typedef PointerSField<KeyframeAnimator *,
                      NoRefCountPolicy        > SFUncountedKeyframeAnimatorPtr;


/*! \ingroup GrpDynamicsFieldMFields */
typedef PointerMField<KeyframeAnimator *,
                      RecordedRefCountPolicy  > MFRecKeyframeAnimatorPtr;
/*! \ingroup GrpDynamicsFieldMFields */
typedef PointerMField<KeyframeAnimator *,
                      UnrecordedRefCountPolicy> MFUnrecKeyframeAnimatorPtr;
/*! \ingroup GrpDynamicsFieldMFields */
typedef PointerMField<KeyframeAnimator *,
                      WeakRefCountPolicy      > MFWeakKeyframeAnimatorPtr;
/*! \ingroup GrpDynamicsFieldMFields */
typedef PointerMField<KeyframeAnimator *,
                      NoRefCountPolicy        > MFUncountedKeyframeAnimatorPtr;




#else // these are the doxygen hacks

/*! \ingroup GrpDynamicsFieldSFields \ingroup GrpLibOSGDynamics */
struct SFRecKeyframeAnimatorPtr : 
    public PointerSField<KeyframeAnimator *,
                         RecordedRefCountPolicy> {};
/*! \ingroup GrpDynamicsFieldSFields \ingroup GrpLibOSGDynamics */
struct SFUnrecKeyframeAnimatorPtr : 
    public PointerSField<KeyframeAnimator *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpDynamicsFieldSFields \ingroup GrpLibOSGDynamics */
struct SFWeakKeyframeAnimatorPtr :
    public PointerSField<KeyframeAnimator *,
                         WeakRefCountPolicy> {};
/*! \ingroup GrpDynamicsFieldSFields \ingroup GrpLibOSGDynamics */
struct SFUncountedKeyframeAnimatorPtr :
    public PointerSField<KeyframeAnimator *,
                         NoRefCountPolicy> {};


/*! \ingroup GrpDynamicsFieldMFields \ingroup GrpLibOSGDynamics */
struct MFRecKeyframeAnimatorPtr :
    public PointerMField<KeyframeAnimator *,
                         RecordedRefCountPolicy  > {};
/*! \ingroup GrpDynamicsFieldMFields \ingroup GrpLibOSGDynamics */
struct MFUnrecKeyframeAnimatorPtr :
    public PointerMField<KeyframeAnimator *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpDynamicsFieldMFields \ingroup GrpLibOSGDynamics */
struct MFWeakKeyframeAnimatorPtr :
    public PointerMField<KeyframeAnimator *,
                         WeakRefCountPolicy      > {};
/*! \ingroup GrpDynamicsFieldMFields \ingroup GrpLibOSGDynamics */
struct MFUncountedKeyframeAnimatorPtr :
    public PointerMField<KeyframeAnimator *,
                         NoRefCountPolicy        > {};



#endif // these are the doxygen hacks

OSG_END_NAMESPACE

#endif /* _OSGKEYFRAMEANIMATORFIELDS_H_ */

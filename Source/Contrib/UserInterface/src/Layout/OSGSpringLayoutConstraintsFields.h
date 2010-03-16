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


#ifndef _OSGSPRINGLAYOUTCONSTRAINTSFIELDS_H_
#define _OSGSPRINGLAYOUTCONSTRAINTSFIELDS_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGConfig.h"
#include "OSGContribUserInterfaceDef.h"

#include "OSGFieldContainerFields.h"
#include "OSGPointerSField.h"
#include "OSGPointerMField.h"


OSG_BEGIN_NAMESPACE

class SpringLayoutConstraints;

OSG_GEN_CONTAINERPTR(SpringLayoutConstraints);

/*! \ingroup GrpContribUserInterfaceFieldTraits
    \ingroup GrpLibOSGContribUserInterface
 */
template <>
struct FieldTraits<SpringLayoutConstraints *> :
    public FieldTraitsFCPtrBase<SpringLayoutConstraints *>
{
  private:

    static DataType             _type;

  public:

    typedef FieldTraits<SpringLayoutConstraints *>  Self;

    enum                        { Convertible = NotConvertible };

    static OSG_CONTRIBUSERINTERFACE_DLLMAPPING DataType &getType(void);

    template<typename RefCountPolicy> inline
    static const Char8    *getSName     (void);

//    static const char *getSName(void) { return "SFSpringLayoutConstraintsPtr"; }
    template<typename RefCountPolicy> inline
    static const Char8    *getMName     (void);

//    static const char *getMName(void) { return "MFSpringLayoutConstraintsPtr"; }
};

template<> inline
const Char8 *FieldTraits<SpringLayoutConstraints *, 0>::getSName<RecordedRefCountPolicy>(void)
{
    return "SFRecSpringLayoutConstraintsPtr"; 
}

template<> inline
const Char8 *FieldTraits<SpringLayoutConstraints *, 0>::getSName<UnrecordedRefCountPolicy>(void)
{
    return "SFUnrecSpringLayoutConstraintsPtr"; 
}

template<> inline
const Char8 *FieldTraits<SpringLayoutConstraints *, 0>::getSName<WeakRefCountPolicy>(void)
{
    return "SFWeakSpringLayoutConstraintsPtr"; 
}

template<> inline
const Char8 *FieldTraits<SpringLayoutConstraints *, 0>::getSName<NoRefCountPolicy>(void)
{
    return "SFUnrefdSpringLayoutConstraintsPtr"; 
}

template<> inline
const Char8 *FieldTraits<SpringLayoutConstraints *, 0>::getMName<RecordedRefCountPolicy>(void)
{
    return "MFRecSpringLayoutConstraintsPtr"; 
}

template<> inline
const Char8 *FieldTraits<SpringLayoutConstraints *, 0>::getMName<UnrecordedRefCountPolicy>(void)
{
    return "MFUnrecSpringLayoutConstraintsPtr"; 
}

template<> inline
const Char8 *FieldTraits<SpringLayoutConstraints *, 0>::getMName<WeakRefCountPolicy>(void)
{
    return "MFWeakSpringLayoutConstraintsPtr"; 
}

template<> inline
const Char8 *FieldTraits<SpringLayoutConstraints *, 0>::getMName<NoRefCountPolicy>(void)
{
    return "MFUnrefdSpringLayoutConstraintsPtr"; 
}


#ifndef DOXYGEN_SHOULD_SKIP_THIS
/*! \ingroup GrpContribUserInterfaceFieldSFields */
typedef PointerSField<SpringLayoutConstraints *,
                      RecordedRefCountPolicy  > SFRecSpringLayoutConstraintsPtr;
/*! \ingroup GrpContribUserInterfaceFieldSFields */
typedef PointerSField<SpringLayoutConstraints *,
                      UnrecordedRefCountPolicy> SFUnrecSpringLayoutConstraintsPtr;
/*! \ingroup GrpContribUserInterfaceFieldSFields */
typedef PointerSField<SpringLayoutConstraints *,
                      WeakRefCountPolicy      > SFWeakSpringLayoutConstraintsPtr;
/*! \ingroup GrpContribUserInterfaceFieldSFields */
typedef PointerSField<SpringLayoutConstraints *,
                      NoRefCountPolicy        > SFUncountedSpringLayoutConstraintsPtr;


/*! \ingroup GrpContribUserInterfaceFieldMFields */
typedef PointerMField<SpringLayoutConstraints *,
                      RecordedRefCountPolicy  > MFRecSpringLayoutConstraintsPtr;
/*! \ingroup GrpContribUserInterfaceFieldMFields */
typedef PointerMField<SpringLayoutConstraints *,
                      UnrecordedRefCountPolicy> MFUnrecSpringLayoutConstraintsPtr;
/*! \ingroup GrpContribUserInterfaceFieldMFields */
typedef PointerMField<SpringLayoutConstraints *,
                      WeakRefCountPolicy      > MFWeakSpringLayoutConstraintsPtr;
/*! \ingroup GrpContribUserInterfaceFieldMFields */
typedef PointerMField<SpringLayoutConstraints *,
                      NoRefCountPolicy        > MFUncountedSpringLayoutConstraintsPtr;




#else // these are the doxygen hacks

/*! \ingroup GrpContribUserInterfaceFieldSFields \ingroup GrpLibOSGContribUserInterface */
struct SFRecSpringLayoutConstraintsPtr : 
    public PointerSField<SpringLayoutConstraints *,
                         RecordedRefCountPolicy> {};
/*! \ingroup GrpContribUserInterfaceFieldSFields \ingroup GrpLibOSGContribUserInterface */
struct SFUnrecSpringLayoutConstraintsPtr : 
    public PointerSField<SpringLayoutConstraints *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpContribUserInterfaceFieldSFields \ingroup GrpLibOSGContribUserInterface */
struct SFWeakSpringLayoutConstraintsPtr :
    public PointerSField<SpringLayoutConstraints *,
                         WeakRefCountPolicy> {};
/*! \ingroup GrpContribUserInterfaceFieldSFields \ingroup GrpLibOSGContribUserInterface */
struct SFUncountedSpringLayoutConstraintsPtr :
    public PointerSField<SpringLayoutConstraints *,
                         NoRefCountPolicy> {};


/*! \ingroup GrpContribUserInterfaceFieldMFields \ingroup GrpLibOSGContribUserInterface */
struct MFRecSpringLayoutConstraintsPtr :
    public PointerMField<SpringLayoutConstraints *,
                         RecordedRefCountPolicy  > {};
/*! \ingroup GrpContribUserInterfaceFieldMFields \ingroup GrpLibOSGContribUserInterface */
struct MFUnrecSpringLayoutConstraintsPtr :
    public PointerMField<SpringLayoutConstraints *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpContribUserInterfaceFieldMFields \ingroup GrpLibOSGContribUserInterface */
struct MFWeakSpringLayoutConstraintsPtr :
    public PointerMField<SpringLayoutConstraints *,
                         WeakRefCountPolicy      > {};
/*! \ingroup GrpContribUserInterfaceFieldMFields \ingroup GrpLibOSGContribUserInterface */
struct MFUncountedSpringLayoutConstraintsPtr :
    public PointerMField<SpringLayoutConstraints *,
                         NoRefCountPolicy        > {};



#endif // these are the doxygen hacks

OSG_END_NAMESPACE

#endif /* _OSGSPRINGLAYOUTCONSTRAINTSFIELDS_H_ */
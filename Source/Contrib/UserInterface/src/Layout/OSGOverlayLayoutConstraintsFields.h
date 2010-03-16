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


#ifndef _OSGOVERLAYLAYOUTCONSTRAINTSFIELDS_H_
#define _OSGOVERLAYLAYOUTCONSTRAINTSFIELDS_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGConfig.h"
#include "OSGContribUserInterfaceDef.h"

#include "OSGFieldContainerFields.h"
#include "OSGPointerSField.h"
#include "OSGPointerMField.h"


OSG_BEGIN_NAMESPACE

class OverlayLayoutConstraints;

OSG_GEN_CONTAINERPTR(OverlayLayoutConstraints);

/*! \ingroup GrpContribUserInterfaceFieldTraits
    \ingroup GrpLibOSGContribUserInterface
 */
template <>
struct FieldTraits<OverlayLayoutConstraints *> :
    public FieldTraitsFCPtrBase<OverlayLayoutConstraints *>
{
  private:

    static DataType             _type;

  public:

    typedef FieldTraits<OverlayLayoutConstraints *>  Self;

    enum                        { Convertible = NotConvertible };

    static OSG_CONTRIBUSERINTERFACE_DLLMAPPING DataType &getType(void);

    template<typename RefCountPolicy> inline
    static const Char8    *getSName     (void);

//    static const char *getSName(void) { return "SFOverlayLayoutConstraintsPtr"; }
    template<typename RefCountPolicy> inline
    static const Char8    *getMName     (void);

//    static const char *getMName(void) { return "MFOverlayLayoutConstraintsPtr"; }
};

template<> inline
const Char8 *FieldTraits<OverlayLayoutConstraints *, 0>::getSName<RecordedRefCountPolicy>(void)
{
    return "SFRecOverlayLayoutConstraintsPtr"; 
}

template<> inline
const Char8 *FieldTraits<OverlayLayoutConstraints *, 0>::getSName<UnrecordedRefCountPolicy>(void)
{
    return "SFUnrecOverlayLayoutConstraintsPtr"; 
}

template<> inline
const Char8 *FieldTraits<OverlayLayoutConstraints *, 0>::getSName<WeakRefCountPolicy>(void)
{
    return "SFWeakOverlayLayoutConstraintsPtr"; 
}

template<> inline
const Char8 *FieldTraits<OverlayLayoutConstraints *, 0>::getSName<NoRefCountPolicy>(void)
{
    return "SFUnrefdOverlayLayoutConstraintsPtr"; 
}

template<> inline
const Char8 *FieldTraits<OverlayLayoutConstraints *, 0>::getMName<RecordedRefCountPolicy>(void)
{
    return "MFRecOverlayLayoutConstraintsPtr"; 
}

template<> inline
const Char8 *FieldTraits<OverlayLayoutConstraints *, 0>::getMName<UnrecordedRefCountPolicy>(void)
{
    return "MFUnrecOverlayLayoutConstraintsPtr"; 
}

template<> inline
const Char8 *FieldTraits<OverlayLayoutConstraints *, 0>::getMName<WeakRefCountPolicy>(void)
{
    return "MFWeakOverlayLayoutConstraintsPtr"; 
}

template<> inline
const Char8 *FieldTraits<OverlayLayoutConstraints *, 0>::getMName<NoRefCountPolicy>(void)
{
    return "MFUnrefdOverlayLayoutConstraintsPtr"; 
}


#ifndef DOXYGEN_SHOULD_SKIP_THIS
/*! \ingroup GrpContribUserInterfaceFieldSFields */
typedef PointerSField<OverlayLayoutConstraints *,
                      RecordedRefCountPolicy  > SFRecOverlayLayoutConstraintsPtr;
/*! \ingroup GrpContribUserInterfaceFieldSFields */
typedef PointerSField<OverlayLayoutConstraints *,
                      UnrecordedRefCountPolicy> SFUnrecOverlayLayoutConstraintsPtr;
/*! \ingroup GrpContribUserInterfaceFieldSFields */
typedef PointerSField<OverlayLayoutConstraints *,
                      WeakRefCountPolicy      > SFWeakOverlayLayoutConstraintsPtr;
/*! \ingroup GrpContribUserInterfaceFieldSFields */
typedef PointerSField<OverlayLayoutConstraints *,
                      NoRefCountPolicy        > SFUncountedOverlayLayoutConstraintsPtr;


/*! \ingroup GrpContribUserInterfaceFieldMFields */
typedef PointerMField<OverlayLayoutConstraints *,
                      RecordedRefCountPolicy  > MFRecOverlayLayoutConstraintsPtr;
/*! \ingroup GrpContribUserInterfaceFieldMFields */
typedef PointerMField<OverlayLayoutConstraints *,
                      UnrecordedRefCountPolicy> MFUnrecOverlayLayoutConstraintsPtr;
/*! \ingroup GrpContribUserInterfaceFieldMFields */
typedef PointerMField<OverlayLayoutConstraints *,
                      WeakRefCountPolicy      > MFWeakOverlayLayoutConstraintsPtr;
/*! \ingroup GrpContribUserInterfaceFieldMFields */
typedef PointerMField<OverlayLayoutConstraints *,
                      NoRefCountPolicy        > MFUncountedOverlayLayoutConstraintsPtr;




#else // these are the doxygen hacks

/*! \ingroup GrpContribUserInterfaceFieldSFields \ingroup GrpLibOSGContribUserInterface */
struct SFRecOverlayLayoutConstraintsPtr : 
    public PointerSField<OverlayLayoutConstraints *,
                         RecordedRefCountPolicy> {};
/*! \ingroup GrpContribUserInterfaceFieldSFields \ingroup GrpLibOSGContribUserInterface */
struct SFUnrecOverlayLayoutConstraintsPtr : 
    public PointerSField<OverlayLayoutConstraints *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpContribUserInterfaceFieldSFields \ingroup GrpLibOSGContribUserInterface */
struct SFWeakOverlayLayoutConstraintsPtr :
    public PointerSField<OverlayLayoutConstraints *,
                         WeakRefCountPolicy> {};
/*! \ingroup GrpContribUserInterfaceFieldSFields \ingroup GrpLibOSGContribUserInterface */
struct SFUncountedOverlayLayoutConstraintsPtr :
    public PointerSField<OverlayLayoutConstraints *,
                         NoRefCountPolicy> {};


/*! \ingroup GrpContribUserInterfaceFieldMFields \ingroup GrpLibOSGContribUserInterface */
struct MFRecOverlayLayoutConstraintsPtr :
    public PointerMField<OverlayLayoutConstraints *,
                         RecordedRefCountPolicy  > {};
/*! \ingroup GrpContribUserInterfaceFieldMFields \ingroup GrpLibOSGContribUserInterface */
struct MFUnrecOverlayLayoutConstraintsPtr :
    public PointerMField<OverlayLayoutConstraints *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpContribUserInterfaceFieldMFields \ingroup GrpLibOSGContribUserInterface */
struct MFWeakOverlayLayoutConstraintsPtr :
    public PointerMField<OverlayLayoutConstraints *,
                         WeakRefCountPolicy      > {};
/*! \ingroup GrpContribUserInterfaceFieldMFields \ingroup GrpLibOSGContribUserInterface */
struct MFUncountedOverlayLayoutConstraintsPtr :
    public PointerMField<OverlayLayoutConstraints *,
                         NoRefCountPolicy        > {};



#endif // these are the doxygen hacks

OSG_END_NAMESPACE

#endif /* _OSGOVERLAYLAYOUTCONSTRAINTSFIELDS_H_ */
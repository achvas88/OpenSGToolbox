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


#ifndef _OSGMENUEVENTDETAILSFIELDS_H_
#define _OSGMENUEVENTDETAILSFIELDS_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGConfig.h"
#include "OSGContribUserInterfaceDef.h"

#include "OSGFieldContainerFields.h"
#include "OSGPointerSField.h"
#include "OSGPointerMField.h"


OSG_BEGIN_NAMESPACE

class MenuEventDetails;

OSG_GEN_CONTAINERPTR(MenuEventDetails);

/*! \ingroup GrpContribUserInterfaceFieldTraits
    \ingroup GrpLibOSGContribUserInterface
 */
template <>
struct FieldTraits<MenuEventDetails *> :
    public FieldTraitsFCPtrBase<MenuEventDetails *>
{
  private:

    static DataType             _type;

  public:

    typedef FieldTraits<MenuEventDetails *>  Self;

    enum                        { Convertible = NotConvertible };

    static OSG_CONTRIBUSERINTERFACE_DLLMAPPING DataType &getType(void);

    template<typename RefCountPolicy> inline
    static const Char8    *getSName     (void);

//    static const char *getSName(void) { return "SFMenuEventDetailsPtr"; }
    template<typename RefCountPolicy> inline
    static const Char8    *getMName     (void);

//    static const char *getMName(void) { return "MFMenuEventDetailsPtr"; }
};

template<> inline
const Char8 *FieldTraits<MenuEventDetails *, 0>::getSName<RecordedRefCountPolicy>(void)
{
    return "SFRecMenuEventDetailsPtr"; 
}

template<> inline
const Char8 *FieldTraits<MenuEventDetails *, 0>::getSName<UnrecordedRefCountPolicy>(void)
{
    return "SFUnrecMenuEventDetailsPtr"; 
}

template<> inline
const Char8 *FieldTraits<MenuEventDetails *, 0>::getSName<WeakRefCountPolicy>(void)
{
    return "SFWeakMenuEventDetailsPtr"; 
}

template<> inline
const Char8 *FieldTraits<MenuEventDetails *, 0>::getSName<NoRefCountPolicy>(void)
{
    return "SFUnrefdMenuEventDetailsPtr"; 
}

template<> inline
const Char8 *FieldTraits<MenuEventDetails *, 0>::getMName<RecordedRefCountPolicy>(void)
{
    return "MFRecMenuEventDetailsPtr"; 
}

template<> inline
const Char8 *FieldTraits<MenuEventDetails *, 0>::getMName<UnrecordedRefCountPolicy>(void)
{
    return "MFUnrecMenuEventDetailsPtr"; 
}

template<> inline
const Char8 *FieldTraits<MenuEventDetails *, 0>::getMName<WeakRefCountPolicy>(void)
{
    return "MFWeakMenuEventDetailsPtr"; 
}

template<> inline
const Char8 *FieldTraits<MenuEventDetails *, 0>::getMName<NoRefCountPolicy>(void)
{
    return "MFUnrefdMenuEventDetailsPtr"; 
}


#ifndef DOXYGEN_SHOULD_SKIP_THIS
/*! \ingroup GrpContribUserInterfaceFieldSFields */
typedef PointerSField<MenuEventDetails *,
                      RecordedRefCountPolicy  > SFRecMenuEventDetailsPtr;
/*! \ingroup GrpContribUserInterfaceFieldSFields */
typedef PointerSField<MenuEventDetails *,
                      UnrecordedRefCountPolicy> SFUnrecMenuEventDetailsPtr;
/*! \ingroup GrpContribUserInterfaceFieldSFields */
typedef PointerSField<MenuEventDetails *,
                      WeakRefCountPolicy      > SFWeakMenuEventDetailsPtr;
/*! \ingroup GrpContribUserInterfaceFieldSFields */
typedef PointerSField<MenuEventDetails *,
                      NoRefCountPolicy        > SFUncountedMenuEventDetailsPtr;


/*! \ingroup GrpContribUserInterfaceFieldMFields */
typedef PointerMField<MenuEventDetails *,
                      RecordedRefCountPolicy  > MFRecMenuEventDetailsPtr;
/*! \ingroup GrpContribUserInterfaceFieldMFields */
typedef PointerMField<MenuEventDetails *,
                      UnrecordedRefCountPolicy> MFUnrecMenuEventDetailsPtr;
/*! \ingroup GrpContribUserInterfaceFieldMFields */
typedef PointerMField<MenuEventDetails *,
                      WeakRefCountPolicy      > MFWeakMenuEventDetailsPtr;
/*! \ingroup GrpContribUserInterfaceFieldMFields */
typedef PointerMField<MenuEventDetails *,
                      NoRefCountPolicy        > MFUncountedMenuEventDetailsPtr;




#else // these are the doxygen hacks

/*! \ingroup GrpContribUserInterfaceFieldSFields \ingroup GrpLibOSGContribUserInterface */
struct SFRecMenuEventDetailsPtr : 
    public PointerSField<MenuEventDetails *,
                         RecordedRefCountPolicy> {};
/*! \ingroup GrpContribUserInterfaceFieldSFields \ingroup GrpLibOSGContribUserInterface */
struct SFUnrecMenuEventDetailsPtr : 
    public PointerSField<MenuEventDetails *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpContribUserInterfaceFieldSFields \ingroup GrpLibOSGContribUserInterface */
struct SFWeakMenuEventDetailsPtr :
    public PointerSField<MenuEventDetails *,
                         WeakRefCountPolicy> {};
/*! \ingroup GrpContribUserInterfaceFieldSFields \ingroup GrpLibOSGContribUserInterface */
struct SFUncountedMenuEventDetailsPtr :
    public PointerSField<MenuEventDetails *,
                         NoRefCountPolicy> {};


/*! \ingroup GrpContribUserInterfaceFieldMFields \ingroup GrpLibOSGContribUserInterface */
struct MFRecMenuEventDetailsPtr :
    public PointerMField<MenuEventDetails *,
                         RecordedRefCountPolicy  > {};
/*! \ingroup GrpContribUserInterfaceFieldMFields \ingroup GrpLibOSGContribUserInterface */
struct MFUnrecMenuEventDetailsPtr :
    public PointerMField<MenuEventDetails *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpContribUserInterfaceFieldMFields \ingroup GrpLibOSGContribUserInterface */
struct MFWeakMenuEventDetailsPtr :
    public PointerMField<MenuEventDetails *,
                         WeakRefCountPolicy      > {};
/*! \ingroup GrpContribUserInterfaceFieldMFields \ingroup GrpLibOSGContribUserInterface */
struct MFUncountedMenuEventDetailsPtr :
    public PointerMField<MenuEventDetails *,
                         NoRefCountPolicy        > {};



#endif // these are the doxygen hacks

OSG_END_NAMESPACE

#endif /* _OSGMENUEVENTDETAILSFIELDS_H_ */

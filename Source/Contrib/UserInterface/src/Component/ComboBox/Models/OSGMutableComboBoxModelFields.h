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


#ifndef _OSGMUTABLECOMBOBOXMODELFIELDS_H_
#define _OSGMUTABLECOMBOBOXMODELFIELDS_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGConfig.h"
#include "OSGContribUserInterfaceDef.h"

#include "OSGFieldContainerFields.h"
#include "OSGPointerSField.h"
#include "OSGPointerMField.h"


OSG_BEGIN_NAMESPACE

class MutableComboBoxModel;

OSG_GEN_CONTAINERPTR(MutableComboBoxModel);

/*! \ingroup GrpContribUserInterfaceFieldTraits
    \ingroup GrpLibOSGContribUserInterface
 */
template <>
struct FieldTraits<MutableComboBoxModel *> :
    public FieldTraitsFCPtrBase<MutableComboBoxModel *>
{
  private:

    static DataType             _type;

  public:

    typedef FieldTraits<MutableComboBoxModel *>  Self;

    enum                        { Convertible = NotConvertible };

    static OSG_CONTRIBUSERINTERFACE_DLLMAPPING DataType &getType(void);

    template<typename RefCountPolicy> inline
    static const Char8    *getSName     (void);

//    static const char *getSName(void) { return "SFMutableComboBoxModelPtr"; }
    template<typename RefCountPolicy> inline
    static const Char8    *getMName     (void);

//    static const char *getMName(void) { return "MFMutableComboBoxModelPtr"; }
};

template<> inline
const Char8 *FieldTraits<MutableComboBoxModel *, 0>::getSName<RecordedRefCountPolicy>(void)
{
    return "SFRecMutableComboBoxModelPtr"; 
}

template<> inline
const Char8 *FieldTraits<MutableComboBoxModel *, 0>::getSName<UnrecordedRefCountPolicy>(void)
{
    return "SFUnrecMutableComboBoxModelPtr"; 
}

template<> inline
const Char8 *FieldTraits<MutableComboBoxModel *, 0>::getSName<WeakRefCountPolicy>(void)
{
    return "SFWeakMutableComboBoxModelPtr"; 
}

template<> inline
const Char8 *FieldTraits<MutableComboBoxModel *, 0>::getSName<NoRefCountPolicy>(void)
{
    return "SFUnrefdMutableComboBoxModelPtr"; 
}

template<> inline
const Char8 *FieldTraits<MutableComboBoxModel *, 0>::getMName<RecordedRefCountPolicy>(void)
{
    return "MFRecMutableComboBoxModelPtr"; 
}

template<> inline
const Char8 *FieldTraits<MutableComboBoxModel *, 0>::getMName<UnrecordedRefCountPolicy>(void)
{
    return "MFUnrecMutableComboBoxModelPtr"; 
}

template<> inline
const Char8 *FieldTraits<MutableComboBoxModel *, 0>::getMName<WeakRefCountPolicy>(void)
{
    return "MFWeakMutableComboBoxModelPtr"; 
}

template<> inline
const Char8 *FieldTraits<MutableComboBoxModel *, 0>::getMName<NoRefCountPolicy>(void)
{
    return "MFUnrefdMutableComboBoxModelPtr"; 
}


#ifndef DOXYGEN_SHOULD_SKIP_THIS
/*! \ingroup GrpContribUserInterfaceFieldSFields */
typedef PointerSField<MutableComboBoxModel *,
                      RecordedRefCountPolicy  > SFRecMutableComboBoxModelPtr;
/*! \ingroup GrpContribUserInterfaceFieldSFields */
typedef PointerSField<MutableComboBoxModel *,
                      UnrecordedRefCountPolicy> SFUnrecMutableComboBoxModelPtr;
/*! \ingroup GrpContribUserInterfaceFieldSFields */
typedef PointerSField<MutableComboBoxModel *,
                      WeakRefCountPolicy      > SFWeakMutableComboBoxModelPtr;
/*! \ingroup GrpContribUserInterfaceFieldSFields */
typedef PointerSField<MutableComboBoxModel *,
                      NoRefCountPolicy        > SFUncountedMutableComboBoxModelPtr;


/*! \ingroup GrpContribUserInterfaceFieldMFields */
typedef PointerMField<MutableComboBoxModel *,
                      RecordedRefCountPolicy  > MFRecMutableComboBoxModelPtr;
/*! \ingroup GrpContribUserInterfaceFieldMFields */
typedef PointerMField<MutableComboBoxModel *,
                      UnrecordedRefCountPolicy> MFUnrecMutableComboBoxModelPtr;
/*! \ingroup GrpContribUserInterfaceFieldMFields */
typedef PointerMField<MutableComboBoxModel *,
                      WeakRefCountPolicy      > MFWeakMutableComboBoxModelPtr;
/*! \ingroup GrpContribUserInterfaceFieldMFields */
typedef PointerMField<MutableComboBoxModel *,
                      NoRefCountPolicy        > MFUncountedMutableComboBoxModelPtr;




#else // these are the doxygen hacks

/*! \ingroup GrpContribUserInterfaceFieldSFields \ingroup GrpLibOSGContribUserInterface */
struct SFRecMutableComboBoxModelPtr : 
    public PointerSField<MutableComboBoxModel *,
                         RecordedRefCountPolicy> {};
/*! \ingroup GrpContribUserInterfaceFieldSFields \ingroup GrpLibOSGContribUserInterface */
struct SFUnrecMutableComboBoxModelPtr : 
    public PointerSField<MutableComboBoxModel *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpContribUserInterfaceFieldSFields \ingroup GrpLibOSGContribUserInterface */
struct SFWeakMutableComboBoxModelPtr :
    public PointerSField<MutableComboBoxModel *,
                         WeakRefCountPolicy> {};
/*! \ingroup GrpContribUserInterfaceFieldSFields \ingroup GrpLibOSGContribUserInterface */
struct SFUncountedMutableComboBoxModelPtr :
    public PointerSField<MutableComboBoxModel *,
                         NoRefCountPolicy> {};


/*! \ingroup GrpContribUserInterfaceFieldMFields \ingroup GrpLibOSGContribUserInterface */
struct MFRecMutableComboBoxModelPtr :
    public PointerMField<MutableComboBoxModel *,
                         RecordedRefCountPolicy  > {};
/*! \ingroup GrpContribUserInterfaceFieldMFields \ingroup GrpLibOSGContribUserInterface */
struct MFUnrecMutableComboBoxModelPtr :
    public PointerMField<MutableComboBoxModel *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpContribUserInterfaceFieldMFields \ingroup GrpLibOSGContribUserInterface */
struct MFWeakMutableComboBoxModelPtr :
    public PointerMField<MutableComboBoxModel *,
                         WeakRefCountPolicy      > {};
/*! \ingroup GrpContribUserInterfaceFieldMFields \ingroup GrpLibOSGContribUserInterface */
struct MFUncountedMutableComboBoxModelPtr :
    public PointerMField<MutableComboBoxModel *,
                         NoRefCountPolicy        > {};



#endif // these are the doxygen hacks

OSG_END_NAMESPACE

#endif /* _OSGMUTABLECOMBOBOXMODELFIELDS_H_ */

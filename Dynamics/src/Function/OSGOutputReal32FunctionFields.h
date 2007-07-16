/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *               Copyright (C) 2000-2002 by the OpenSG Forum                 *
 *                                                                           *
 *                            www.opensg.org                                 *
 *                                                                           *
 *   contact: dirk@opensg.org, gerrit.voss@vossg.org, jbehr@zgdv.de          *
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


#ifndef _OSGOUTPUTREAL32FUNCTIONFIELDS_H_
#define _OSGOUTPUTREAL32FUNCTIONFIELDS_H_
#ifdef __sgi
#pragma once
#endif

#include <OpenSG/OSGConfig.h>

#include <OpenSG/OSGFieldContainerPtr.h>
#include <OpenSG/OSGNodeCoreFieldDataType.h>
#include "OSGDynamicsDef.h"

#include "OSGFunctionFields.h"

OSG_BEGIN_NAMESPACE

class OutputReal32Function;

#if !defined(OSG_DO_DOC)   // created as a dummy class, remove to prevent doubles
//! OutputReal32FunctionPtr

typedef FCPtr<FunctionPtr, OutputReal32Function> OutputReal32FunctionPtr;

#endif

#if !defined(OSG_DO_DOC) || (OSG_DOC_LEVEL >= 3)
/*! \ingroup GrpDynamicsFieldTraits
 */
#if !defined(OSG_DOC_DEV_TRAITS)
/*! \hideinhierarchy */
#endif

template <>
struct FieldDataTraits<OutputReal32FunctionPtr> : 
    public FieldTraitsRecurseMapper<OutputReal32FunctionPtr, true>
{
    static DataType             _type;                       

    enum                        { StringConvertable = 0x00 };
    enum                        { bHasParent        = 0x01 };

    static DataType   &getType (void) { return _type;        }

    static const char *getSName(void) { return "SFOutputReal32FunctionPtr"; }
    static const char *getMName(void) { return "MFOutputReal32FunctionPtr"; }
};

#if !defined(OSG_DOC_DEV_TRAITS)
/*! \class  FieldTraitsRecurseMapper<OutputReal32FunctionPtr, true>
    \hideinhierarchy
 */
#endif

#endif // !defined(OSG_DO_DOC) || (OSG_DOC_LEVEL >= 3)


#if !defined(OSG_DO_DOC) || defined(OSG_DOC_FIELD_TYPEDEFS)
/*! \ingroup GrpDynamicsFieldSingle */

typedef SField<OutputReal32FunctionPtr> SFOutputReal32FunctionPtr;
#endif

#ifndef OSG_COMPILEOUTPUTREAL32FUNCTIONINST
OSG_DLLEXPORT_DECL1(SField, OutputReal32FunctionPtr, OSG_DYNAMICSLIB_DLLTMPLMAPPING)
#endif

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_FIELD_TYPEDEFS)
/*! \ingroup GrpDynamicsFieldMulti */

typedef MField<OutputReal32FunctionPtr> MFOutputReal32FunctionPtr;
#endif

#ifndef OSG_COMPILEOUTPUTREAL32FUNCTIONINST
OSG_DLLEXPORT_DECL1(MField, OutputReal32FunctionPtr, OSG_DYNAMICSLIB_DLLTMPLMAPPING)
#endif

OSG_END_NAMESPACE

#define OSGOUTPUTREAL32FUNCTIONFIELDS_HEADER_CVSID "@(#)$Id: FCFieldsTemplate_h.h,v 1.26 2006/02/20 16:55:35 dirk Exp $"

#endif /* _OSGOUTPUTREAL32FUNCTIONFIELDS_H_ */

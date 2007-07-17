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
 **     Do not change this file, changes should be done in the derived      **
 **     class DefaultListSelectionModel!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#define OSG_COMPILEDEFAULTLISTSELECTIONMODELINST

#include <stdlib.h>
#include <stdio.h>

#include <OpenSG/OSGConfig.h>

#include "OSGDefaultListSelectionModelBase.h"
#include "OSGDefaultListSelectionModel.h"


OSG_BEGIN_NAMESPACE

const OSG::BitVector DefaultListSelectionModelBase::MTInfluenceMask = 
    (Inherited::MTInfluenceMask) | 
    (static_cast<BitVector>(0x0) << Inherited::NextFieldId); 



FieldContainerType DefaultListSelectionModelBase::_type(
    "DefaultListSelectionModel",
    "FieldContainer",
    NULL,
    (PrototypeCreateF) &DefaultListSelectionModelBase::createEmpty,
    DefaultListSelectionModel::initMethod,
    NULL,
    0);

//OSG_FIELD_CONTAINER_DEF(DefaultListSelectionModelBase, DefaultListSelectionModelPtr)

/*------------------------------ get -----------------------------------*/

FieldContainerType &DefaultListSelectionModelBase::getType(void) 
{
    return _type; 
} 

const FieldContainerType &DefaultListSelectionModelBase::getType(void) const 
{
    return _type;
} 


FieldContainerPtr DefaultListSelectionModelBase::shallowCopy(void) const 
{ 
    DefaultListSelectionModelPtr returnValue; 

    newPtr(returnValue, dynamic_cast<const DefaultListSelectionModel *>(this)); 

    return returnValue; 
}

UInt32 DefaultListSelectionModelBase::getContainerSize(void) const 
{ 
    return sizeof(DefaultListSelectionModel); 
}


#if !defined(OSG_FIXED_MFIELDSYNC)
void DefaultListSelectionModelBase::executeSync(      FieldContainer &other,
                                    const BitVector      &whichField)
{
    this->executeSyncImpl((DefaultListSelectionModelBase *) &other, whichField);
}
#else
void DefaultListSelectionModelBase::executeSync(      FieldContainer &other,
                                    const BitVector      &whichField,                                    const SyncInfo       &sInfo     )
{
    this->executeSyncImpl((DefaultListSelectionModelBase *) &other, whichField, sInfo);
}
void DefaultListSelectionModelBase::execBeginEdit(const BitVector &whichField, 
                                            UInt32     uiAspect,
                                            UInt32     uiContainerSize) 
{
    this->execBeginEditImpl(whichField, uiAspect, uiContainerSize);
}

void DefaultListSelectionModelBase::onDestroyAspect(UInt32 uiId, UInt32 uiAspect)
{
    Inherited::onDestroyAspect(uiId, uiAspect);

}
#endif

/*------------------------- constructors ----------------------------------*/

#ifdef OSG_WIN32_ICL
#pragma warning (disable : 383)
#endif

DefaultListSelectionModelBase::DefaultListSelectionModelBase(void) :
    Inherited() 
{
}

#ifdef OSG_WIN32_ICL
#pragma warning (default : 383)
#endif

DefaultListSelectionModelBase::DefaultListSelectionModelBase(const DefaultListSelectionModelBase &source) :
    Inherited                 (source)
{
}

/*-------------------------- destructors ----------------------------------*/

DefaultListSelectionModelBase::~DefaultListSelectionModelBase(void)
{
}

/*------------------------------ access -----------------------------------*/

UInt32 DefaultListSelectionModelBase::getBinSize(const BitVector &whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);


    return returnValue;
}

void DefaultListSelectionModelBase::copyToBin(      BinaryDataHandler &pMem,
                                  const BitVector         &whichField)
{
    Inherited::copyToBin(pMem, whichField);


}

void DefaultListSelectionModelBase::copyFromBin(      BinaryDataHandler &pMem,
                                    const BitVector    &whichField)
{
    Inherited::copyFromBin(pMem, whichField);


}

#if !defined(OSG_FIXED_MFIELDSYNC)
void DefaultListSelectionModelBase::executeSyncImpl(      DefaultListSelectionModelBase *pOther,
                                        const BitVector         &whichField)
{

    Inherited::executeSyncImpl(pOther, whichField);


}
#else
void DefaultListSelectionModelBase::executeSyncImpl(      DefaultListSelectionModelBase *pOther,
                                        const BitVector         &whichField,
                                        const SyncInfo          &sInfo      )
{

    Inherited::executeSyncImpl(pOther, whichField, sInfo);



}

void DefaultListSelectionModelBase::execBeginEditImpl (const BitVector &whichField, 
                                                 UInt32     uiAspect,
                                                 UInt32     uiContainerSize)
{
    Inherited::execBeginEditImpl(whichField, uiAspect, uiContainerSize);

}
#endif



OSG_END_NAMESPACE

#include <OpenSG/OSGSFieldTypeDef.inl>
#include <OpenSG/OSGMFieldTypeDef.inl>

OSG_BEGIN_NAMESPACE

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldDataTraits<DefaultListSelectionModelPtr>::_type("DefaultListSelectionModelPtr", "FieldContainerPtr");
#endif

OSG_DLLEXPORT_SFIELD_DEF1(DefaultListSelectionModelPtr, OSG_USERINTERFACELIB_DLLTMPLMAPPING);
OSG_DLLEXPORT_MFIELD_DEF1(DefaultListSelectionModelPtr, OSG_USERINTERFACELIB_DLLTMPLMAPPING);


/*------------------------------------------------------------------------*/
/*                              cvs id's                                  */

#ifdef OSG_SGI_CC
#pragma set woff 1174
#endif

#ifdef OSG_LINUX_ICC
#pragma warning( disable : 177 )
#endif

namespace
{
    static Char8 cvsid_cpp       [] = "@(#)$Id: FCBaseTemplate_cpp.h,v 1.47 2006/03/17 17:03:19 pdaehne Exp $";
    static Char8 cvsid_hpp       [] = OSGDEFAULTLISTSELECTIONMODELBASE_HEADER_CVSID;
    static Char8 cvsid_inl       [] = OSGDEFAULTLISTSELECTIONMODELBASE_INLINE_CVSID;

    static Char8 cvsid_fields_hpp[] = OSGDEFAULTLISTSELECTIONMODELFIELDS_HEADER_CVSID;
}

OSG_END_NAMESPACE

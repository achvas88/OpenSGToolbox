/*---------------------------------------------------------------------------*\
 *                     OpenSG ToolBox UserInterface                          *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                         www.vrac.iastate.edu                              *
 *                                                                           *
 *   Authors: David Kabala, Alden Peterson, Lee Zaniewski, Jonathan Flory    *
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
 **     class VariableHeightTreeModelLayout!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#define OSG_COMPILEVARIABLEHEIGHTTREEMODELLAYOUTINST

#include <stdlib.h>
#include <stdio.h>

#include <OpenSG/OSGConfig.h>

#include "OSGVariableHeightTreeModelLayoutBase.h"
#include "OSGVariableHeightTreeModelLayout.h"


OSG_BEGIN_NAMESPACE

const OSG::BitVector VariableHeightTreeModelLayoutBase::MTInfluenceMask = 
    (Inherited::MTInfluenceMask) | 
    (static_cast<BitVector>(0x0) << Inherited::NextFieldId); 



FieldContainerType VariableHeightTreeModelLayoutBase::_type(
    "VariableHeightTreeModelLayout",
    "AbstractTreeModelLayout",
    NULL,
    (PrototypeCreateF) &VariableHeightTreeModelLayoutBase::createEmpty,
    VariableHeightTreeModelLayout::initMethod,
    NULL,
    0);

//OSG_FIELD_CONTAINER_DEF(VariableHeightTreeModelLayoutBase, VariableHeightTreeModelLayoutPtr)

/*------------------------------ get -----------------------------------*/

FieldContainerType &VariableHeightTreeModelLayoutBase::getType(void) 
{
    return _type; 
} 

const FieldContainerType &VariableHeightTreeModelLayoutBase::getType(void) const 
{
    return _type;
} 


FieldContainerPtr VariableHeightTreeModelLayoutBase::shallowCopy(void) const 
{ 
    VariableHeightTreeModelLayoutPtr returnValue; 

    newPtr(returnValue, dynamic_cast<const VariableHeightTreeModelLayout *>(this)); 

    return returnValue; 
}

UInt32 VariableHeightTreeModelLayoutBase::getContainerSize(void) const 
{ 
    return sizeof(VariableHeightTreeModelLayout); 
}


#if !defined(OSG_FIXED_MFIELDSYNC)
void VariableHeightTreeModelLayoutBase::executeSync(      FieldContainer &other,
                                    const BitVector      &whichField)
{
    this->executeSyncImpl((VariableHeightTreeModelLayoutBase *) &other, whichField);
}
#else
void VariableHeightTreeModelLayoutBase::executeSync(      FieldContainer &other,
                                    const BitVector      &whichField,                                    const SyncInfo       &sInfo     )
{
    this->executeSyncImpl((VariableHeightTreeModelLayoutBase *) &other, whichField, sInfo);
}
void VariableHeightTreeModelLayoutBase::execBeginEdit(const BitVector &whichField, 
                                            UInt32     uiAspect,
                                            UInt32     uiContainerSize) 
{
    this->execBeginEditImpl(whichField, uiAspect, uiContainerSize);
}

void VariableHeightTreeModelLayoutBase::onDestroyAspect(UInt32 uiId, UInt32 uiAspect)
{
    Inherited::onDestroyAspect(uiId, uiAspect);

}
#endif

/*------------------------- constructors ----------------------------------*/

#ifdef OSG_WIN32_ICL
#pragma warning (disable : 383)
#endif

VariableHeightTreeModelLayoutBase::VariableHeightTreeModelLayoutBase(void) :
    Inherited() 
{
}

#ifdef OSG_WIN32_ICL
#pragma warning (default : 383)
#endif

VariableHeightTreeModelLayoutBase::VariableHeightTreeModelLayoutBase(const VariableHeightTreeModelLayoutBase &source) :
    Inherited                 (source)
{
}

/*-------------------------- destructors ----------------------------------*/

VariableHeightTreeModelLayoutBase::~VariableHeightTreeModelLayoutBase(void)
{
}

/*------------------------------ access -----------------------------------*/

UInt32 VariableHeightTreeModelLayoutBase::getBinSize(const BitVector &whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);


    return returnValue;
}

void VariableHeightTreeModelLayoutBase::copyToBin(      BinaryDataHandler &pMem,
                                  const BitVector         &whichField)
{
    Inherited::copyToBin(pMem, whichField);


}

void VariableHeightTreeModelLayoutBase::copyFromBin(      BinaryDataHandler &pMem,
                                    const BitVector    &whichField)
{
    Inherited::copyFromBin(pMem, whichField);


}

#if !defined(OSG_FIXED_MFIELDSYNC)
void VariableHeightTreeModelLayoutBase::executeSyncImpl(      VariableHeightTreeModelLayoutBase *pOther,
                                        const BitVector         &whichField)
{

    Inherited::executeSyncImpl(pOther, whichField);


}
#else
void VariableHeightTreeModelLayoutBase::executeSyncImpl(      VariableHeightTreeModelLayoutBase *pOther,
                                        const BitVector         &whichField,
                                        const SyncInfo          &sInfo      )
{

    Inherited::executeSyncImpl(pOther, whichField, sInfo);



}

void VariableHeightTreeModelLayoutBase::execBeginEditImpl (const BitVector &whichField, 
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
DataType FieldDataTraits<VariableHeightTreeModelLayoutPtr>::_type("VariableHeightTreeModelLayoutPtr", "AbstractTreeModelLayoutPtr");
#endif

OSG_DLLEXPORT_SFIELD_DEF1(VariableHeightTreeModelLayoutPtr, OSG_USERINTERFACELIB_DLLTMPLMAPPING);
OSG_DLLEXPORT_MFIELD_DEF1(VariableHeightTreeModelLayoutPtr, OSG_USERINTERFACELIB_DLLTMPLMAPPING);


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
    static Char8 cvsid_hpp       [] = OSGVARIABLEHEIGHTTREEMODELLAYOUTBASE_HEADER_CVSID;
    static Char8 cvsid_inl       [] = OSGVARIABLEHEIGHTTREEMODELLAYOUTBASE_INLINE_CVSID;

    static Char8 cvsid_fields_hpp[] = OSGVARIABLEHEIGHTTREEMODELLAYOUTFIELDS_HEADER_CVSID;
}

OSG_END_NAMESPACE


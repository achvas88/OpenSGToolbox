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
 **     class FModSound!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#define OSG_COMPILEFMODSOUNDINST

#include <stdlib.h>
#include <stdio.h>

#include <OpenSG/OSGConfig.h>

#include "OSGFModSoundBase.h"
#include "OSGFModSound.h"


OSG_BEGIN_NAMESPACE

const OSG::BitVector FModSoundBase::MTInfluenceMask = 
    (Inherited::MTInfluenceMask) | 
    (static_cast<BitVector>(0x0) << Inherited::NextFieldId); 



FieldContainerType FModSoundBase::_type(
    "FModSound",
    "Sound",
    NULL,
    (PrototypeCreateF) &FModSoundBase::createEmpty,
    FModSound::initMethod,
    NULL,
    0);

//OSG_FIELD_CONTAINER_DEF(FModSoundBase, FModSoundPtr)

/*------------------------------ get -----------------------------------*/

FieldContainerType &FModSoundBase::getType(void) 
{
    return _type; 
} 

const FieldContainerType &FModSoundBase::getType(void) const 
{
    return _type;
} 


FieldContainerPtr FModSoundBase::shallowCopy(void) const 
{ 
    FModSoundPtr returnValue; 

    newPtr(returnValue, dynamic_cast<const FModSound *>(this)); 

    return returnValue; 
}

UInt32 FModSoundBase::getContainerSize(void) const 
{ 
    return sizeof(FModSound); 
}


#if !defined(OSG_FIXED_MFIELDSYNC)
void FModSoundBase::executeSync(      FieldContainer &other,
                                    const BitVector      &whichField)
{
    this->executeSyncImpl((FModSoundBase *) &other, whichField);
}
#else
void FModSoundBase::executeSync(      FieldContainer &other,
                                    const BitVector      &whichField,                                    const SyncInfo       &sInfo     )
{
    this->executeSyncImpl((FModSoundBase *) &other, whichField, sInfo);
}
void FModSoundBase::execBeginEdit(const BitVector &whichField, 
                                            UInt32     uiAspect,
                                            UInt32     uiContainerSize) 
{
    this->execBeginEditImpl(whichField, uiAspect, uiContainerSize);
}

void FModSoundBase::onDestroyAspect(UInt32 uiId, UInt32 uiAspect)
{
    Inherited::onDestroyAspect(uiId, uiAspect);

}
#endif

/*------------------------- constructors ----------------------------------*/

#ifdef OSG_WIN32_ICL
#pragma warning (disable : 383)
#endif

FModSoundBase::FModSoundBase(void) :
    Inherited() 
{
}

#ifdef OSG_WIN32_ICL
#pragma warning (default : 383)
#endif

FModSoundBase::FModSoundBase(const FModSoundBase &source) :
    Inherited                 (source)
{
}

/*-------------------------- destructors ----------------------------------*/

FModSoundBase::~FModSoundBase(void)
{
}

/*------------------------------ access -----------------------------------*/

UInt32 FModSoundBase::getBinSize(const BitVector &whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);


    return returnValue;
}

void FModSoundBase::copyToBin(      BinaryDataHandler &pMem,
                                  const BitVector         &whichField)
{
    Inherited::copyToBin(pMem, whichField);


}

void FModSoundBase::copyFromBin(      BinaryDataHandler &pMem,
                                    const BitVector    &whichField)
{
    Inherited::copyFromBin(pMem, whichField);


}

#if !defined(OSG_FIXED_MFIELDSYNC)
void FModSoundBase::executeSyncImpl(      FModSoundBase *pOther,
                                        const BitVector         &whichField)
{

    Inherited::executeSyncImpl(pOther, whichField);


}
#else
void FModSoundBase::executeSyncImpl(      FModSoundBase *pOther,
                                        const BitVector         &whichField,
                                        const SyncInfo          &sInfo      )
{

    Inherited::executeSyncImpl(pOther, whichField, sInfo);



}

void FModSoundBase::execBeginEditImpl (const BitVector &whichField, 
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
DataType FieldDataTraits<FModSoundPtr>::_type("FModSoundPtr", "SoundPtr");
#endif

OSG_DLLEXPORT_SFIELD_DEF1(FModSoundPtr, OSG_SOUNDLIB_DLLTMPLMAPPING);
OSG_DLLEXPORT_MFIELD_DEF1(FModSoundPtr, OSG_SOUNDLIB_DLLTMPLMAPPING);


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
    static Char8 cvsid_hpp       [] = OSGFMODSOUNDBASE_HEADER_CVSID;
    static Char8 cvsid_inl       [] = OSGFMODSOUNDBASE_INLINE_CVSID;

    static Char8 cvsid_fields_hpp[] = OSGFMODSOUNDFIELDS_HEADER_CVSID;
}

OSG_END_NAMESPACE

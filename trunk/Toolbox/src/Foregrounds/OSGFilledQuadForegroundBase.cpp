/*---------------------------------------------------------------------------*\
 *                        OpenSG ToolBox Toolbox                             *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                         www.vrac.iastate.edu                              *
 *                                                                           *
 *                          Authors: David Kabala                            *
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
 **     class FilledQuadForeground!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#define OSG_COMPILEFILLEDQUADFOREGROUNDINST

#include <stdlib.h>
#include <stdio.h>

#include <OpenSG/OSGConfig.h>

#include "OSGFilledQuadForegroundBase.h"
#include "OSGFilledQuadForeground.h"


OSG_BEGIN_NAMESPACE

const OSG::BitVector  FilledQuadForegroundBase::MaterialFieldMask = 
    (TypeTraits<BitVector>::One << FilledQuadForegroundBase::MaterialFieldId);

const OSG::BitVector FilledQuadForegroundBase::MTInfluenceMask = 
    (Inherited::MTInfluenceMask) | 
    (static_cast<BitVector>(0x0) << Inherited::NextFieldId); 


// Field descriptions

/*! \var MaterialPtr     FilledQuadForegroundBase::_sfMaterial
    
*/

//! FilledQuadForeground description

FieldDescription *FilledQuadForegroundBase::_desc[] = 
{
    new FieldDescription(SFMaterialPtr::getClassType(), 
                     "Material", 
                     MaterialFieldId, MaterialFieldMask,
                     false,
                     reinterpret_cast<FieldAccessMethod>(&FilledQuadForegroundBase::editSFMaterial))
};


FieldContainerType FilledQuadForegroundBase::_type(
    "FilledQuadForeground",
    "Foreground",
    NULL,
    reinterpret_cast<PrototypeCreateF>(&FilledQuadForegroundBase::createEmpty),
    FilledQuadForeground::initMethod,
    _desc,
    sizeof(_desc));

//OSG_FIELD_CONTAINER_DEF(FilledQuadForegroundBase, FilledQuadForegroundPtr)

/*------------------------------ get -----------------------------------*/

FieldContainerType &FilledQuadForegroundBase::getType(void) 
{
    return _type; 
} 

const FieldContainerType &FilledQuadForegroundBase::getType(void) const 
{
    return _type;
} 


FieldContainerPtr FilledQuadForegroundBase::shallowCopy(void) const 
{ 
    FilledQuadForegroundPtr returnValue; 

    newPtr(returnValue, dynamic_cast<const FilledQuadForeground *>(this)); 

    return returnValue; 
}

UInt32 FilledQuadForegroundBase::getContainerSize(void) const 
{ 
    return sizeof(FilledQuadForeground); 
}


#if !defined(OSG_FIXED_MFIELDSYNC)
void FilledQuadForegroundBase::executeSync(      FieldContainer &other,
                                    const BitVector      &whichField)
{
    this->executeSyncImpl(static_cast<FilledQuadForegroundBase *>(&other),
                          whichField);
}
#else
void FilledQuadForegroundBase::executeSync(      FieldContainer &other,
                                    const BitVector      &whichField,                                    const SyncInfo       &sInfo     )
{
    this->executeSyncImpl((FilledQuadForegroundBase *) &other, whichField, sInfo);
}
void FilledQuadForegroundBase::execBeginEdit(const BitVector &whichField, 
                                            UInt32     uiAspect,
                                            UInt32     uiContainerSize) 
{
    this->execBeginEditImpl(whichField, uiAspect, uiContainerSize);
}

void FilledQuadForegroundBase::onDestroyAspect(UInt32 uiId, UInt32 uiAspect)
{
    Inherited::onDestroyAspect(uiId, uiAspect);

}
#endif

/*------------------------- constructors ----------------------------------*/

#ifdef OSG_WIN32_ICL
#pragma warning (disable : 383)
#endif

FilledQuadForegroundBase::FilledQuadForegroundBase(void) :
    _sfMaterial               (MaterialPtr(NullFC)), 
    Inherited() 
{
}

#ifdef OSG_WIN32_ICL
#pragma warning (default : 383)
#endif

FilledQuadForegroundBase::FilledQuadForegroundBase(const FilledQuadForegroundBase &source) :
    _sfMaterial               (source._sfMaterial               ), 
    Inherited                 (source)
{
}

/*-------------------------- destructors ----------------------------------*/

FilledQuadForegroundBase::~FilledQuadForegroundBase(void)
{
}

/*------------------------------ access -----------------------------------*/

UInt32 FilledQuadForegroundBase::getBinSize(const BitVector &whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (MaterialFieldMask & whichField))
    {
        returnValue += _sfMaterial.getBinSize();
    }


    return returnValue;
}

void FilledQuadForegroundBase::copyToBin(      BinaryDataHandler &pMem,
                                  const BitVector         &whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (MaterialFieldMask & whichField))
    {
        _sfMaterial.copyToBin(pMem);
    }


}

void FilledQuadForegroundBase::copyFromBin(      BinaryDataHandler &pMem,
                                    const BitVector    &whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (MaterialFieldMask & whichField))
    {
        _sfMaterial.copyFromBin(pMem);
    }


}

#if !defined(OSG_FIXED_MFIELDSYNC)
void FilledQuadForegroundBase::executeSyncImpl(      FilledQuadForegroundBase *pOther,
                                        const BitVector         &whichField)
{

    Inherited::executeSyncImpl(pOther, whichField);

    if(FieldBits::NoField != (MaterialFieldMask & whichField))
        _sfMaterial.syncWith(pOther->_sfMaterial);


}
#else
void FilledQuadForegroundBase::executeSyncImpl(      FilledQuadForegroundBase *pOther,
                                        const BitVector         &whichField,
                                        const SyncInfo          &sInfo      )
{

    Inherited::executeSyncImpl(pOther, whichField, sInfo);

    if(FieldBits::NoField != (MaterialFieldMask & whichField))
        _sfMaterial.syncWith(pOther->_sfMaterial);



}

void FilledQuadForegroundBase::execBeginEditImpl (const BitVector &whichField, 
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
DataType FieldDataTraits<FilledQuadForegroundPtr>::_type("FilledQuadForegroundPtr", "ForegroundPtr");
#endif

OSG_DLLEXPORT_SFIELD_DEF1(FilledQuadForegroundPtr, OSG_TOOLBOXLIB_DLLTMPLMAPPING);
OSG_DLLEXPORT_MFIELD_DEF1(FilledQuadForegroundPtr, OSG_TOOLBOXLIB_DLLTMPLMAPPING);


OSG_END_NAMESPACE


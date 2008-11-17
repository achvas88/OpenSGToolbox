/*---------------------------------------------------------------------------*\
 *                          OpenSG Toolbox Input                             *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                         www.vrac.iastate.edu                              *
 *                                                                           *
 *   Authors: David Kabala                                                   *
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
 **     class GLUTWindowEventProducer!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#define OSG_COMPILEGLUTWINDOWEVENTPRODUCERINST

#include "OSGGLUTWindowEventProducerBase.h"

#ifdef OSG_WITH_GLUT

#include <stdlib.h>
#include <stdio.h>

#include "OSGGLUTWindowEventProducer.h"


OSG_BEGIN_NAMESPACE

const OSG::BitVector GLUTWindowEventProducerBase::MTInfluenceMask = 
    (Inherited::MTInfluenceMask) | 
    (static_cast<BitVector>(0x0) << Inherited::NextFieldId); 



FieldContainerType GLUTWindowEventProducerBase::_type(
    "GLUTWindowEventProducer",
    "WindowEventProducer",
    NULL,
    (PrototypeCreateF) &GLUTWindowEventProducerBase::createEmpty,
    GLUTWindowEventProducer::initMethod,
    NULL,
    0);

//OSG_FIELD_CONTAINER_DEF(GLUTWindowEventProducerBase, GLUTWindowEventProducerPtr)

/*------------------------------ get -----------------------------------*/

FieldContainerType &GLUTWindowEventProducerBase::getType(void) 
{
    return _type; 
} 

const FieldContainerType &GLUTWindowEventProducerBase::getType(void) const 
{
    return _type;
} 


FieldContainerPtr GLUTWindowEventProducerBase::shallowCopy(void) const 
{ 
    GLUTWindowEventProducerPtr returnValue; 

    newPtr(returnValue, dynamic_cast<const GLUTWindowEventProducer *>(this)); 

    return returnValue; 
}

UInt32 GLUTWindowEventProducerBase::getContainerSize(void) const 
{ 
    return sizeof(GLUTWindowEventProducer); 
}


#if !defined(OSG_FIXED_MFIELDSYNC)
void GLUTWindowEventProducerBase::executeSync(      FieldContainer &other,
                                    const BitVector      &whichField)
{
    this->executeSyncImpl((GLUTWindowEventProducerBase *) &other, whichField);
}
#else
void GLUTWindowEventProducerBase::executeSync(      FieldContainer &other,
                                    const BitVector      &whichField,                                    const SyncInfo       &sInfo     )
{
    this->executeSyncImpl((GLUTWindowEventProducerBase *) &other, whichField, sInfo);
}
void GLUTWindowEventProducerBase::execBeginEdit(const BitVector &whichField, 
                                            UInt32     uiAspect,
                                            UInt32     uiContainerSize) 
{
    this->execBeginEditImpl(whichField, uiAspect, uiContainerSize);
}

void GLUTWindowEventProducerBase::onDestroyAspect(UInt32 uiId, UInt32 uiAspect)
{
    Inherited::onDestroyAspect(uiId, uiAspect);

}
#endif

/*------------------------- constructors ----------------------------------*/

#ifdef OSG_WIN32_ICL
#pragma warning (disable : 383)
#endif

GLUTWindowEventProducerBase::GLUTWindowEventProducerBase(void) :
    Inherited() 
{
}

#ifdef OSG_WIN32_ICL
#pragma warning (default : 383)
#endif

GLUTWindowEventProducerBase::GLUTWindowEventProducerBase(const GLUTWindowEventProducerBase &source) :
    Inherited                 (source)
{
}

/*-------------------------- destructors ----------------------------------*/

GLUTWindowEventProducerBase::~GLUTWindowEventProducerBase(void)
{
}

/*------------------------------ access -----------------------------------*/

UInt32 GLUTWindowEventProducerBase::getBinSize(const BitVector &whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);


    return returnValue;
}

void GLUTWindowEventProducerBase::copyToBin(      BinaryDataHandler &pMem,
                                  const BitVector         &whichField)
{
    Inherited::copyToBin(pMem, whichField);


}

void GLUTWindowEventProducerBase::copyFromBin(      BinaryDataHandler &pMem,
                                    const BitVector    &whichField)
{
    Inherited::copyFromBin(pMem, whichField);


}

#if !defined(OSG_FIXED_MFIELDSYNC)
void GLUTWindowEventProducerBase::executeSyncImpl(      GLUTWindowEventProducerBase *pOther,
                                        const BitVector         &whichField)
{

    Inherited::executeSyncImpl(pOther, whichField);


}
#else
void GLUTWindowEventProducerBase::executeSyncImpl(      GLUTWindowEventProducerBase *pOther,
                                        const BitVector         &whichField,
                                        const SyncInfo          &sInfo      )
{

    Inherited::executeSyncImpl(pOther, whichField, sInfo);



}

void GLUTWindowEventProducerBase::execBeginEditImpl (const BitVector &whichField, 
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
DataType FieldDataTraits<GLUTWindowEventProducerPtr>::_type("GLUTWindowEventProducerPtr", "WindowEventProducerPtr");
#endif

OSG_DLLEXPORT_SFIELD_DEF1(GLUTWindowEventProducerPtr, OSG_INPUTLIB_DLLTMPLMAPPING);
OSG_DLLEXPORT_MFIELD_DEF1(GLUTWindowEventProducerPtr, OSG_INPUTLIB_DLLTMPLMAPPING);


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
    static Char8 cvsid_hpp       [] = OSGGLUTWINDOWEVENTPRODUCERBASE_HEADER_CVSID;
    static Char8 cvsid_inl       [] = OSGGLUTWINDOWEVENTPRODUCERBASE_INLINE_CVSID;

    static Char8 cvsid_fields_hpp[] = OSGGLUTWINDOWEVENTPRODUCERFIELDS_HEADER_CVSID;
}

OSG_END_NAMESPACE

#endif


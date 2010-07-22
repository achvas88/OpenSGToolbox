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
//---------------------------------------------------------------------------
//  Includes
//---------------------------------------------------------------------------

#include "OSGConfig.h"

#include "OSGFCPtrEditorRootedStore.h"
#include "OSGContainerUtils.h"

OSG_USING_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::FCPtrEditorRootedStore
A FCPtrEditorRootedStore. 
*/

/***************************************************************************\
 *                           Class variables                               *
\***************************************************************************/

/***************************************************************************\
 *                           Class methods                                 *
\***************************************************************************/

/***************************************************************************\
 *                           Instance methods                              *
\***************************************************************************/

std::vector<FieldContainer*> FCPtrEditorRootedStore::getList(void) const
{
    std::set<FieldContainer*> AllContainers =
        getAllDependantFCs(std::set<FieldContainer*>(_Roots.begin(),_Roots.end()),
                           std::set<FieldContainer*>(_ExcludedPtrs.begin(),_ExcludedPtrs.end()),
                           _ExcludedTypes);

    std::vector<FieldContainer*> Result;
    for(std::set<FieldContainer*>::iterator StoreItor(AllContainers.begin());
        StoreItor != AllContainers.end();
        ++StoreItor)
    {
        if((*StoreItor)->getType().isDerivedFrom(*_TypeToStore))
        {
            Result.push_back(*StoreItor);
        }
    }

    return Result;
}

/*-------------------------------------------------------------------------*\
 -  private                                                                 -
\*-------------------------------------------------------------------------*/

/*----------------------- constructors & destructors ----------------------*/
FCPtrEditorRootedStore::FCPtrEditorRootedStore(const FieldContainerType* type,
                                               const FieldContianerVector& roots,
                                               const FieldContianerVector& Exclude,
                                               const FieldContianerTypeVector& ExcludeTypes) :
    Inherited(Exclude,ExcludeTypes),
    _TypeToStore(type),
    _Roots(roots)
{
}

FCPtrEditorRootedStore::FCPtrEditorRootedStore(const FCPtrEditorRootedStore& source) :
    Inherited(source),
    _TypeToStore(source._TypeToStore),
    _Roots(source._Roots)
{
}


FCPtrEditorRootedStore::~FCPtrEditorRootedStore(void)
{
}

/*----------------------------- class specific ----------------------------*/
void FCPtrEditorRootedStore::operator =(const FCPtrEditorRootedStore& source)
{
    if(this == &source)
    {
        return;
    }

    Inherited::operator=(source);
    _TypeToStore = source._TypeToStore;
    _Roots = source._Roots;
}


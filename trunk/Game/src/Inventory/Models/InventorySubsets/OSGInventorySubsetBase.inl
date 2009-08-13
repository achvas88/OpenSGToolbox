/*---------------------------------------------------------------------------*\
 *                        OpenSG ToolBox Game                                *
 *                                                                           *
 *                                                                           *
 *                                                                           *
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
 **     class InventorySubset!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <OpenSG/OSGConfig.h>

OSG_BEGIN_NAMESPACE


//! access the type of the class
inline
OSG::FieldContainerType &InventorySubsetBase::getClassType(void)
{
    return _type; 
} 

//! access the numerical type of the class
inline
OSG::UInt32 InventorySubsetBase::getClassTypeId(void) 
{
    return _type.getId(); 
} 


/*------------------------------ get -----------------------------------*/

//! Get the InventorySubset::_sfModel field.
inline
const SFInventoryListModelPtr *InventorySubsetBase::getSFModel(void) const
{
    return &_sfModel;
}

//! Get the InventorySubset::_sfModel field.
inline
SFInventoryListModelPtr *InventorySubsetBase::editSFModel(void)
{
    return &_sfModel;
}

#ifndef OSG_2_PREP
//! Get the InventorySubset::_sfModel field.
inline
SFInventoryListModelPtr *InventorySubsetBase::getSFModel(void)
{
    return &_sfModel;
}
#endif


//! Get the value of the InventorySubset::_sfModel field.
inline
InventoryListModelPtr &InventorySubsetBase::editModel(void)
{
    return _sfModel.getValue();
}

//! Get the value of the InventorySubset::_sfModel field.
inline
const InventoryListModelPtr &InventorySubsetBase::getModel(void) const
{
    return _sfModel.getValue();
}

#ifndef OSG_2_PREP
//! Get the value of the InventorySubset::_sfModel field.
inline
InventoryListModelPtr &InventorySubsetBase::getModel(void)
{
    return _sfModel.getValue();
}
#endif

//! Set the value of the InventorySubset::_sfModel field.
inline
void InventorySubsetBase::setModel(const InventoryListModelPtr &value)
{
    _sfModel.setValue(value);
}


OSG_END_NAMESPACE

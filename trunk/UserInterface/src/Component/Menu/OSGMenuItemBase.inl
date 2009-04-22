/*---------------------------------------------------------------------------*\
 *                     OpenSG ToolBox UserInterface                          *
 *                                                                           *
 *                                                                           *
 *                                                                           *
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
 **     class MenuItem!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <OpenSG/OSGConfig.h>

OSG_BEGIN_NAMESPACE


//! access the type of the class
inline
OSG::FieldContainerType &MenuItemBase::getClassType(void)
{
    return _type; 
} 

//! access the numerical type of the class
inline
OSG::UInt32 MenuItemBase::getClassTypeId(void) 
{
    return _type.getId(); 
} 

//! create a new instance of the class
inline
MenuItemPtr MenuItemBase::create(void) 
{
    MenuItemPtr fc; 

    if(getClassType().getPrototype() != OSG::NullFC) 
    {
        fc = MenuItemPtr::dcast(
            getClassType().getPrototype()-> shallowCopy()); 
    }
    
    return fc; 
}

//! create an empty new instance of the class, do not copy the prototype
inline
MenuItemPtr MenuItemBase::createEmpty(void) 
{ 
    MenuItemPtr returnValue; 
    
    newPtr(returnValue); 

    return returnValue; 
}


/*------------------------------ get -----------------------------------*/

//! Get the MenuItem::_sfParentMenu field.
inline
SFMenuPtr *MenuItemBase::getSFParentMenu(void)
{
    return &_sfParentMenu;
}

//! Get the MenuItem::_sfAcceleratorModifiers field.
inline
SFUInt32 *MenuItemBase::getSFAcceleratorModifiers(void)
{
    return &_sfAcceleratorModifiers;
}

//! Get the MenuItem::_sfAcceleratorKey field.
inline
SFUInt32 *MenuItemBase::getSFAcceleratorKey(void)
{
    return &_sfAcceleratorKey;
}

//! Get the MenuItem::_sfMnemonicKey field.
inline
SFUInt32 *MenuItemBase::getSFMnemonicKey(void)
{
    return &_sfMnemonicKey;
}

//! Get the MenuItem::_sfAcceleratorText field.
inline
SFString *MenuItemBase::getSFAcceleratorText(void)
{
    return &_sfAcceleratorText;
}

//! Get the MenuItem::_sfMnemonicTextPosition field.
inline
SFInt32 *MenuItemBase::getSFMnemonicTextPosition(void)
{
    return &_sfMnemonicTextPosition;
}


//! Get the value of the MenuItem::_sfParentMenu field.
inline
MenuPtr &MenuItemBase::getParentMenu(void)
{
    return _sfParentMenu.getValue();
}

//! Get the value of the MenuItem::_sfParentMenu field.
inline
const MenuPtr &MenuItemBase::getParentMenu(void) const
{
    return _sfParentMenu.getValue();
}

//! Set the value of the MenuItem::_sfParentMenu field.
inline
void MenuItemBase::setParentMenu(const MenuPtr &value)
{
    _sfParentMenu.setValue(value);
}

//! Get the value of the MenuItem::_sfAcceleratorModifiers field.
inline
UInt32 &MenuItemBase::getAcceleratorModifiers(void)
{
    return _sfAcceleratorModifiers.getValue();
}

//! Get the value of the MenuItem::_sfAcceleratorModifiers field.
inline
const UInt32 &MenuItemBase::getAcceleratorModifiers(void) const
{
    return _sfAcceleratorModifiers.getValue();
}

//! Set the value of the MenuItem::_sfAcceleratorModifiers field.
inline
void MenuItemBase::setAcceleratorModifiers(const UInt32 &value)
{
    _sfAcceleratorModifiers.setValue(value);
}

//! Get the value of the MenuItem::_sfAcceleratorKey field.
inline
UInt32 &MenuItemBase::getAcceleratorKey(void)
{
    return _sfAcceleratorKey.getValue();
}

//! Get the value of the MenuItem::_sfAcceleratorKey field.
inline
const UInt32 &MenuItemBase::getAcceleratorKey(void) const
{
    return _sfAcceleratorKey.getValue();
}

//! Set the value of the MenuItem::_sfAcceleratorKey field.
inline
void MenuItemBase::setAcceleratorKey(const UInt32 &value)
{
    _sfAcceleratorKey.setValue(value);
}

//! Get the value of the MenuItem::_sfMnemonicKey field.
inline
UInt32 &MenuItemBase::getMnemonicKey(void)
{
    return _sfMnemonicKey.getValue();
}

//! Get the value of the MenuItem::_sfMnemonicKey field.
inline
const UInt32 &MenuItemBase::getMnemonicKey(void) const
{
    return _sfMnemonicKey.getValue();
}

//! Set the value of the MenuItem::_sfMnemonicKey field.
inline
void MenuItemBase::setMnemonicKey(const UInt32 &value)
{
    _sfMnemonicKey.setValue(value);
}

//! Get the value of the MenuItem::_sfAcceleratorText field.
inline
std::string &MenuItemBase::getAcceleratorText(void)
{
    return _sfAcceleratorText.getValue();
}

//! Get the value of the MenuItem::_sfAcceleratorText field.
inline
const std::string &MenuItemBase::getAcceleratorText(void) const
{
    return _sfAcceleratorText.getValue();
}

//! Set the value of the MenuItem::_sfAcceleratorText field.
inline
void MenuItemBase::setAcceleratorText(const std::string &value)
{
    _sfAcceleratorText.setValue(value);
}

//! Get the value of the MenuItem::_sfMnemonicTextPosition field.
inline
Int32 &MenuItemBase::getMnemonicTextPosition(void)
{
    return _sfMnemonicTextPosition.getValue();
}

//! Get the value of the MenuItem::_sfMnemonicTextPosition field.
inline
const Int32 &MenuItemBase::getMnemonicTextPosition(void) const
{
    return _sfMnemonicTextPosition.getValue();
}

//! Set the value of the MenuItem::_sfMnemonicTextPosition field.
inline
void MenuItemBase::setMnemonicTextPosition(const Int32 &value)
{
    _sfMnemonicTextPosition.setValue(value);
}


OSG_END_NAMESPACE

#define OSGMENUITEMBASE_INLINE_CVSID "@(#)$Id: FCBaseTemplate_inl.h,v 1.20 2002/12/04 14:22:22 dirk Exp $"

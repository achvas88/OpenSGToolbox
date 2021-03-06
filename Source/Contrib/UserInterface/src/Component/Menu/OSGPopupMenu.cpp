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

#include <cstdlib>
#include <cstdio>

#include <OSGConfig.h>

#include "OSGPopupMenu.h"
#include <deque>

#include "OSGPopupMenu.h"
#include "OSGComponentContainer.h"
#include "OSGDefaultSingleSelectionModel.h"
#include "OSGSeparator.h"
#include "OSGSingleSelectionModel.h"
#include "OSGMenuItem.h"
#include "OSGInternalWindow.h"
#include "OSGScrollPanel.h"

#include <boost/bind.hpp>

OSG_BEGIN_NAMESPACE

// Documentation for this class is emitted in the
// OSGPopupMenuBase.cpp file.
// To modify it, please change the .fcd file (OSGPopupMenu.fcd) and
// regenerate the base file.

/***************************************************************************\
 *                           Class variables                               *
\***************************************************************************/

/***************************************************************************\
 *                           Class methods                                 *
\***************************************************************************/

void PopupMenu::initMethod(InitPhase ePhase)
{
    Inherited::initMethod(ePhase);

    if(ePhase == TypeObject::SystemPost)
    {
    }
}


/***************************************************************************\
 *                           Instance methods                              *
\***************************************************************************/

void PopupMenu::updateLayout(void)
{
    //Determine the Max Preferred Width of my MenuItems
    Real32 MaxWidth(0);
    Real32 TotalHeight(0);
    for(UInt32 i(0) ; i<_MenuPanel->getMFChildren()->size() ; ++i)
    {
        if(MaxWidth < _MenuPanel->getChildren(i)->getRequestedSize().x())
        {
            MaxWidth = _MenuPanel->getChildren(i)->getRequestedSize().x();
        }
        TotalHeight += _MenuPanel->getChildren(i)->getRequestedSize().y();
        if(i!=0)
        {
            TotalHeight += 1.0f;
        }
    }

    //Set My preferred Size
    Pnt2f TopLeft, BottomRight;
    Pnt2f InsetsTopLeft, InsetsBottomRight;
    getBounds(TopLeft, BottomRight);
    getInsideInsetsBounds(InsetsTopLeft, InsetsBottomRight);

    Vec2f InsetSize( (BottomRight-TopLeft) - (InsetsBottomRight-InsetsTopLeft) );

    //Update the scroll panel layout

    _MenuPanel->setPreferredSize(Vec2f(MaxWidth+InsetSize.x(), TotalHeight+InsetSize.y()));

    Real32 ScrollWidth(20.0f);
    setPreferredSize(Vec2f(MaxWidth+InsetSize.x()+ScrollWidth,
                           osgClamp(getMinSize().y(), TotalHeight+InsetSize.y(), getMaxSize().y())));

    //getInsideInsetsBounds(InsetsTopLeft, InsetsBottomRight);
    _ScrollPanel->setPosition(InsetsTopLeft);
    _ScrollPanel->setSize(getPreferredSize() - InsetSize);
    //_ScrollPanel->setSize(InsetsBottomRight - InsetsTopLeft);
    //_ScrollPanel->setPosition(Pnt2f(0.0f,0.0f));
    //_ScrollPanel->setSize(getPreferredSize());

    //Sneakily set my size without invoking a ChangeList addition
    _sfSize.setValue(getPreferredSize());

    //Now position and size the Items
    //Real32 TopOffset(InsetsTopLeft.y());
    Real32 TopOffset(0.0f);
    Vec2f Size;
    Pnt2f Pos;
    for(UInt32 i(0) ; i<_MenuPanel->getMFChildren()->size() ; ++i)
    {
        Size.setValues(_ScrollPanel->getSize().x(), _MenuPanel->getChildren(i)->getRequestedSize().y());
        if(_MenuPanel->getChildren(i)->getSize() != Size)
        {
            _MenuPanel->getChildren(i)->setSize(Size);
        }
        Pos.setValues(InsetsTopLeft.x(), TopOffset);
        if(_MenuPanel->getChildren(i)->getPosition() != Pos)
        {
            _MenuPanel->getChildren(i)->setPosition(Pos);
        }

        TopOffset += _MenuPanel->getChildren(i)->getRequestedSize().y() +1;
    }
}

void PopupMenu::updateClipBounds(void)
{
	Pnt2f TopLeft, BottomRight;
	
    //Treat myself as having no Parent
	getBounds(TopLeft, BottomRight);

    //The Clip Bounds calculated are in my Parent Containers coordinate space
    //Translate these bounds into my own coordinate space
    setClipTopLeft(TopLeft);
    setClipBottomRight(BottomRight);
}

void PopupMenu::mouseWheelMoved(MouseWheelEventDetails* const e)
{
    _ScrollPanel->mouseWheelMoved(e);

    Component::mouseWheelMoved(e);
}

ComponentContainer* PopupMenu::getParentContainer(void) const
{
    return getParentWindow();
}

void PopupMenu::addItem(MenuItem* const Item)
{
    _MenuPanel->pushToChildren(Item);
	producePopupMenuContentsChanged();
}

void PopupMenu::addItem(MenuItem* const Item, const UInt32& Index)
{
    UInt32 ItemCount(0);
    UInt32 i(0);
    for( ; i<_MenuPanel->getMFChildren()->size() ; ++i)
    {
        if(_MenuPanel->getChildren(i)->getType() != Separator::getClassType())
        {
            ++ItemCount;
        }
        if(ItemCount == Index)
        {
            break;
        }
    }

    if(i < _MenuPanel->getMFChildren()->size())
    {
        _MenuPanel->insertIntoChildren(i, Item);
        producePopupMenuContentsChanged();
    }
}

void PopupMenu::removeItem(MenuItem* const Item)
{
    _MenuPanel->removeObjFromChildren(Item);
    producePopupMenuContentsChanged();
}

void PopupMenu::removeItem(const UInt32& Index)
{
    if(Index < _MenuPanel->getMFChildren()->size())
    {
        UInt32 ItemCount(0);
        UInt32 i(0);
        for( ; i<_MenuPanel->getMFChildren()->size() ; ++i)
        {
            if(_MenuPanel->getChildren(i)->getType() != Separator::getClassType())
            {
                ++ItemCount;
            }
            //if(ItemCount == Index)
            //{
                //break;
            //}
        }
        if(i<_MenuPanel->getMFChildren()->size())
        {
            _MenuPanel->removeFromChildren(i);
	        producePopupMenuContentsChanged();
        }
    }
}

void PopupMenu::removeAllItems(void)
{
    std::deque<UInt32> RemoveIndecies;
    for(UInt32 i(0) ; i<_MenuPanel->getMFChildren()->size() ; ++i)
    {
        if(_MenuPanel->getChildren(i)->getType() != Separator::getClassType())
        {
            RemoveIndecies.push_front(i);
        }
    }
    for(UInt32 i(0) ; i<RemoveIndecies.size() ; ++i)
    {
        removeItem(RemoveIndecies[i]);
    }
}


void PopupMenu::addSeparator(void)
{
    SeparatorRefPtr TheSeparator;
    if(getDefaultSeparator() != NULL)
    {
        FieldContainerUnrecPtr TheSeperator(getDefaultSeparator()->shallowCopy());
        TheSeparator = dynamic_pointer_cast<Separator>(TheSeperator);
    }
    else
    {
        TheSeparator = Separator::create();
    }
    TheSeparator->setOrientation(Separator::HORIZONTAL_ORIENTATION);

    _MenuPanel->pushToChildren(TheSeparator);
}

void PopupMenu::addSeparator(Separator* const TheSeparator)
{
    TheSeparator->setOrientation(Separator::HORIZONTAL_ORIENTATION);

    _MenuPanel->pushToChildren(TheSeparator);
}

void PopupMenu::removeSeparator(const UInt32&  Index)
{
    if(Index < getNumSeparators())
    {
        UInt32 SeparatorCount(0);
        UInt32 i(0);
        for( ; i<_MenuPanel->getMFChildren()->size() ; ++i)
        {
            if(_MenuPanel->getChildren(i)->getType() == Separator::getClassType())
            {
                ++SeparatorCount;
            }
            if(SeparatorCount == Index)
            {
                break;
            }
        }

        _MenuPanel->removeFromChildren(i);
    }
}

void PopupMenu::removeSeparator(Separator* const TheSeparator)
{
    _MenuPanel->removeObjFromChildren(TheSeparator);
}

void PopupMenu::removeAllSeparators(void)
{
    std::deque<UInt32> RemoveIndecies;
    for(UInt32 i(0) ; i<_MenuPanel->getMFChildren()->size() ; ++i)
    {
        if(_MenuPanel->getChildren(i)->getType() == Separator::getClassType())
        {
            RemoveIndecies.push_front(i);
        }
    }
    for(UInt32 i(0) ; i<RemoveIndecies.size() ; ++i)
    {
        removeSeparator(RemoveIndecies[i]);
    }
}

UInt32 PopupMenu::getNumSeparators(void) const
{
    UInt32 NumSeparators(0);
    for(UInt32 i(0) ; i<_MenuPanel->getMFChildren()->size() ; ++i)
    {
        if(_MenuPanel->getChildren(i)->getType() == Separator::getClassType())
        {
            ++NumSeparators;
        }
    }
    return NumSeparators;
}

void PopupMenu::updateSeparatorSizes(void)
{
    Pnt2f InsideInsetsTopLeft, InsideInsetsBottomRight;
    getInsideInsetsBounds(InsideInsetsTopLeft, InsideInsetsBottomRight);
    Vec2f InsideInsetsSize(InsideInsetsBottomRight - InsideInsetsTopLeft);

    for(UInt32 i(0) ; i<_MenuPanel->getMFChildren()->size() ; ++i)
    {
        Vec2f NewSize(Vec2f(InsideInsetsSize.x(), _MenuPanel->getChildren(i)->getRequestedSize().y()));
        if(_MenuPanel->getChildren(i)->getType() == Separator::getClassType() &&
           dynamic_cast<Separator*>(_MenuPanel->getChildren(i))->getPreferredSize() != NewSize)
        {
            dynamic_cast<Separator*>(_MenuPanel->getChildren(i))->setPreferredSize(NewSize);
        }
    }
}

void PopupMenu::mouseMoved(MouseEventDetails* const e)
{
    UInt32 i(0);
    while (i<_MenuPanel->getMFChildren()->size() && !_MenuPanel->getChildren(i)->isContained(e->getLocation(), true))
    {
        ++i;
    }
	
	if(i<_MenuPanel->getMFChildren()->size() && getSelectionModel()->getSelectedIndex() != i)
	{
        if(getSelectionModel()->getSelectedIndex() != i)
        {
		    getSelectionModel()->setSelectedIndex(i);
        }
	}

    ComponentContainer::mouseMoved(e);
}

void PopupMenu::mouseDragged(MouseEventDetails* const e)
{
    UInt32 i(0);
    while (i<_MenuPanel->getMFChildren()->size() && !_MenuPanel->getChildren(i)->isContained(e->getLocation(), true))
    {
        ++i;
    }
	
	if(i<_MenuPanel->getMFChildren()->size() && getSelectionModel()->getSelectedIndex() != i)
	{
		getSelectionModel()->setSelectedIndex(i);
	}
    ComponentContainer::mouseDragged(e);
}

void PopupMenu::cancel(void)
{
    if(getVisible())
    {
        clearSelection();
        setVisible(false);
        producePopupMenuCanceled();
    }
}

void PopupMenu::clearSelection(void)
{
    if(getSelectionModel() != NULL)
    {
        getSelectionModel()->clearSelection();
    }
}

void PopupMenu::setSelection(const Int32& Index)
{
	if(Index >= 0 && Index < getNumItems())
	{
        if(getSelectionModel() != NULL)
        {
		    getSelectionModel()->setSelectedIndex(Index);
        }
	}
	else
	{
		clearSelection();
	}
}


MenuItem* PopupMenu::getItem(const UInt32& Index)
{
    if(Index < _MenuPanel->getMFChildren()->size())
    {
        UInt32 ItemCount(0);
        for(UInt32 i(0) ; i<_MenuPanel->getMFChildren()->size() ; ++i)
        {
            if(_MenuPanel->getChildren(i)->getType() != Separator::getClassType())
            {
                if(ItemCount == Index)
                {
                    break;
                }
                ++ItemCount;
            }
        }
        if(ItemCount < _MenuPanel->getMFChildren()->size())
        {
            return dynamic_cast<MenuItem*>(_MenuPanel->getChildren(ItemCount));
        }
    }
    return NULL;
}

UInt32 PopupMenu::getNumItems(void) const
{
    return _MenuPanel->getMFChildren()->size() - getNumSeparators();
}

/*-------------------------------------------------------------------------*\
 -  private                                                                 -
\*-------------------------------------------------------------------------*/

void  PopupMenu::producePopupMenuWillBecomeVisible(void)
{
    PopupMenuEventDetailsUnrecPtr Details(PopupMenuEventDetails::create(this,getSystemTime()));

    Inherited::producePopupMenuWillBecomeVisible(Details);
}

void  PopupMenu::producePopupMenuWillBecomeInvisible(void)
{
    PopupMenuEventDetailsUnrecPtr Details(PopupMenuEventDetails::create(this,getSystemTime()));

    Inherited::producePopupMenuWillBecomeInvisible(Details);
}

void  PopupMenu::producePopupMenuCanceled(void)
{
    PopupMenuEventDetailsUnrecPtr Details(PopupMenuEventDetails::create(this,getSystemTime()));

    Inherited::producePopupMenuCanceled(Details);
}
    
void PopupMenu::producePopupMenuContentsChanged(void)
{
    PopupMenuEventDetailsUnrecPtr Details(PopupMenuEventDetails::create(this,getSystemTime()));

    Inherited::producePopupMenuContentsChanged(Details);
}

void PopupMenu::onCreate(const PopupMenu * Id)
{
	Inherited::onCreate(Id);

    if(GlobalSystemState != Startup)
    {
        //Create Default Selection model
        DefaultSingleSelectionModelUnrecPtr TheModel(DefaultSingleSelectionModel::create());
        setSelectionModel(TheModel);

        //Create the MenuPanel
        _MenuPanel = Panel::createEmpty();
        _MenuPanel->setScrollTrackingCharacteristics(SCROLLABLE_TRACKS_VIEWPORT_WIDTH);

        //Create the scrollPanel
        _ScrollPanel = ScrollPanel::create();
        _ScrollPanel->setVerticalScrollBarAlignment(ScrollPanel::SCROLLBAR_ALIGN_RIGHT);
        _ScrollPanel->setHorizontalScrollBarAlignment(ScrollPanel::SCROLLBAR_ALIGN_BOTTOM);

        _ScrollPanel->setHorizontalResizePolicy(ScrollPanel::NO_RESIZE);
        _ScrollPanel->setVerticalResizePolicy(ScrollPanel::NO_RESIZE);

        _ScrollPanel->setViewComponent(_MenuPanel);

        pushToChildren(_ScrollPanel);
    }
}

void PopupMenu::onDestroy()
{
}

void PopupMenu::resolveLinks(void)
{
    Inherited::resolveLinks();

    _MenuPanel   = NULL;
    _ScrollPanel = NULL;
}

/*----------------------- constructors & destructors ----------------------*/

PopupMenu::PopupMenu(void) :
    Inherited()
{
}

PopupMenu::PopupMenu(const PopupMenu &source) :
    Inherited(source)
{
}

PopupMenu::~PopupMenu(void)
{
}

/*----------------------------- class specific ----------------------------*/

void PopupMenu::changed(ConstFieldMaskArg whichField, 
                            UInt32            origin,
                            BitVector         details)
{
    Inherited::changed(whichField, origin, details);

    if(whichField & VisibleFieldMask)
    {
        if(getVisible())
        {
            producePopupMenuWillBecomeVisible();
        }
        else
        {
            producePopupMenuWillBecomeInvisible();
            if(getSelectionModel() != NULL)
            {
                getSelectionModel()->clearSelection();
            }
            removeMousePresenceOnComponents();
        }
    }

    if(whichField & SizeFieldMask)
    {
        updateSeparatorSizes();
    }

    if(whichField & SelectionModelFieldMask)
    {
        _SelectionChangedConnection.disconnect();
        if(getSelectionModel() != NULL)
        {
            _SelectionChangedConnection = getSelectionModel()->connectSelectionChanged(boost::bind(&PopupMenu::selectionChanged, this, _1));
        }
    }
}

void PopupMenu::dump(      UInt32    ,
                         const BitVector ) const
{
    SLOG << "Dump PopupMenu NI" << std::endl;
}

void PopupMenu::selectionChanged(SelectionEventDetails* const e)
{
    for(UInt32 i(0) ; i<e->getMFPreviouslySelected()->size() ; ++i)
    {
        if(_MenuPanel->getChildren(e->getPreviouslySelected(i))->getType().isDerivedFrom(MenuItem::getClassType()) &&
           dynamic_cast<MenuItem*>(_MenuPanel->getChildren(e->getPreviouslySelected(i)))->getSelected())
        {
            dynamic_cast<MenuItem*>(_MenuPanel->getChildren(e->getPreviouslySelected(i)))->setSelected(false);
        }
    }

    for(UInt32 i(0) ; i<e->getMFSelected()->size() ; ++i)
    {
        if(_MenuPanel->getChildren(e->getSelected(i))->getType().isDerivedFrom(MenuItem::getClassType()) &&
           !dynamic_cast<MenuItem*>(_MenuPanel->getChildren(e->getSelected(i)))->getSelected())
        {
            dynamic_cast<MenuItem*>(_MenuPanel->getChildren(e->getSelected(i)))->setSelected(true);
        }
    }
}

OSG_END_NAMESPACE

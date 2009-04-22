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

//---------------------------------------------------------------------------
//  Includes
//---------------------------------------------------------------------------

#include <stdlib.h>
#include <stdio.h>

#include <OpenSG/OSGConfig.h>

#include "OSGGridLayout.h"
#include "Component/Container/OSGContainer.h"

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class osg::GridLayout
A UI GridLayout. 	
*/

/***************************************************************************\
 *                           Class variables                               *
\***************************************************************************/

/***************************************************************************\
 *                           Class methods                                 *
\***************************************************************************/

void GridLayout::initMethod (void)
{
}


/***************************************************************************\
 *                           Instance methods                              *
\***************************************************************************/

void GridLayout::updateLayout(const MFComponentPtr Components,const ComponentPtr ParentComponent) const
{
	Pnt2f borderTopLeft, borderBottomRight;
	Container::Ptr::dcast(ParentComponent)->getInsideInsetsBounds(borderTopLeft, borderBottomRight);
	Vec2f borderSize(borderBottomRight-borderTopLeft);

	Real32 Xpos = 0;
	Real32 Ypos = 0;
	Real32 maxSizeX = 0;
	Real32 maxSizeY = 0;
	Real32 debug = 10;
	Int32 numComp = Components.getSize();
	Real32 buttonXSize, buttonYSize;

	//set the size to the perfered sizes for the buttons
	for(UInt16 i = 0; i<Components.size(); i++){
		if (Components[i] != NullFC) 
		{
			if(Components[i]->getPreferredSize().x()>maxSizeX)
				maxSizeX = Components[i]->getPreferredSize().x();
			if(Components[i]->getPreferredSize().y()>maxSizeY)
				maxSizeY = Components[i]->getPreferredSize().y();
		}
	}
	//set the  size of the button
	for(UInt16 i = 0; i < Components.size(); i++){
		if (Components[i] != NullFC) 
		{
			if(maxSizeX < Components[i]->getMaxSize().x())
				buttonXSize = maxSizeX;
			else
				buttonXSize = Components[i]->getMaxSize().x();
			if(maxSizeY<Components[i]->getMaxSize().y())
				buttonYSize = maxSizeY;
			else
				buttonYSize = Components[i]->getMaxSize().y();
			beginEditCP(Components[i], Component::SizeFieldMask);
			   Components[i]->setSize(Vec2f(buttonXSize, buttonYSize));
			endEditCP(Components[i], Component::SizeFieldMask);
		}
	}


	//position each button
	for(UInt16 i = 0; i <= getRows()&& numComp>=0; i++){
		if (Components[i] != NullFC) 
		{
			for(UInt16 j = 0; j < getColumns()&& numComp>0; j++){
				debug = i*getColumns()+j;
			    beginEditCP(Components[i], Component::PositionFieldMask);
                   Components[i*getColumns()+j]->setPosition(borderTopLeft + Vec2f(Xpos, Ypos));
			    endEditCP(Components[i], Component::PositionFieldMask);
				numComp--;
				Xpos = Xpos + (maxSizeX+getHorizontalGap());
			}
			Xpos = 0;
			Ypos += maxSizeY+getVerticalGap();
		}
	}
}


Vec2f GridLayout::layoutSize(const MFComponentPtr Components,const ComponentPtr ParentComponent, SizeType TheSizeType) const
{
	Real32 maxSizeX = 0.0f;
	Real32 maxSizeY = 0.0f;

    Vec2f ComponentSize;
	//set the size to the perfered sizes for the buttons
	for(UInt16 i = 0; i<Components.size(); i++){
		if (Components[i] != NullFC) 
		{
            ComponentSize = getComponentSize(Components[i],TheSizeType);
			if(ComponentSize.x()>maxSizeX)
				maxSizeX = ComponentSize.x();
			if(ComponentSize.y()>maxSizeY)
				maxSizeY = ComponentSize.y();
		}
	}

    return Vec2f(maxSizeX * static_cast<Real32>(getRows()),
                 maxSizeY * static_cast<Real32>(getColumns()));
}

Vec2f GridLayout::minimumContentsLayoutSize(const MFComponentPtr Components,const ComponentPtr ParentComponent) const
{
    return layoutSize(Components, ParentComponent, MIN_SIZE);
}

Vec2f GridLayout::requestedContentsLayoutSize(const MFComponentPtr Components,const ComponentPtr ParentComponent) const
{
    return layoutSize(Components, ParentComponent, REQUESTED_SIZE);
}

Vec2f GridLayout::preferredContentsLayoutSize(const MFComponentPtr Components,const ComponentPtr ParentComponent) const
{
    return layoutSize(Components, ParentComponent, PREFERRED_SIZE);
}

Vec2f GridLayout::maximumContentsLayoutSize(const MFComponentPtr Components,const ComponentPtr ParentComponent) const
{
    return layoutSize(Components, ParentComponent, MAX_SIZE);
}
/*-------------------------------------------------------------------------*\
 -  private                                                                 -
\*-------------------------------------------------------------------------*/

/*----------------------- constructors & destructors ----------------------*/

GridLayout::GridLayout(void) :
    Inherited()
{
}

GridLayout::GridLayout(const GridLayout &source) :
    Inherited(source)
{
}

GridLayout::~GridLayout(void)
{
}

/*----------------------------- class specific ----------------------------*/

void GridLayout::changed(BitVector whichField, UInt32 origin)
{
    Inherited::changed(whichField, origin);
}

void GridLayout::dump(      UInt32    , 
                         const BitVector ) const
{
    SLOG << "Dump GridLayout NI" << std::endl;
}


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
    static Char8 cvsid_cpp       [] = "@(#)$Id: FCTemplate_cpp.h,v 1.20 2006/03/16 17:01:53 dirk Exp $";
    static Char8 cvsid_hpp       [] = OSGGRIDLAYOUTBASE_HEADER_CVSID;
    static Char8 cvsid_inl       [] = OSGGRIDLAYOUTBASE_INLINE_CVSID;

    static Char8 cvsid_fields_hpp[] = OSGGRIDLAYOUTFIELDS_HEADER_CVSID;
}

#ifdef __sgi
#pragma reset woff 1174
#endif

OSG_END_NAMESPACE

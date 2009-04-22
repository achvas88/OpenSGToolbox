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
#include <OpenSG/OSGConfig.h>

OSG_BEGIN_NAMESPACE

inline
const EventType &DragGestureEvent::getClassType(void)
{
    return _Type;
}

inline
ComponentPtr DragGestureEvent::getOriginComponent(void) const
{
    return _OriginComponent;
}

inline
const Pnt2f &DragGestureEvent::getDragLocation(void) const
{
    return _DragLocation;
}

inline
DragGestureEvent::DragGestureEvent(FieldContainerPtr Source, Time TimeStamp, ComponentPtr TheComponent, const Pnt2f &DragLocation) :
   Event(Source, TimeStamp),
       _OriginComponent(TheComponent),
       _DragLocation(DragLocation)
{
}

OSG_END_NAMESPACE
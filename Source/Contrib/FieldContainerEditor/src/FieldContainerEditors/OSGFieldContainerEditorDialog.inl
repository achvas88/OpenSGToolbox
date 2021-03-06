/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *               Copyright (C) 2000-2006 by the OpenSG Forum                 *
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

OSG_BEGIN_NAMESPACE

inline
DialogWindowTransitPtr createDefaultFCEditorDialog(FieldContainer* fc, 
                                                                                     CommandManagerPtr CmdManager)
{
    return createFCEditorDialog(fc, CmdManager, "Default");
}

inline
DialogWindowUnrecPtr openDefaultFCEditorDialog(FieldContainer* fc, 
                                                     CommandManagerPtr CmdManager,
                                                     UIDrawingSurfaceUnrecPtr DrawingSurface)
{
    return openFCEditorDialog(fc, CmdManager, "Default", DrawingSurface);
}

inline
DialogWindowTransitPtr createDefaultFCTreeEditorDialog(FieldContainer* fc, 
                                                                                     CommandManagerPtr CmdManager)
{
    return createFCTreeEditorDialog(fc, CmdManager, "Default");
}

inline
DialogWindowUnrecPtr openDefaultFCTreeEditorDialog(FieldContainer* fc, 
                                                     CommandManagerPtr CmdManager,
                                                     UIDrawingSurfaceUnrecPtr DrawingSurface)
{
    return openFCTreeEditorDialog(fc, CmdManager, "Default", DrawingSurface);
}

OSG_END_NAMESPACE

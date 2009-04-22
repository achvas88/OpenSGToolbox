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


#define OSG_COMPILEUSERINTERFACELIB

#include <OpenSG/OSGConfig.h>

#include "OSGTextArea.h"

#include "Component/Container/Window/OSGInternalWindow.h"
#include "UIDrawingSurface/OSGUIDrawingSurface.h"
#include <OpenSG/Input/OSGWindowEventProducer.h>
#include <OpenSG/Input/OSGStringUtils.h>
#include "Util/OSGUIDrawUtils.h"
#include "Component/Scroll/OSGScrollBar.h"
#include "Component/Container/OSGUIViewport.h"

#include "LookAndFeel/OSGLookAndFeelManager.h"
OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class osg::TextArea
A UI TextArea 	
*/

/***************************************************************************\
 *                           Class variables                               *
\***************************************************************************/

/***************************************************************************\
 *                           Class methods                                 *
\***************************************************************************/

void TextArea::initMethod (void)
{
}

void TextArea::drawInternal(const GraphicsPtr TheGraphics) const
{	
    //Text Color
    Color4f TextColor = getDrawnTextColor();
	for(Int32 i = 0; i < _LineContents.size(); i++)//draw each line seperately
	{	
        if(getFont() != NullFC)
        {
            if(_LineContents[i]._VerticalOffset > getClipBottomRight().y() || ( i+1<_LineContents.size() && _LineContents[i+1]._VerticalOffset < getClipTopLeft().y()))
            {
                continue;
            }
		    //draw like normal if not selected
		    if(_LineContents[i]._StartPosition >= _TextSelectionEnd || _LineContents[i]._EndPosition <= _TextSelectionStart || _TextSelectionStart >= _TextSelectionEnd)
		    {

			    TheGraphics->drawText(Pnt2f(_LineContents[i]._LeftHorizontalOffset, _LineContents[i]._VerticalOffset), _LineContents[i]._Contents, getFont(), TextColor, getOpacity());
		    }


		    else if(_TextSelectionStart < _TextSelectionEnd) //if text is only on this line
		    {
			    Int32 StartSelection = 0;
			    Int32 EndSelection = _LineContents[i]._Contents.size();
			    if(_TextSelectionStart > _LineContents[i]._StartPosition)
			    {
				    StartSelection = _TextSelectionStart-_LineContents[i]._StartPosition;
			    }
			    if(_TextSelectionEnd <= _LineContents[i]._EndPosition)
			    {
				    if(_TextSelectionEnd-_LineContents[i]._StartPosition > 0)
				    {
				    EndSelection = _TextSelectionEnd-_LineContents[i]._StartPosition;
				    }
				    else
				    {
					    EndSelection = 0;
				    }
			    }
			    std::string drawnText = _LineContents[i]._Contents;
			    Pnt2f offset = Pnt2f(_LineContents[i]._LeftHorizontalOffset, _LineContents[i]._VerticalOffset);
			    TheGraphics->drawText(offset,drawnText.substr(0, StartSelection), getFont(), TextColor, getOpacity());//draw before selection text
			    TheGraphics->drawRect(offset+Vec2f(getFont()->getBounds(drawnText.substr(0, StartSelection)).x(), 0), //draw selection rect
				    getFont()->getBounds(drawnText.substr(0, EndSelection))+Vec2f(offset),
				    getSelectionBoxColor(), getOpacity());
			    TheGraphics->drawText(offset+Vec2f(getFont()->getBounds(drawnText.substr(0, StartSelection)).x(), 0), //draw selected text
				    drawnText.substr(StartSelection, EndSelection-StartSelection), getFont(), getSelectionTextColor(), getOpacity());
			    TheGraphics->drawText(offset+Vec2f(getFont()->getBounds(drawnText.substr(0, EndSelection)).x(), 0), //draw after selection text
				    drawnText.substr(EndSelection, drawnText.size()-EndSelection), getFont(), TextColor, getOpacity());
		    }
        }

		//draw Caret
		if(getEnabled() && getEditable() && ((getCaretPosition() > _LineContents[i]._StartPosition && getCaretPosition() <= _LineContents[i]._EndPosition )||( getCaretPosition() == 0 && i == 0)) && _TextSelectionStart >= _TextSelectionEnd &&
			 _CurrentCaretBlinkElps <= 0.5*LookAndFeelManager::the()->getLookAndFeel()->getTextCaretRate() &&
			 getFocused())
		{
			Pnt2f TempTopLeft, TempBottomRight;
			getFont()->getBounds(_LineContents[i]._Contents.substr(0, getCaretPosition()-_LineContents[i]._StartPosition), TempTopLeft, TempBottomRight);
			TheGraphics->drawLine(Pnt2f(_LineContents[i]._LeftHorizontalOffset+TempBottomRight.x(), _LineContents[i]._VerticalOffset),
				Pnt2f(_LineContents[i]._LeftHorizontalOffset+TempBottomRight.x(), _LineContents[i]._VerticalOffset+TempBottomRight.y()),
				.5, TextColor, getOpacity());
		}
	}
}

/***************************************************************************\
 *                           Instance methods                              *
\***************************************************************************/

Int32 TextArea::getCaretLine(void) const
{
	for(Int32 i = 0; i < _LineContents.size(); i++)//draw each line seperately
	{
		if((getCaretPosition() > _LineContents[i]._StartPosition && getCaretPosition() <= _LineContents[i]._EndPosition) ||
			(i == _LineContents.size()-1 && getCaretPosition() == getText().size()))
		{
			return i;
		}
	}

	return -1;
}

bool TextArea::isLineVisible(const UInt32& line) const
{
	//Get the bounds of this line
	Pnt2f TempTopLeft, TempBottomRight;
	Vec2f Offset = Pnt2f(_LineContents[line]._LeftHorizontalOffset, _LineContents[line]._VerticalOffset);
	getFont()->getBounds(_LineContents[line]._Contents, TempTopLeft, TempBottomRight);

	TempTopLeft = TempTopLeft + Offset;
	TempBottomRight = TempBottomRight + Offset;

	Pnt2f ClipTopLeft, ClipBottomRight;
	getClipBounds(ClipTopLeft, ClipBottomRight);

	return (TempTopLeft.x() >= ClipTopLeft.x() &&
		    TempTopLeft.y() >= ClipTopLeft.y() &&
		    TempBottomRight.x() <= ClipBottomRight.x() &&
		    TempBottomRight.y() <= ClipBottomRight.y());
}

void TextArea::scrollToLine(const UInt32& line)
{
	if(getParentContainer() != NullFC && getParentContainer()->getType().isDerivedFrom(UIViewport::getClassType()))
	{
		//Get the bounds of this line
		Pnt2f TempTopLeft, TempBottomRight;
		Vec2f Offset = Pnt2f(_LineContents[line]._LeftHorizontalOffset, _LineContents[line]._VerticalOffset);
		getFont()->getBounds(_LineContents[line]._Contents, TempTopLeft, TempBottomRight);

		TempTopLeft = TempTopLeft + Offset;
		TempBottomRight = TempBottomRight + Offset;

		UIViewportPtr::dcast(getParentContainer())->maximizeVisibility(TempTopLeft, TempBottomRight);
	}
}

void TextArea::focusGained(const FocusEvent& e)
{
	if( getParentWindow() != NullFC &&
		getParentWindow()->getDrawingSurface() != NullFC &&
		getParentWindow()->getDrawingSurface()->getEventProducer() != NullFC)
    {
		getParentWindow()->getDrawingSurface()->getEventProducer()->addUpdateListener(&_CaretUpdateListener);
	}
	Inherited::focusGained(e);
}

void TextArea::focusLost(const FocusEvent& e)
{
	if( getParentWindow() != NullFC &&
		getParentWindow()->getDrawingSurface() != NullFC &&
		getParentWindow()->getDrawingSurface()->getEventProducer() != NullFC)
    {
		getParentWindow()->getDrawingSurface()->getEventProducer()->removeUpdateListener(&_CaretUpdateListener);
	}
	Inherited::focusLost(e);
}

void TextArea::keyTyped(const KeyEvent& e)//broken
{
	if(getEnabled() && getEditable())
	{
		if(e.getKey() == e.KEY_ENTER)
		{
			beginEditCP(TextAreaPtr(this), TextArea::TextFieldMask | TextArea::CaretPositionFieldMask);
				if(_TextSelectionStart < _TextSelectionEnd)
				{
					setText(getText().erase(_TextSelectionStart, _TextSelectionEnd-_TextSelectionStart));
				}
				setText(getText().insert(getCaretPosition(),"\n"));
				setCaretPosition(getCaretPosition()+1);
			endEditCP(TextAreaPtr(this), TextArea::TextFieldMask | TextArea::CaretPositionFieldMask);

		}
	}

	if(e.getKey() == e.KEY_UP || e.getKey() == e.KEY_KEYPAD_UP)
	{		
		Int32 OriginalPosition = getCaretPosition();
		Int32 LineSelector = 0;
		for(Int32 i = 0; i < _LineContents.size(); i++)
		{
			if(getCaretPosition() <= _LineContents[i]._EndPosition && getCaretPosition() > _LineContents[i]._StartPosition)
			{
				LineSelector = i;
				break;
			}
		}
		if(LineSelector > 0)
		{
			Pnt2f TempTopLeft, TempBottomRight;
			getFont()->getBounds(_LineContents[LineSelector]._Contents.substr(0, getCaretPosition()-_LineContents[LineSelector]._StartPosition),TempTopLeft, TempBottomRight);
			beginEditCP(TextAreaPtr(this),TextArea::CaretPositionFieldMask);
				setCaretPosition(findTextPosition(Pnt2f(_LineContents[LineSelector]._LeftHorizontalOffset + TempBottomRight.x(),_LineContents[LineSelector-1]._VerticalOffset)));
			endEditCP(TextAreaPtr(this), TextArea::CaretPositionFieldMask);
		}
		if(getParentWindow() != NullFC && getParentWindow()->getDrawingSurface()!=NullFC&&getParentWindow()->getDrawingSurface()->getEventProducer() != NullFC 
			&& getParentWindow()->getDrawingSurface()->getEventProducer()->getKeyModifiers() & KeyEvent::KEY_MODIFIER_SHIFT)
		{
			if(OriginalPosition == _TextSelectionEnd && OriginalPosition != _TextSelectionStart)
			{
				_TextSelectionEnd = getCaretPosition();
			}
			else
			{
				_TextSelectionStart = getCaretPosition();
			}
		}
		else
		{
			_TextSelectionStart = getCaretPosition();
			_TextSelectionEnd = getCaretPosition();
		}
	}
	if(e.getKey() == e.KEY_DOWN || e.getKey() == e.KEY_KEYPAD_DOWN)
	{
		Int32 OriginalPosition = getCaretPosition();
		Int32 LineSelector = _LineContents.size();
		for(Int32 i = 0; i < _LineContents.size(); i++)
		{
			if(getCaretPosition() <= _LineContents[i]._EndPosition && getCaretPosition() > _LineContents[i]._StartPosition)
			{
				LineSelector = i;
				break;
			}
		}
		if(LineSelector < _LineContents.size()-1)
		{
			Pnt2f TempTopLeft, TempBottomRight;
			getFont()->getBounds(_LineContents[LineSelector]._Contents.substr(0,getCaretPosition()-_LineContents[LineSelector]._StartPosition),TempTopLeft, TempBottomRight);
			beginEditCP(TextAreaPtr(this), TextArea::CaretPositionFieldMask);
				setCaretPosition(findTextPosition(Pnt2f(_LineContents[LineSelector]._LeftHorizontalOffset + TempBottomRight.x(),_LineContents[LineSelector+1]._VerticalOffset)));
			endEditCP(TextAreaPtr(this), TextArea::CaretPositionFieldMask);
		}
		if(getParentWindow() != NullFC && getParentWindow()->getDrawingSurface()!=NullFC&&getParentWindow()->getDrawingSurface()->getEventProducer() != NullFC 
			&& getParentWindow()->getDrawingSurface()->getEventProducer()->getKeyModifiers() & KeyEvent::KEY_MODIFIER_SHIFT)
		{
			if(OriginalPosition == _TextSelectionEnd)
			{
				_TextSelectionEnd = getCaretPosition();
			}
			else
			{
				_TextSelectionStart = getCaretPosition();
			}
		}
		else
		{
			_TextSelectionStart = getCaretPosition();
			_TextSelectionEnd = getCaretPosition();
		}
	}
	Inherited::keyTyped(e);
}

void TextArea::mouseClicked(const MouseEvent& e)
{	
	Int32 Position(0);
	Int32 BeginWord = 0;
	Int32 EndWord = getText().size();
	if(e.getButton() == e.BUTTON1)
	{

		if(e.getClickCount() == 2)
		{

			//set caret position to proper place
			Position = findTextPosition(DrawingSurfaceToComponent(e.getLocation(), TextAreaPtr(this)));
			if(isPunctuationChar(getText()[Position]))
			{
				EndWord = Position + 1;
				BeginWord = Position;
			}
			else{
				for(Int32 i = Position; i < getText().size(); i++)
				{
					if(!isWordChar(getText()[i]))
					{
						EndWord = i;
						break;
					}
				}
				for(Int32 i = Position; i >= 0; i--)
				{
					if(!isWordChar(getText()[i]))
					{
						BeginWord = i + 1;
						break;
					}
				}
			}
			_TextSelectionEnd = EndWord;
			_TextSelectionStart = BeginWord;
			beginEditCP(TextAreaPtr(this),TextArea::CaretPositionFieldMask);
				setCaretPosition(EndWord);
			endEditCP(TextAreaPtr(this),TextArea::CaretPositionFieldMask);
		}
	}
	Inherited::mouseClicked(e);

}

void TextArea::mousePressed(const MouseEvent& e)
{
	if(e.getButton() == e.BUTTON1)
	{
		//set caret position to proper place
		beginEditCP(TextAreaPtr(this),TextArea::CaretPositionFieldMask);
			setCaretPosition( findTextPosition(DrawingSurfaceToComponent(e.getLocation(), TextAreaPtr(this))));
		endEditCP(TextAreaPtr(this),TextArea::CaretPositionFieldMask);

		_TextSelectionEnd = getCaretPosition();
		_TextSelectionStart = getCaretPosition();
	}
	if(getParentWindow() != NullFC && getParentWindow()->getDrawingSurface()!=NullFC&& getParentWindow()->getDrawingSurface()->getEventProducer() != NullFC)
	{
        getParentWindow()->getDrawingSurface()->getEventProducer()->addMouseListener(&_MouseDownListener);
        getParentWindow()->getDrawingSurface()->getEventProducer()->addKeyListener(&_MouseDownListener);
        getParentWindow()->getDrawingSurface()->getEventProducer()->addMouseMotionListener(&_MouseDownListener);
    }
	Inherited::mousePressed(e);
}

void TextArea::mouseDraggedAfterArming(const MouseEvent& e)
{
	Int32 OriginalPosition = getCaretPosition();
	if(e.getButton() == e.BUTTON1)
	{
		//set caret position to proper place
		
		beginEditCP(TextAreaPtr(this),TextArea::CaretPositionFieldMask);
			setCaretPosition( findTextPosition(DrawingSurfaceToComponent(e.getLocation(), TextAreaPtr(this))));
		endEditCP(TextAreaPtr(this),TextArea::CaretPositionFieldMask);
		if(getCaretPosition() < OriginalPosition)
		{
			if(getCaretPosition() < _TextSelectionStart)
			{
				_TextSelectionStart = getCaretPosition();
			}
			else
			{
				_TextSelectionEnd = getCaretPosition();
			}
		}
		else if(getCaretPosition() > OriginalPosition)
		{
			if(getCaretPosition() > _TextSelectionEnd)
			{
				_TextSelectionEnd = getCaretPosition();
			}
			else
			{
				_TextSelectionStart = getCaretPosition();
			}
		}
	}
}



Int32 TextArea::findTextPosition(osg::Pnt2f Input)
{
	Int32 output = 0;
	Int32 row = 0;
	Int32 column = 0;
	Pnt2f TempTopLeft,  TempBottomRight, TempTopLeft1,  TempBottomRight1;
	Pnt2f offset;
	//find row it belongs in
	for(Int32 i = 0; i < _LineContents.size(); ++i)
	{
		getFont()->getBounds(_LineContents[i]._Contents, TempTopLeft, TempBottomRight);
		offset = Pnt2f(_LineContents[i]._LeftHorizontalOffset, _LineContents[i]._VerticalOffset);
		if(Input.y() >= offset.y())
		{
			row = i;
		}
	}
	//find column it belongs in
	offset = Pnt2f(_LineContents[row]._LeftHorizontalOffset, _LineContents[row]._VerticalOffset);
	for(Int32 i = 1; i <= _LineContents[row]._Contents.size(); ++i)
	{
		getFont()->getBounds(_LineContents[row]._Contents.substr(0, i), TempTopLeft, TempBottomRight);
		getFont()->getBounds(_LineContents[row]._Contents.substr(0, i-1), TempTopLeft1, TempBottomRight1);
		if(Input.x()> (TempBottomRight.x()-TempBottomRight1.x())/2.0+.5+TempBottomRight1.x()+offset.x())
		{
			column = i;
		}
	}

	for(Int32 i = 0; i < row; ++i)
	{
		output+=_LineContents[i]._Contents.size();
	}
	output+=column;
	return output;
}

Int32 TextArea::getScrollableBlockIncrement(const Pnt2f& VisibleRectTopLeft, const Pnt2f& VisibleRectBottomRight, const UInt32& orientation, const Int32& direction)
{
    UInt16 MajorAxis;
    if(orientation == ScrollBar::VERTICAL_ORIENTATION)
    {
        MajorAxis = 1;
    }
    else
    {
        MajorAxis = 0;
    }
    
    return direction * (VisibleRectBottomRight[MajorAxis] - VisibleRectTopLeft[MajorAxis]);
}

bool TextArea::getScrollableTracksViewportHeight(void)
{
    return false;
}

bool TextArea::getScrollableTracksViewportWidth(void)
{
    return true;
}

Int32 TextArea::getScrollableUnitIncrement(const Pnt2f& VisibleRectTopLeft, const Pnt2f& VisibleRectBottomRight, const UInt32& orientation, const Int32& direction)
{
    if(getFont() != NullFC)
    {
        UInt16 MajorAxis;
        if(orientation == ScrollBar::VERTICAL_ORIENTATION)
        {
            MajorAxis = 1;
        }
        else
        {
            MajorAxis = 0;
        }
        Pnt2f TopLeft, BottomRight;
		getFont()->getBounds("A", TopLeft, BottomRight);
        return BottomRight[MajorAxis] - TopLeft[MajorAxis];
    }
    else
    {
        return Inherited::getScrollableUnitIncrement(VisibleRectTopLeft, VisibleRectBottomRight, orientation, direction);
    }
    
}
/*-------------------------------------------------------------------------*\
 -  private                                                                 -
\*-------------------------------------------------------------------------*/

/*----------------------- constructors & destructors ----------------------*/

TextArea::TextArea(void) :
    Inherited(),
		_CurrentCaretBlinkElps(0.0),
	    _CaretUpdateListener(TextAreaPtr(this)),
		_MouseDownListener(TextAreaPtr(this))
{
}

TextArea::TextArea(const TextArea &source) :
    Inherited(source),
		_CurrentCaretBlinkElps(0.0),
	    _CaretUpdateListener(TextAreaPtr(this)),
		_MouseDownListener(TextAreaPtr(this))
{
}

TextArea::~TextArea(void)
{
}

/*----------------------------- class specific ----------------------------*/

void TextArea::CaretUpdateListener::update(const UpdateEvent& e)
{
   _TextArea->_CurrentCaretBlinkElps += e.getElapsedTime();
   if(_TextArea->_CurrentCaretBlinkElps > LookAndFeelManager::the()->getLookAndFeel()->getTextCaretRate())
   {
       Int32 Div = _TextArea->_CurrentCaretBlinkElps/LookAndFeelManager::the()->getLookAndFeel()->getTextCaretRate();
	   _TextArea->_CurrentCaretBlinkElps -= static_cast<osg::Time>(Div)*LookAndFeelManager::the()->getLookAndFeel()->getTextCaretRate();
   }
}

void TextArea::changed(BitVector whichField, UInt32 origin)
{

    if((whichField & TextFieldMask ||
       whichField & LineWrapFieldMask ||
       whichField & WrapStyleWordFieldMask ||
       whichField & TabSizeFieldMask ||
       whichField & FontFieldMask ||
       whichField & SizeFieldMask) &&
	   getFont() != NullFC)
    {
 	    while( _LineContents.size()>0)
	    {
		    _LineContents.pop_back();
	    }
	    Pnt2f TopLeft, BottomRight, TempPos;
	    Pnt2f TempTopLeft, TempBottomRight;
	    Vec2f FullTextSize;
	    getInsideBorderBounds(TopLeft, BottomRight);
	    std::string temptext;
	    Int32 XPosition = 0;
	    Int32 YPosition = 0;
	    Int32 Backtrack = 0;
	    bool brokeAtWord = false;

	    //take care of tabs
	    temptext = getText();
	    for(Int32 i = 0; i < temptext.size() ; i++)
	    {
		    if(temptext[i] == '\t')
		    {
				temptext[i] = ' ';
			    //for(Int32 j = 0; j < getTabSize()-1; j++)
			    //{
				//    temptext.insert(i, " ");
				//    i++;
			    //}
		    }
	    }
	    //Set the contents of the lines (assuming letter by letter go down right now (which is wrong))
	    _LineContents.push_back(TextLine());
	    _LineContents[0]._StartPosition = 0;
	    for(Int32 i = 0; i < temptext.size(); ++i)
	    {

		    while(temptext[i] == ' ')
		    {
			    i++;
		    }
		    getFont()->getBounds(getText().substr(XPosition, i-XPosition+1), TempTopLeft, TempBottomRight);
		    if(temptext[i] == '\n')
		    {
			    XPosition = i;
			    _LineContents[YPosition]._EndPosition = i;
			    _LineContents[YPosition]._Contents = temptext.substr(_LineContents[YPosition]._StartPosition, _LineContents[YPosition]._EndPosition-_LineContents[YPosition]._StartPosition);
			    _LineContents.push_back(TextLine());
			    ++YPosition;
			    _LineContents[YPosition]._StartPosition = i;

		    }
		    if(TempBottomRight.x() > BottomRight.x())
		    {
			    if(!getWrapStyleWord())
			    {
				    XPosition = i;
				    _LineContents[YPosition]._EndPosition = i;
				    _LineContents[YPosition]._Contents = temptext.substr(_LineContents[YPosition]._StartPosition, _LineContents[YPosition]._EndPosition-_LineContents[YPosition]._StartPosition);
				    _LineContents.push_back(TextLine());
				    ++YPosition;
				    _LineContents[YPosition]._StartPosition = i;
			    }
			    else
			    {
				    Int32 j;
				    brokeAtWord = false; 
				    for(j = i; j > _LineContents[YPosition]._StartPosition; --j)
				    {
					    if(!isWordChar(getText()[j])&& !isPunctuationChar(getText()[j]))
					    {
						    brokeAtWord = true;
						    break;
					    }
				    }
				    if(!brokeAtWord)
				    {
					    XPosition = i;
					    _LineContents[YPosition]._EndPosition = i;
					    _LineContents[YPosition]._Contents = temptext.substr(_LineContents[YPosition]._StartPosition, _LineContents[YPosition]._EndPosition-_LineContents[YPosition]._StartPosition);
					    _LineContents.push_back(TextLine());
					    ++YPosition;
					    _LineContents[YPosition]._StartPosition = i;
				    }
				    else
				    {
					    i = j;		
					    while(temptext[i] == ' ')
					    {
						    i++;
					    }
					    XPosition = i;
					    _LineContents[YPosition]._EndPosition = i;
					    _LineContents[YPosition]._Contents = temptext.substr(_LineContents[YPosition]._StartPosition, _LineContents[YPosition]._EndPosition-_LineContents[YPosition]._StartPosition);
					    _LineContents.push_back(TextLine());
					    ++YPosition;
					    _LineContents[YPosition]._StartPosition = i;
				    }
			    }

		    }
	    }
	    _LineContents[YPosition]._EndPosition = temptext.size();
	    _LineContents[YPosition]._Contents = temptext.substr(_LineContents[YPosition]._StartPosition, _LineContents[YPosition]._EndPosition-_LineContents[YPosition]._StartPosition);

	    //calculate offsets
	    //begin with first line
	    getFont()->getBounds(_LineContents[0]._Contents, TempTopLeft, TempBottomRight);
	    FullTextSize.setValues(TempBottomRight.x(), _LineContents.size()*TempBottomRight.y());
	    TempPos = calculateAlignment(TopLeft, BottomRight-TopLeft, FullTextSize, (Real32)0.0, (Real32)0.0);//eventually the alignments will be get horz/vert al
	    _LineContents[0]._LeftHorizontalOffset = TempPos.x();
	    _LineContents[0]._VerticalOffset = TempPos.y();
	    for(Int32 i = 1; i < _LineContents.size(); i++)
	    {						
		    getFont()->getBounds(_LineContents[i]._Contents, TempTopLeft, TempBottomRight);
		    FullTextSize.setValues(TempBottomRight.x(), _LineContents.size()*TempBottomRight.y());
		    TempPos = calculateAlignment(TopLeft, BottomRight-TopLeft, FullTextSize, (Real32)0.0, (Real32)0.0);//eventually the alignments will be get horz/vert al
		    _LineContents[i]._LeftHorizontalOffset = TempPos.x();
		    _LineContents[i]._VerticalOffset = TempPos.y()+TempBottomRight.y()*i;
	    }
        
        //Update my PreferredSize based on text
        Vec2f PreferredSize;
		getFont()->getBounds(_LineContents.back()._Contents, TempTopLeft, TempBottomRight);
        PreferredSize[0] = getPreferredSize().x();
        PreferredSize[1] = osgMax<UInt32>(getMinSize().y(), _LineContents.back()._VerticalOffset + TempBottomRight.y());
        if(getPreferredSize() != PreferredSize)
        {
            beginEditCP(TextAreaPtr(this), PreferredSizeFieldMask);
                setPreferredSize(PreferredSize);
            endEditCP(TextAreaPtr(this), PreferredSizeFieldMask);
        }
    }
    
	if(whichField & CaretPositionFieldMask)
	{
		//Check to see if the caret is visible
		Int32 CaretLine(getCaretLine());
		if(CaretLine>=0 && !isLineVisible(CaretLine))
		{
			scrollToLine(CaretLine);
		}
	}

	Inherited::changed(whichField, origin);
}

void TextArea::dump(      UInt32    , 
                         const BitVector ) const
{
    SLOG << "Dump TextArea NI" << std::endl;
}



void TextArea::MouseDownListener::keyTyped(const KeyEvent& e)
{
    if(e.getKey() == KeyEvent::KEY_ESCAPE)
    {
	    if(_TextArea->getParentWindow() != NullFC && _TextArea->getParentWindow()->getDrawingSurface()!=NullFC&& _TextArea->getParentWindow()->getDrawingSurface()->getEventProducer() != NullFC)
	    {
            _TextArea->getParentWindow()->getDrawingSurface()->getEventProducer()->removeMouseListener(this);
            _TextArea->getParentWindow()->getDrawingSurface()->getEventProducer()->removeKeyListener(this);
            _TextArea->getParentWindow()->getDrawingSurface()->getEventProducer()->removeMouseMotionListener(this);
        }
    }
}

void TextArea::MouseDownListener::mouseReleased(const MouseEvent& e)
{
	if(_TextArea->getParentWindow() != NullFC && _TextArea->getParentWindow()->getDrawingSurface()!=NullFC&& _TextArea->getParentWindow()->getDrawingSurface()->getEventProducer() != NullFC)
	{
        _TextArea->getParentWindow()->getDrawingSurface()->getEventProducer()->removeMouseListener(this);
        _TextArea->getParentWindow()->getDrawingSurface()->getEventProducer()->removeKeyListener(this);
        _TextArea->getParentWindow()->getDrawingSurface()->getEventProducer()->removeMouseMotionListener(this);
    }
}

void TextArea::MouseDownListener::mouseDragged(const MouseEvent& e)
{
    _TextArea->mouseDraggedAfterArming(e);
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
    static Char8 cvsid_hpp       [] = OSGTEXTAREABASE_HEADER_CVSID;
    static Char8 cvsid_inl       [] = OSGTEXTAREABASE_INLINE_CVSID;

    static Char8 cvsid_fields_hpp[] = OSGTEXTAREAFIELDS_HEADER_CVSID;
}

#ifdef __sgi
#pragma reset woff 1174
#endif

OSG_END_NAMESPACE
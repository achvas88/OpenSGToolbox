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

#ifndef _OSGDEFAULTMUTABLETREENODE_H_
#define _OSGDEFAULTMUTABLETREENODE_H_
#ifdef __sgi
#pragma once
#endif

#include <OpenSG/OSGConfig.h>

#include "OSGDefaultMutableTreeNodeBase.h"

#include <vector>

OSG_BEGIN_NAMESPACE

/*! \brief DefaultMutableTreeNode class. See \ref 
           PageUserInterfaceDefaultMutableTreeNode for a description.
*/

class OSG_USERINTERFACELIB_DLLMAPPING DefaultMutableTreeNode : public DefaultMutableTreeNodeBase
{
  private:

    typedef DefaultMutableTreeNodeBase Inherited;

    /*==========================  PUBLIC  =================================*/
  public:

    /*---------------------------------------------------------------------*/
    /*! \name                      Sync                                    */
    /*! \{                                                                 */

    virtual void changed(BitVector  whichField, 
                         UInt32     origin    );

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                     Output                                   */
    /*! \{                                                                 */

    virtual void dump(      UInt32     uiIndent, 
                      const BitVector  bvFlags ) const;

    /*! \}                                                                 */
	

	//Returns true if the receiver allows children.
	virtual bool getAllowsChildren(void) const;

	//Returns the child TreeNode at index childIndex.
	virtual TreeNodePtr getChildAt(const UInt32& childIndex) const;

	//Returns the number of children TreeNodes the receiver contains.
	virtual UInt32 getChildCount(void) const;

	//Returns the index of node in the receivers children.
	virtual Int32 getIndex(TreeNodePtr node) const;

	//Returns the parent TreeNode of the receiver.
	virtual TreeNodePtr getParent(void) const;

	//Returns true if the receiver is a leaf.
	virtual bool isLeaf(void) const;

	//Adds child to the receiver at index.
	virtual void insert(MutableTreeNodePtr child, const UInt32& index);

	//Removes the child at index from the receiver.
	virtual void remove(const UInt32& index);

	//Removes node from the receiver.
	virtual void remove(MutableTreeNodePtr node);

	//Removes the receiver from its parent.
	virtual void removeFromParent(void);

	//Sets the parent of the receiver to newParent.
	virtual void setParent(MutableTreeNodePtr newParent);

	//Resets the user object of the receiver to object.
	virtual void setUserObject(SharedFieldPtr object);

	
	
	//Removes newChild from its parent and makes it a child of this node by adding it to the end of this node's child array.
	void add(MutableTreeNodePtr newChild);

	//Creates and returns an enumeration that traverses the subtree rooted at this node in breadth-first order.
    void breadthFirst(std::vector<DefaultMutableTreeNodePtr>& Result)const;

	//Creates and returns an enumeration that traverses the subtree rooted at this node in depth-first order.
    void depthFirst(std::vector<DefaultMutableTreeNodePtr>& Result) const;

	//Returns the child in this node's child array that immediately follows aChild, which must be a child of this node.
	MutableTreeNodePtr getChildAfter(MutableTreeNodePtr aChild) const;

	//Returns the child in this node's child array that immediately precedes aChild, which must be a child of this node.
	MutableTreeNodePtr getChildBefore(MutableTreeNodePtr aChild) const;

	//Returns the depth of the tree rooted at this node -- the longest distance from this node to a leaf.
	UInt32 getDepth(void) const;

	//Returns this node's first child.
	MutableTreeNodePtr getFirstChild(void) const;

	//Finds and returns the first leaf that is a descendant of this node -- either this node or its first child's first leaf.
	DefaultMutableTreeNodePtr getFirstLeaf(void) const;

	//Returns this node's last child.
	MutableTreeNodePtr getLastChild(void) const;

	//Finds and returns the last leaf that is a descendant of this node -- either this node or its last child's last leaf.
	DefaultMutableTreeNodePtr getLastLeaf(void) const;

	//Returns the total number of leaves that are descendants of this node.
	UInt32 getLeafCount(void) const;

	//Returns the number of levels above this node -- the distance from the root to this node.
	UInt32 getLevel(void) const;

	//Returns the leaf after this node or null if this node is the last leaf in the tree.
	DefaultMutableTreeNodePtr getNextLeaf(void) const;

	//Returns the node that follows this node in a preorder traversal of this node's tree.
	DefaultMutableTreeNodePtr getNextNode(void) const;

	//Returns the next sibling of this node in the parent's children array.
	DefaultMutableTreeNodePtr getNextSibling(void) const;

	//Returns the path from the root, to get to this node.
	std::vector<MutableTreeNodePtr> getPath(void) const;

	//Returns the leaf before this node or null if this node is the first leaf in the tree.
	DefaultMutableTreeNodePtr getPreviousLeaf(void) const;

	//Returns the node that precedes this node in a preorder traversal of this node's tree.
	DefaultMutableTreeNodePtr getPreviousNode(void) const;

	//Returns the previous sibling of this node in the parent's children array.
	DefaultMutableTreeNodePtr getPreviousSibling(void) const;

	//Returns the root of the tree that contains this node.
	MutableTreeNodePtr getRoot(void) const;

	//Returns the nearest common ancestor to this node and aNode.
	MutableTreeNodePtr getSharedAncestor(DefaultMutableTreeNodePtr aNode) const;

	//Returns the number of siblings of this node.
	UInt32 getSiblingCount(void) const;

	//Returns this node's user object.
	virtual SharedFieldPtr getUserObject(void) const;

	//Returns the user object path, from the root, to get to this node.
	std::vector<SharedFieldPtr> getUserObjectPath(void) const;

	//Returns true if anotherNode is an ancestor of this node -- if it is this node, this node's parent, or an ancestor of this node's parent.
	bool isNodeAncestor(MutableTreeNodePtr anotherNode) const;

	//Returns true if aNode is a child of this node.
	bool isNodeChild(MutableTreeNodePtr aNode) const;

	//Returns true if anotherNode is a descendant of this node -- if it is this node, one of this node's children, or a descendant of one of this node's children.
	bool isNodeDescendant(DefaultMutableTreeNodePtr anotherNode) const;

	//Returns true if and only if aNode is in the same tree as this node.
	bool isNodeRelated(DefaultMutableTreeNodePtr aNode) const;

	//Returns true if anotherNode is a sibling of (has the same parent as) this node.
	bool isNodeSibling(MutableTreeNodePtr anotherNode) const;

	//Returns true if this node is the root of the tree.
	bool isRoot(void) const;

	//Creates and returns an enumeration that follows the path from ancestor to this node.
	//Enumeration pathFromAncestorEnumeration(MutableTreeNodePtr ancestor) const;

	//Creates and returns an enumeration that traverses the subtree rooted at this node in postorder.
	void postorder(std::vector<DefaultMutableTreeNodePtr>& Result) const;

	//Creates and returns an enumeration that traverses the subtree rooted at this node in preorder.
	void preorder(std::vector<DefaultMutableTreeNodePtr>& Result) const;

	//Removes all of this node's children, setting their parents to null.
	void removeAllChildren(void);
    /*=========================  PROTECTED  ===============================*/
  protected:

    // Variables should all be in DefaultMutableTreeNodeBase.

    /*---------------------------------------------------------------------*/
    /*! \name                  Constructors                                */
    /*! \{                                                                 */

    DefaultMutableTreeNode(void);
    DefaultMutableTreeNode(const DefaultMutableTreeNode &source);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~DefaultMutableTreeNode(void); 

    /*! \}                                                                 */

	SharedFieldPtr _UserObject;
    
    /*==========================  PRIVATE  ================================*/
  private:

    friend class FieldContainer;
    friend class DefaultMutableTreeNodeBase;

    static void initMethod(void);

    // prohibit default functions (move to 'public' if you need one)

    void operator =(const DefaultMutableTreeNode &source);
};

typedef DefaultMutableTreeNode *DefaultMutableTreeNodeP;

OSG_END_NAMESPACE

#include "OSGDefaultMutableTreeNodeBase.inl"
#include "OSGDefaultMutableTreeNode.inl"

#define OSGDEFAULTMUTABLETREENODE_HEADER_CVSID "@(#)$Id: FCTemplate_h.h,v 1.23 2005/03/05 11:27:26 dirk Exp $"

#endif /* _OSGDEFAULTMUTABLETREENODE_H_ */

/*---------------------------------------------------------------------------*\
 *                         OpenSG ToolBox Physics                            *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                          www.vrac.iastate.edu                             *
 *                                                                           *
 *                Authors: Behboud Kalantary, David Kabala                   *
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

#ifndef _OSGPHYSICSTRIMESHGEOM_H_
#define _OSGPHYSICSTRIMESHGEOM_H_
#ifdef __sgi
#pragma once
#endif

#include <OpenSG/OSGConfig.h>
#include "OSGPhysicsDef.h"

#include "OSGPhysicsTriMeshGeomBase.h"

OSG_BEGIN_NAMESPACE

class  OSG_PHYSICSLIB_DLLMAPPING PhysicsTriMeshGeom : public PhysicsTriMeshGeomBase
{
  private:

    typedef PhysicsTriMeshGeomBase Inherited;

    /*==========================  PUBLIC  =================================*/
  public:

	  /*---------------------------------------------------------------------*/
	  /*! \name                   Class Specific                             */
	  /*! \{																*/
	  void setCallback( dTriCallback* callback );
	  dTriCallback* getCallback(void) const;
	  void setArrayCallback( dTriArrayCallback* arrayCallback );
	  dTriArrayCallback* getArrayCallback(void) const;
	  void setRayCallback( dTriRayCallback* callback );
	  dTriRayCallback* getRayCallback(void) const;
	  void setData( dTriMeshDataID data );

	  void enableTC( Int32 geomClass, bool enable );
	  bool isTCEnabled( Int32 geomClass ) const;
	  void clearTCCache(void);
	  void getTriangle( Int32 index, Vec3f& v0, Vec3f& v1, Vec3f& v2 ) const;
	  UInt32 getTriangleCount(void) const;
	  void getPoint( Int32 index, Real32 u, Real32 v, Vec3f& out ) const;
	  /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                      Sync                                    */
    /*! \{                                                                 */

    virtual void changed(BitVector  whichField, 
                         UInt32     origin    );

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                     Output                                   */
    /*! \{                                                                 */

    virtual void dump(      UInt32     uiIndent = 0, 
                      const BitVector  bvFlags  = 0) const;

    /*! \}                                                                 */
    /*=========================  PROTECTED  ===============================*/
  protected:

    // Variables should all be in PhysicsTriMeshGeomBase.

    /*---------------------------------------------------------------------*/
    /*! \name                  Constructors                                */
    /*! \{                                                                 */

    PhysicsTriMeshGeom(void);
    PhysicsTriMeshGeom(const PhysicsTriMeshGeom &source);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~PhysicsTriMeshGeom(void); 

    /*! \}                                                                 */
	/*---------------------------------------------------------------------*/
	/*! \name                   Class Specific                             */
	/*! \{                                                                 */
	void onCreate(const PhysicsTriMeshGeom *id = NULL);
	void onDestroy();
	void createODEGeometry(NodePtr& node);
	/*! \}                                                                 */
    /*==========================  PRIVATE  ================================*/
  private:
	  dTriMeshDataID data;


    friend class FieldContainer;
    friend class PhysicsTriMeshGeomBase;

    static void initMethod(void);

    // prohibit default functions (move to 'public' if you need one)

    void operator =(const PhysicsTriMeshGeom &source);

    std::vector<dTriIndex> _TriIndexes;
    std::vector<Pnt3f> _Positions;
};

typedef PhysicsTriMeshGeom *PhysicsTriMeshGeomP;

OSG_END_NAMESPACE

#include "OSGPhysicsTriMeshGeomBase.inl"
#include "OSGPhysicsTriMeshGeom.inl"

#define OSGPHYSICSTRIMESHGEOM_HEADER_CVSID "@(#)$Id: OSGPhysicsTriMeshGeom.h,v 1.2 2006/08/19 00:21:47 dirk Exp $"

#endif /* _OSGPHYSICSTRIMESHGEOM_H_ */
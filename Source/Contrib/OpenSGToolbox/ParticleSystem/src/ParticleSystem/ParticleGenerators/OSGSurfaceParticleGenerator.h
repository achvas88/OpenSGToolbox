/*---------------------------------------------------------------------------*\
 *                     OpenSG ToolBox Particle System                        *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                         www.vrac.iastate.edu                              *
 *                                                                           *
 *                 Authors: David Kabala , Daniel Guilliams                  *
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

#ifndef _OSGSURFACEPARTICLEGENERATOR_H_
#define _OSGSURFACEPARTICLEGENERATOR_H_
#ifdef __sgi
#pragma once
#endif

#include <OpenSG/OSGConfig.h>

#include "OSGSurfaceParticleGeneratorBase.h"

OSG_BEGIN_NAMESPACE

/*! \brief SurfaceParticleGenerator class. See \ref 
           PageParticleSystemSurfaceParticleGenerator for a description.
*/

class OSG_PARTICLESYSTEMLIB_DLLMAPPING SurfaceParticleGenerator : public SurfaceParticleGeneratorBase
{
  private:

    typedef SurfaceParticleGeneratorBase Inherited;

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

    virtual void dump(      UInt32     uiIndent = 0, 
                      const BitVector  bvFlags  = 0) const;

    /*! \} */

	virtual bool generate(ParticleSystemPtr System, const Time& elps);
    /*=========================  PROTECTED  ===============================*/
  protected:

    // Variables should all be in SurfaceParticleGeneratorBase.

    /*---------------------------------------------------------------------*/
    /*! \name                  Constructors                                */
    /*! \{                                                                 */

    SurfaceParticleGenerator(void);
    SurfaceParticleGenerator(const SurfaceParticleGenerator &source);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~SurfaceParticleGenerator(void); 

    /*! \}                                                                 */
    
    /*==========================  PRIVATE  ================================*/
  private:

    friend class FieldContainer;
    friend class SurfaceParticleGeneratorBase;

    static void initMethod(void);

    // prohibit default functions (move to 'public' if you need one)

    void operator =(const SurfaceParticleGenerator &source);
};

typedef SurfaceParticleGenerator *SurfaceParticleGeneratorP;

OSG_END_NAMESPACE

#include "OSGSurfaceParticleGeneratorBase.inl"
#include "OSGSurfaceParticleGenerator.inl"

#endif /* _OSGSURFACEPARTICLEGENERATOR_H_ */
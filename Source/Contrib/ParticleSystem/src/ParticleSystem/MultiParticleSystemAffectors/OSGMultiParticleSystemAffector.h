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

#ifndef _OSGMULTIPARTICLESYSTEMAFFECTOR_H_
#define _OSGMULTIPARTICLESYSTEMAFFECTOR_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGMultiParticleSystemAffectorBase.h"

OSG_BEGIN_NAMESPACE

/*! \brief MultiParticleSystemAffector class. See \ref
           PageContribParticleSystemMultiParticleSystemAffector for a description.
*/

class OSG_CONTRIBPARTICLESYSTEM_DLLMAPPING MultiParticleSystemAffector : public MultiParticleSystemAffectorBase
{
  protected:

    /*==========================  PUBLIC  =================================*/

  public:

    typedef MultiParticleSystemAffectorBase Inherited;
    typedef MultiParticleSystemAffector     Self;

    /*---------------------------------------------------------------------*/
    /*! \name                      Sync                                    */
    /*! \{                                                                 */

    virtual void changed(ConstFieldMaskArg whichField,
                         UInt32            origin,
                         BitVector         details    );

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                     Output                                   */
    /*! \{                                                                 */

    virtual void dump(      UInt32     uiIndent = 0,
                      const BitVector  bvFlags  = 0) const;

    /*! \}                                                                 */

    virtual void affect(const Time& elps) = 0;

    /*=========================  PROTECTED  ===============================*/

  protected:

    // Variables should all be in MultiParticleSystemAffectorBase.

    /*---------------------------------------------------------------------*/
    /*! \name                  Constructors                                */
    /*! \{                                                                 */

    MultiParticleSystemAffector(void);
    MultiParticleSystemAffector(const MultiParticleSystemAffector &source);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~MultiParticleSystemAffector(void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                      Init                                    */
    /*! \{                                                                 */

    static void initMethod(InitPhase ePhase);

    /*! \}                                                                 */
    /*==========================  PRIVATE  ================================*/

  private:

    friend class FieldContainer;
    friend class MultiParticleSystemAffectorBase;

    // prohibit default functions (move to 'public' if you need one)
    void operator =(const MultiParticleSystemAffector &source);
};

typedef MultiParticleSystemAffector *MultiParticleSystemAffectorP;

OSG_END_NAMESPACE

#include "OSGParticleSystem.h"
#include "OSGMultiParticleSystemAffectorBase.inl"
#include "OSGMultiParticleSystemAffector.inl"

#endif /* _OSGMULTIPARTICLESYSTEMAFFECTOR_H_ */

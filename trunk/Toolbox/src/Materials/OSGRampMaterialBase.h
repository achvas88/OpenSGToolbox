/*---------------------------------------------------------------------------*\
 *                     OpenSG ToolBox UserInterface                          *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                         www.vrac.iastate.edu                              *
 *                                                                           *
 *                          Authors: David Kabala                            *
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
 **     class RampMaterial
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#ifndef _OSGRAMPMATERIALBASE_H_
#define _OSGRAMPMATERIALBASE_H_
#ifdef __sgi
#pragma once
#endif


#include <OpenSG/OSGConfig.h>
#include "OSGToolboxDef.h"

#include <OpenSG/OSGBaseTypes.h>
#include <OpenSG/OSGRefPtr.h>
#include <OpenSG/OSGCoredNodePtr.h>

#include <OpenSG/OSGChunkMaterial.h> // Parent

#include <OpenSG/OSGBoolFields.h> // VertexColoring type
#include <OpenSG/OSGSHLParameterChunkFields.h> // Parameters type
#include <OpenSG/OSGSHLChunkFields.h> // Shader type
#include <OpenSG/OSGStateChunkFields.h> // ExtraChunks type
#include <OpenSG/OSGUInt8Fields.h> // NumLights type
#include <OpenSG/OSGUInt8Fields.h> // RampSource type
#include <OpenSG/OSGColor3fFields.h> // Colors type
#include <OpenSG/OSGReal32Fields.h> // ColorPositions type
#include <OpenSG/OSGUInt8Fields.h> // ColorInterpolations type
#include <OpenSG/OSGTextureChunkFields.h> // ColorTexture type
#include <OpenSG/OSGColor3fFields.h> // Transparencies type
#include <OpenSG/OSGReal32Fields.h> // TransparencyPositions type
#include <OpenSG/OSGUInt8Fields.h> // TransparencyInterpolations type
#include <OpenSG/OSGTextureChunkFields.h> // TransparencyTexture type
#include <OpenSG/OSGColor3fFields.h> // AmbientColor type
#include <OpenSG/OSGTextureChunkFields.h> // AmbientColorTexture type
#include <OpenSG/OSGColor3fFields.h> // Incandescences type
#include <OpenSG/OSGReal32Fields.h> // IncandescencePositions type
#include <OpenSG/OSGUInt8Fields.h> // IncandescenceInterpolations type
#include <OpenSG/OSGTextureChunkFields.h> // IncandescenceTexture type
#include <OpenSG/OSGTextureChunkFields.h> // NormalMapTexture type
#include <OpenSG/OSGReal32Fields.h> // BumpDepth type
#include <OpenSG/OSGTextureChunkFields.h> // BumpDepthTexture type
#include <OpenSG/OSGReal32Fields.h> // Diffuse type
#include <OpenSG/OSGTextureChunkFields.h> // DiffuseTexture type
#include <OpenSG/OSGReal32Fields.h> // Specularity type
#include <OpenSG/OSGTextureChunkFields.h> // SpecularityTexture type
#include <OpenSG/OSGReal32Fields.h> // SpecularEccentricity type
#include <OpenSG/OSGTextureChunkFields.h> // SpecularEccentricityTexture type
#include <OpenSG/OSGColor3fFields.h> // SpecularColors type
#include <OpenSG/OSGReal32Fields.h> // SpecularColorPositions type
#include <OpenSG/OSGUInt8Fields.h> // SpecularColorInterpolations type
#include <OpenSG/OSGTextureChunkFields.h> // SpecularColorTexture type
#include <OpenSG/OSGReal32Fields.h> // SpecularRolloffs type
#include <OpenSG/OSGReal32Fields.h> // SpecularRolloffPositions type
#include <OpenSG/OSGUInt8Fields.h> // SpecularRolloffInterpolations type
#include <OpenSG/OSGTextureChunkFields.h> // SpecularRolloffTexture type

#include "OSGRampMaterialFields.h"
OSG_BEGIN_NAMESPACE

class RampMaterial;
class BinaryDataHandler;

//! \brief RampMaterial Base Class.

class OSG_TOOLBOXLIB_DLLMAPPING RampMaterialBase : public ChunkMaterial
{
  private:

    typedef ChunkMaterial    Inherited;

    /*==========================  PUBLIC  =================================*/
  public:

    typedef RampMaterialPtr  Ptr;

    enum
    {
        VertexColoringFieldId                = Inherited::NextFieldId,
        ParametersFieldId                    = VertexColoringFieldId                + 1,
        ShaderFieldId                        = ParametersFieldId                    + 1,
        ExtraChunksFieldId                   = ShaderFieldId                        + 1,
        NumLightsFieldId                     = ExtraChunksFieldId                   + 1,
        RampSourceFieldId                    = NumLightsFieldId                     + 1,
        ColorsFieldId                        = RampSourceFieldId                    + 1,
        ColorPositionsFieldId                = ColorsFieldId                        + 1,
        ColorInterpolationsFieldId           = ColorPositionsFieldId                + 1,
        ColorTextureFieldId                  = ColorInterpolationsFieldId           + 1,
        TransparenciesFieldId                = ColorTextureFieldId                  + 1,
        TransparencyPositionsFieldId         = TransparenciesFieldId                + 1,
        TransparencyInterpolationsFieldId    = TransparencyPositionsFieldId         + 1,
        TransparencyTextureFieldId           = TransparencyInterpolationsFieldId    + 1,
        AmbientColorFieldId                  = TransparencyTextureFieldId           + 1,
        AmbientColorTextureFieldId           = AmbientColorFieldId                  + 1,
        IncandescencesFieldId                = AmbientColorTextureFieldId           + 1,
        IncandescencePositionsFieldId        = IncandescencesFieldId                + 1,
        IncandescenceInterpolationsFieldId   = IncandescencePositionsFieldId        + 1,
        IncandescenceTextureFieldId          = IncandescenceInterpolationsFieldId   + 1,
        NormalMapTextureFieldId              = IncandescenceTextureFieldId          + 1,
        BumpDepthFieldId                     = NormalMapTextureFieldId              + 1,
        BumpDepthTextureFieldId              = BumpDepthFieldId                     + 1,
        DiffuseFieldId                       = BumpDepthTextureFieldId              + 1,
        DiffuseTextureFieldId                = DiffuseFieldId                       + 1,
        SpecularityFieldId                   = DiffuseTextureFieldId                + 1,
        SpecularityTextureFieldId            = SpecularityFieldId                   + 1,
        SpecularEccentricityFieldId          = SpecularityTextureFieldId            + 1,
        SpecularEccentricityTextureFieldId   = SpecularEccentricityFieldId          + 1,
        SpecularColorsFieldId                = SpecularEccentricityTextureFieldId   + 1,
        SpecularColorPositionsFieldId        = SpecularColorsFieldId                + 1,
        SpecularColorInterpolationsFieldId   = SpecularColorPositionsFieldId        + 1,
        SpecularColorTextureFieldId          = SpecularColorInterpolationsFieldId   + 1,
        SpecularRolloffsFieldId              = SpecularColorTextureFieldId          + 1,
        SpecularRolloffPositionsFieldId      = SpecularRolloffsFieldId              + 1,
        SpecularRolloffInterpolationsFieldId = SpecularRolloffPositionsFieldId      + 1,
        SpecularRolloffTextureFieldId        = SpecularRolloffInterpolationsFieldId + 1,
        NextFieldId                          = SpecularRolloffTextureFieldId        + 1
    };

    static const OSG::BitVector VertexColoringFieldMask;
    static const OSG::BitVector ParametersFieldMask;
    static const OSG::BitVector ShaderFieldMask;
    static const OSG::BitVector ExtraChunksFieldMask;
    static const OSG::BitVector NumLightsFieldMask;
    static const OSG::BitVector RampSourceFieldMask;
    static const OSG::BitVector ColorsFieldMask;
    static const OSG::BitVector ColorPositionsFieldMask;
    static const OSG::BitVector ColorInterpolationsFieldMask;
    static const OSG::BitVector ColorTextureFieldMask;
    static const OSG::BitVector TransparenciesFieldMask;
    static const OSG::BitVector TransparencyPositionsFieldMask;
    static const OSG::BitVector TransparencyInterpolationsFieldMask;
    static const OSG::BitVector TransparencyTextureFieldMask;
    static const OSG::BitVector AmbientColorFieldMask;
    static const OSG::BitVector AmbientColorTextureFieldMask;
    static const OSG::BitVector IncandescencesFieldMask;
    static const OSG::BitVector IncandescencePositionsFieldMask;
    static const OSG::BitVector IncandescenceInterpolationsFieldMask;
    static const OSG::BitVector IncandescenceTextureFieldMask;
    static const OSG::BitVector NormalMapTextureFieldMask;
    static const OSG::BitVector BumpDepthFieldMask;
    static const OSG::BitVector BumpDepthTextureFieldMask;
    static const OSG::BitVector DiffuseFieldMask;
    static const OSG::BitVector DiffuseTextureFieldMask;
    static const OSG::BitVector SpecularityFieldMask;
    static const OSG::BitVector SpecularityTextureFieldMask;
    static const OSG::BitVector SpecularEccentricityFieldMask;
    static const OSG::BitVector SpecularEccentricityTextureFieldMask;
    static const OSG::BitVector SpecularColorsFieldMask;
    static const OSG::BitVector SpecularColorPositionsFieldMask;
    static const OSG::BitVector SpecularColorInterpolationsFieldMask;
    static const OSG::BitVector SpecularColorTextureFieldMask;
    static const OSG::BitVector SpecularRolloffsFieldMask;
    static const OSG::BitVector SpecularRolloffPositionsFieldMask;
    static const OSG::BitVector SpecularRolloffInterpolationsFieldMask;
    static const OSG::BitVector SpecularRolloffTextureFieldMask;


    static const OSG::BitVector MTInfluenceMask;

    /*---------------------------------------------------------------------*/
    /*! \name                    Class Get                                 */
    /*! \{                                                                 */

    static        FieldContainerType &getClassType    (void); 
    static        UInt32              getClassTypeId  (void); 

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                FieldContainer Get                            */
    /*! \{                                                                 */

    virtual       FieldContainerType &getType  (void); 
    virtual const FieldContainerType &getType  (void) const; 

    virtual       UInt32              getContainerSize(void) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Get                                 */
    /*! \{                                                                 */


           SFBool              *editSFVertexColoring (void);
     const SFBool              *getSFVertexColoring (void) const;
     const SFSHLChunkPtr       *getSFShader         (void) const;

           MFStateChunkPtr     *editMFExtraChunks    (void);
     const MFStateChunkPtr     *getMFExtraChunks    (void) const;

           SFUInt8             *editSFNumLights      (void);
     const SFUInt8             *getSFNumLights      (void) const;

           SFUInt8             *editSFRampSource     (void);
     const SFUInt8             *getSFRampSource     (void) const;

           MFColor3f           *editMFColors         (void);
     const MFColor3f           *getMFColors         (void) const;

           MFReal32            *editMFColorPositions (void);
     const MFReal32            *getMFColorPositions (void) const;

           MFUInt8             *editMFColorInterpolations(void);
     const MFUInt8             *getMFColorInterpolations(void) const;

           SFTextureChunkPtr   *editSFColorTexture   (void);
     const SFTextureChunkPtr   *getSFColorTexture   (void) const;

           MFColor3f           *editMFTransparencies (void);
     const MFColor3f           *getMFTransparencies (void) const;

           MFReal32            *editMFTransparencyPositions(void);
     const MFReal32            *getMFTransparencyPositions(void) const;

           MFUInt8             *editMFTransparencyInterpolations(void);
     const MFUInt8             *getMFTransparencyInterpolations(void) const;

           SFTextureChunkPtr   *editSFTransparencyTexture(void);
     const SFTextureChunkPtr   *getSFTransparencyTexture(void) const;

           SFColor3f           *editSFAmbientColor   (void);
     const SFColor3f           *getSFAmbientColor   (void) const;

           SFTextureChunkPtr   *editSFAmbientColorTexture(void);
     const SFTextureChunkPtr   *getSFAmbientColorTexture(void) const;

           MFColor3f           *editMFIncandescences (void);
     const MFColor3f           *getMFIncandescences (void) const;

           MFReal32            *editMFIncandescencePositions(void);
     const MFReal32            *getMFIncandescencePositions(void) const;

           MFUInt8             *editMFIncandescenceInterpolations(void);
     const MFUInt8             *getMFIncandescenceInterpolations(void) const;

           SFTextureChunkPtr   *editSFIncandescenceTexture(void);
     const SFTextureChunkPtr   *getSFIncandescenceTexture(void) const;

           SFTextureChunkPtr   *editSFNormalMapTexture(void);
     const SFTextureChunkPtr   *getSFNormalMapTexture(void) const;

           SFReal32            *editSFBumpDepth      (void);
     const SFReal32            *getSFBumpDepth      (void) const;

           SFTextureChunkPtr   *editSFBumpDepthTexture(void);
     const SFTextureChunkPtr   *getSFBumpDepthTexture(void) const;

           SFReal32            *editSFDiffuse        (void);
     const SFReal32            *getSFDiffuse        (void) const;

           SFTextureChunkPtr   *editSFDiffuseTexture (void);
     const SFTextureChunkPtr   *getSFDiffuseTexture (void) const;

           SFReal32            *editSFSpecularity    (void);
     const SFReal32            *getSFSpecularity    (void) const;

           SFTextureChunkPtr   *editSFSpecularityTexture(void);
     const SFTextureChunkPtr   *getSFSpecularityTexture(void) const;

           SFReal32            *editSFSpecularEccentricity(void);
     const SFReal32            *getSFSpecularEccentricity(void) const;

           SFTextureChunkPtr   *editSFSpecularEccentricityTexture(void);
     const SFTextureChunkPtr   *getSFSpecularEccentricityTexture(void) const;

           MFColor3f           *editMFSpecularColors (void);
     const MFColor3f           *getMFSpecularColors (void) const;

           MFReal32            *editMFSpecularColorPositions(void);
     const MFReal32            *getMFSpecularColorPositions(void) const;

           MFUInt8             *editMFSpecularColorInterpolations(void);
     const MFUInt8             *getMFSpecularColorInterpolations(void) const;

           SFTextureChunkPtr   *editSFSpecularColorTexture(void);
     const SFTextureChunkPtr   *getSFSpecularColorTexture(void) const;

           MFReal32            *editMFSpecularRolloffs(void);
     const MFReal32            *getMFSpecularRolloffs(void) const;

           MFReal32            *editMFSpecularRolloffPositions(void);
     const MFReal32            *getMFSpecularRolloffPositions(void) const;

           MFUInt8             *editMFSpecularRolloffInterpolations(void);
     const MFUInt8             *getMFSpecularRolloffInterpolations(void) const;

           SFTextureChunkPtr   *editSFSpecularRolloffTexture(void);
     const SFTextureChunkPtr   *getSFSpecularRolloffTexture(void) const;


           bool                &editVertexColoring (void);
     const bool                &getVertexColoring (void) const;


     const SHLChunkPtr         &getShader         (void) const;

           UInt8               &editNumLights      (void);
     const UInt8               &getNumLights      (void) const;

           UInt8               &editRampSource     (void);
     const UInt8               &getRampSource     (void) const;

           TextureChunkPtr     &editColorTexture   (void);
     const TextureChunkPtr     &getColorTexture   (void) const;

           TextureChunkPtr     &editTransparencyTexture(void);
     const TextureChunkPtr     &getTransparencyTexture(void) const;

           Color3f             &editAmbientColor   (void);
     const Color3f             &getAmbientColor   (void) const;

           TextureChunkPtr     &editAmbientColorTexture(void);
     const TextureChunkPtr     &getAmbientColorTexture(void) const;

           TextureChunkPtr     &editIncandescenceTexture(void);
     const TextureChunkPtr     &getIncandescenceTexture(void) const;

           TextureChunkPtr     &editNormalMapTexture(void);
     const TextureChunkPtr     &getNormalMapTexture(void) const;

           Real32              &editBumpDepth      (void);
     const Real32              &getBumpDepth      (void) const;

           TextureChunkPtr     &editBumpDepthTexture(void);
     const TextureChunkPtr     &getBumpDepthTexture(void) const;

           Real32              &editDiffuse        (void);
     const Real32              &getDiffuse        (void) const;

           TextureChunkPtr     &editDiffuseTexture (void);
     const TextureChunkPtr     &getDiffuseTexture (void) const;

           Real32              &editSpecularity    (void);
     const Real32              &getSpecularity    (void) const;

           TextureChunkPtr     &editSpecularityTexture(void);
     const TextureChunkPtr     &getSpecularityTexture(void) const;

           Real32              &editSpecularEccentricity(void);
     const Real32              &getSpecularEccentricity(void) const;

           TextureChunkPtr     &editSpecularEccentricityTexture(void);
     const TextureChunkPtr     &getSpecularEccentricityTexture(void) const;

           TextureChunkPtr     &editSpecularColorTexture(void);
     const TextureChunkPtr     &getSpecularColorTexture(void) const;

           TextureChunkPtr     &editSpecularRolloffTexture(void);
     const TextureChunkPtr     &getSpecularRolloffTexture(void) const;

           StateChunkPtr       &editExtraChunks    (const UInt32 index);
     const StateChunkPtr       &getExtraChunks    (const UInt32 index) const;
#ifndef OSG_2_PREP
           MFStateChunkPtr     &getExtraChunks    (void);
     const MFStateChunkPtr     &getExtraChunks    (void) const;
#endif

           Color3f             &editColors         (const UInt32 index);
     const Color3f             &getColors         (const UInt32 index) const;
#ifndef OSG_2_PREP
           MFColor3f           &getColors         (void);
     const MFColor3f           &getColors         (void) const;
#endif

           Real32              &editColorPositions (const UInt32 index);
     const Real32              &getColorPositions (const UInt32 index) const;
#ifndef OSG_2_PREP
           MFReal32            &getColorPositions (void);
     const MFReal32            &getColorPositions (void) const;
#endif

           UInt8               &editColorInterpolations(const UInt32 index);
     const UInt8               &getColorInterpolations(const UInt32 index) const;
#ifndef OSG_2_PREP
           MFUInt8             &getColorInterpolations(void);
     const MFUInt8             &getColorInterpolations(void) const;
#endif

           Color3f             &editTransparencies (const UInt32 index);
     const Color3f             &getTransparencies (const UInt32 index) const;
#ifndef OSG_2_PREP
           MFColor3f           &getTransparencies (void);
     const MFColor3f           &getTransparencies (void) const;
#endif

           Real32              &editTransparencyPositions(const UInt32 index);
     const Real32              &getTransparencyPositions(const UInt32 index) const;
#ifndef OSG_2_PREP
           MFReal32            &getTransparencyPositions(void);
     const MFReal32            &getTransparencyPositions(void) const;
#endif

           UInt8               &editTransparencyInterpolations(const UInt32 index);
     const UInt8               &getTransparencyInterpolations(const UInt32 index) const;
#ifndef OSG_2_PREP
           MFUInt8             &getTransparencyInterpolations(void);
     const MFUInt8             &getTransparencyInterpolations(void) const;
#endif

           Color3f             &editIncandescences (const UInt32 index);
     const Color3f             &getIncandescences (const UInt32 index) const;
#ifndef OSG_2_PREP
           MFColor3f           &getIncandescences (void);
     const MFColor3f           &getIncandescences (void) const;
#endif

           Real32              &editIncandescencePositions(const UInt32 index);
     const Real32              &getIncandescencePositions(const UInt32 index) const;
#ifndef OSG_2_PREP
           MFReal32            &getIncandescencePositions(void);
     const MFReal32            &getIncandescencePositions(void) const;
#endif

           UInt8               &editIncandescenceInterpolations(const UInt32 index);
     const UInt8               &getIncandescenceInterpolations(const UInt32 index) const;
#ifndef OSG_2_PREP
           MFUInt8             &getIncandescenceInterpolations(void);
     const MFUInt8             &getIncandescenceInterpolations(void) const;
#endif

           Color3f             &editSpecularColors (const UInt32 index);
     const Color3f             &getSpecularColors (const UInt32 index) const;
#ifndef OSG_2_PREP
           MFColor3f           &getSpecularColors (void);
     const MFColor3f           &getSpecularColors (void) const;
#endif

           Real32              &editSpecularColorPositions(const UInt32 index);
     const Real32              &getSpecularColorPositions(const UInt32 index) const;
#ifndef OSG_2_PREP
           MFReal32            &getSpecularColorPositions(void);
     const MFReal32            &getSpecularColorPositions(void) const;
#endif

           UInt8               &editSpecularColorInterpolations(const UInt32 index);
     const UInt8               &getSpecularColorInterpolations(const UInt32 index) const;
#ifndef OSG_2_PREP
           MFUInt8             &getSpecularColorInterpolations(void);
     const MFUInt8             &getSpecularColorInterpolations(void) const;
#endif

           Real32              &editSpecularRolloffs(const UInt32 index);
     const Real32              &getSpecularRolloffs(const UInt32 index) const;
#ifndef OSG_2_PREP
           MFReal32            &getSpecularRolloffs(void);
     const MFReal32            &getSpecularRolloffs(void) const;
#endif

           Real32              &editSpecularRolloffPositions(const UInt32 index);
     const Real32              &getSpecularRolloffPositions(const UInt32 index) const;
#ifndef OSG_2_PREP
           MFReal32            &getSpecularRolloffPositions(void);
     const MFReal32            &getSpecularRolloffPositions(void) const;
#endif

           UInt8               &editSpecularRolloffInterpolations(const UInt32 index);
     const UInt8               &getSpecularRolloffInterpolations(const UInt32 index) const;
#ifndef OSG_2_PREP
           MFUInt8             &getSpecularRolloffInterpolations(void);
     const MFUInt8             &getSpecularRolloffInterpolations(void) const;
#endif

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Set                                 */
    /*! \{                                                                 */

     void setVertexColoring ( const bool &value );
     void setNumLights      ( const UInt8 &value );
     void setRampSource     ( const UInt8 &value );
     void setColorTexture   ( const TextureChunkPtr &value );
     void setTransparencyTexture( const TextureChunkPtr &value );
     void setAmbientColor   ( const Color3f &value );
     void setAmbientColorTexture( const TextureChunkPtr &value );
     void setIncandescenceTexture( const TextureChunkPtr &value );
     void setNormalMapTexture( const TextureChunkPtr &value );
     void setBumpDepth      ( const Real32 &value );
     void setBumpDepthTexture( const TextureChunkPtr &value );
     void setDiffuse        ( const Real32 &value );
     void setDiffuseTexture ( const TextureChunkPtr &value );
     void setSpecularity    ( const Real32 &value );
     void setSpecularityTexture( const TextureChunkPtr &value );
     void setSpecularEccentricity( const Real32 &value );
     void setSpecularEccentricityTexture( const TextureChunkPtr &value );
     void setSpecularColorTexture( const TextureChunkPtr &value );
     void setSpecularRolloffTexture( const TextureChunkPtr &value );

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       Sync                                   */
    /*! \{                                                                 */

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Binary Access                              */
    /*! \{                                                                 */

    virtual UInt32 getBinSize (const BitVector         &whichField);
    virtual void   copyToBin  (      BinaryDataHandler &pMem,
                               const BitVector         &whichField);
    virtual void   copyFromBin(      BinaryDataHandler &pMem,
                               const BitVector         &whichField);


    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Construction                               */
    /*! \{                                                                 */

    static  RampMaterialPtr      create          (void); 
    static  RampMaterialPtr      createEmpty     (void); 

    /*! \}                                                                 */

    /*---------------------------------------------------------------------*/
    /*! \name                       Copy                                   */
    /*! \{                                                                 */

    virtual FieldContainerPtr     shallowCopy     (void) const; 

    /*! \}                                                                 */
    /*=========================  PROTECTED  ===============================*/
  protected:

    /*---------------------------------------------------------------------*/
    /*! \name                      Fields                                  */
    /*! \{                                                                 */

    SFBool              _sfVertexColoring;
    SFSHLParameterChunkPtr   _sfParameters;
    SFSHLChunkPtr       _sfShader;
    MFStateChunkPtr     _mfExtraChunks;
    SFUInt8             _sfNumLights;
    SFUInt8             _sfRampSource;
    MFColor3f           _mfColors;
    MFReal32            _mfColorPositions;
    MFUInt8             _mfColorInterpolations;
    SFTextureChunkPtr   _sfColorTexture;
    MFColor3f           _mfTransparencies;
    MFReal32            _mfTransparencyPositions;
    MFUInt8             _mfTransparencyInterpolations;
    SFTextureChunkPtr   _sfTransparencyTexture;
    SFColor3f           _sfAmbientColor;
    SFTextureChunkPtr   _sfAmbientColorTexture;
    MFColor3f           _mfIncandescences;
    MFReal32            _mfIncandescencePositions;
    MFUInt8             _mfIncandescenceInterpolations;
    SFTextureChunkPtr   _sfIncandescenceTexture;
    SFTextureChunkPtr   _sfNormalMapTexture;
    SFReal32            _sfBumpDepth;
    SFTextureChunkPtr   _sfBumpDepthTexture;
    SFReal32            _sfDiffuse;
    SFTextureChunkPtr   _sfDiffuseTexture;
    SFReal32            _sfSpecularity;
    SFTextureChunkPtr   _sfSpecularityTexture;
    SFReal32            _sfSpecularEccentricity;
    SFTextureChunkPtr   _sfSpecularEccentricityTexture;
    MFColor3f           _mfSpecularColors;
    MFReal32            _mfSpecularColorPositions;
    MFUInt8             _mfSpecularColorInterpolations;
    SFTextureChunkPtr   _sfSpecularColorTexture;
    MFReal32            _mfSpecularRolloffs;
    MFReal32            _mfSpecularRolloffPositions;
    MFUInt8             _mfSpecularRolloffInterpolations;
    SFTextureChunkPtr   _sfSpecularRolloffTexture;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Constructors                               */
    /*! \{                                                                 */

    RampMaterialBase(void);
    RampMaterialBase(const RampMaterialBase &source);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~RampMaterialBase(void); 

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Get                                 */
    /*! \{                                                                 */

           SFSHLParameterChunkPtr *editSFParameters     (void);
     const SFSHLParameterChunkPtr *getSFParameters     (void) const;
           SFSHLChunkPtr       *editSFShader         (void);

           SHLParameterChunkPtr &editParameters     (void);
     const SHLParameterChunkPtr &getParameters     (void) const;
           SHLChunkPtr         &editShader         (void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Set                                 */
    /*! \{                                                                 */

     void setParameters     (const SHLParameterChunkPtr &value);
     void setShader         (const SHLChunkPtr &value);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       Sync                                   */
    /*! \{                                                                 */

#if !defined(OSG_FIXED_MFIELDSYNC)
    void executeSyncImpl(      RampMaterialBase *pOther,
                         const BitVector         &whichField);

    virtual void   executeSync(      FieldContainer    &other,
                               const BitVector         &whichField);
#else
    void executeSyncImpl(      RampMaterialBase *pOther,
                         const BitVector         &whichField,
                         const SyncInfo          &sInfo     );

    virtual void   executeSync(      FieldContainer    &other,
                               const BitVector         &whichField,
                               const SyncInfo          &sInfo);

    virtual void execBeginEdit     (const BitVector &whichField,
                                          UInt32     uiAspect,
                                          UInt32     uiContainerSize);

            void execBeginEditImpl (const BitVector &whichField,
                                          UInt32     uiAspect,
                                          UInt32     uiContainerSize);

    virtual void onDestroyAspect(UInt32 uiId, UInt32 uiAspect);
#endif

    /*! \}                                                                 */
    /*==========================  PRIVATE  ================================*/
  private:

    friend class FieldContainer;

    static FieldDescription   *_desc[];
    static FieldContainerType  _type;


    // prohibit default functions (move to 'public' if you need one)
    void operator =(const RampMaterialBase &source);
};

//---------------------------------------------------------------------------
//   Exported Types
//---------------------------------------------------------------------------


typedef RampMaterialBase *RampMaterialBaseP;

typedef osgIF<RampMaterialBase::isNodeCore,
              CoredNodePtr<RampMaterial>,
              FieldContainer::attempt_to_create_CoredNodePtr_on_non_NodeCore_FC
              >::_IRet RampMaterialNodePtr;

typedef RefPtr<RampMaterialPtr> RampMaterialRefPtr;

OSG_END_NAMESPACE

#endif /* _OSGRAMPMATERIALBASE_H_ */

// General OpenSG configuration, needed everywhere
#include <OpenSG/OSGConfig.h>

// A little helper to simplify scene management and interaction
#include <OpenSG/OSGSimpleSceneManager.h>
#include <OpenSG/OSGNode.h>
#include <OpenSG/OSGGroup.h>
#include <OpenSG/OSGViewport.h>
#include <OpenSG/Input/OSGWindowUtils.h>

// Input
#include <OpenSG/Input/OSGKeyListener.h>
#include <OpenSG/Input/OSGWindowAdapter.h>

#include <OpenSG/OSGBlendChunk.h>
#include <OpenSG/OSGPointChunk.h>
#include <OpenSG/OSGDepthChunk.h>
#include <OpenSG/OSGChunkMaterial.h>
#include <OpenSG/OSGMaterialChunk.h>
#include <OpenSG/ParticleSystem/OSGParticleSystem.h>
#include <OpenSG/ParticleSystem/OSGParticleSystemCore.h>
#include <OpenSG/ParticleSystem/OSGPointParticleSystemDrawer.h>
#include <OpenSG/ParticleSystem/OSGLineParticleSystemDrawer.h>
#include <OpenSG/ParticleSystem/OSGQuadParticleSystemDrawer.h>
#include <OpenSG/ParticleSystem/OSGRateParticleGenerator.h>
#include <OpenSG/ParticleSystem/OSGBurstParticleGenerator.h>
#include <OpenSG/Dynamics/OSGGaussianNormalDistribution1D.h>
#include <OpenSG/Dynamics/OSGSphereDistribution3D.h>
#include <OpenSG/Dynamics/OSGDataConverter.h>
#include <OpenSG/Dynamics/OSGCompoundFunction.h>

// Activate the OpenSG namespace
OSG_USING_NAMESPACE

// The SimpleSceneManager to manage simple applications
SimpleSceneManager *mgr;

bool ExitApp = false;

// Forward declaration so we can have the interesting stuff upfront
void display(void);
void reshape(Vec2f Size);

// Particle Generator Functions
FunctionPtr createPositionDistribution(void);
FunctionPtr createLifespanDistribution(void);

//Particle System
ParticleSystemCorePtr ParticleNodeCore;

//Particle System Drawers
PointParticleSystemDrawerPtr ExamplePointParticleSystemDrawer;
LineParticleSystemDrawerPtr ExampleLineParticleSystemDrawer;
QuadParticleSystemDrawerPtr ExampleQuadParticleSystemDrawer;

//Particle System Generator
RateParticleGeneratorPtr ExampleGenerator;


// Create a class to allow for the use of the Ctrl+q
class TutorialKeyListener : public KeyListener
{
public:

   virtual void keyPressed(const KeyEvent& e)
   {
       if(e.getKey() == KeyEvent::KEY_Q && e.getModifiers() & KeyEvent::KEY_MODIFIER_CONTROL)
       {
           ExitApp = true;
       }
   }

   virtual void keyReleased(const KeyEvent& e)
   {
   }

   virtual void keyTyped(const KeyEvent& e)
   {
	   if(e.getKey()== KeyEvent::KEY_1) // Use the Point Drawer
	   {
			beginEditCP(ParticleNodeCore, ParticleSystemCore::DrawerFieldMask);
				ParticleNodeCore->setDrawer(ExamplePointParticleSystemDrawer);
			endEditCP(ParticleNodeCore,ParticleSystemCore::DrawerFieldMask );
	   }

	   if(e.getKey()== KeyEvent::KEY_2)//Use the Line Drawer for 2
	   {
			 beginEditCP(ParticleNodeCore, ParticleSystemCore::DrawerFieldMask);
				ParticleNodeCore->setDrawer(ExampleLineParticleSystemDrawer);
			endEditCP(ParticleNodeCore,ParticleSystemCore::DrawerFieldMask );
	   }

	   if(e.getKey()== KeyEvent::KEY_3)//Use the Quad Drawer for 3
	   {
			beginEditCP(ParticleNodeCore, ParticleSystemCore::DrawerFieldMask);
				ParticleNodeCore->setDrawer(ExampleQuadParticleSystemDrawer);
			endEditCP(ParticleNodeCore,ParticleSystemCore::DrawerFieldMask );
	   }
	   if(e.getKey() == KeyEvent::KEY_F) //particles will be sorted from closest to the view point to the furthest
	   {
			beginEditCP(ParticleNodeCore, ParticleSystemCore::SortingModeFieldMask);
				ParticleNodeCore->setSortingMode(ParticleSystemCore::FRONT_TO_BACK);
			endEditCP(ParticleNodeCore,ParticleSystemCore::SortingModeFieldMask );
	   }
	   if(e.getKey() == KeyEvent::KEY_R) //particles will be sorted from furthest to the view point to the closest.
	   {
			beginEditCP(ParticleNodeCore, ParticleSystemCore::SortingModeFieldMask);
				ParticleNodeCore->setSortingMode(ParticleSystemCore::BACK_TO_FRONT);
			endEditCP(ParticleNodeCore,ParticleSystemCore::SortingModeFieldMask );
	   }
	    if(e.getKey() == KeyEvent::KEY_N) //particles will not be sorted
	   {
			beginEditCP(ParticleNodeCore, ParticleSystemCore::SortingModeFieldMask);
				ParticleNodeCore->setSortingMode(ParticleSystemCore::NONE);
			endEditCP(ParticleNodeCore,ParticleSystemCore::SortingModeFieldMask);
	   }
   }
};

class TutorialWindowListener : public WindowAdapter
{
public:
    virtual void windowClosing(const WindowEvent& e)
    {
        ExitApp = true;
    }

    virtual void windowClosed(const WindowEvent& e)
    {
        ExitApp = true;
    }
};

class TutorialMouseListener : public MouseListener
{
  public:
    virtual void mouseClicked(const MouseEvent& e)
    {
    }
    virtual void mouseEntered(const MouseEvent& e)
    {
    }
    virtual void mouseExited(const MouseEvent& e)
    {
    }
    virtual void mousePressed(const MouseEvent& e)
    {
            mgr->mouseButtonPress(e.getButton(), e.getLocation().x(), e.getLocation().y());
    }
    virtual void mouseReleased(const MouseEvent& e)
    {
           mgr->mouseButtonRelease(e.getButton(), e.getLocation().x(), e.getLocation().y());
    }
};

class TutorialMouseMotionListener : public MouseMotionListener
{
  public:
    virtual void mouseMoved(const MouseEvent& e)
    {
            mgr->mouseMove(e.getLocation().x(), e.getLocation().y());
    }

    virtual void mouseDragged(const MouseEvent& e)
    {
            mgr->mouseMove(e.getLocation().x(), e.getLocation().y());
    }
};

int main(int argc, char **argv)
{
    // OSG init
    osgInit(argc,argv);

    // Set up Window
    WindowEventProducerPtr TutorialWindowEventProducer = createDefaultWindowEventProducer();
    WindowPtr MainWindow = TutorialWindowEventProducer->initWindow();

	beginEditCP(TutorialWindowEventProducer, WindowEventProducer::UseCallbackForDrawFieldMask | WindowEventProducer::UseCallbackForReshapeFieldMask);
		TutorialWindowEventProducer->setUseCallbackForDraw(true);
		TutorialWindowEventProducer->setUseCallbackForReshape(true);
	endEditCP(TutorialWindowEventProducer, WindowEventProducer::UseCallbackForDrawFieldMask | WindowEventProducer::UseCallbackForReshapeFieldMask);

    TutorialWindowEventProducer->setDisplayCallback(display);
    TutorialWindowEventProducer->setReshapeCallback(reshape);

    //Add Window Listener
    TutorialWindowListener TheTutorialWindowListener;
    TutorialWindowEventProducer->addWindowListener(&TheTutorialWindowListener);
	//Add Key Listener
    TutorialKeyListener TheKeyListener;
    TutorialWindowEventProducer->addKeyListener(&TheKeyListener);
	//Add Mouse Listeners
    TutorialMouseListener TheTutorialMouseListener;
    TutorialMouseMotionListener TheTutorialMouseMotionListener;
    TutorialWindowEventProducer->addMouseListener(&TheTutorialMouseListener);
    TutorialWindowEventProducer->addMouseMotionListener(&TheTutorialMouseMotionListener);

    // Create the SimpleSceneManager helper
    mgr = new SimpleSceneManager;

    // Tell the Manager what to manage
    mgr->setWindow(MainWindow);
	
    TutorialWindowEventProducer->openWindow(Pnt2f(0,0),
                                        Vec2f(1280,1024),
                                        "Particle Sorting Demo");
										

	//Particle System Material
	PointChunkPtr PSPointChunk = PointChunk::create();
	beginEditCP(PSPointChunk);
		PSPointChunk->setSize(6.0f);
		PSPointChunk->setSmooth(true);
	endEditCP(PSPointChunk);

	BlendChunkPtr PSBlendChunk = BlendChunk::create();
	beginEditCP(PSBlendChunk);
		PSBlendChunk->setSrcFactor(GL_SRC_ALPHA);
		PSBlendChunk->setDestFactor(GL_ONE_MINUS_SRC_ALPHA);
	endEditCP(PSBlendChunk);

	MaterialChunkPtr PSMaterialChunkChunk = MaterialChunk::create();
	beginEditCP(PSMaterialChunkChunk);
		PSMaterialChunkChunk->setAmbient(Color4f(0.2f,0.6f,0.5f,0.3f));
		PSMaterialChunkChunk->setDiffuse(Color4f(0.2f,0.9f,0.1f,0.3f));
		PSMaterialChunkChunk->setSpecular(Color4f(0.5f,0.4f,0.2f,0.6f));
		PSMaterialChunkChunk->setColorMaterial(GL_NONE);
	endEditCP(PSMaterialChunkChunk);
	
	//enable depth test
	DepthChunkPtr PSDepthChunk = DepthChunk::create();

	ChunkMaterialPtr PSMaterial = ChunkMaterial::create();
	beginEditCP(PSMaterial, ChunkMaterial::ChunksFieldMask);
		PSMaterial->addChunk(PSPointChunk);
		PSMaterial->addChunk(PSMaterialChunkChunk);
		PSMaterial->addChunk(PSBlendChunk);
		PSMaterial->addChunk(PSDepthChunk);
	endEditCP(PSMaterial, ChunkMaterial::ChunksFieldMask);

	//Particle System
    ParticleSystemPtr ExampleParticleSystem = osg::ParticleSystem::create();
	for(UInt32 i(0) ; i<1 ; ++i)
	{
		ExampleParticleSystem->addParticle(Pnt3f(i,i,i), //Position
			Vec3f(0.0,0.0f,1.0f), //Normal
			Color4f(1.0,0.5,0.3,0.3), //Color
			Vec3f(4.0,4.0,4.0), //Size
			-1, //Lifespan (-1 = infinite)
			Vec3f(0.0f,0.0f,0.0f), //Velocity
			Vec3f(0.0f,0.0f,0.0f) //Acceleration
			,0);	// properties
	}
    ExampleParticleSystem->attachUpdateListener(TutorialWindowEventProducer);

	//Particle System Drawer
		//Point
	ExamplePointParticleSystemDrawer = osg::PointParticleSystemDrawer::create();
    //ExamplePointParticleSystemDrawer->setForcePerParticleSizing(true);

		//Line
	ExampleLineParticleSystemDrawer = osg::LineParticleSystemDrawer::create();
	beginEditCP(ExampleLineParticleSystemDrawer);
		ExampleLineParticleSystemDrawer->setLineDirectionSource(LineParticleSystemDrawer::DIRECTION_NORMAL);//DIRECTION_VELOCITY_CHANGE);
		ExampleLineParticleSystemDrawer->setLineLengthSource(LineParticleSystemDrawer::LENGTH_SIZE_X);
	endEditCP(ExampleLineParticleSystemDrawer);
		//Quad
	ExampleQuadParticleSystemDrawer = osg::QuadParticleSystemDrawer::create();
	
		//Create a Rate Particle Generator
	BurstParticleGeneratorPtr ExampleGenerator = osg::BurstParticleGenerator::create();

	//Attach the function objects to the Generator
	beginEditCP(ExampleGenerator, BurstParticleGenerator::PositionFunctionFieldMask | BurstParticleGenerator::LifespanFunctionFieldMask | BurstParticleGenerator::BurstAmountFieldMask);
		ExampleGenerator->setPositionFunction(createPositionDistribution());
		ExampleGenerator->setLifespanFunction(createLifespanDistribution());
		ExampleGenerator->setBurstAmount(1000);
	endEditCP(ExampleGenerator, BurstParticleGenerator::PositionFunctionFieldMask | BurstParticleGenerator::LifespanFunctionFieldMask | BurstParticleGenerator::BurstAmountFieldMask);
	
	//Attach the Generator to the Particle System
	beginEditCP(ExampleParticleSystem, ParticleSystem::GeneratorsFieldMask | ParticleSystem::MaxParticlesFieldMask);
		ExampleParticleSystem->getGenerators().push_back(ExampleGenerator);
		ExampleParticleSystem->setMaxParticles(1000);
	endEditCP(ExampleParticleSystem, ParticleSystem::GeneratorsFieldMask | ParticleSystem::MaxParticlesFieldMask);
	
	//Particle System Node
    ParticleNodeCore = osg::ParticleSystemCore::create();
    beginEditCP(ParticleNodeCore, ParticleSystemCore::SystemFieldMask | ParticleSystemCore::DrawerFieldMask | ParticleSystemCore::MaterialFieldMask);
		ParticleNodeCore->setSystem(ExampleParticleSystem);
		ParticleNodeCore->setDrawer(ExampleLineParticleSystemDrawer);
		ParticleNodeCore->setMaterial(PSMaterial);
    endEditCP(ParticleNodeCore, ParticleSystemCore::SystemFieldMask | ParticleSystemCore::DrawerFieldMask | ParticleSystemCore::MaterialFieldMask);
    
	NodePtr ParticleNode = osg::Node::create();
    beginEditCP(ParticleNode, Node::CoreFieldMask);
        ParticleNode->setCore(ParticleNodeCore);
    endEditCP(ParticleNode, Node::CoreFieldMask);


    // Make Main Scene Node and add the Torus
    NodePtr scene = osg::Node::create();
    beginEditCP(scene, Node::CoreFieldMask | Node::ChildrenFieldMask);
        scene->setCore(osg::Group::create());
        scene->addChild(ParticleNode);
    endEditCP(scene, Node::CoreFieldMask | Node::ChildrenFieldMask);

    mgr->setRoot(scene);

    // Show the whole Scene
    mgr->showAll();

	mgr->getCamera()->setFar(500.0);


    while(!ExitApp)
    {
        TutorialWindowEventProducer->update();
        TutorialWindowEventProducer->draw();
    }
    osgExit();

    return 0;
}


// Callback functions


// Redraw the window
void display(void)
{
    mgr->redraw();
}

// React to size changes
void reshape(Vec2f Size)
{
    mgr->resize(Size.x(), Size.y());
}


FunctionPtr createPositionDistribution(void)
{
		 //Sphere Distribution
    SphereDistribution3DPtr TheSphereDistribution = SphereDistribution3D::create();
    beginEditCP(TheSphereDistribution);
      TheSphereDistribution->setCenter(Pnt3f(0.0,0.0,0.0));
      TheSphereDistribution->setInnerRadius(1.0);
      TheSphereDistribution->setOuterRadius(30.0);
      TheSphereDistribution->setMinTheta(-3.141950);
      TheSphereDistribution->setMaxTheta(3.141950);
      TheSphereDistribution->setMinZ(-1.0);
      TheSphereDistribution->setMaxZ(1.0);
	  TheSphereDistribution->setSurfaceOrVolume(SphereDistribution3D::SURFACE);
    endEditCP(TheSphereDistribution);

    return TheSphereDistribution;
}

FunctionPtr createLifespanDistribution(void)
{
	 GaussianNormalDistribution1DPtr TheLifespanDistribution = GaussianNormalDistribution1D::create();
    beginEditCP(TheLifespanDistribution);
      TheLifespanDistribution->setMean(400.0f);
      TheLifespanDistribution->setStandardDeviation(2.0);
    endEditCP(TheLifespanDistribution);
	
	return TheLifespanDistribution;
}

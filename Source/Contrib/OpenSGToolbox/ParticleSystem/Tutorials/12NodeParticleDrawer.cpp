// General OpenSG configuration, needed everywhere
#include <OpenSG/OSGConfig.h>

// A little helper to simplify scene management and interaction
#include <OpenSG/OSGSimpleSceneManager.h>
#include <OpenSG/OSGNode.h>
#include <OpenSG/OSGGroup.h>
#include <OpenSG/OSGViewport.h>
#include <OpenSG/OSGSimpleGeometry.h>
#include <OpenSG/Input/OSGWindowUtils.h>

// Input
#include <OpenSG/Input/OSGKeyListener.h>

#include <OpenSG/ParticleSystem/OSGParticleSystem.h>
#include <OpenSG/ParticleSystem/OSGNodeParticleSystemCore.h>
#include <OpenSG/ParticleSystem/OSGCollectiveGravityParticleSystemAffector.h>

#include <OpenSG/ParticleSystem/OSGGaussianNormalDistribution1D.h>
#include <OpenSG/ParticleSystem/OSGCylinderDistribution3D.h>

#include <OpenSG/OSGSceneFileHandler.h>

// Activate the OpenSG namespace
OSG_USING_NAMESPACE

// The SimpleSceneManager to manage simple applications
SimpleSceneManager *mgr;
WindowEventProducerPtr TutorialWindowEventProducer;

// Forward declaration so we can have the interesting stuff upfront
void display(void);
void reshape(Vec2f Size);

Distribution3DPtr createPositionDistribution(void);
Distribution1DPtr createLifespanDistribution(void);

// Create a class to allow for the use of the Ctrl+q
class TutorialKeyListener : public KeyListener
{
public:

   virtual void keyPressed(const KeyEventPtr e)
   {
       if(e->getKey() == KeyEvent::KEY_Q && e->getModifiers() & KeyEvent::KEY_MODIFIER_CONTROL)
       {
            TutorialWindowEventProducer->closeWindow();
       }
   }

   virtual void keyReleased(const KeyEventPtr e)
   {
   }

   virtual void keyTyped(const KeyEventPtr e)
   {
   }
};

class TutorialMouseListener : public MouseListener
{
  public:
    virtual void mouseClicked(const MouseEventPtr e)
    {
    }
    virtual void mouseEntered(const MouseEventPtr e)
    {
    }
    virtual void mouseExited(const MouseEventPtr e)
    {
    }
    virtual void mousePressed(const MouseEventPtr e)
    {
            mgr->mouseButtonPress(e->getButton(), e->getLocation().x(), e->getLocation().y());
    }
    virtual void mouseReleased(const MouseEventPtr e)
    {
           mgr->mouseButtonRelease(e->getButton(), e->getLocation().x(), e->getLocation().y());
    }
};

class TutorialMouseMotionListener : public MouseMotionListener
{
  public:
    virtual void mouseMoved(const MouseEventPtr e)
    {
            mgr->mouseMove(e->getLocation().x(), e->getLocation().y());
    }

    virtual void mouseDragged(const MouseEventPtr e)
    {
            mgr->mouseMove(e->getLocation().x(), e->getLocation().y());
    }
};
int main(int argc, char **argv)
{
    // OSG init
    osgInit(argc,argv);

    // Set up Window
    TutorialWindowEventProducer = createDefaultWindowEventProducer();
    WindowPtr MainWindow = TutorialWindowEventProducer->initWindow();

    TutorialWindowEventProducer->setDisplayCallback(display);
    TutorialWindowEventProducer->setReshapeCallback(reshape);

    TutorialKeyListener TheKeyListener;
    TutorialWindowEventProducer->addKeyListener(&TheKeyListener);
    TutorialMouseListener TheTutorialMouseListener;
    TutorialMouseMotionListener TheTutorialMouseMotionListener;
    TutorialWindowEventProducer->addMouseListener(&TheTutorialMouseListener);
    TutorialWindowEventProducer->addMouseMotionListener(&TheTutorialMouseMotionListener);

    // Create the SimpleSceneManager helper
    mgr = new SimpleSceneManager;

    // Tell the Manager what to manage
    mgr->setWindow(MainWindow);
	
	Distribution3DPtr PositionDistribution = createPositionDistribution();
	Distribution1DPtr LifespanDistribution = createLifespanDistribution();
	
	Pnt3f PositionReturnValue;
	Time LifespanReturnValue = -1;

	//Particle System
    ParticleSystemPtr ExampleParticleSystem = osg::ParticleSystem::create();
	for(UInt32 i(0) ; i<200 ; ++i)//controls how many particles are created
	{
		if(PositionDistribution != NullFC)
		{
			PositionReturnValue = Pnt3f(PositionDistribution->generate());
		}
		if(LifespanDistribution != NullFC)
		{
			LifespanReturnValue = LifespanDistribution->generate();
		}

		ExampleParticleSystem->addParticle(
			PositionReturnValue,
			Vec3f(1.0f,0.0f,0.0f),
			Color4f(1.0,0.0,0.0,1.0), 
			Vec3f(1.0,1.0,1.0), 
			LifespanReturnValue, 
			Vec3f(0.0f,0.0f,0.0f), //Velocity
			Vec3f(0.0f,0.0f,0.0f)	//acceleration
										   );
	}
    ExampleParticleSystem->attachUpdateListener(TutorialWindowEventProducer);

	//NodePtr ParticlePrototypeNode = makeTorus(1.0,4.0,16,16);
	NodePtr ParticlePrototypeNode = SceneFileHandler::the().read("Data/rocket.obj");
    if(ParticlePrototypeNode == NullFC)
    {
        ParticlePrototypeNode = makeTorus(.5, 2, 16, 16);
    }
	//Particle System Node
    NodeParticleSystemCorePtr NodeParticleNodeCore = osg::NodeParticleSystemCore::create();
    beginEditCP(NodeParticleNodeCore, NodeParticleSystemCore::SystemFieldMask | NodeParticleSystemCore::PrototypeNodeFieldMask);
		NodeParticleNodeCore->setSystem(ExampleParticleSystem);
		NodeParticleNodeCore->setPrototypeNode(ParticlePrototypeNode);
        NodeParticleNodeCore->setNormalSource(NodeParticleSystemCore::NORMAL_VELOCITY);
        NodeParticleNodeCore->setUpSource(NodeParticleSystemCore::UP_STATIC);
        NodeParticleNodeCore->setUp(Vec3f(0.0f,1.0f,0.0f));
    endEditCP(NodeParticleNodeCore, NodeParticleSystemCore::SystemFieldMask | NodeParticleSystemCore::PrototypeNodeFieldMask);
	
	NodePtr ParticleNode = osg::Node::create();
    beginEditCP(ParticleNode, Node::CoreFieldMask);
        ParticleNode->setCore(NodeParticleNodeCore);
    endEditCP(ParticleNode, Node::CoreFieldMask);

	//Create an CollectiveGravityParticleSystemAffector
	CollectiveGravityParticleSystemAffectorPtr ExampleCollectiveGravityParticleSystemAffector = osg::CollectiveGravityParticleSystemAffector::create();
	beginEditCP(ExampleCollectiveGravityParticleSystemAffector, CollectiveGravityParticleSystemAffector::ParticleMassFieldMask);
		ExampleCollectiveGravityParticleSystemAffector->setParticleMass(10000000000.0f);
	endEditCP(ExampleCollectiveGravityParticleSystemAffector, CollectiveGravityParticleSystemAffector::ParticleMassFieldMask);

	beginEditCP(ExampleParticleSystem, ParticleSystem::SystemAffectorsFieldMask);
		ExampleParticleSystem->getSystemAffectors().push_back(ExampleCollectiveGravityParticleSystemAffector);
	endEditCP(ExampleParticleSystem, ParticleSystem::SystemAffectorsFieldMask);


    // Make Main Scene Node and add the Torus
    NodePtr scene = osg::Node::create();
    beginEditCP(scene, Node::CoreFieldMask | Node::ChildrenFieldMask);
        scene->setCore(osg::Group::create());
        scene->addChild(ParticleNode);
    endEditCP(scene, Node::CoreFieldMask | Node::ChildrenFieldMask);

    mgr->setRoot(scene);

    // Show the whole Scene
    mgr->showAll();


    //Open Window
    Vec2f WinSize(TutorialWindowEventProducer->getDesktopSize() * 0.85f);
    Pnt2f WinPos((TutorialWindowEventProducer->getDesktopSize() - WinSize) *0.5);
    TutorialWindowEventProducer->openWindow(WinPos,
            WinSize,
            "12NodeParticleDrawer");

    //Enter main Loop
    TutorialWindowEventProducer->mainLoop();
    
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

Distribution3DPtr createPositionDistribution(void)
{
    //Cylinder Distribution
    CylinderDistribution3DPtr TheCylinderDistribution = CylinderDistribution3D::create();
    beginEditCP(TheCylinderDistribution);
      TheCylinderDistribution->setCenter(Pnt3f(0.0,0.0,0.0));
      TheCylinderDistribution->setInnerRadius(30.0);
      TheCylinderDistribution->setOuterRadius(100.0);
      TheCylinderDistribution->setMinTheta(0.0);
      TheCylinderDistribution->setMaxTheta(6.283185);
      TheCylinderDistribution->setHeight(400.0);
      TheCylinderDistribution->setNormal(Vec3f(0.0,0.0,1.0));
      TheCylinderDistribution->setSurfaceOrVolume(CylinderDistribution3D::SURFACE);
    endEditCP(TheCylinderDistribution);

    return TheCylinderDistribution;
}

Distribution1DPtr createLifespanDistribution(void)
{
    GaussianNormalDistribution1DPtr TheLifespanDistribution = GaussianNormalDistribution1D::create();
    beginEditCP(TheLifespanDistribution);
      TheLifespanDistribution->setMean(100.0f);
      TheLifespanDistribution->setStandardDeviation(2.0);
    endEditCP(TheLifespanDistribution);
	
	return TheLifespanDistribution;
}
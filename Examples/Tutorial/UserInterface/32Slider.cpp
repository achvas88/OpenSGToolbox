// OpenSG Tutorial Example: Creating a Button Component
//
// This tutorial explains how to edit the basic features of
// a Button and a ToggleButtoncreated in the OSG User 
// Interface library.
// 
// Includes: Button PreferredSize, MaximumSize, MinimumSize, Font,
// Text,and adding a Button to a Scene.  Also note that clicking
// the Button causes it to appear pressed


// General OpenSG configuration, needed everywhere
#include "OSGConfig.h"

// Methods to create simple geometry: boxes, spheres, tori etc.
#include "OSGSimpleGeometry.h"

// A little helper to simplify scene management and interaction
#include "OSGSimpleSceneManager.h"
#include "OSGNode.h"
#include "OSGGroup.h"
#include "OSGViewport.h"

// the general scene file loading handler
#include "OSGSceneFileHandler.h"

//Input
#include "OSGWindowUtils.h"


//UserInterface Headers
#include "OSGUIForeground.h"
#include "OSGInternalWindow.h"
#include "OSGUIDrawingSurface.h"
#include "OSGGraphics2D.h"
#include "OSGFlowLayout.h"
#include "OSGLookAndFeelManager.h"
#include "OSGLayers.h"

#include "OSGSlider.h"
#include "OSGLabel.h"
#include "OSGDefaultBoundedRangeModel.h"

#include "OSGScrollBar.h"
#include "OSGProgressBar.h"

// Activate the OpenSG namespace
// This is not strictly necessary, you can also prefix all OpenSG symbols
// with , but that would be a bit tedious for this example
OSG_USING_NAMESPACE

// forward declaration so we can have the interesting stuff upfront
void display(SimpleSceneManager *mgr);
void reshape(Vec2f Size, SimpleSceneManager *mgr);

void keyPressed(KeyEventDetails* const details)
{
    if(details->getKey() == KeyEventDetails::KEY_Q &&
       details->getModifiers() & KeyEventDetails::KEY_MODIFIER_COMMAND)
    {
        dynamic_cast<WindowEventProducer*>(details->getSource())->closeWindow();
    }
}


// Initialize WIN32 & OpenSG and set up the scene
int main(int argc, char **argv)
{
    // OSG init
    osgInit(argc,argv);

    {
        // Set up Window
        WindowEventProducerRecPtr TutorialWindow = createNativeWindow();
        TutorialWindow->initWindow();

        // Create the SimpleSceneManager helper
        SimpleSceneManager sceneManager;
        TutorialWindow->setDisplayCallback(boost::bind(display, &sceneManager));
        TutorialWindow->setReshapeCallback(boost::bind(reshape, _1, &sceneManager));

        // Tell the Manager what to manage
        sceneManager.setWindow(TutorialWindow);

        TutorialWindow->connectKeyTyped(boost::bind(keyPressed, _1));

        // Make Torus Node (creates Torus in background of scene)
        NodeRecPtr TorusGeometryNode = makeTorus(.5, 2, 16, 16);

        // Make Main Scene Node and add the Torus
        NodeRecPtr scene = Node::create();
        scene->setCore(Group::create());
        scene->addChild(TorusGeometryNode);

        // Create the Graphics
        GraphicsRecPtr TutorialGraphics = Graphics2D::create();

        // Initialize the LookAndFeelManager to enable default settings
        LookAndFeelManager::the()->getLookAndFeel()->init();

        // Create the DefaultBoundedRangeModel and 
        // set its values
        DefaultBoundedRangeModelRecPtr TheBoundedRangeModel = DefaultBoundedRangeModel::create();
        TheBoundedRangeModel->setMinimum(10);
        TheBoundedRangeModel->setMaximum(110);
        TheBoundedRangeModel->setValue(60);
        TheBoundedRangeModel->setExtent(0);

        //Create the slider
        LabelRecPtr TempLabel;
        SliderRecPtr TheSliderVertical = Slider::create();
        TempLabel = dynamic_pointer_cast<Label>(TheSliderVertical->getLabelPrototype()->shallowCopy());
        TheSliderVertical->editLabelMap()[TheBoundedRangeModel->getMinimum()] = TempLabel;

        TempLabel = dynamic_pointer_cast<Label>(TheSliderVertical->getLabelPrototype()->shallowCopy());
        TheSliderVertical->editLabelMap()[TheBoundedRangeModel->getMinimum() + (TheBoundedRangeModel->getMaximum() - TheBoundedRangeModel->getMinimum())/10] = TempLabel;

        TempLabel = dynamic_pointer_cast<Label>(TheSliderVertical->getLabelPrototype()->shallowCopy());
        TheSliderVertical->editLabelMap()[TheBoundedRangeModel->getMaximum()] = TempLabel;


        TheSliderVertical->setPreferredSize(Vec2f(100, 300));
        TheSliderVertical->setSnapToTicks(true);
        TheSliderVertical->setMajorTickSpacing(10);
        TheSliderVertical->setMinorTickSpacing(5);
        TheSliderVertical->setOrientation(Slider::VERTICAL_ORIENTATION);
        TheSliderVertical->setInverted(true);
        TheSliderVertical->setDrawLabels(true);
        TheSliderVertical->setRangeModel(TheBoundedRangeModel);

        TheSliderVertical->setAlignment(0.1);

        SliderRecPtr TheSliderHorizontal = Slider::create();
        TheSliderHorizontal->setPreferredSize(Vec2f(300, 100));
        TheSliderHorizontal->setSnapToTicks(false);
        TheSliderHorizontal->setMajorTickSpacing(10);
        TheSliderHorizontal->setMinorTickSpacing(5);
        TheSliderHorizontal->setOrientation(Slider::HORIZONTAL_ORIENTATION);
        TheSliderHorizontal->setInverted(false);
        TheSliderHorizontal->setDrawLabels(true);
        TheSliderHorizontal->setRangeModel(TheBoundedRangeModel);
        TheSliderHorizontal->setTicksOnRightBottom(false);


        // Create Background to be used with the MainFrame
        ColorLayerRecPtr MainFrameBackground = ColorLayer::create();
        MainFrameBackground->setColor(Color4f(1.0,1.0,1.0,0.5));

        // Create The Main InternalWindow
        // Create Background to be used with the Main InternalWindow
        ColorLayerRecPtr MainInternalWindowBackground = ColorLayer::create();
        MainInternalWindowBackground->setColor(Color4f(1.0,1.0,1.0,0.5));

        LayoutRecPtr MainInternalWindowLayout = FlowLayout::create();

        InternalWindowRecPtr MainInternalWindow = InternalWindow::create();
        MainInternalWindow->pushToChildren(TheSliderVertical);
        MainInternalWindow->pushToChildren(TheSliderHorizontal);
        MainInternalWindow->setLayout(MainInternalWindowLayout);
        MainInternalWindow->setBackgrounds(MainInternalWindowBackground);
        MainInternalWindow->setAlignmentInDrawingSurface(Vec2f(0.5f,0.5f));
        MainInternalWindow->setScalingInDrawingSurface(Vec2f(0.75f,0.75f));
        MainInternalWindow->setDrawTitlebar(false);
        MainInternalWindow->setResizable(false);

        // Create the Drawing Surface
        UIDrawingSurfaceRecPtr TutorialDrawingSurface = UIDrawingSurface::create();
        TutorialDrawingSurface->setGraphics(TutorialGraphics);
        TutorialDrawingSurface->setEventProducer(TutorialWindow);

        TutorialDrawingSurface->openWindow(MainInternalWindow);

        // Create the UI Foreground Object
        UIForegroundRecPtr TutorialUIForeground = UIForeground::create();

        TutorialUIForeground->setDrawingSurface(TutorialDrawingSurface);



        // Tell the Manager what to manage
        sceneManager.setRoot(scene);

        // Add the UI Foreground Object to the Scene
        ViewportRecPtr TutorialViewport = sceneManager.getWindow()->getPort(0);
        TutorialViewport->addForeground(TutorialUIForeground);

        // Show the whole Scene
        sceneManager.showAll();

        //Open Window
        Vec2f WinSize(TutorialWindow->getDesktopSize() * 0.85f);
        Pnt2f WinPos((TutorialWindow->getDesktopSize() - WinSize) *0.5);
        TutorialWindow->openWindow(WinPos,
                                   WinSize,
                                   "32Slider");

        //Enter main Loop
        TutorialWindow->mainLoop();
    }

    osgExit();

    return 0;
}

// Callback functions
// Redraw the window
void display(SimpleSceneManager *mgr)
{
    mgr->redraw();
}

// React to size changes
void reshape(Vec2f Size, SimpleSceneManager *mgr)
{
    mgr->resize(Size.x(), Size.y());
}

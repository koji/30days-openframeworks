#pragma once

#include "ofMain.h"
#include "ofxGui.h"

class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void mouseEntered(int x, int y);
		void mouseExited(int x, int y);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);
    ofxPanel gui;
    ofxIntSlider radius;
    ofxIntSlider resolution;
    ofxFloatSlider rX;
    ofxFloatSlider rY;
    ofxFloatSlider rZ;
    ofxFloatSlider bColor;
    ofxColorSlider color;
    float rotationX, rotationY, rotationZ;
    ofSpherePrimitive sphere;
    void draw3D();
    ofLight light;
    ofMaterial material;
    ofFbo fbo;
		
};

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
    float velocity = 0;
    float acceleration = 0.03;
    ofxPanel gui;
    ofxIntSlider background;
    ofxFloatSlider x;
    ofxFloatSlider y;
    ofxFloatSlider z;
    ofxColorSlider c;
    ofxIntSlider radius;
    ofxIntSlider resolution;
    ofSpherePrimitive sphere;
    float rotationX, rotationY,rotationZ;
    void draw3D();
    ofLight light;
    ofMaterial material;
};

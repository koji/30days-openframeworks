#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    gui.setup();
    gui.add(bColor.setup("background", 0, 0, 255));
    gui.add(color.setup("color", ofColor(255, 15, 30), ofColor(0, 0), ofColor(255, 255)));
//    gui.add(speed.setup("speed",0.01, 0, 1));
    gui.add(sx.setup("x",15, 0, 50));
    gui.add(sy.setup("y",10, 0, 50));

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    gui.draw();
    ofBackground(bColor);
//    float xstart = ofRandom(15);
//    float ynoise = ofRandom(15);
    float xstart = sx;
    float ynoise = sy;
    float oheight = ofGetHeight();
    float owidth = ofGetWidth();
    int divider = 15;
    ofTranslate(owidth/2, oheight/2, 0);
    
    for(float y=-(oheight/divider); y<=(oheight/divider); y+=1.5) {
        ynoise+=0.02;
        float xnoise = xstart;
        for(float x=-(owidth/divider); x<=(owidth/divider); x+=1.5) {
            xnoise += 0.03;
            drawPoint(x,y,ofNoise(xnoise, ynoise));
        }
    }
    theta += speed;
    ofTranslate(-owidth/2, -oheight/2, 0);
    gui.draw();
}

//--------------------------------------------------------------
void ofApp::drawPoint(float x, float y, float noiseFactor) {
    ofPushMatrix();
    ofTranslate(x*noiseFactor*4, y*noiseFactor*4, -y);
    float edgeSize = noiseFactor * 16;
    ofSetColor(color);
    ofDrawLine(0,0,x,y);
    ofPopMatrix();
    
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}

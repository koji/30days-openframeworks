#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofLoadImage(image, "fractal.png");
    video.loadMovie("orangeish_polygon.mp4");
    video.play();
    gui.setup("Mixer");
    gui.setHeaderBackgroundColor( ofColor::darkRed);
    gui.setBorderColor(ofColor::darkRed);
    gui.add(imageAlpha.setup("imageAlpha",100,0,255));
    gui.add(videoAlpah.setup("videoAlpah",200,0,255));
    gui.add(cameraAlpha.setup("cameraAlpha",100,0,255));

}

//--------------------------------------------------------------
void ofApp::update(){
    video.update();
    if(camera.isInitialized()) camera.update();

}

//--------------------------------------------------------------
void ofApp::draw(){
    ofEnableBlendMode(OF_BLENDMODE_ADD);
    ofSetColor(255, imageAlpha);
    image.draw(0,0, ofGetWidth(), ofGetHeight());
    ofSetColor(255, videoAlpah);
    video.draw(0,0, ofGetWidth(), ofGetHeight());
    
    if(camera.isInitialized()) {
        ofSetColor(255, cameraAlpha);
        camera.draw(0,0, ofGetWidth(), ofGetHeight());
    }
    
    ofEnableAlphaBlending();
    gui.draw();

}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    if(key == 'c') {
        camera.setDeviceID(0);
        camera.setDesiredFrameRate(30);
        camera.initGrabber(960,540);
    }

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

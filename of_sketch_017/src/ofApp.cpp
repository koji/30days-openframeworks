#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    fbo.allocate(ofGetWidth(), ofGetHeight(), GL_RGB);
    gui.setup();
    gui.add(radius.setup("radius", 250, 0, 500));
    gui.add(resolution.setup("resolution", 20, 0, 90));
//    gui.add(rX.setup("rX", 0, -5.0, 5.0));
//    gui.add(rY.setup("rY", 0, -5.0, 5.0));
//    gui.add(rZ.setup("rZ", 0, -5.0, 5.0));
    gui.add(bColor.setup("bColor",255,0,255));
    gui.add(color.setup("color", ofColor(100, 100, 140), ofColor(0, 0), ofColor(255, 255)));
    
    sphere.set(radius, resolution);
    sphere.setGlobalPosition(ofGetWidth()/2, ofGetHeight()/2, 0);
    
}

//--------------------------------------------------------------
void ofApp::update(){
//    rotationX += rX;
//    rotationY += rY;
//    rotationZ += rZ;
}

//--------------------------------------------------------------
void ofApp::draw(){
    ofBackground(bColor);
   //    ofRotateX(rotationX);
//    ofRotateY(rotationY);
//    ofRotateZ(rotationZ);
    //ofTranslate(ofGetWidth()/2, ofGetHeight()/2, 0);
    draw3D();
    //gui.draw();

    
}

//--------------------------------------------------------------
void ofApp::draw3D() {
    // light
    light.setPosition(ofGetWidth()/2, ofGetHeight()/2, 600);
    light.enable();
    material.begin();
    ofEnableDepthTest();
    ofSetColor(color);
    sphere.set(radius, resolution);
    //sphere.drawWireframe();
    sphere.draw();
    material.end();
    light.disable();
    ofDisableLighting();
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

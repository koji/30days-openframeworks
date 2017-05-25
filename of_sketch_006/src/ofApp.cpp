#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofSetColor(255, 0, 0);
    

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    ofBackground(255);
    theta = ofMap(ofGetMouseX(), 0, float(ofGetWidth()), 0, 90);
    ofTranslate(ofGetWidth()/2, ofGetHeight());
    
    ofSetLineWidth(0);
    branch(250);

}

//--------------------------------------------------------------
// draw tree
void ofApp::branch(float len) {
    float sw = ofMap(len, 2, 120, 1, 10);
    ofSetLineWidth(sw);
    
    ofDrawLine(0, 0, 0, -len);
    
    ofTranslate(0, -len);
    
    len *= 0.66;
    
    if (len > 2) {
        ofPushMatrix();
        ofRotate(theta);
        branch(len);
        ofPopMatrix();
        
        ofPushMatrix();
        ofRotate(-theta);
        branch(len);
        ofPopMatrix();
        
    }
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

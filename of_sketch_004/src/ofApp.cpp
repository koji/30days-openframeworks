#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofSetFrameRate(3);

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    ofPushMatrix();
    ofTranslate(ofGetWidth()/2.0, ofGetHeight()/2.0);
    stripPattern();
    ofPopMatrix();

}

//--------------------------------------------------------------
void ofApp::stripPattern(){
    ofSetColor(ofColor::black);
    ofSetLineWidth(3.0);
    for(int i=-50; i<50; i++) {
        ofPushMatrix();
        ofNoFill();
        ofTranslate(i*20, 0);
        ofRotate(i*5);
        ofScale(6,6);
        ofSetColor(int(ofRandom(0,255)), int(ofRandom(0,255)), int(ofRandom(0,255)));
        ofTriangle(0, 0, -50, 100, 50, 100);
        ofLine(0, -100,0,100);
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

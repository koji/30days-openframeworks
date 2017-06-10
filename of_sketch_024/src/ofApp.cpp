#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofSetFrameRate(10);
    ofBackground(0);
    //ofSetBackgroundAuto(false);
    
    // setup prticles
    for(int i=0; i<num; i++) {
        particles[i].init();
    }
    ofTranslate(ofGetWidth()/2, ofGetHeight());

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    for(int i=0; i<num; i++) {
        particles[i].move();
        particles[i].render();
        if(i<num-2) {
            ofNoFill();
            //stroke(255);
            ofSetColor(255, 50, 10);
            ofDrawTriangle(particles[i+2].position.x,particles[i+2].position.y,particles[i].position.x,particles[i].position.y,particles[i+1].position.x,particles[i+1].position.y);
        }
        
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

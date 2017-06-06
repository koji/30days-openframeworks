#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofSetFrameRate(60);
    ofSetBackgroundAuto(false);
    ofBackground(255);
    ofNoFill();
    angnoise = ofRandom(10);
    radiusnoise= ofRandom(10);
    xnoise = ofRandom(10);
    ynoise = ofRandom(10);

}

//--------------------------------------------------------------
void ofApp::update(){


}

//--------------------------------------------------------------
void ofApp::draw(){
    radiusnoise += 0.15;
    radius =(ofNoise(radiusnoise)*550)+1;
    
    angnoise = 0.05;
    angle += (ofNoise(angnoise)*6)-3;
    if(angle>360) { angle -=360;}
    if(angle<0) { angle += 360;}
    
    xnoise += 0.1;
    ynoise += 0.15;
    
    float centerX = ofGetWidth()/2 + (ofNoise(xnoise)*100)-50;
    float centerY = ofGetHeight()/2 + (ofNoise(ynoise)*100)-50;
    
    float rad = ofDegToRad(angle);
    float x1=centerX+(radius*cos(rad));
    float y1=centerY+(radius*sin(rad));
    
    float opprad = rad+PI;
    float x2=centerX+(radius*cos(opprad));
    float y2=centerY+(radius*sin(opprad));
    
    strokeCol += strokeChange;
    if(strokeCol>254) {strokeChange=-1; }
    if(strokeCol<0) {strokeChange=1; }
    ofSetColor(strokeCol);
    ofSetLineWidth(1);
    ofDrawLine(x1,y1,x2,y2);
    

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

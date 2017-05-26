#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofBackground(0);
    aB = false;

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    ofBackground(0);
    ofSetLineWidth(0);
    ofSetRectMode(OF_RECTMODE_CENTER);
    ofDrawRectangle(ofGetWidth()/2, ofGetHeight()/2, 100,100);
    
    for (int i = 0; i < 30; i++){
        ofFill();
        ofSetColor(i*8.5);
        ofPushMatrix();
        ofTranslate(ofGetWidth()/2, ofGetHeight()/2);
        ofRotate((angle/36*i));
        ofDrawRectangle(0,0,(ofGetWidth()-(ofGetWidth()*i*0.035)),(ofGetHeight()-(ofGetHeight()*i*0.035)));
        ofPopMatrix();
        if(!aB) {
            angle+=0.1;
        } else {
            angle-=0.1;
        }
        
        if(angle>360*5 || angle<0) {
            aB = !aB;
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

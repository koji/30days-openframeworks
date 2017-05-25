#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofBackground(0, 0, 0);
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    drawTriangles(ofGetWidth(), ofGetHeight(), 600);

}

//--------------------------------------------------------------
void ofApp::drawTriangles(float x, float y, float radius){
    ofSetColor(int(ofRandom(200,255)),int(ofRandom(200,255)),int(ofRandom(200,255)),50);
    ofSetLineWidth(0.5);
    ofNoFill();
    ofDrawCircle(x/2, y/2, radius/2);
    if(radius>2) {
        drawTriangles(x + radius/2, y, radius/2);
        drawTriangles(x - radius/2, y, radius/2);
        drawTriangles(x, y - radius/2, radius/2);
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

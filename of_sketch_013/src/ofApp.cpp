#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofBackground(0);
    xoff = 0.0;
    theta = 0.0;
    xspacing = 1;
    amplitude = 225;
    period = 700;
    dx = (3.14*2 / period) * xspacing;

}

//--------------------------------------------------------------
void ofApp::update(){
    
}

//--------------------------------------------------------------
void ofApp::draw(){
    calcWave();
    renderWave();

}

//--------------------------------------------------------------
void ofApp::renderWave() {
    ofSetLineWidth(0.5);
    //ofSetColor(255, 255*ofNoise(xoff), 0, 50);
    int aSize = sizeof(yvalues)/sizeof(yvalues[0]);
    for (int x = 0; x < aSize; x++) {
        ofDrawCircle(x * xspacing, ofGetHeight()/2+yvalues[x], 1, 1);
    }
}

//--------------------------------------------------------------
void ofApp::calcWave() {
    theta+=0.02;
    xoff+=0.01;
//    cout << theta << endl;
    x = theta;
    int aSize = sizeof(yvalues)/sizeof(yvalues[0]);
    for (int i = 0; i < aSize; i++) {
        yvalues[i] = sin(x)* amplitude * ofNoise(xoff);
        x+=dx;
        //cout << x << endl;
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

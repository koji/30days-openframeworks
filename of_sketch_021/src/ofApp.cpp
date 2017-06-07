#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    x=0.1;
    y=0.1;
    //a=1.25;
    //b=0.75;
    ofBackground(0);
    //ofSetBackgroundAuto(false);
    gui.setup();
    //gui.add(x.setup("x", 0.1, 0, 2));
    //gui.add(y.setup("y", 0.1, 0, 2));
    gui.add(a.setup("a", 1.25, -2, 2));
    gui.add(b.setup("b", 0.75, -2, 2));
    gui.add(c.setup("color", ofColor(255, 15, 30), ofColor(0, 0), ofColor(255, 255)));
    //ofSetColor(255,15,30);
    //ofSetColor(124, 155, 255,50);
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    gui.draw();
    ofTranslate(0, -ofGetHeight()/2);
    drawPoint();

}

void ofApp::drawPoint() {
    float px, py;
    
    for (int i = 0; i < 1000; i++) {
        
        px = (1 + a * b) * x - b * x * y;
        py = (1 - b) * y + b * x * x;
        float posx = px* 100 + ofGetWidth()*0.5;
        float posy = py* 100 + ofGetHeight()*0.75;
        
        ofSetColor(c);
        //ofPoint(posx, posy);
        ofDrawCircle(posx, posy, 1, 1);
        x = px;
        y = py;
    }
}


//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    if(key=='a') {
        ofBackground(0);
    }
    if(key=='d'){
        drawPoint();
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

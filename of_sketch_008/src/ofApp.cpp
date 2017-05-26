#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofBackground(0);
    // sliders
    gui.setup( "Parameters", "settings.xml" );
    gui.add(countX.setup("countX", 50, 0, 200));
    gui.add(stepX.setup("stepX", 20, 0, 200));
    gui.add(twistX.setup("twistX", 5, -45, 45));
    gui.loadFromFile("settings.xml");
    
    globalGroup.setup( "Global" );
    globalGroup.add(Scale.setup("Scale", 1, 0.0, 1));
    globalGroup.add(Rotate.setup("Rotate", 0, -180, 180));
    globalGroup.add(Background.setup("Background", 255, 0, 255));
    gui.add( &globalGroup );
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    ofBackground(Background);
    stripPattern();
    gui.draw();

}

//--------------------------------------------------------------
void ofApp::stripPattern(){
    float Scl = pow(Scale, 4.0f);
    ofScale(Scl, Scl);
    ofRotate(Rotate);
    ofSetColor(ofColor::black);
    ofSetLineWidth(3.0);
    for(int i=-countX; i<countX; i++) {
        ofPushMatrix();
        ofNoFill();
        ofTranslate(i*stepX, 0);
        ofRotate(i*twistX);
        ofScale(6,6);
        ofSetColor(int(ofRandom(0,255)), int(ofRandom(0,255)), int(ofRandom(0,255)));
        ofDrawTriangle(0, 0, -50, 100, 50, 100);
        //ofDrawLine(0, -100,0,100);
        ofPopMatrix();
    }
    
}

//--------------------------------------------------------------
void ofApp::exit() {
    gui.saveToFile( "settings.xml" );
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

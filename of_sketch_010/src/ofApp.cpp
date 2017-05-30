#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofBackground(0);
    //ofNoFill();
    // sliders
    gui.setup( "Parameters", "settings.xml" );
    gui.add(a.setup("a", 2, 0, 100));
    gui.add(b.setup("b", 2, 0, 100));
    gui.add(m.setup("m", 0.01, -2, 2));
    gui.add(t.setup("t", 0.01, -2, 2));
    gui.add(n1.setup("n1",2,0, 100));
    gui.add(color.setup("color", ofColor::orangeRed,
                        ofColor(0,0,0,0),
                        ofColor::white));
    //gui.loadFromFile("settings.xml");
    showGui = true;
    tV=t;
    mV=m;

    
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    ofBackground(0);
    ofTranslate(ofGetWidth()/2, ofGetHeight()/2);
    ofBeginShape();
    
    for (float theta =0; theta <= 2*PI; theta += 0.01) {
        float rad = superFormula(theta,
                      a,  // a
                      b,  // b
                      mV,  // m
                      n1,  // n1
                      sin(tV) * 2 + 0.5,  // n2
                      cos(tV)) * 2 + 0.5 ; //  n3
        float x = rad * cos(theta)*50;
        float y = rad * sin(theta)*50;
        //ofSetColor(255, 10, 10);
        ofSetColor(color);
        ofVertex(x,y);
    }
    ofEndShape();
    mV +=m;
    tV +=t;
    // gui
    ofTranslate(-ofGetWidth()/2, -ofGetHeight()/2);
    if(showGui) gui.draw();

}

//--------------------------------------------------------------
float ofApp::superFormula(float theta, float a, float b, float m, float n1, float n2, float n3) {
    
    return pow(pow(abs(cos(m*theta/4.0))/a, n2)+pow(abs(sin(m*theta/4.0))/b, n3),-1.0/n1);
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    if(key == 'z') showGui = !showGui;

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

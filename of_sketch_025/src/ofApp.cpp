#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    //ofSetBackgroundAuto(false);
    ofBackground(0);
    ofSetCircleResolution(9);
    
//    p1.init(100, 10, 1.0);
//    p2.init(300,40, 3.0);
    for (int i = 0; i < num; i ++) particles[i].init(i*10, ofRandom(5, 30), ofRandom(1,5),ofRandom(1,5));
    
    gui.setup();
    gui.add(r.setup("r", 0, 0,255));
    gui.add(g.setup("g", 0, 50, 255));
    gui.add(b.setup("b", 0, 100,255));

}

//--------------------------------------------------------------
void ofApp::update(){
//    p1.update();
//    p2.update();
    a += 0.01;
    aa += 0.03;
    for (int i = 0; i < num; i ++) particles[i].update();

}

//--------------------------------------------------------------
void ofApp::draw(){
    
//    p1.render();
//    p2.render();
//    float r = 255*abs(sin(aa));
//    float g = 255*abs(sin(a));
//    float b = 255*abs(cos(a));
//    int r = r;
//    int g = g;
//    int b = b;
    ofSetColor(r, g, b);
    for (int i = 0; i < num; i ++) {
        particles[i].render();
    }
    gui.draw();

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

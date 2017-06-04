#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    //fbo.allocate(ofGetWidth(), ofGetHeight(), GL_RGB);
    shader.load("Kaleido/shader.vert","Kaleido/shader.frag");
    gui.setup("parameters", "settings.xml");
    gui.add( kenabled.setup("kenabled", true) );
    gui.add( ksectors.setup("ksectors", 10, 1, 100) );
    gui.add( kangle.setup("kangle", 0, -180, 180) );
    gui.add( kx.setup("kx", 0.5, 0, 1) );
    gui.add( ky.setup("ky", 0.5, 0, 1) );
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    //fbo.begin();
    if(kenabled) {
        shader.begin();
        shader.setUniform1i( "ksectors", ksectors);
        shader.setUniform1f( "kangle", ofDegToRad(kangle));
        shader.setUniform2f( "kcenter", kx*ofGetWidth(), ky*ofGetHeight() );
        shader.setUniform2f( "screenCenter", 0.5*ofGetWidth(), 0.5*ofGetHeight() );
        shader.end();
    }
    //fbo.end();
    //ofSetColor(255);
    //fbo.draw(0, 0, ofGetWidth(), ofGetHeight());
    gui.draw();
    
    
}

//--------------------------------------------------------------
void ofApp::draw2d() {
    
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

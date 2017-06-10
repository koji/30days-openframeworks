#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

    ofBackground(255);
    image.load("l.png");
    gui.setup();
    gui.add(skip.setup("skip", 50, 1, 50));
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    gui.draw();
    int w = image.getWidth();
    int h = image.getHeight();
    //cout<< w << endl;
    //cout<< h << endl;
    int left = ( ofGetWidth()-w )/2;
    int top = ( ofGetHeight()-h )/2;
    //image.draw(left,top);
    ofTranslate(left, top);
    
    //ofPixels pixels = image.getPixels();
    //cout<< pixels.getWidth() << endl;

    
    int dis = skip;
    //int dis = ofRandom(10,20);
    ofSetColor(0);
    
    
    for(int y=0; y<h; y+=dis) {
        for(int x=0; x<w; x+=dis) {
            ofColor colorAtXY = image.getColor(x, y);
            float brightnessOfColorAtXY = colorAtXY.getBrightness();
            float pct = 1.0 -brightnessOfColorAtXY/255.0f;
            ofDrawCircle(x, y, pct*dis*0.5);
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

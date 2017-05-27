#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofBackground(0);
    // sliders
    gui.setup( "Parameters", "settings.xml" );
    gui.add( countX.setup("countX", 50, 0, 200) );
    gui.add( stepX.setup("stepX", 20, 0, 200) );
    gui.add( twistX.setup("twistX", 5, -45, 45) );
    gui.add( countY.setup("countY", 0, 0, 50) );
    gui.add( stepY.setup("stepY", 20, 0, 200) );
    gui.add( twistY.setup("twistY", 0, -30, 30) );
    gui.add( pinchY.setup("pinchY", 0, 0, 1) );
    gui.loadFromFile("settings.xml");
    
    
    globalGroup.setup( "Global" );
    globalGroup.add(Scale.setup("Scale", 1, 0.0, 1));
    globalGroup.add(Rotate.setup("Rotate", 0, -180, 180));
    globalGroup.add(Background.setup("Background", 255, 0, 255));
    gui.add( &globalGroup );
    
    
    
    showGui = true;
}

//--------------------------------------------------------------
void ofApp::update(){
    
}

//--------------------------------------------------------------
void ofApp::draw(){
    ofBackground(Background);
    //stripPattern();
    ofTranslate(ofGetWidth()/2, ofGetHeight()/2);
    matrixPattern();
    ofTranslate(-ofGetWidth()/2, -ofGetHeight()/2);
    if(showGui) gui.draw();
    
}

//--------------------------------------------------------------
void ofApp::matrixPattern() {
    for(int y=-countY; y<=countY; y++) {
        ofPushMatrix();
        if(countY >0) {
            float scl = ofMap(y, -countY, countY, 1-pinchY, 1);
            ofScale(scl, scl);
        }
        ofTranslate(0, y*stepY);
        ofRotate(y*twistY);
        stripPattern();
        ofPopMatrix();
    }
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
        ofSetColor(int(ofRandom(200,255)), int(ofRandom(200,255)), int(ofRandom(200,255)));
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
    // display gui
    if(key=='z') showGui = !showGui;
    
    if(key == OF_KEY_RETURN ) ofSaveScreen("screenshot.png");
    
    // save preset
    if(key == 's') {
        ofFileDialogResult res;
        res = ofSystemSaveDialog("preset.xml", "Saving Preset");
        if(res.bSuccess) gui.saveToFile(res.filePath);
    }
    
    // load settings
    if(key=='l') {
        ofFileDialogResult res;
        res = ofSystemLoadDialog("Loading Preset");
        if(res.bSuccess) gui.loadFromFile(res.filePath);
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

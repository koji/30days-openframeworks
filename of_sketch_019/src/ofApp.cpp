#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    gui.setup();
    gui.add(background.setup("background",170,0,255));
    gui.add(radius.setup("radius", 50, 0, 200));
    gui.add(resolution.setup("resolution", 20, 0, 150));
    gui.add(x.setup("x",0,-10,10));
    gui.add(y.setup("y",0,-10,10));
    gui.add(z.setup("z",0,-10,10));
    gui.add(c.setup("color", ofColor(100, 100, 140), ofColor(0, 0), ofColor(255, 255)));
    sphere.set(radius, resolution);

}

//--------------------------------------------------------------
void ofApp::update(){
    rotationX += x;
    rotationY += y;
    rotationZ += z;
    

}

//--------------------------------------------------------------
void ofApp::draw(){
    ofBackground(background);
    gui.draw();
    ofTranslate(ofGetWidth()/2, ofGetHeight()/2, 0);
    ofRotateX(rotationX);
    ofRotateY(rotationY);
    ofRotateZ(rotationZ);
    ofPushMatrix();
    ofFill();
    ofSetColor(255);
    ofNoFill();
    draw3D();
    ofPopMatrix();
    
    float lastX = 0, lastY = 0, lastZ = 0;
    float radius = 200;
    float s = 0, t = 0;
    
    while(s <= 180){
        float radianS = ofDegToRad(s);
        float radianT = ofDegToRad(t);
        float x = radius * sin(radianS) * cos(radianT);
        float y = radius * sin(radianS) * sin(radianT);
        float z = radius * cos(radianS);
        
        //stroke(220, 10, 10);
        ofNoFill();
        ofSetColor(c);
        //stroke(0);
        if(lastX != 0){

            ofSetLineWidth(1);
            ofDrawLine(x, y, z, lastX, lastY, lastZ);
        }
        ofSetLineWidth(10);
        ofPoint(x, y, z);
        
        lastX = x;
        lastY = y;
        lastZ = z;
        
        s++;
        t += velocity;
    }
    velocity += acceleration;
}

//--------------------------------------------------------------
void ofApp::draw3D() {
    // light
    light.setPosition(ofGetWidth()/2, ofGetHeight()/2, 600);
    light.enable();
    material.begin();
    ofEnableDepthTest();
    ofSetColor(255);
    sphere.set(radius, resolution);
    sphere.draw();
    ofDisableDepthTest();
    material.end();
    light.disable();
    ofDisableLighting();
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

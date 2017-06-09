//
//  Particle.cpp
//  of_sketch_025
//
//  Created by koji kanao on 6/9/17.
//
//

#include "Particle.hpp"


void Particle::init(float _y, int _eSize, float _xSpeed, float _ySpeed){
    xPos = ofRandom(ofGetWidth());
    yPos = _y;
    eSize = _eSize;
    xSpeed = _xSpeed;
    ySpeed = _ySpeed;
    
}


//-----------------------------------------------------------
void Particle::update() {
    xPos += xSpeed;
    yPos += ySpeed;
    if(xPos > ofGetWidth()) xPos =0;
    if(yPos > ofGetHeight()) yPos =0;
    
    
}

//-----------------------------------------------------------
void Particle::render() {
    ofDrawCircle(xPos, yPos, eSize);
    
}

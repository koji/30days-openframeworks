//
//  Particle.cpp
//  of_sketch_024
//
//  Created by koji kanao on 6/9/17.
//
//

#include "Particle.hpp"

void Particle::init () {
    radius = 4;
    maxSpeed = 2;
    maxDistance = 75;
    
    velocity = *new ofVec2f(ofRandom(-maxSpeed, maxSpeed),ofRandom(-maxSpeed, maxSpeed));
    acceleration = *new ofVec2f(0,0);
    position = *new ofVec2f( ofRandom(ofGetWidth()), ofRandom(ofGetHeight()));
}

void Particle::move() {
    // change x positoin
    if(position.x<0) position.x = ofGetWidth();
    if(position.x>ofGetWidth()) position.x =0;
    
    // change y position
    if(position.y<0) position.y = ofGetHeight();
    if(position.y>ofGetHeight()) position.y =0;
    
    position.set(velocity);

    
}


void Particle::render() {
    ofSetColor(ofRandom(255),ofRandom(255),ofRandom(255));
    ofDrawCircle(position.x, position.y, 2, 2);
}

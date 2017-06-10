//
//  Particle.hpp
//  of_sketch_024
//
//  Created by koji kanao on 6/9/17.
//
//

#ifndef Particle_hpp
#define Particle_hpp

#include <stdio.h>
#include "ofMain.h"

class Particle {
public:
    float radius, maxSpeed, maxDistance;
    ofVec2f velocity, acceleration, position;
    
    void init();
    void move();
    void render();
    
};

#endif /* Particle_hpp */

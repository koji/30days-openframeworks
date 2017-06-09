//
//  Particle.hpp
//  of_sketch_025
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
    float xPos, yPos, eSize, xSpeed, ySpeed;
    
    void init(float _y, int _eSize, float _xSpeed, float _ySpeed);
    void update();
    void render();
    
    
    
private:
};

#endif /* Particle_hpp */

//
//  Car.hpp
//  _1_5_Car
//
//  Created by Stef Tervelde on 28/02/16.
//
//

#ifndef Car_hpp
#define Car_hpp

#include "ofMain.h"
#include <stdio.h>
class Car{
public:
    void setup();
    void update();
    void draw();
    
    
    ofVec2f loc;
    ofVec2f vel;
    ofVec2f acc;
};

#endif /* Car_hpp */
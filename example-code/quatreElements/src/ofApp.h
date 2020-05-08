/*
 Project Title: Quatre éléments distribués au hasard 1959
 Description: decoding vera molnar
 ©Daniel Buzzo 2020
 dan@buzzo.com
 http://buzzo.com
 https://github.com/danbz
 */

#pragma once

#include "ofMain.h"

class ofApp : public ofBaseApp{
    
    
public:
    void setup();
    void update();
    void draw();
    
    void keyPressed(int key);    
    
    int canvasWidth, canvasHeight;
};

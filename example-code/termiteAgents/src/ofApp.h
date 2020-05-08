/*
 Project Title: Termite Agents
 Description:
 ©Daniel Buzzo 2020
 dan@buzzo.com
 http://buzzo.com
 https://github.com/danbz
  derived from example in Reas and Fry 'Processing, handbook'
 */

#pragma once

#include "ofMain.h"

class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

		void keyPressed(int key);

		
    vector< vector<int>> angles;
    
    int numAngles, dir, x, y, nx, ny;
    ofColor black, white;
    
    ofPixels screenImage;
    ofImage image;
};

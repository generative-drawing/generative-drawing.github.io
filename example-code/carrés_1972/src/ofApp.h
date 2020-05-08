/*
 Project Title: carrés 1972 000072 versions
 Description: decoding vera molnar code
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
    int carreType;
};

/*
 Project Title: Quatre éléments distribués au hasard 1959
 Description: decoding vera molnar
 ©Daniel Buzzo 2020
 dan@buzzo.com
 http://buzzo.com
 https://github.com/danbz
 */

#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    canvasWidth = canvasHeight = 700; // square drawing area
    ofBackground(255);
    ofSetColor(0);
    ofNoFill();
    ofSetBackgroundAuto(false);
    
}
//--------------------------------------------------------------
void ofApp::update(){
    
}

//--------------------------------------------------------------
void ofApp::draw(){
    
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    int numBoxes = 24;
    int lineThickness = 7;
    int boxW = (canvasWidth / numBoxes);
    ofTranslate((ofGetWidth()-canvasWidth)/2 , (ofGetHeight()-canvasHeight)/2); // centre the drawing
    ofPushStyle(); // clear the screen
    ofSetColor(255);
    ofFill();
    ofDrawRectangle(0, 0, ofGetWidth(), ofGetHeight());
    ofPopStyle();
    ofSetLineWidth(lineThickness);
    
    switch (key) {
        case '1':
            // draw 24  * 24 squares of random 1 of 4 lines
            for (int i=0; i<numBoxes; i++){ // draw  across
                for (int j=0; j<numBoxes; j++){ // draw  down

                    switch ( (int) ofRandom(4) ) {
                        case 0: // diagonal down
                            ofDrawLine( i * boxW , j * boxW , i * boxW + boxW , j * boxW + boxW ) ;
                            break;
                        case 1: // diagonal up
                            ofDrawLine( i * boxW , j * boxW + boxW , i * boxW + boxW , j * boxW ) ;
                            break;
                        case 2: // vertical
                            ofDrawLine( i * boxW + boxW/2 , j * boxW + boxW , i * boxW + boxW/2, j * boxW ) ;
                            break;
                        case 3: // horizontal
                            ofDrawLine( i * boxW , j * boxW + boxW /2, i * boxW + boxW , j * boxW + boxW/2 ) ;
                            break;
                        default:
                            break;
                    }
                }
            }
            break;
       
            
        default:
            break;
    }
}
//--------------------------------------------------------------

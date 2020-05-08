/*
Project Title: carrés 1972 000072 versions
Description: decoding vera molnar code
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
    carreType = 1;
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
    int numBoxes = 5;
    int margin = 4;
    float rndMax = 1;
    int boxW = (canvasWidth / numBoxes) - margin;
    ofTranslate((ofGetWidth()-canvasWidth)/2 , (ofGetHeight()-canvasHeight)/2); // centre the drawing
    ofPushStyle(); // clear the screen
    ofSetColor(255);
    ofFill();
    ofDrawRectangle(0, 0, ofGetWidth(), ofGetHeight());
    ofPopStyle();
    
    switch (key) {
            
        case '1': // carré 000072/00
            // draw 25 squares of 5 squares
            for (int i=0; i<numBoxes; i++){ // draw 5 across
                for (int j=0; j<numBoxes; j++){ // draw 5 down
                    for (int k =margin; k<boxW; k+= boxW/numBoxes){
                        // draw 5 decreasing size boxes
                        ofDrawRectangle((i * boxW) + (k/2), (j * boxW) + (k/2), boxW-k, boxW-k) ;
                    }
                }
            }
            break;
            
        case '2': // carré 250173/1
            // draw 25 squares of random number of squares
            for (int i=0; i<numBoxes; i++){ // draw 5 across
                for (int j=0; j<numBoxes; j++){ // draw 5 down
                    for (int k =margin; k<boxW; k+= boxW/numBoxes){
                        // draw 5 decreasing size boxes
                        if (ofRandom(2)>1){
                            ofDrawRectangle((i * boxW) + (k/2), (j * boxW) + (k/2), boxW-k, boxW-k);
                        }
                    }
                }
            }
            break;
            
        case '3':
            // carré 071273/21
            // draw 25 squares of 5 squares
            for (int i=0; i<numBoxes; i++){ // draw 5 across
                for (int j=0; j<numBoxes; j++){ // draw 5 down
                    for (int k =margin; k<boxW; k+= boxW/numBoxes){
                        // draw 5 decreasing size boxes
                        if (ofRandom(2)>1){
                            ofDrawRectangle((i * boxW + (ofRandom(-rndMax, rndMax) * k)) + (k/2), (j * boxW) + (ofRandom(-rndMax, rndMax) * k) +(k/2), boxW-k, boxW-k) ;
                        }
                    }
                }
            }
            break;
            
        default:
            break;
    }
    
}

//--------------------------------------------------------------

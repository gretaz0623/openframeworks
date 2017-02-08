#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofEnableSmoothing();
    ofSetCircleResolution(200);
    ofSetBackgroundAuto(false);
    ofBackground(39, 43, 57);



}

//--------------------------------------------------------------
void ofApp::update(){
    ofSetFrameRate(10);
   
    //moon
    ofSetColor(255);
    ofDrawCircle(500, 150, 50);
    ofSetColor(39, 43, 57);
    ofDrawCircle(550, 140, 60);

    //snowing
    ofSetColor(255);
    float x = ofRandom(0,700);
    float y = ofRandom(0,700);
    ofDrawCircle(x,y,1);
    
    //ground
    ofSetColor(147,29,112);
    ofDrawRectangle(0, 650, 700, 100);
    
     //little Glass Pyramid
    ofSetColor(220 + mouseX/20, 220 + mouseX/20, 0,2);
    ofDrawTriangle(350, 500, 250, 650, 450, 650);
    
    //little Glass Pyramid outline
    ofSetColor(39,43,57,80);
    ofSetLineWidth(8);
    ofDrawLine(350, 500, 250, 650);
    ofDrawLine(350, 500, 450, 650);
    ofDrawLine(350, 500, 350, 650);
    
    ofSetLineWidth(4);
    ofDrawLine(350, 560, 300, 650);
    ofDrawLine(350, 560, 400, 650);
    ofDrawLine(320, 540, 320, 650);
    ofDrawLine(320, 540, 330, 650);
    ofDrawLine(290, 590, 290, 650);
    ofDrawLine(290, 590, 300, 650);
    ofDrawLine(380, 540, 380, 650);
    ofDrawLine(380, 540, 370, 650);
    ofDrawLine(410, 590, 410, 650);
    ofDrawLine(410, 590, 400, 650);
  


}

//--------------------------------------------------------------
void ofApp::draw(){
    for(int i = 0;i < 700; i+= 20){
        ofSetColor(0,10);
        //interaction
        if(mouseX > ofGetWidth()/2){
            
            //light lines
            float x1 = ofGetWidth()/2;
            float x2 = ofRandom(50,650);
            ofSetColor(230,239,115,20);
            ofSetLineWidth(1);
            ofDrawLine(x1,250,x2,650);
            
            //lines for Glass Pyramid
            float x3 = ofRandom(0,2);
            ofSetColor(39, 43, 57,x3);
            ofSetLineWidth(10);
            ofDrawLine(350 - i, 250 + i, 650 - i ,650 + i );
            ofDrawLine(350 + i, 250 + i, 50 + i ,650 + i );
           
            
        }else{
            //Glass Pyramid
            ofSetColor(180 + mouseX/20, 180 + mouseX/20, 180 + mouseX/20,20);
            ofDrawTriangle(350, 250, 50, 650, 650, 650);
            

       }
     }
    
   }

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}

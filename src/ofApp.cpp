#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    time = 0;
    cirAmount = 24;
    cirSize = 13;
    cosVal = 3;
    sinVal = 2;
    sizeVal = 1;
    keyCounter = 0;
    breath = 0;
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){

//    if (ofGetMousePressed()){
//        time = time + ofGetLastFrameTime();
//    }
//
    
       
       if (ofGetKeyPressed(OF_KEY_UP)){
//           keyCounter++;
//           time = time + keyCounter/10; // speed up

           
           if(sizeVal >3){
               sizeVal = 3;
           }
           sizeVal = sizeVal + 0.3;
           
       } else if (ofGetKeyPressed(OF_KEY_DOWN)){
           
           if(sizeVal < 1){
               sizeVal = 1;
           }
           
           sizeVal = sizeVal - 0.3;
           
//           if(keyCounter != 0 && keyCounter>0){
//               keyCounter--;
//               time = time + keyCounter/10;
//           }else{
//               keyCounter = 0;
//           }
       } else if (ofGetKeyPressed(OF_KEY_RIGHT)){

           time = time + ofGetLastFrameTime()*1.5;
           
       } else if (ofGetKeyPressed(OF_KEY_LEFT)){
           time = time + ofGetLastFrameTime()/10;
           
       }else if (ofGetKeyPressed('a')){
           cirAmount++;
       }else if (ofGetKeyPressed('d')){
           cirAmount--;
       }else if (ofGetKeyPressed('p')){
           time = time + ofGetLastFrameTime();

       }else if (ofGetKeyPressed(' ')){
           //reset and stop motion
           time = time + ofGetLastFrameTime();
           //time = ofGetLastFrameTime();
           cirAmount = 24;
       }
    
    if (ofGetKeyPressed('o')){
        ofSetColor(255,0,0);
        ofNoFill();
    }else if(ofGetKeyPressed('f')){
        ofSetColor(255);
        ofFill();
    }
   
    
    ofBackground(0);
    

    for(int i = 0; i < cirAmount; i++){
        float x = ofGetWidth()/2 + 200 * cos((time+i)*cosVal);
        float y = ofGetHeight()/2 + 200 * sin((time+i)*sinVal);
        
        if(ofGetKeyPressed('b')){
            breath =  ofMap(sin(ofGetElapsedTimef()*1.5), -1, 1, 10,45);
        }
        
        ofDrawCircle(x,y,cirSize*sin(i*0.05)*2.3+cirSize*sizeVal+breath);
    }
    
    

}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    
//    if (key == OF_KEY_UP){
//        keyCounter++;
//        time = time + ofGetLastFrameTime()*1.5*keyCounter; // speed up
//        
//    } else if (key == OF_KEY_DOWN){
//        keyCounter++;
//        time = time + ofGetLastFrameTime()/2*keyCounter;
//    }else if (key == ' '){
//        time = time + ofGetLastFrameTime();
//    }

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

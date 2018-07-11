#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    gui.setup("Gui");
    gui.setPosition(0 , 0);
    gui.minimizeAll();

    /*fOsc.setName("Osc");
    fOsc.add(fOscAngleServo1.set("servo1",0,0.,1.));
    fOsc.add(fOscAngleServo2.set("servo2",0,0.,1.));
    fOsc.add(fOscAngleServo3.set("servo3",0,0.,1.));
    fOsc.add(fOscAngleServo4.set("servo4",0,0.,1.));
    fOsc.add(fOscAngleServo5.set("servo5",0,0.,1.));

    fOsc.add(fOscServo1Temp.set("Servo1Temp",0,0,300));
*/
    gui.add(fOsc);

    sync.setup((ofParameterGroup&)gui.getParameter(),6666,"localhost",6667);

}

//--------------------------------------------------------------
void ofApp::update(){
    sync.update();

}

//--------------------------------------------------------------
void ofApp::draw(){
    gui.draw();

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

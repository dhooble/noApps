#pragma once

#include "ofMain.h"
#include "ofxGui.h"
#include "ofxOscParameterSync.h"

class ofApp : public ofBaseApp{

public:
    void setup();
    void update();
    void draw();

    void keyPressed(int key);
    void keyReleased(int key);
    void mouseMoved(int x, int y );
    void mouseDragged(int x, int y, int button);
    void mousePressed(int x, int y, int button);
    void mouseReleased(int x, int y, int button);
    void mouseEntered(int x, int y);
    void mouseExited(int x, int y);
    void windowResized(int w, int h);
    void dragEvent(ofDragInfo dragInfo);
    void gotMessage(ofMessage msg);

    ofxPanel gui;

    ofxOscParameterSync sync;

    // Osc Params
    ofParameterGroup fOsc;
    ofParameterGroup fOscAngleControl1;
    ofParameterGroup fOscAngleControl2;
    ofParameterGroup fOscAngleControl3;
    ofParameterGroup fOscAngleControl4;
    ofParameterGroup fOscAngleControl5;

    ofParameterGroup fOscHeadPositionControl;

    ofParameter <float> fOscAngleServo1;
    ofParameter <float> fOscAngleServo2;
    ofParameter <float> fOscAngleServo3;
    ofParameter <float> fOscAngleServo4;
    ofParameter <float> fOscAngleServo5;

    ofParameter <int> fOscHeadPositionX;
    ofParameter <int> fOscHeadPositionY;

    ofParameter<bool> fMotorsEnabled;

    ofParameter<bool> fTrackHead;

    ofParameter <int> fOscServo1Temp;
    ofParameter <int> fOscServo2Temp;
    ofParameter <int> fOscServo3Temp;
    ofParameter <int> fOscServo4Temp;
    ofParameter <int> fOscServo5Temp;


};

#ifndef SERVO_H
#define SERVO_H


#include "ofMain.h"
#include "arbotixController.h"

class servo
{
public:
    servo();
    void setOscParams(ofParameterGroup &oscParentNode, string name);// A MODIFER POUR OSC OU SOCKET
    void update();
    void draw();
    void setController(arbotixController *controller) {fController = controller;};
    void setup(int min, int max);
    void setAngle(float angle) { fAngle = (int) ofMap(angle,0.,1.,fOscMin,fOscMax);}
    void setId(const int &id);
    void setSpeed(const int &speed);
    void setName(const std::string &name);
    int  getId();
    int getTemp();
    int getPos();
    void enable();
    void disable();
    std::string getName();

private:
    arbotixController *fController;
    int fAngle;
    ofParameter<int> fOscMin;
    ofParameter<int> fOscMax;
    int fId;
    std::string fName;
    int fSpeed;
    bool fIsInitialized;
    bool fIsEnabled;

    // OSC parameters
    ofParameterGroup fOscServoControl;
    ofParameterGroup fOscMinMaxControl;
};

#endif // SERVO_H

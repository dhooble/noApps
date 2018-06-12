#include "servo.h"

servo::servo():
fIsInitialized(false),
fIsEnabled(false)
{

}

void servo::enable()
{
    if (!fIsEnabled)
    {
        fController->enableServo(fId);
        fIsEnabled = true;
    }
}

void servo::disable()
{
//    if (fIsEnabled)
//    {
        fController->disableServo(fId);
        fIsEnabled = false;
//    }
}

void servo::setup(int min, int max)
{
    printf("setup servo\n");

    fOscMin.set(fName+" min",min,0,1024);
    fOscMax.set(fName+" max",max,0,1024);
    //fOscMinMaxControl.add(fOscMin);
    //fOscMinMaxControl.add(fOscMax);


    fIsInitialized = true;
}


void servo::setOscParams(ofParameterGroup &oscParentNode, string name)
{
    //fOscServoControl.setName(name);
    //fOssiaServoControl.add(fOscMinMaxControl);
    oscParentNode.add(fOscMin);
    oscParentNode.add(fOscMax);
}

int servo::getTemp()
{
    int temp = fController->getServoTemp(fId);
    return temp;
}

int servo::getPos()
{
    int pos = fController->getServoPos(fId);
    return pos;
}

void servo::update()
{

    if (fIsInitialized)
    {
        //printf("servo angle :%i\n",fAngle);
        int angle = fAngle ; //(int)ofMap(fAngle, 0., 1., fMin, fMax);
        if (fController==NULL)
        {
         ofLogError("Servo Controller not set");
        }
        else
        {
            fController->sendServoAngle(fId, angle, fSpeed);
        }
    }
}

void servo::setName(const std::string &name)
{
    fName = name;
}

std::string servo::getName()
{

    return fName;
}

void servo::setId(const int &id)
{
    ofLogNotice()  << "servo::setId() to : " << id;
    fId = id;
}


void servo::setSpeed(const int &speed)
{
    fSpeed = speed;
}

int servo::getId()
{
    ofLogNotice()  << "servo::getId() - return : " << fId;
    return fId;
}

void servo::draw()
{

}


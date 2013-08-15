#ifndef IAPPLICATIONCONTROLLER_H
#define IAPPLICATIONCONTROLLER_H

class IApplication;

class IApplicationController
{
public:       
    virtual void start() = 0;
    virtual void pause() = 0;
    virtual void resume() = 0;
    virtual void quit() = 0;
};

#endif // IAPPLICATIONCONTROLLER_H

#ifndef APPLICATIONCONTROLLERBASE_H
#define APPLICATIONCONTROLLERBASE_H

#include "IApplicationController.h"

class IApplication;

class ApplicationControllerBase : public IApplicationController
{
private:
    IApplication * _application;
public:
    ApplicationControllerBase(IApplication *);
    virtual ~ApplicationControllerBase();
    virtual void start();
    virtual void pause();
    virtual void resume();
    virtual void quit();
protected:
    inline IApplication * getApplication(){ return _application;}
};

#endif // APPLICATIONCONTROLLERBASE_H

#include "ApplicationControllerBase.h"
#include "IApplication.h"
#include <QCoreApplication>

ApplicationControllerBase::ApplicationControllerBase(IApplication * application)
    : _application(application)
{

}


ApplicationControllerBase::~ApplicationControllerBase(){
    quit();
    delete _application;
}


void ApplicationControllerBase::quit(){
    getApplication()->quit();
}

void ApplicationControllerBase::start(){
    getApplication()->start();
}

void ApplicationControllerBase::pause(){
    getApplication()->pause();
}

void ApplicationControllerBase::resume(){
    getApplication()->resume();
}


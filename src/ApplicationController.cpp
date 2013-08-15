#include <QCoreApplication>
#include "ApplicationController.h"


ApplicationController::ApplicationController(IApplication * application)
    : ApplicationControllerBase(application)
{

}

ApplicationController::~ApplicationController(){
}

#ifndef APP_CONTROLLER_H
#define APP_CONTROLLER_H

#include "ApplicationControllerBase.h"

class ApplicationController : public ApplicationControllerBase {

public:
    ApplicationController(IApplication * a);
    ~ApplicationController();
};

#endif // APP_CONTROLLER_H


#ifndef APPLICATION_H
#define APPLICATION_H

#include "ApplicationBase.h"

class Application : public ApplicationBase
{
public:
    Application(int argc, char ** args);

    virtual void start();
    virtual void pause();
    virtual void resume();
    virtual void quit();
};

#endif // APPLICATION_H

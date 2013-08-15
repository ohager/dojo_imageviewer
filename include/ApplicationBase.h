#ifndef APPLICATIONBASE_H
#define APPLICATIONBASE_H

#include <map>
#include <string>
#include "IApplication.h"
#include "ApplicationArguments.h"


class ApplicationBase : public IApplication{
public:
    explicit ApplicationBase(const ApplicationArguments & args);
    virtual ~ApplicationBase();
    virtual void start();
    virtual void pause();
    virtual void resume();
    virtual void quit();

    const ApplicationArguments & getArguments() const { return _arguments; }
private:
    ApplicationArguments _arguments;
};


#endif // APPLICATIONBASE_H

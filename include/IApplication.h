#ifndef IAPPLICATION_H
#define IAPPLICATION_H

class ApplicationArguments;

class IApplication
{
public:    
    virtual ~IApplication(){}
    virtual void start() = 0;
    virtual void pause() = 0;
    virtual void resume() = 0;
    virtual void quit() = 0;
    virtual const ApplicationArguments & getArguments() const=0;
};

#endif // IAPPLICATION_H

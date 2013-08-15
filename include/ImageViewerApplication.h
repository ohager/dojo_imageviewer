#ifndef IMAGEVIEWERAPPLICATION_H
#define IMAGEVIEWERAPPLICATION_H

#include "ApplicationBase.h"

class ImageViewerApplication : public ApplicationBase
{
public:
    ImageViewerApplication(const ApplicationArguments &args);

    void start();
    void quit();

};

#endif // IMAGEVIEWERAPPLICATION_H

#ifndef IMAGEREADERFACTORY_H
#define IMAGEREADERFACTORY_H

#include <string>
#include "IImageReader.h"

class ImageReaderFactory
{
public:
    static IImageReader * createImageReader(const std::string & filesuffix);
};

#endif // IMAGEREADERFACTORY_H

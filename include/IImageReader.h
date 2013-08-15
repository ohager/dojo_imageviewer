#ifndef IIMAGEREADER_H
#define IIMAGEREADER_H

#include <string>
#include "ImageData.h"

class IImageReader {
public:
    virtual ~IImageReader(){}
    virtual ImageData * loadImage(const std::string & filename)=0;
};

#endif // IIMAGEREADER_H

#ifndef IMAGEREADERPNG_H
#define IMAGEREADERPNG_H

#include "IImageReader.h"

class ImageData;

class ImageReaderPng : public IImageReader
{
public:
    ImageData * loadImage(const std::string & filename);
};

#endif // IMAGEREADERPNG_H

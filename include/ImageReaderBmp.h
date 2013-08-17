#ifndef IMAGEREADERBMP_H
#define IMAGEREADERBMP_H


#include "IImageReader.h"

class ImageReaderBmp : public IImageReader
{
public:
    ImageReaderBmp();

    virtual ImageData * loadImage(const std::string & filename);
};

#endif // IMAGEREADERBMP_H

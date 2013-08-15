#include "ImageReaderPng.h"
#include "ImageData.h"


ImageData * ImageReaderPng::loadImage(const std::string & filename){

    int width = 0;
    int height = 0;
    int bitdepth = 0;
    char * data = 0x0;
    long datalength = 0;

    return new ImageData(width, height, bitdepth, data, datalength);
}

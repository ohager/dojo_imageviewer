#include "ImageReaderFactory.h"
#include "ImageReaderPng.h"
#include "ImageReaderBmp.h"
#include <algorithm>
#include <stdexcept>

IImageReader * ImageReaderFactory::createImageReader(const std::string & filesuffix){

    std::string suffix(filesuffix);
    std::transform(suffix.begin(), suffix.end(), suffix.begin(), ::toupper);

    if(suffix == "PNG"){
        return new ImageReaderPng();
    }
    else if(suffix == "BMP"){
        return new ImageReaderBmp();
    }
    else{
        throw std::invalid_argument("Format '" + suffix + "' is not supported");
    }

    return NULL; // never reached
}

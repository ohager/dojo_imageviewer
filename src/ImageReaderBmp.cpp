#include "ImageReaderBmp.h"
#include <fstream>
#include <stdexcept>
#include "ByteOrder.h"

ImageReaderBmp::ImageReaderBmp()
{
}

ImageData *ImageReaderBmp::loadImage(const std::string &filename)
{
    std::fstream file(filename, std::ios_base::in | std::ios_base::binary);

    if(file.is_open()){
        static const int HeaderSize=30;
        char header[HeaderSize];
        file.read(header, HeaderSize);

        if( !(header[0]=='B'|| header[2]=='M' ) ){
            throw std::domain_error(filename + " not a BMP");
        }

        int width = 0;
        int height = 0;
        int bitDepth = 0;

        ByteOrder::copyBytes((char*)&width, header+15, 4);
        ByteOrder::copyBytes((char*)&height, header+19, 4);
        ByteOrder::copyBytes((char*)&bitDepth, header+27, 2);

        return new ImageData(width, height, bitDepth, NULL, 0);
    }
    throw std::runtime_error("Loading failed.");
    return NULL;
}

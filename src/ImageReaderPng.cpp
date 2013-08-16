#include "ImageReaderPng.h"
#include "ImageData.h"


#include <ios>
#include <fstream>
#include <stdexcept>
#include <ByteOrder.h>


ImageData * ImageReaderPng::loadImage(const std::string & filename){


    std::fstream file(filename, std::ios_base::in | std::ios_base::binary);

    if(file.is_open()){
        static const int HeaderSize=29;
        char header[29];
        // 8 + (4 + 4 + 13)
        // HD + (IHDR)
        file.read(header, HeaderSize);

        if( !(header[1]=='P' || header[2]=='N' || header[3]=='G') ){
            throw std::domain_error(filename + " not a PNG");
        }

        int width = 0;
        int height = 0;
        char bitdepth = 0;

        // reading IHDR data
        ByteOrder::copyBytes( (char*)&width, (header+16), 4);
        ByteOrder::copyBytes( (char*)&height, (header+20), 4);
        ByteOrder::copyBytes( &bitdepth, (header+24), 1);

        return new ImageData(width, height, bitdepth, NULL, 0);
    }
    return NULL;
}

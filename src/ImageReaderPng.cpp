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
        char header[HeaderSize];
        // 8 + (4 + 4 + 13)
        // HD + (IHDR)
        file.read(header, HeaderSize);

        if( !(header[1]=='P' || header[2]=='N' || header[3]=='G') ){
            throw std::domain_error(filename + " not a PNG");
        }

        int width = 0;
        int height = 0;
        char bitdepthPerPixel = 0;
        char colortype = 0;

        // reading IHDR data
        ByteOrder::copyBytes( (char*)&width, (header+16), 4);
        ByteOrder::copyBytes( (char*)&height, (header+20), 4);
        ByteOrder::copyBytes( &bitdepthPerPixel, (header+24), 1);
        ByteOrder::copyBytes( &colortype, (header+25), 1);

        int bitdepth=0;
        switch(colortype){
        case 0:
            bitdepth = bitdepthPerPixel;
            break;
        case 2:
        case 3:
            bitdepth = bitdepthPerPixel * 3;
            break;
        case 4:
            bitdepth = bitdepthPerPixel * 2;
            break;
        case 6:
            bitdepth = bitdepthPerPixel * 4;
            break;
        }

        return new ImageData(width, height, bitdepth, NULL, 0);
    }
    return NULL;
}

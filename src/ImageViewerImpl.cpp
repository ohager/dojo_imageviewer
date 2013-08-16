#include "ImageViewerImpl.h"
#include "ImageData.h"

#include <iostream>
#include <stdexcept>

void ImageViewerImpl::render(const ImageData * imageData){

    if(imageData==NULL){
        throw std::domain_error("Corrupt Image File");
    }

    std::cout << "Image Height: " << imageData->getHeight() << std::endl
              << "Image Width: " << imageData->getWidth() << std::endl
              << "Image Bit Depth: " << imageData->getBitDepth() << std::endl << std::endl;
    std::cout << "Press <Enter> to close..." << std::endl;
}

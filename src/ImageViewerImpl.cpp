#include "ImageViewerImpl.h"
#include "ImageData.h"

#include <iostream>

void ImageViewerImpl::render(const ImageData * imageData){
    std::cout << "Image Height: " << imageData->getHeight() << std::endl
              << "Image Width: " << imageData->getWidth() << std::endl
              << "Image Bit Depth: " << imageData->getBitDepth() << std::endl << std::endl;
    std::cout << "Press <Enter> to close..." << std::endl;

    std::string dummy;
    std::cin >> dummy;
}

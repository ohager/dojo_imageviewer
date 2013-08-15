#include <stdexcept>
#include "ImageViewerApplication.h"
#include "ImageReaderFactory.h"
#include "ImageData.h"
#include <ImageViewer.h>


ImageViewerApplication::ImageViewerApplication(const ApplicationArguments &args)
    : ApplicationBase(args)
{
}

void ImageViewerApplication::start()
{
    std::string filename = getArguments().getArgument("file");
    if(filename.length()==0){
        throw std::invalid_argument("Argument 'file' found");
    }

    std::string filesuffix = filename.substr(filename.find_last_of(".")+1);
    IImageReader * reader = ImageReaderFactory::createImageReader(filesuffix);
    ImageData * imageData = reader->loadImage(filename);
    ImageViewer viewer(imageData);
    viewer.render();

    delete imageData;
}


void ImageViewerApplication::quit(){

}

#include "ImageViewer.h"
#include "ImageViewerImpl.h"


ImageViewer::ImageViewer(const ImageData *imageData)
    : _imageData(imageData),
      _impl(new ImageViewerImpl())
{
}

ImageViewer::~ImageViewer()
{
    delete _impl;
}


void ImageViewer::render(){
    _impl->render(this->_imageData);
}

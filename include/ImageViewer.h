#ifndef IMAGEVIEWER_H
#define IMAGEVIEWER_H

#include "ImageData.h"
class ImageViewerImpl;

class ImageViewer
{    
public:
    ImageViewer(const ImageData *imageData);
    ~ImageViewer();
    void render();
private:
    const ImageData *_imageData;
    ImageViewerImpl *_impl;
};

#endif // IMAGEVIEWER_H

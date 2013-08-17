#ifndef IMAGEDATA_H
#define IMAGEDATA_H

class ImageData{
public:
    ImageData(int width, int height, int bitdepth, char * data, long dataLength )
        : _width(width),
          _height(height),
          _bitDepth(bitdepth),
          _data(data),
          _dataLength(dataLength)
    {

    }

    virtual ~ImageData(){
        delete _data;
    }

    inline int getHeight() const { return _height; }
    inline int getBitDepth() const { return _bitDepth; }
    inline int getWidth() const { return _width; }
    inline void getData(char * data, long & dataLength){
        data = _data;
        dataLength = _dataLength;
    }
private:
    int _width, _height, _bitDepth;
    char * _data;
    long _dataLength;
};

#endif // IIMAGE_H

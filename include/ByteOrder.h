#ifndef BYTEORDER_H
#define BYTEORDER_H

class ByteOrder
{
public:
    static bool isLittleEndian();
    static void copyAsBigEndian(char * littleEndian, char * bigEndian, int nbytes);
    static void copyBytes(char *dest, char *src, int count);
};

#endif // BYTEORDER_H

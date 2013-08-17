#include "ByteOrder.h"

#include <cstring>

bool ByteOrder::isLittleEndian(){
    int x = 1;
    return (*(char *)&x == 1);
}

void ByteOrder::copyAsBigEndian(char * littleEndian, char * bigEndian, int count){
    // naive deadly slow implementation
    for(int i=0;i<count; ++i){
        bigEndian[count-1-i] = littleEndian[i];
    }
}

void ByteOrder::copyBytes(char * dest, char * src, int count){
    if(ByteOrder::isLittleEndian()){
        ByteOrder::copyAsBigEndian(src, dest, count);
    }
    else{
        ::memcpy(dest, src, count);
    }

}

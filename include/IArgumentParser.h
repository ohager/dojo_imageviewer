#ifndef IARGUMENTPARSER_H
#define IARGUMENTPARSER_H

#include <map>
#include <string>

class IArgumentParser{

public:
    typedef std::map<std::string, std::string>  ArgumentMap;
    virtual ArgumentMap parse(int argc, char ** args)=0;
};

#endif // IARGUMENTPARSER_H

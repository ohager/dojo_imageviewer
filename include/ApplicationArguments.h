#ifndef APPLICATIONARGUMENTS_H
#define APPLICATIONARGUMENTS_H

#include <map>
#include <string>
#include "ArgumentParserDefault.h"

class ApplicationArguments {

private:
    IArgumentParser * _argumentParser;
    mutable std::map<std::string,std::string> _arguments;
public:
    ApplicationArguments(int argc, char ** args)
        : _argumentParser( new ArgumentParserDefault() )
    {
        _arguments =  _argumentParser->parse(argc, args);
    }

    const std::string & getArgument(const std::string & key) const{
        return _arguments[key];
    }
};

#endif // APPLICATIONARGUMENTS_H

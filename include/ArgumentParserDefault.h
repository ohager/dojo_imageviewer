#ifndef ARGUMENTPARSERDEFAULT_H
#define ARGUMENTPARSERDEFAULT_H

#include "IArgumentParser.h"

class ArgumentParserDefault : public IArgumentParser
{
public:
    virtual ArgumentMap parse(int argc, char ** args);
    inline const std::map<std::string, std::string> & getArguments() const { return _arguments; }
    void test(char** args, std::string val, int argc, int i);
    void test(int argc, IArgumentParser::ArgumentMap argmap, char** args, int i);
private:
    std::map<std::string, std::string> _arguments;
};

#endif // ARGUMENTPARSERDEFAULT_H

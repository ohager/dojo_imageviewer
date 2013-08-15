#include "ArgumentParserDefault.h"


IArgumentParser::ArgumentMap ArgumentParserDefault::parse(int argc, char ** args){
    IArgumentParser::ArgumentMap argmap;

    for(int i=1; i<argc;++i){

        if(args[i][0] == '-'){
            std::string key(args[i]+1);
            std::string val;
            if(i+1< argc && args[i+1][0] != '-'){
                val = args[i+1];
                ++i;
            }
            argmap[key]=val;
        }
    }

    return argmap;
}




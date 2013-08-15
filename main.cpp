#include <iostream>
#include <exception>
#include "ApplicationController.h"
#include "Application.h"

int main(int argc, char *argv[])
{
    ApplicationController applicationController(new Application(argc, argv));
    try{
        applicationController.start();
    }
    catch(const std::exception & e){
        std::cerr << e.what() << std::endl;
        return -1;
    }

    return 0;
}

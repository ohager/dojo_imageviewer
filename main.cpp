#include <iostream>
#include <exception>
#include "ApplicationController.h"
#include <ApplicationArguments.h>
#include <ImageViewerApplication.h>

int main(int argc, char *argv[])
{
    IApplication * application = new ImageViewerApplication( ApplicationArguments(argc, argv) );
    ApplicationController applicationController(application);
    try{
        applicationController.start();
    }
    catch(const std::exception & e){
        std::cerr << e.what() << std::endl;
        return -1;
    }

    return 0;
}

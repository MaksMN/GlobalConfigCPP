#pragma once
#include "Config.h"
#include <iostream>

class SampleClass
{
private:
    const std::string _class_marker;
public:
    SampleClass(const std::string& class_marker) :_class_marker(class_marker + ": ") {}

    void print_config() {
        std::cout << _class_marker << "ini string = " <<
            Config::options->getIniString()
            << std::endl;

        std::cout << _class_marker << "ini int = " <<
            Config::options->getIniInt()
            << std::endl;

        std::cout << _class_marker << "hello_world = " <<
            Config::options->getHelloWorld()
            << std::endl;
        std::cout << _class_marker << "local_parameter = " <<
            Config::options->getLocalParameter()
            << std::endl;
        std::cout << std::endl;
    }
};
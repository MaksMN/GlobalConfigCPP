#pragma once
#include "Config.h"
#include <iostream>

class SampleClass
{
private:
    const std::string _class_marker;
    std::shared_ptr<IConfig> conf = Config::conf;
public:
    SampleClass(const std::string& class_marker) :_class_marker(class_marker + ": ") {}

    void print_config() {
        std::cout << _class_marker << "ini string = " <<
            conf->getIniString()
            << std::endl;

        std::cout << _class_marker << "ini int = " <<
            conf->getIniInt()
            << std::endl;

        std::cout << _class_marker << "hello_world = " <<
            conf->getHelloWorld()
            << std::endl;
        std::cout << _class_marker << "local_parameter = " <<
            conf->getLocalParameter()
            << std::endl;
        std::cout << std::endl;
    }
};
#pragma once
#include <string>
#include <iostream>
#include <memory>
#include "SimpleIni/SimpleIni.h"

class AbstractConfig
{
protected:
    // параметры из ini файла
    std::string ini_string;
    int ini_int = 100500;

    // внутренние параметры
    const std::string hello_world = "Hello World!";
    int local_parameter = 333;

public:
    // Get parameters in ini file
    void ini_handle(const char* ini_file_path);

    /* getters & setters*/
    std::string getIniString();
    void setIniString(const std::string& new_str);
    int getIniInt();
    void setIniInt(int new_number);
    const std::string getHelloWorld();
    int getLocalParameter();
    void setLocalParameter(int new_number);

    virtual ~AbstractConfig() = 0;
};
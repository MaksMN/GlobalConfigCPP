#include "AbstractConfig.h"

AbstractConfig::~AbstractConfig() = default;

void AbstractConfig::ini_handle(const char* ini_file_path)
{
    CSimpleIniA ini;
    ini.SetUnicode();
    SI_Error rc = ini.LoadFile(ini_file_path);
    if (rc < 0)
    {
        std::cerr << "Unable to read configuration file: " << ini_file_path << std::endl;
        return;
    }
    ini_string = ini.GetValue("GLOBAL", "string_parameter", "default_string");
    ini_int = ini.GetLongValue("GLOBAL", "int_parameter", 100500);
}

std::string AbstractConfig::getIniString()
{
    return ini_string;
}

void AbstractConfig::setIniString(const std::string& new_str)
{
    ini_string = new_str;
}

int AbstractConfig::getIniInt()
{
    return ini_int;
}

void AbstractConfig::setIniInt(int new_number)
{
    ini_int = new_number;
}

const std::string AbstractConfig::getHelloWorld()
{
    return hello_world;
}

int AbstractConfig::getLocalParameter()
{
    return local_parameter;
}

void AbstractConfig::setLocalParameter(int new_number)
{
    local_parameter = new_number;
}

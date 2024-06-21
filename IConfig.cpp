#include "IConfig.h"

void IConfig::ini_handle(const char* ini_file_path)
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

std::string IConfig::getIniString()
{
    return ini_string;
}

void IConfig::setIniString(const std::string& new_str)
{
    ini_string = new_str;
}

int IConfig::getIniInt()
{
    return ini_int;
}

void IConfig::setIniInt(int new_number)
{
    ini_int = new_number;
}

const std::string IConfig::getHelloWorld()
{
    return hello_world;
}

int IConfig::getLocalParameter()
{
    return local_parameter;
}

void IConfig::setLocalParameter(int new_number)
{
    local_parameter = new_number;
}

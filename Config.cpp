#include "Config.h"

void Config::_config::ini_handle(const char* ini_file_path)
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

std::string Config::_config::getIniString()
{
    return ini_string;
}

void Config::_config::setIniString(const std::string& new_str)
{
    ini_string = new_str;
}

int Config::_config::getIniInt()
{
    return ini_int;
}

void Config::_config::setIniInt(int new_number)
{
    ini_int = new_number;
}

const std::string Config::_config::getHelloWorld()
{
    return hello_world;
}

int Config::_config::getLocalParameter()
{
    return local_parameter;
}

void Config::_config::setLocalParameter(int new_number)
{
    local_parameter = new_number;
}

const std::shared_ptr<Config::_config> Config::options = std::make_shared<Config::_config>();

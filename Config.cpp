#include "Config.h"

std::shared_ptr<AbstractConfig> Config::instance = nullptr;

std::shared_ptr<AbstractConfig> Config::i()
{
    if (!instance)
        instance = std::shared_ptr<AbstractConfig>(new Config::_config);
    return instance;
}

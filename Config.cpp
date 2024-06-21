#include "Config.h"

const std::shared_ptr<IConfig> Config::conf = std::make_shared<Config::_config>();
#include "Config.h"

std::shared_ptr<Config> Config::instance = nullptr;

#ifdef threadsafe
std::mutex Config::mutex;
#endif

std::shared_ptr<Config> Config::i()
{
#ifdef threadsafe
    std::lock_guard<std::mutex> lock(mutex);
#endif
    if (!instance) {
        instance = std::shared_ptr<Config>(new Config());
    }
    return instance;
}

void Config::load(int int_value_, std::string string_value_)
{
    int_value = int_value_;
    string_value = string_value_;
}


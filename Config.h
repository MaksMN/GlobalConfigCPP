#include <string>
#include <memory>
#include <iostream>

#define threadsafe

#ifdef threadsafe
#include <mutex>
#endif

class Config
{
private:
    Config() {}
    Config(const Config&) = delete;
    Config& operator=(const Config&) = delete;

    static std::shared_ptr<Config> instance;

    int int_value = 0;
    std::string string_value;

#ifdef threadsafe
    static std::mutex mutex;
#endif

public:

    static std::shared_ptr<Config> i();

    void load(int int_value_, std::string string_value_);




};

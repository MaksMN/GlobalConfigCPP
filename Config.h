#include <string>
#include <memory>

#define threadsafe

#ifdef threadsafe
#include <mutex>
#endif

class Config
{
private:


    int int_value = 0;
    std::string string_value;

#ifdef threadsafe
    static std::mutex mutex;
#endif

public:
    Config() {}
    static std::shared_ptr<Config> instance;

    static std::shared_ptr<Config> i();

    static void load(int int_value_, std::string string_value_);

    Config(const Config&) = delete;
    Config& operator=(const Config&) = delete;

};

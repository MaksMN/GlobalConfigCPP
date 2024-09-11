#pragma once
#include "AbstractConfig.h"

class Config
{
private:
    Config() {}
    class _config final : public AbstractConfig {};
    static std::shared_ptr<AbstractConfig> instance;
public:
    static std::shared_ptr<AbstractConfig> i();
};

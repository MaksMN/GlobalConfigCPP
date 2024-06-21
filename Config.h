#pragma once
#include "IConfig.h"

class Config
{
private:
    class _config final :public IConfig {};
public:
    static const std::shared_ptr<IConfig> conf;
};

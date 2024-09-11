#include "Config.h"

int main() {
    auto c = Config::i();

    Config::i()->load(1, "aaa");

    return 0;
}

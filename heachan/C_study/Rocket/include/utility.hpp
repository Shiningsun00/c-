#ifndef UTILITY_HPP
# define UTILITY_HPP

# include "rocket/Rocket.hpp"

namespace utd {
    void one_ddalkak(Rocket& instance);
    void one_ddalkak(Rocket* instance);
    void one_ddalkak(Rocket** instance);
}

template <typename T>
void printValue(const T& input) {
    std::cout << "[Debug] " << input << std::endl;
}

#endif
#include "rocket/Rocket.hpp"
#include "utility2.hpp"

namespace utd2 {
    void one_ddalkak(Rocket & instance)
    {
        std::cout << "(2) Reference !!!" << std::endl;
        instance.setLaunch();
        instance.setTheta(60); // 예상 : 0.866
        instance.setY(3);
    }

    void one_ddalkak(Rocket * instance)
    {
        std::cout << "(2) Pointer !!!" << std::endl;
        (*instance).setLaunch();
        (*instance).setTheta(50);
        (*instance).setY(5);
    }

    void one_ddalkak(Rocket * *instance)
    {
        std::cout << "(2) Double Pointer !!!" << std::endl;
        (**instance).setLaunch();
        (**instance).setTheta(40);
        (**instance).setY(4);
    }
}
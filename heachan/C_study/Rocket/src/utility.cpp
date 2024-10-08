#include "rocket/Rocket.hpp"
#include "utility.hpp"

namespace utd {

    void one_ddalkak(Rocket &instance)
    {
        std::cout << "(1) Reference !!!" << std::endl;
        instance.setLaunch();
        instance.setTheta(60); // 예상 : 0.866
        instance.setY(3);
    }

    void one_ddalkak(Rocket *instance)
    {
        std::cout << "(1) Pointer !!!" << std::endl;
        (*instance).setLaunch();
        (*instance).setTheta(50);
        (*instance).setY(5);
    }

    void one_ddalkak(Rocket **instance)
    {
        std::cout << "(1) Double Pointer !!!" << std::endl;
        (**instance).setLaunch();
        (**instance).setTheta(30);
        (**instance).setY(3);
    }

} // namespace
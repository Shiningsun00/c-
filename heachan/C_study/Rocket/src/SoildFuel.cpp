
#include "rocket/SoildFuel.hpp"

SolidFuel::SolidFuel(void) 
    : Rocket(10, 4, 80, 250) {
    std::cout << "[Solid] " << MSG_DCREATE << std::endl;
    fuel_type = "Solid";
}

SolidFuel::SolidFuel(int y, float theta, int fuel_amount, float ignition_temp, int v)
    : Rocket(y,  theta,  fuel_amount,  ignition_temp), v(v)  {
    std::cout << "[Solid] " << MSG_CREATE << std::endl;
    fuel_type = "Solid";
}

void SolidFuel::setIgnitionTemp(const float present_t) {
    std::cout << MSG_SOILD << "setIgnitionTemp func !" << std::endl;
    ignition_temp = present_t;
}


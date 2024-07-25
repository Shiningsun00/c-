#include "rocket/LiquidFuel.hpp"

LiquidFuel::LiquidFuel(void) : Rocket(0, 0, 100, 200), e(10) {
    std::cout << "[Liquid] " << MSG_DCREATE << std::endl;
    fuel_type = "Liquid";
}
void LiquidFuel::setIgnitionTemp(const float present_t) {
    std::cout << MSG_LIQUID << "setIgnitionTemp func !" << std::endl;
    ignition_temp = present_t * 1e3;
}





    




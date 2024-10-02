#include "week4.hpp"


//Car class 를 위한 definition
int Car::getSpeed() { 
    return speed;
}
void Car::setSpeed(int s) {
    speed = s;
}
void Car::honk() {
    std::cout << "빵빵!" << std::endl;
}


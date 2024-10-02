#include "week4.hpp"


//Car class 를 위한 defination
int Car::getSpeed() { 
    return speed;
}
void Car::setSpeed(int s) {
    speed = s;
}
void Car::honk() {
    std::cout << "빵빵!" << std::endl;
}

//Date class를 위한 defination

Date::Date() { year = 0; };

int Date::getYear() { 
    return year;
}

void Date::setYear(int y) {
    year = y; 
}

void Date::printYear() {
    std::cout << getYear() << std::endl;
}
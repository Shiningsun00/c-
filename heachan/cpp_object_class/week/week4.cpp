#include "week4.hpp"


//Car class 를 위한 defination
Car::Car() {
        speed = 0;
        gear = 1;
        color = "white";
        std::cout << "디폴트 생성자: " << speed << " " << gear << " " << color << std::endl;
        
    }
Car::Car(int s, int g, std::string c) { 
    speed = s;
    gear = g;
    color = c;
    std::cout << "생성자: " << speed << " " << gear << " " << color << std::endl;
}

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
    std::cout << Date::getYear() << std::endl;
}
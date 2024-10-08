#include "rocket/Rocket.hpp"


const char Rocket::key_set[4] = { 'r', 's', 't', 'a' };

const std::string& Rocket::key_str = "rsta";



void (*Rocket::key_func[4])(void) = {
    &Rocket::refuelRocket,
    &Rocket::stopRocket,
    &Rocket::transRocket,
    &Rocket::avoidRocket
};


Rocket::Rocket(void) : ARocket() {
    std::cout << "[Rocket] " << MSG_DCREATE << std::endl;
}

Rocket::Rocket(int y, float theta, int fuel_amount, float ignition_temp) 
    : ARocket(y, theta, fuel_amount, ignition_temp) {
	std::cout << "[Rocket] " << MSG_CREATE << MSG_CALL << MSG_ENDL;
}                                               // 생성자
Rocket::Rocket(const Rocket& obj)
    : ARocket(obj) {
	std::cout << MSG_COPY << MSG_CALL << MSG_ENDL;
    *this = obj;
}                                           // 복사생성자

Rocket& Rocket::operator=(const Rocket& obj){
    
    if (this == &obj) //
        return *this;
    std::cout << MSG_ASSIGN << MSG_CALL << MSG_ENDL;
    (*this).setY(obj.getY());
    (*this).setTheta(obj.getTheta());
    return *this;
}                                               // 복사 대입 연산자

Rocket::~Rocket(void){
    std::cout << MSG_DESTROY << MSG_CALL << MSG_ENDL;
    y = 0;
    theta = 0;
    launch = 0;
}                          // 소멸자



void Rocket::stopRocket(void) {
    std::cout << "Stop Rocket!!! : " << std::endl;

}

void Rocket::transRocket(void) {
    std::cout << "Trans Rocket!!! : " << std::endl;
}

void Rocket::refuelRocket(void) {
    std::cout << "Refuel Rocket!!! " << std::endl;
}

void Rocket::avoidRocket(void) {
    std::cout << "Avoid Rocket!!! " << std::endl;
}


const std::string& Rocket::getFuelType(void) { return fuel_type; }
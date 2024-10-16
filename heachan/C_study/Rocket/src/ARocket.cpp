#include "rocket/ARocket.hpp"

bool ARocket::launch = false;

int ARocket::getLaunch(void) { return launch; }
void ARocket::setLaunch(void) {
   ARocket::launch ^= 1; // XOR 토글
}

ARocket::ARocket(void) {
    std::cout << "[ARocket] " << MSG_DCREATE << std::endl;
    this->y = 0;
    this->theta = 0;
    this->fuel_amount = 0;
    this->ignition_temp = 0;
    this->fuel_type = "None";
}                                               // 디폴트 생성자 

ARocket::ARocket(int y, float theta, int fuel_amount, float ignition_temp) {
	std::cout << "[ARocket] " << MSG_CREATE << MSG_CALL << MSG_ENDL;
    this->y = y;
    this->theta = theta;
    this->fuel_amount = fuel_amount;
    this->ignition_temp = ignition_temp;
    this->fuel_type = "None";
}                                               // 생성자
ARocket::ARocket(const ARocket& obj){
	std::cout << MSG_COPY << MSG_CALL << MSG_ENDL;
    *this = obj;
}                                           // 복사생성자 ->한객체의 내용(멤버)를 다른 객체로 복사 생성(반드시 레퍼런스 사용)

ARocket& ARocket::operator=(const ARocket& obj){
    if (this == &obj) //
        return *this;
    std::cout << MSG_ASSIGN << MSG_CALL << MSG_ENDL;
    (*this).setY(obj.getY());
    (*this).setTheta(obj.getTheta());
    return *this;
}                                               // 복사 대입 연산자

ARocket::~ARocket(void){
    std::cout << MSG_DESTROY << MSG_CALL << MSG_ENDL;
    y = 0;
    theta = 0;
    launch = 0;
}                          // 소멸자

int ARocket::getY(void) const { 
    return y;   
}

float ARocket::getTheta(void) const { return theta; }

void ARocket::setY(int y) {
    this->y = y;
}


/** 
 * brief theta 값을 정하는 함수
 * degree -> radian
 * param : angle (degree)
 */
void ARocket::setTheta(int angle) {
    this->theta = angle * D_R_CONVETER;
}

const int ARocket::checkFuel(void) const { return fuel_amount; }
const float ARocket::getIgnitionTemp(void) { return ignition_temp; }


void ARocket::setIgnitionTemp(const float present_t) {
    std::cout << MSG_ROCKET << "setIgnitionTemp func !" << std::endl;
    std::cout << MSG_ROCKET << "DO NOT INPUT ARocket Class" << std::endl;
}

void ARocket::setFuelType(const std::string& fuel_type){
    this->fuel_type = fuel_type;
}
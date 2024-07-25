#include "Practice_Class.hpp"

Rpm::Rpm(void){
    std::cout << "default construture" <<std::endl;
    this->rev = 500;
}
Rpm::Rpm(float rev){
    std::cout << "construture" <<std::endl;
    this->rev = rev;
}
float Rpm::getRev(void) { return rev; }

void Rpm::setRev(float rev){
    this->rev = rev*R_W_CONVERTER;
}



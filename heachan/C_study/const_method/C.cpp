
#include "C.hpp"

C::C(void) { }

int C::getNum(void) {
    std::cout << "< just > " << std::endl;
    return this->num;
}

int C::getNum(void) const {
    std::cout << "< const >" << std::endl;
    return this->num;

}
#include "C.hpp"

int main(void) {
    C just_obj;
    const C const_obj;


    std::cout << just_obj.getNum() << std::endl;
    std::cout << const_obj.getNum() << std::endl;

    return 0;
}